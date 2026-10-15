// vaddr 0x5B34C0  ghidra 0x6B34C0  name=FUN_006b34c0  size=172 instr-addr
// duvod: affinity_writer (str do AFF1/AFF6/AFF8 = setup vlaken)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


void FUN_006b34c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + -8);
  uVar1 = (ulong)*(uint *)((long)__ptr + 0x20);
  uVar2 = (long)(param_1 + -8) - (long)__ptr;
  FUN_006b31c0(-(1L << ((ulong)(uint)((int)(uVar2 + (param_2 + 8U >> 1) >> (uVar1 & 0x3f)) << 4) &
                       0x3f) | 1L << ((ulong)(uint)((int)(uVar2 >> (uVar1 & 0x3f)) << 4) & 0x3f) |
                1L << ((ulong)(uint)((int)(param_2 + uVar2 + 7 >> (uVar1 & 0x3f)) << 4) & 0x3f)),
               (long)__ptr + 8);
  uVar1 = FUN_006b31c0(-8 - param_2,__ptr);
  if (uVar1 != param_2 + 8U) {
    return;
  }
  DataMemoryBarrier(2,1);
  free(__ptr);
  return;
}

