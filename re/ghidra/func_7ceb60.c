// vaddr 0x7CEB60  ghidra 0x8CEB60  name=FUN_008ceb60  size=308 instr-addr
// duvod: affinity_reader_B
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ceb60(int *param_1)

{
  long lVar1;
  int iVar2;
  
  if (*(char *)((long)param_1 + 0x2ad) != '\0') {
    if (param_1[0xb8] == 0xffffffff) {
      FUN_008ce4e0(param_1);
      return;
    }
    lVar1 = (ulong)(uint)param_1[0xb8] + 1;
    param_1[0xb8] = (int)lVar1;
    iVar2 = *param_1;
    if (iVar2 == 1) {
      if (*(long *)(param_1 + 0xa6) + -1 != lVar1) {
        return;
      }
      if ((int)_DAT_0c72d6d8 - 2U < 3) {
        FUN_009885d0(&PTR_FUN_00c9aa28,"(VMManager) Pausing...");
        FUN_0090deb0(3);
      }
      *(undefined1 *)((long)param_1 + 0x2ae) = 0;
      iVar2 = *param_1;
    }
    if (iVar2 == 0) {
      if ((*(FILE **)(param_1 + 0xa2) != (FILE *)0x0) &&
         (*(ulong *)(param_1 + 0xa6) < (ulong)(uint)param_1[0xb8])) {
        *(ulong *)(param_1 + 0xa6) = (ulong)(uint)param_1[0xb8];
        fseek(*(FILE **)(param_1 + 0xa2),0x231,0);
        fwrite(param_1 + 0xa6,4,1,*(FILE **)(param_1 + 0xa2));
      }
      if (*(char *)((long)param_1 + 0x2ae) != '\0') {
        *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
        if (*(FILE **)(param_1 + 0xa2) != (FILE *)0x0) {
          fseek(*(FILE **)(param_1 + 0xa2),0x235,0);
          fwrite(param_1 + 0xa8,4,1,*(FILE **)(param_1 + 0xa2));
        }
        *(undefined1 *)((long)param_1 + 0x2ae) = 0;
        return;
      }
    }
  }
  return;
}

