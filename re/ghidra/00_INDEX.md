# Ghidra pseudo-C ? jadro 4248 (TEST3 baked, sha256 cda05f6b...)

Vygeneroval `ci/ghidra/nsx_decompile_targets.py` (Ghidra headless).

| soubor | vaddr | funkce (Ghidra) | duvod vyberu |
|---|---|---|---|
| func_5b34c0.c | 0x5B34C0 | FUN_006b34c0 | affinity_writer (str do AFF1/AFF6/AFF8 = setup vlaken) |
| func_8bf720.c | 0x8BF720 | FUN_009bf720 | affinity_reader_A |
| func_7ceb60.c | 0x7CEB60 | FUN_008ceb60 | affinity_reader_B |
| func_a86f00.c | 0xA86F00 | FUN_00b86f00 | nejvyssi pocet realnych yield (spin loop) |
| func_6c6ad0.c | 0x6C6AD0 | FUN_007c6ad0 | data 0xB99BD0 (126 xrefu) |
| func_743620.c | 0x743620 | FUN_00843620 | data 0xB99BD0 (104 xrefu) |
| func_74c780.c | 0x74C780 | FUN_0084c780 | data 0xB99BD0 (102 xrefu) |
| func_3ed550.c | 0x3ED550 | FUN_004ed550 | data 0xB9AA28 (40 xrefu) |
| func_3fa470.c | 0x3FA470 | FUN_004fa470 | data 0xB9AA28 (33 xrefu) |
| func_407480.c | 0x407480 | FUN_00507480 | data 0xB9AA28 (33 xrefu) |
| func_a87920.c | 0xA87920 | FUN_00b87920 | isolated yield x149 |
| func_a449f0.c | 0xA449F0 | FUN_00b449f0 | isolated yield x40 |
| func_a87010.c | 0xA87010 | FUN_00b87010 | isolated yield x31 |
| func_ae1bd0.c | 0xAE1BD0 | FUN_00be1bd0 | isolated yield x27 |
| func_2e69c0.c | 0x2E69C0 | FUN_003e69c0 | isolated yield x18 |
| func_b3b020.c | 0xB3B020 | FUN_00c3b020 | isolated yield x12 |
| func_839c30.c | 0x839C30 | Java_xyz_aethersx2_android_NativeLibrary_initialize | isolated yield x10 |
