"""Vyrobi emucore_x1.so — binarni varianta jadra 4248 ladena pro Tegru X1.

Vychazi z prave te APK binarky (Trixarian/NetherSX2-patch 2.2n, 4248), kterou
si build stejne bali. Zmeny jsou JEN ctyri u32 v .data (FIFO/DMA velikosti) —
presna sada overena byte-diffem skutecnych binarek z historie repa (2026-10-15;
puvodni PHASE2_REPORT.md mel hodnoty casto spatne, viz BUILD-NOTES „Build 89“):

  file 0xB949AC:  32 ->   256   (FIFO trio #1)  } phase1 — osvedceno na HW
  file 0xB949BC: 16384 -> 131072 (FIFO trio #2) } (denne hrano buildy 43-71)
  file 0xB949C0:  8192 -> 65536  (FIFO trio #3) }
  file 0xB949C4:  4096 -> 16384  (DMA-ish, jemny 4x bump — novinka)

Zamerne VYNECHANO (po zkouskach z buildu 71/77):
  * affinity masky (0xB98180..0xB986F0) — tridi port pres svcSetThreadCoreMask
    (pthr_pin_fixed); dve veci na stejnou vec se perou,
  * priority (9->99/13->98/7->97) — linux nice na Horizonu neexistuji, phase2
    kvuli nim padal pri startu MTGS/VU1 workera,
  * cache tabulka 4,8,16 -> 64,64,128 — porusuje mocninovou posloupnost,
    pravdepodobne tabulka, ne tri volne konstanty.

Pokud se hodnoty v nove binarce zmeni (upstream rebuild), patch TVRDE selze —
zadna ticha koroze offsetu.
"""
import hashlib
import sys

src, dst = sys.argv[1], sys.argv[2]

# (file_offset, original_u32, nova_u32) — vaddr = file_offset + 0x2000
CHANGES = [
    (0xB949AC, 32, 256),
    (0xB949BC, 16384, 131072),
    (0xB949C0, 8192, 65536),
    (0xB949C4, 4096, 16384),
]

data = bytearray(open(src, "rb").read())

for off, orig, new in CHANGES:
    actual = int.from_bytes(data[off:off + 4], "little")
    if actual != orig:
        print("core_x1: NA offsetu 0x%X cekam %d, nasel %d — binarka se zmenila, "
              "offsety je treba reverit znovu" % (off, orig, actual))
        sys.exit(1)
    data[off:off + 4] = new.to_bytes(4, "little")

open(dst, "wb").write(bytes(data))

def sha(b):
    return hashlib.sha256(b).hexdigest()

base = open(src, "rb").read()
ndiff = sum(1 for a, b in zip(base, data) if a != b)
print("core_x1: %d zmenenych bajtu na %d pozicich; sha256 x1=%s (base=%s)"
      % (ndiff, len(CHANGES) * 4, sha(bytes(data))[:16], sha(base)[:16]))
sys.exit(0)
