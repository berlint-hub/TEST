#!/usr/bin/env python3
"""Vygeneruje chybějící public Vulkan entry pointy pro statickej NVK build.

Proč to existuje
----------------
nxvk (Mesa NVK na Switchi) záměrně *nestaví* Vulkan loader. Z Mesa se
exportuje akorát jediná brána:

    src/nouveau/vulkan/nvk_instance.c:
      PUBLIC VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
      vk_icdGetInstanceProcAddr(VkInstance instance, const char *pName)

a všechna ostatní jména (`vkCreateInstance`, `vkCreateDevice`,
`vkGetDeviceQueue`, …) v archvech vůbec nejsou — genrovaný
`nvk_entrypoints.c` má jen prefixovaný `nvk_*` a `vk_common_*` tabulky,
`gnu_symbol_visibility: 'hidden'`. Potvrdilo to i naše own census
88 643 definic ve 137 archivech: `vkCreateDevice -> NIKDE`.

nxvk si na to staví own appky tak, že si každou funkci vyžádají přes
`vk_icdGetInstanceProcAddr` (switch/smoke/nvk_harness.h:113). NetherSX2_nx
ale pochází z Androida a volá `vkCreateInstance(...)` natvrdo — čeká loader,
kterej v devkitPro imageu taky není. Tenhle skript ten loader nahradí:
ze samejších hlaviček přečte public prototypy a vygeneruje forwardery,
každý se zeptá `vk_icdGetInstanceProcAddr` na svoje jméno a zavolá ho.

Jednotlivý forwardery jsou v samostatnejch sekcích a finální link má
`--gc-sections`, takže se do .nro dostane jen to, co port reálně volá.

Použití:
    gen-vk-loader.py <vulkan_core.h> <out.c> [--skip name,name,...]

Přeskočíme ty, kde by forwarder byl horší než stub:
  * vkEnumerateInstanceVersion / vkEnumerateInstance{,Device}LayerProperties
    / vkEnumerateDeviceExtensionProperties — na to má build-switch.sh
    vlastní weak stuby s rozumnou návratovou hodnotou (0 vrstev, 1.3);
    forwarder by při nevyřešený adrese vrátil chybovej kód, což je horší
    než stub.
"""

import argparse
import re
import sys

# VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(
#     const VkInstanceCreateInfo*  pCreateInfo,
#     ...);
PROTO = re.compile(
    r"VKAPI_ATTR\s+(?P<ret>[A-Za-z_][A-Za-z0-9_]*\s*\*?)\s*"
    r"VKAPI_CALL\s+(?P<name>vk[A-Za-z0-9_]+)\s*\((?P<params>[^;{}]*?)\)\s*;",
    re.S,
)

SKIP_DEFAULT = {
    "vkGetInstanceProcAddr",  # dostane vlastní impl, jinak rekurze
    "vkGetDeviceProcAddr",    # ditto
    "vkEnumerateInstanceVersion",
    "vkEnumerateInstanceLayerProperties",
    "vkEnumerateDeviceLayerProperties",
    # AŤ TU NIKDY NENÍ vkEnumerateInstanceExtensionProperties! Původně tam byla,
    # aby ji pokryl weak stub přímo v build-switch.sh. Na hardwaru se ukázalo,
    # že přes tu funkci upstream zjišťuje, který instance extenze mu směj bejt
    # povolený (source/hooks/vk.c:998) — když ji Mesa nenabídne, jádro
    # selže na „Vulkan: Missing required extension VK_KHR_surface". Tak ať
    # odpoví Meska, která je ví.
}

# Návratový hodnoty, kdy driver danou funkci nemá. U VkResult je důležité
# vrátit chybu, ne VK_SUCCESS — appka by si myslela, že instance vznikla.
FALLBACK = {
    "VkResult": "VK_ERROR_INITIALIZATION_FAILED",
    "VkBool32": "VK_FALSE",
}


def split_param(param):
    """(typ, jméno, přípona) z jednoho parametru prototypu.

    Vrací typ *bez* rozměru pole, protože C chce `const float x[4]`, ne
    `const float [4] x` — rozměr patří až za jméno.
    """
    p = param.strip()
    if not p or p == "void":
        return "void", "", ""
    m = re.match(
        r"^(?P<type>.*?)\s*(?P<stars>\**) *(?P<name>[A-Za-z_]\w*)\s*(?P<arr>\[[^]]*\])?\s*$",
        p,
        re.S,
    )
    if not m or not m.group("type").strip():
        return p, "", ""
    typ = m.group("type").strip()
    if m.group("stars"):
        typ += " " + m.group("stars")
    return typ, m.group("name"), (m.group("arr") or "")


def split_params(params):
    """Rozdělení podle čárek na horní úrovni (šablony/závorky v poli)."""
    out, depth, cur = [], 0, ""
    for ch in params:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out


