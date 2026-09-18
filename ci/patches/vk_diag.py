"""Patch source/hooks/vk.c ve zdrojích portu (NetherSX2_nx).

Co přidává:
  1. NSX_VK_DIAG_STDERR — každé vk_diag_note jde i na stdout, který si
     ci_core_log.c přesměruje do nethersx2-core.log (na kartě se ukázalo,
     že přesměrovaný stderr do souboru nic nezapsal, stdout ano).
  2. hlášku, jestli se podařilo otevřít nethersx2-vulkan.log,
  3. NSX_VK_FPS — FPS + ms/frame + min/max ms + takty/boost jednou za sekundu.

Dřív byl tenhle kód vložený v ci/build-switch.sh jako heredoc a v Python
řetězcích se pletly zpětné lomítka (build 45 kvůli tomu spadl: do C se dostalo
doslovné \n). Teď je to normální soubor — proto ty trojité uvozovky níž.

Použití: python3 ci/patches/vk_diag.py <cesta k vk.c>
"""
import sys

PATH = sys.argv[1]
text = open(PATH, encoding="utf-8", errors="surrogateescape").read()

if "NSX_VK_DIAG_STDERR" in text:
    print("vk.c: diag už patchnuto")
    sys.exit(0)

done = 0

# ---------------------------------------------------------------- 1) mirror
note_anchor = "void\nvk_diag_note(const char *format, ...) {\n"
note_patch = note_anchor + r"""  /* NSX_VK_DIAG_STDERR: stejnou zprávu i do core logu (nethersx2-core.log),
   * aby diag nezávisela na tom, jestli se povedlo otevřít
   * nethersx2-vulkan.log. Pozor: na kartě se ukázalo, že přesměrovanej
   * STDERR do toho souboru nic nezapsal (stdout ano), takže se posílá
   * stdout — viz ci_core_log.c a poznámka v HANDOFF. */
  { va_list nsx_mirror; va_start(nsx_mirror, format);
    fputs("[VK] ", stdout); vfprintf(stdout, format, nsx_mirror);
    fputc('\n', stdout); va_end(nsx_mirror); }
"""
if note_anchor in text:
    text = text.replace(note_anchor, note_patch, 1)
    done += 1

# ------------------------------------------------- 2) stav diag souboru
reset_anchor = ('    fprintf(vk_diag_file, "NetherSX2 Vulkan diagnostic %s\\n", '
                'NETHERSX2_VERSION);\n'
                "    fflush(vk_diag_file);\n"
                "    fsync(fileno(vk_diag_file));\n"
                "  }\n")
reset_patch = reset_anchor + (
    '  fprintf(stdout, "[VK] diag soubor nethersx2-vulkan.log: %s\\n",\n'
    '          vk_diag_file ? "otevren" : "SE NEPOVEDLO OTEVRIT");\n')
if reset_anchor in text:
    text = text.replace(reset_anchor, reset_patch, 1)
    done += 1

# ------------------------------------------------------------------ 3) FPS
# Prezentace = vykreslený frame, takže z tohohle čísla je vidět jak emulační
# framerate, tak efekt LSFG (2x). Okno ~1 s, ať core log nezaplavíme. Kotva
# `++vk_present_count;` je v celém vk.c právě jednou.
#
# Takty CPU/GPU/EMC (NSX_CLK) a stav CPU boostu se čtou z ci_core_log.c, a to
# přes SLABÉ symboly: kdyby se log capture nezkompiloval (jiný imports.c),
# prostě se přeskočí, místo aby build spadl na linku.
fps_anchor = "  ++vk_present_count;\n"
fps_patch = fps_anchor + r"""#ifdef NETHERSX2_VK_DIAGNOSTIC
  /* NSX_VK_FPS: měřidlo framerate pro ladění výkonu. */
  {
    static uint64_t nsx_fps_window_start;
    static uint64_t nsx_fps_window_last;
    static uint64_t nsx_fps_window_min;
    static uint64_t nsx_fps_window_max;
    static uint32_t nsx_fps_window_frames;
    const uint64_t nsx_now = lsfg_monotonic_ns();
    if (!nsx_fps_window_start) {
      nsx_fps_window_start = nsx_now;
      nsx_fps_window_min = 0;
      nsx_fps_window_max = 0;
    } else if (nsx_fps_window_frames) {
      /* mezera od předchozí prezentace = délka framu (stutter je vidět) */
      const uint64_t nsx_gap = nsx_now - nsx_fps_window_last;
      if (!nsx_fps_window_min || nsx_gap < nsx_fps_window_min) nsx_fps_window_min = nsx_gap;
      if (nsx_gap > nsx_fps_window_max) nsx_fps_window_max = nsx_gap;
    }
    nsx_fps_window_last = nsx_now;
    ++nsx_fps_window_frames;
    if (nsx_now > nsx_fps_window_start + UINT64_C(1000000000)) {
      const double nsx_secs = (double)(nsx_now - nsx_fps_window_start) / 1e9;
      /* NSX_CLK: takty a jednorázové nastavení taktů z markeru řeší
       * ci_core_log.c. Slabé symboly = build přežije, i kdyby tam ten
       * soubor nebyl. */
      extern void ci_clk_boot(void) __attribute__((weak));
      extern int ci_clk_read(unsigned *, unsigned *, unsigned *) __attribute__((weak));
      extern int ci_get_cpu_boost_state(void) __attribute__((weak));
      unsigned nsx_cpu = 0, nsx_gpu = 0, nsx_emc = 0;
      if (ci_clk_boot) ci_clk_boot();
      if (ci_clk_read) ci_clk_read(&nsx_cpu, &nsx_gpu, &nsx_emc);
      vk_diag_note("FPS %.1f | %.2f ms/frame | min %.2f max %.2f ms | %u framu"
                   " | lsfg=%d boost=%d | cpu=%u gpu=%u emc=%u MHz",
                   (double)nsx_fps_window_frames / nsx_secs,
                   nsx_secs * 1000.0 / (double)nsx_fps_window_frames,
                   nsx_fps_window_min / 1e6, nsx_fps_window_max / 1e6,
                   nsx_fps_window_frames, vk_lsfg_is_enabled(),
                   ci_get_cpu_boost_state ? ci_get_cpu_boost_state() : -1,
                   nsx_cpu, nsx_gpu, nsx_emc);
      nsx_fps_window_start = nsx_now;
      nsx_fps_window_min = 0;
      nsx_fps_window_max = 0;
      nsx_fps_window_frames = 0;
    }
  }
#endif
"""
if fps_anchor in text:
    text = text.replace(fps_anchor, fps_patch, 1)
    done += 1

open(PATH, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("vk.c: diag patch %d/3" % done)
sys.exit(0 if done == 3 else 1)
