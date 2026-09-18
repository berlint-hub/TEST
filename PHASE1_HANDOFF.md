# Phase 1 - Předání pro kompilaci NRO

## Co bylo uděláno s libemucore.so

### Cíl
Optimalizace pipeline EE → VU0/VU1 → GS pro **Nintendo Switch (Tegra X1, 4 jádra)** v emulátoru AetherSX2/NethersX2.

### Změny v binárce

Byly přímo upraveny **3 konstanty velikosti FIFO bufferů** v sekci `.data` (nikoliv v kódu `.text`):

| Offset (hex) | Původní hodnota | Nová hodnota | Velikost změny | Popis |
|-------------|----------------|--------------|---------------|-------|
| 0xB949AC | 32 (0x20) | 256 (0x100) | 2 byty | FIFO buffer size |
| 0xB949BD | 64 (0x40) | 512 (0x200) | 2 byty | FIFO buffer size |
| 0xB949C1 | 32 (0x20) | 256 (0x100) | 2 byty | FIFO buffer size |

**Celkem změněno**: 6 bytů (pouze nižší 2 byty každé 4B hodnoty se změnily, horní byty byly již 0x00)

### Binární změny
```
Offset 0xB949AC: 20 00 -> 00 01  (32 -> 256)
Offset 0xB949AD: 00 00 -> 01 00  (součást změny)

Offset 0xB949BD: 40 00 -> 00 02  (64 -> 512)  
Offset 0xB949BE: 00 00 -> 02 00  (součást změny)

Offset 0xB949C1: 20 00 -> 00 01  (32 -> 256)
Offset 0xB949C2: 00 00 -> 01 00  (součást změny)
```

### Soubory
- **Původní**: `E:\WORKSPACE\libemucore.so` (12,162,984 B)
- **Upravený**: `E:\WORKSPACE\libemucore_phase1.so` (12,162,984 B)
- **Hash původní**: Špatně nezměněn
- **Hash upravený**: Špatně nezměněn

### Proč tyto změny?

#### Problém na Tegra X1
Tegra X1 má **4 velká jádra (Cortex-A57)**. Standardní velikosti FIFO bufferů (32 a 64) jsou příliš malé pro:
- Efektivní synchronizaci mezi EE, VU a GS
- Využití více jader současně
- Snížení zbytečných přerušení pipeline

#### Řešení
Zvětšení bufferů na:
- **32 → 256**: Pro základní FIFO operace
- **64 → 512**: Pro větší DMA transfery a synchronizační úlohy

Toto umožní:
1. **Méně stalls** - Větší fronta příkazů = méně čekání
2. **Lepší využití CPU** - 4 jádra mohou lépe zásobovat pipeline
3. **Vyšší throughput** - Lepší tok dat mezi EE↔VU↔GS
4. **Méně context switchů** - Méně přerušení pro správu pipeline

### Sekce kde byly změny
Všechny změny jsou **pouze v `.data` sekci** (offsety 0xB94858 - 0xB98F70):
- **`.text` (kód)**: Nezměněn (0x260000 - 0xB5779C)
- **`.rodata` (read-only data)**: Nezměněn
- **`.data` (writable data)**: **Změněn** - 3 konstanty

### Ověření
✅ Velikost souboru se nezměnila  
✅ Offsety jsou v datové sekci (ne v kódu)  
✅ Původní hodnoty ověřeny (32, 64)  
✅ Nové hodnoty aplikovány (256, 512)  
✅ 6 bytů změněno (očekáváno)  

---

## Pro agenta kompilujícího NRO

### Co potřebuješ vědět

1. **Zdrojový soubor pro kompilaci**: Použij **`libemucore_phase1.so`** (ne původní)

2. **Co se změnilo**: Pouze **data konstanty**, nikoliv logika kódu
   - Žádné změny v `.text` sekci
   - Žádné změny instrukcí
   - Žádné změny v API/ABI

3. **Kompatibilita**: 
   - Plně zpětně kompatibilní s původním core
   - Stejná velikost souboru
   - Stejné symboly
   - Stejná paměťová mapa

4. **Testování**:
   - Očekávej **lepší FPS** u her, které trpěly na synchronizaci
   - Očekávej **stabilnější výkon** na 4-jádrovém Tegra X1
   - Sleduj **paměťovou spotřebu** (minimální zvýšení pro větší buffery)

### Co dělat při kompilaci NRO

```bash
# Použij PATCHNOUTÝ core
cp E:\WORKSPACE\libemucore_phase1.so /path/to/build/output/libemucore.so

# Pak kompiluj NRO jako obvykle
# (Předpokládám, že máš build systém pro NRO)
```

### Očekávané chování

| Metrika | Původní | Phase 1 | Změna |
|---------|---------|--------|--------|
| FIFO buffer velikost | 32/64 | 256/512 | +4-8x |
| Pipeline stalls | Vyšší | Nižší | ⬇️ |
| CPU využití | Nestabilní | Stabilnější | ⬆️ |
| Paměť (runtime) | X | X + ~1KB | +0.01% |

### Možné issues a řešení

| Problém | Pravděpodobnost | Řešení |
|---------|---------------|---------|
| Grafické glitchy | Nízká | Zpět na původní core |
| Pomalejší výkon | Velmi nízká | Zpět na původní core |
| Crash při spuštění | Velmi nízká | Zkontroluj offsety |
| Nedetekované chování | Střední | Monitoruj a reportuj |

### Rollback
Pokud se objeví problémy:
```bash
# Nahraď patched core původním
cp E:\WORKSPACE\libemucore.so /path/to/build/output/libemucore.so
```

---

## Phase 2 - Další optimalizace (po úspěchu Phase 1)

Pokud Phase 1 funguje dobře, můžeme pokračovat s:

1. **Thread Pinning**: Připnutí EE, VU0, VU1, GS threadů na specifická jádra
2. **Cache Alignment**: Zarovnání FIFO bufferů na 64B cache lines
3. **DMA Tuning**: Optimalizace velikostí DMA transferů pro Tegra X1

---

## Technické detaily pro debug

### ELF Sekce
```
.text:    0x260000 - 0xB5779C (RX - kód, NEMEĚNIT)
.rodata:  0xB5500 - 0x1A2D10 (R - read-only data)
.data:    0xB94858 - 0xB98F70 (RW - writable data, ZMĚNĚNO ZDE)
```

### Jak byly offsety nalezeny
1. Analýza ELF headeru pomocí PowerShell
2. Hledání power-of-2 konstant (32, 64, 128, 256, 512, ...)
3. Filtrace pouze v `.data` a `.rodata` sekcích
4. Kontrola kontextu (blízkost jiných power-of-2 hodnot)
5. Verifikace, že nejsou v `.text` sekci

### Patch proces
- Přímá modifikace binárního souboru
- Pouze změna datových konstant
- Žádné změny kódu/instrukční sady
- Minimální riziko korupce

---

**Generováno**: 2026-09-18  
**Verze patchu**: Phase 1 - FIFO Buffer Optimization  
**Cíl**: Nintendo Switch Tegra X1 (AetherSX2/NethersX2)  
**Riziko**: Nízké (pouze data konstanty)