def read_protos(paths):
    seen, order = {}, []
    for path in paths:
        try:
            text = open(path, encoding="utf-8", errors="surrogateescape").read()
        except OSError:
            continue
        for m in PROTO.finditer(text):
            name = m.group("name")
            if name in seen:
                continue
            seen[name] = True
            order.append((name, m.group("ret").strip(), m.group("params")))
    return order


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("headers", nargs="+", help="vulkan_core.h a spol.")
    ap.add_argument("out")
    ap.add_argument("--skip", default="")
    args = ap.parse_args()

    skip = SKIP_DEFAULT | {s for s in args.skip.split(",") if s}
    protos = [p for p in read_protos(args.headers) if p[0] not in skip]
    if not protos:
        print("gen-vk-loader: v hlavičkách nejsou žádý VKAPI_ATTR prototypy", file=sys.stderr)
        return 1

    L = []
    L.append("/* Vygenerováno ci/gen-vk-loader.py — nahrazuje Vulkan loader,")
    L.append(" * kterej nxvk záměrně nestaví. Neredit, ruku se to nepodaří. */")
    L.append("#include <vulkan/vulkan.h>")
    L.append("#include <stdio.h>")
    L.append("#include <string.h>")
    L.append("")
    L.append("/* nxvk exportuje jen tuhle bránu. POZOR: s instance == NULL vrací")
    L.append(" * jen pet \"pre-instance\" entrypointu (CreateInstance, GetInstance-")
    L.append(" * ProcAddr, EnumerateInstance{,Extension,Layer}Properties) a na")
    L.append(" * VSECHNO ostatní NULL — mesa runtime má na začátku")
    L.append(" * vk_instance_get_proc_addr() tvrdý `if (instance == NULL) return")
    L.append(" * NULL;`, protože tabulky (wsi_*, vk_*_trampolines) visí na")
    L.append(" * instanci. Přesně proto si tu držíme instanci: bez ní vrátí")
    L.append(" * každý forwarder na WSI/device funkci fallback")
    L.append(" * VK_ERROR_INITIALIZATION_FAILED (-3) a na Switchi to vypadá, jako")
    L.append(" * by driver neuměl ani vkCreateViSurfaceNN (build 37, karta:")
    L.append(" * \"(CreateVulkanSurface) vkCreateAndroidSurfaceKHR failed: (-3)\").")
    L.append(" *")
    L.append(" * Deklarace musí sednout na include/vulkan/vk_icd.h, jinak se to")
    L.append(" * rozejde s prototypem; proto i ty VKAPI_ATTR/VKAPI_CALL. */")
    L.append("VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL")
    L.append("vk_icdGetInstanceProcAddr(VkInstance instance, const char *pName);")
    L.append("")
    L.append("/* Nastavuje vkCreateInstance níž; čte ji každý nsx_sym(). Instance")
    L.append(" * vzniká jednou při startu (jeden proces = jedna VkInstance), takže")
    L.append(" * se tu neřeší atomičnost. */")
    L.append("static VkInstance nsx_instance = (VkInstance)0;")
    L.append("static int nsx_missing_reported = 0;")
    L.append("")
    L.append("static void *nsx_sym(const char *name) {")
    L.append("  void *f = 0;")
    L.append("  if (nsx_instance)")
    L.append("    f = (void *)vk_icdGetInstanceProcAddr(nsx_instance, name);")
    L.append("  if (!f)")
    L.append("    f = (void *)vk_icdGetInstanceProcAddr((VkInstance)0, name);")
    L.append("  if (!f && nsx_missing_reported < 40) {")
    L.append("    /* stderr chytá log capture na karty (ci_core_log.c) do")
    L.append("     * nethersx2-core.log, takže tohle je vidět i bez vulkan.logu */")
    L.append("    nsx_missing_reported++;")
    L.append("    fprintf(stderr, \"[nsx-vk] symbol neni k dispozici: %s\\n\", name);")
    L.append("  }")
    L.append("  return f;")
    L.append("}")
    L.append("")
    for name, ret, params in protos:
        plist = split_params(params)
        split = [split_param(x) for x in plist]
        if len(split) == 1 and split[0][0] == "void":
            split = []
        names = [nm or ("a%d" % i) for i, (ty, nm, ar) in enumerate(split)]
        ptypes = ["%s%s" % (ty, (" " + ar if ar else "")) for ty, nm, ar in split]
        decl = ", ".join(
            ("%s %s%s" % (ty, nm, (" " + ar if ar else ""))).strip()
            for (ty, nm, ar), _ in zip(split, range(len(split)))
        )
        call = ", ".join(names)
        typedef = "nsx_pf_%s" % name
        L.append("typedef %s (VKAPI_PTR *%s)(%s);" % (ret, typedef, ", ".join(ptypes) or "void"))

        # Dvě funkce maj vlastní tělo, protože jen ony vědí, jakou instanci
        # si nsx_sym může dovolit použít (viz komentář u nsx_instance).
        if name == "vkCreateInstance":
            L.append("VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(%s) {" % decl)
            L.append('  %s f = (%s)nsx_sym("%s");' % (typedef, typedef, name))
            L.append("  if (!f)")
            L.append("    return VK_ERROR_INITIALIZATION_FAILED;")
            L.append("  VkResult r = f(%s);" % call)
            L.append("  if (r == VK_SUCCESS && pInstance)")
            L.append("    nsx_instance = *pInstance; /* od teď jde přes nsx_sym i WSI a device funkce */")
            L.append("  return r;")
            L.append("}")
            L.append("")
            continue
        if name == "vkDestroyInstance":
            L.append("VKAPI_ATTR void VKAPI_CALL vkDestroyInstance(%s) {" % decl)
            L.append('  %s f = (%s)nsx_sym("%s");' % (typedef, typedef, name))
            L.append("  if (f) f(%s);" % call)
            L.append("  if (instance == nsx_instance)")
            L.append("    nsx_instance = (VkInstance)0;")
            L.append("}")
            L.append("")
            continue

        L.append("VKAPI_ATTR %s VKAPI_CALL %s(%s) {" % (ret, name, decl))
        # NSX_VK_CACHE: adresu si pamatujem. Dřív se nsx_sym() (a tím
        # vk_icdGetInstanceProcAddr s porovnáváním jmen) volal při KAŽDÉM
        # volání entry pointu — u horkých cest (vkCmdBind*, vkCmdSet*,
        # vkCmdDraw*, vkCmdCopy*) to je režie, kterou upstream nemá: jeho core
        # si pointery vytáhne jednou přes vk_gipa_hook a pak volá napřímo.
        # Cache je jen na úspěšný výsledek (NULL se necachuje, aby se funkce
        # volaná před vznikem instance nezafikovala napořád); zápis stejné
        # hodnoty ze dvou vláken je neškodný.
        L.append("  static %s nsx_cached_%s;" % (typedef, name))
        L.append("  %s f = nsx_cached_%s;" % (typedef, name))
        L.append("  if (!f) {")
        L.append('    f = (%s)nsx_sym("%s");' % (typedef, name))
        L.append("    if (f) nsx_cached_%s = f;" % name)
        L.append("  }")
        if ret == "void":
            L.append("  if (f) f(%s);" % call)
        else:
            fb = FALLBACK.get(ret, "VK_NULL_HANDLE" if ret.startswith("Vk") else "0")
            if ret.endswith("*"):
                fb = "NULL"
            L.append("  return f ? f(%s) : (%s)%s;" % (call, ret, fb))
        L.append("}")
        L.append("")

    # vkGetInstanceProcAddr: port na něm staví všechno ostatní (i vlastní
    # gipa hook), takže musí vracet *instance-aware* výsledky.
    L.append("VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(")
    L.append("    VkInstance instance, const char *pName) {")
    L.append("  if (!pName)")
    L.append("    return 0;")
    L.append("  if (!strcmp(pName, \"vkGetInstanceProcAddr\"))")
    L.append("    return (PFN_vkVoidFunction)vkGetInstanceProcAddr;")
    L.append("  return vk_icdGetInstanceProcAddr(instance, pName);")
    L.append("}")
    L.append("")
    L.append("VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(")
    L.append("    VkDevice device, const char *pName) {")
    L.append("  if (!pName)")
    L.append("    return 0;")
    L.append("  if (!strcmp(pName, \"vkGetDeviceProcAddr\"))")
    L.append("    return (PFN_vkVoidFunction)vkGetDeviceProcAddr;")
    L.append("  /* POZOR: dřív tu bylo vk_icdGetInstanceProcAddr((VkInstance)0, …),")
    L.append("   * což po `if (instance == NULL) return NULL;` v mesa runtime vrací")
    L.append("   * NULL úplně na všechno — tedy i na vkCmdDraw. Teď to jde přes")
    L.append("   * zapamatovanou instanci, odkud mesa device funkce vydá")
    L.append("   * (vk_device_trampolines se resolvujou z GIPA nad instancí). */")
    L.append("  if (nsx_instance) {")
    L.append("    void *f = (void *)vk_icdGetInstanceProcAddr(nsx_instance, pName);")
    L.append("    if (f)")
    L.append("      return (PFN_vkVoidFunction)f;")
    L.append("  }")
    L.append("  /* Chybějící device entrypoint je normální (volitelný rozšíření),")
    L.append("   * takže se to záměrně nikam neloguje. */")
    L.append("  return (PFN_vkVoidFunction)vk_icdGetInstanceProcAddr((VkInstance)0, pName);")
    L.append("}")
    L.append("")

    with open(args.out, "w", encoding="utf-8") as f:
        f.write("\n".join(L) + "\n")
    print("gen-vk-loader: %d forwarderů -> %s" % (len(protos), args.out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
