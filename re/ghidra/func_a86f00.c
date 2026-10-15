// vaddr 0xA86F00  ghidra 0xB86F00  name=FUN_00b86f00  size=272 instr-addr
// duvod: nejvyssi pocet realnych yield (spin loop)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


undefined8 FUN_00b86f00(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (uVar1 == 0x40) {
    uVar2 = FUN_00b86b20(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
  }
  uVar4 = (ulong)param_2;
  uVar7 = 0x40 - (ulong)uVar1;
  if (uVar7 < uVar4) {
    uVar4 = *(ulong *)(param_1 + 0x1030);
    uVar2 = FUN_00b86b20(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar1 = param_2 - (int)uVar7;
    uVar6 = (ulong)uVar1;
    uVar3 = (int)((uVar4 & (0xffffffffffffffffU >> (uVar7 & 0x3f) ^ 0xffffffffffffffff)) >>
                 (-(uVar7 & 0xffffffff) & 0x3f)) << (ulong)(uVar1 & 0x1f) |
            (uint)((*(ulong *)(param_1 + 0x1030) &
                   (0xffffffffffffffffU >> (uVar6 & 0x3f) ^ 0xffffffffffffffff)) >> (-uVar6 & 0x3f))
    ;
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar1;
    lVar5 = *(ulong *)(param_1 + 0x1030) << (uVar6 & 0x3f);
  }
  else {
    uVar3 = (uint)((*(ulong *)(param_1 + 0x1030) &
                   (0xffffffffffffffffU >> (uVar4 & 0x3f) ^ 0xffffffffffffffff)) >> (-uVar4 & 0x3f))
    ;
    *(uint *)(param_1 + 0x2c) = uVar1 + param_2;
    lVar5 = *(ulong *)(param_1 + 0x1030) << (uVar4 & 0x3f);
  }
  *(long *)(param_1 + 0x1030) = lVar5;
  if (param_2 < 0x20) {
    uVar3 = -(uVar3 >> (ulong)(param_2 - 1 & 0x1f) & 1) << (ulong)(param_2 & 0x1f) | uVar3;
  }
  *param_3 = uVar3;
  return 1;
}

