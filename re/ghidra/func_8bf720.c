// vaddr 0x8BF720  ghidra 0x9BF720  name=FUN_009bf720  size=344 instr-addr
// duvod: affinity_reader_A
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


void FUN_009bf720(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(ulong *)(param_1 + 0x2b0) < param_2) {
    uVar1 = *(uint *)(param_1 + 0x2b8);
    uVar5 = (ulong)uVar1;
    do {
      uVar3 = ((int)uVar5 + 1U) % 3;
      uVar5 = (ulong)uVar3;
      if (uVar3 == uVar1) {
        uVar5 = (ulong)uVar1;
        break;
      }
    } while (*(ulong *)(param_1 + (ulong)uVar3 * 0x58 + 0x1c8) < param_2);
    iVar2 = (*DAT_0c7b3f78)(*(undefined8 *)(param_1 + 0x10),1,param_1 + uVar5 * 0x58 + 0x1c0,1,
                            0xffffffffffffffff);
    if (iVar2 == 0) {
      uVar5 = *(ulong *)(param_1 + uVar5 * 0x58 + 0x1c8);
      uVar1 = *(uint *)(param_1 + 0x2b8);
      uVar3 = uVar1;
      while ((uVar1 = (uVar1 + 1) % 3, uVar1 != uVar3 &&
             (uVar4 = *(ulong *)(param_1 + (ulong)uVar1 * 0x58 + 0x1c8), uVar4 <= uVar5))) {
        if (*(ulong *)(param_1 + 0x2b0) < uVar4) {
          FUN_009bf880(param_1,uVar1);
          uVar3 = *(uint *)(param_1 + 0x2b8);
        }
      }
      *(ulong *)(param_1 + 0x2b0) = uVar5;
      return;
    }
    FUN_009b7bf0("WaitForCommandBufferCompletion",iVar2,"vkWaitForFences failed: ");
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

