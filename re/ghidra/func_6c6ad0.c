// vaddr 0x6C6AD0  ghidra 0x7C6AD0  name=FUN_007c6ad0  size=13208 instr-addr
// duvod: data 0xB99BD0 (126 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c6ad0(void)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  ulong *puVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined *puVar30;
  long local_2f0;
  long local_2e8;
  ulong local_2a0 [3];
  undefined8 local_288;
  ulong local_280;
  undefined8 local_278;
  int local_270;
  undefined8 local_26c;
  undefined4 local_264;
  ulong local_260;
  undefined8 local_258;
  int local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 *local_218;
  undefined8 local_208;
  ulong local_200 [3];
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1b8;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  int local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 *local_158;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 *local_f8;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 *local_98;
  undefined8 local_88;
  long local_80;
  
  lVar9 = tpidr_el0;
  local_80 = *(long *)(lVar9 + 0x28);
  puVar12 = (ulong *)__emutls_get_address(&DAT_00c99bf0);
  uVar24 = *puVar12;
  uVar25 = uVar24 + 0xf & 0xfffffffffffffff0;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
  lVar26 = (*plVar13 + uVar24) - uVar25;
  *plVar13 = lVar26;
  *puVar12 = uVar25;
  pvVar14 = operator_new(0x330);
                    /* try { // try from 007c6b4c to 007c6b5b has its CatchHandler @ 007c9ee0 */
  FUN_0097af10(pvVar14,uVar25,lVar26,0);
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  *puVar15 = pvVar14;
  *(ulong *)((long)pvVar14 + 0x68) = *(ulong *)((long)pvVar14 + 0x68) & 0xffffffff7fffffff;
  *(ulong *)((long)pvVar14 + 0x58) =
       *(ulong *)((long)pvVar14 + 0x58) & (1L << ((ulong)DAT_02828cb0 & 0x3f) ^ 0xffffffffffffffffU)
  ;
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bf0);
  puVar30 = PTR___tls_init_00c93cd0;
  local_e0 = local_e0 & 0xffffffffffffff00;
  uVar28 = *puVar15;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  uVar24 = (ulong)DAT_0282c3c0;
  local_c0 = 0;
  local_98 = (undefined8 *)0x0;
  local_88 = 0xffffffffffffffff;
  local_140 = local_140 & 0xffffffffffffff00;
  local_12c._0_5_ = CONCAT14(1,(undefined4)local_12c);
  local_120 = 0;
  local_f8 = (undefined8 *)0x0;
  local_e8 = 0xffffffffffffffff;
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
                    /* try { // try from 007c6be4 to 007c6be7 has its CatchHandler @ 007c9ef4 */
    armAsm::__tls_init();
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    pvVar14 = (void *)*puVar15;
  }
  local_1a0 = (ulong)DAT_0282c360 | 0x8000000000;
  local_198 = 0x400000002;
                    /* try { // try from 007c6c18 to 007c6c2f has its CatchHandler @ 007c9ef4 */
  FUN_0097ee60(pvVar14,&local_1a0,0x7f800000,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar25 = uVar24 | 0x2000000000;
  local_198 = 0x100000002;
                    /* try { // try from 007c6c60 to 007c6c73 has its CatchHandler @ 007c9edc */
  local_1a0 = uVar25;
  FUN_007c1d10(*puVar15,&local_1a0,&DAT_0282c360,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c6c8c to 007c6c97 has its CatchHandler @ 007c9ef4 */
  FUN_0097cdd0(*puVar15,&local_e0,6);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c6cb0 to 007c6cc3 has its CatchHandler @ 007c9ef4 */
  FUN_0097cdd0(*puVar15,&local_e0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_1a0 = (ulong)DAT_0282c360 | 0x8000000000;
  local_198 = 0x400000002;
                    /* try { // try from 007c6ce4 to 007c6cf7 has its CatchHandler @ 007c9ef4 */
  FUN_0097ee60(*puVar15,&local_1a0,0xff800000,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_198 = 0x100000002;
                    /* try { // try from 007c6d14 to 007c6d27 has its CatchHandler @ 007c9ed8 */
  local_1a0 = uVar25;
  FUN_007c1d10(*puVar15,&local_1a0,&DAT_0282c360,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c6d40 to 007c6d4b has its CatchHandler @ 007c9ef4 */
  FUN_0097cdd0(*puVar15,&local_e0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_198 = 0x100000002;
  local_200[1] = 0x100000002;
                    /* try { // try from 007c6d78 to 007c6d83 has its CatchHandler @ 007c9ed4 */
  local_200[0] = uVar25;
  local_1a0 = uVar24 | 0x4000000000;
  FUN_007cdab0(*puVar15,&local_1a0,local_200);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c6d9c to 007c6da3 has its CatchHandler @ 007c9ef4 */
  FUN_0097bd60(*puVar15,&local_140);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c6dc0 to 007c6de7 has its CatchHandler @ 007c9ef4 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_e0);
  FUN_00974d50(lVar26,&local_e0,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_1a0 = (ulong)DAT_0282c360 | 0x8000000000;
  local_198 = 0x400000002;
                    /* try { // try from 007c6e08 to 007c6e1b has its CatchHandler @ 007c9ef4 */
  FUN_0097ee60(*puVar15,&local_1a0,0x800000,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar22 = uVar24 | 0x8000000000;
  local_198 = 0x400000002;
  local_200[1] = 0x400000002;
  local_260 = (ulong)DAT_0282c360 | 0x8000000000;
  local_258 = 0x400000002;
                    /* try { // try from 007c6e58 to 007c6e67 has its CatchHandler @ 007c9ed0 */
  local_200[0] = uVar22;
  local_1a0 = uVar22;
  FUN_007ac300(*puVar15,&local_1a0,local_200,&local_260);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_198 = 0x100000002;
  local_200[1] = 0x100000002;
                    /* try { // try from 007c6e90 to 007c6e9b has its CatchHandler @ 007c9ecc */
  local_200[0] = uVar25;
  local_1a0 = uVar24 | 0x4000000000;
  FUN_007cdab0(*puVar15,&local_1a0,local_200);
  if (puVar30 != (undefined *)0x0) {
                    /* try { // try from 007c6ea0 to 007c6ea3 has its CatchHandler @ 007c9ef4 */
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_1a0 = (ulong)DAT_0282c360 | 0x8000000000;
  local_198 = 0x200000002;
                    /* try { // try from 007c6ec8 to 007c6edb has its CatchHandler @ 007c9ef4 */
  FUN_0097ee60(*puVar15,&local_1a0,0x10000000000000,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_198 = 0x200000002;
  local_200[1] = 0x200000002;
  local_260 = (ulong)DAT_0282c360 | 0x8000000000;
  local_258 = 0x200000002;
                    /* try { // try from 007c6f10 to 007c6f1f has its CatchHandler @ 007c9ec8 */
  local_200[0] = uVar22;
  local_1a0 = uVar22;
  FUN_007aae80(*puVar15,&local_1a0,local_200,&local_260);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c6f3c to 007c6f5b has its CatchHandler @ 007c9ef4 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_140);
  FUN_00974d50(lVar26,&local_140,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  puVar15 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_f8;
    if (pvVar14 != (void *)0x0) {
      local_f8[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  puVar15 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_98;
    if (pvVar14 != (void *)0x0) {
      local_98[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  FUN_007aa410(*puVar15,&DAT_0282b818);
  plVar23 = (long *)*puVar15;
  plVar13 = plVar23;
  if (plVar23[0x13] != plVar23[0x14]) {
    FUN_0097a0e0(plVar23 + 0x10,1);
    plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
    plVar13 = (long *)*plVar13;
  }
  *(undefined1 *)(plVar23 + 4) = 0;
  uVar24 = (ulong)(uint)((int)plVar13[3] - (int)plVar13[1]);
  (**(code **)(*plVar13 + 8))();
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  *puVar15 = 0;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bf0);
  FUN_005b14ac(*plVar13,*plVar13 + uVar24);
  *plVar13 = *plVar13 + uVar24;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
  local_2f0 = 0;
  DAT_0282b3c0 = uVar28;
  *plVar13 = *plVar13 - uVar24;
  iVar18 = 0;
  do {
    local_2e8 = 0;
    iVar19 = 0;
    do {
      bVar4 = false;
      lVar26 = 0;
      bVar11 = true;
      do {
        bVar10 = bVar11;
        puVar12 = (ulong *)__emutls_get_address(&DAT_00c99bf0);
        uVar24 = *puVar12;
        uVar25 = uVar24 + 0xf & 0xfffffffffffffff0;
        plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
        lVar29 = (*plVar13 + uVar24) - uVar25;
        *plVar13 = lVar29;
        *puVar12 = uVar25;
        pvVar14 = operator_new(0x330);
                    /* try { // try from 007c7180 to 007c718f has its CatchHandler @ 007ca03c */
        FUN_0097af10(pvVar14,uVar25,lVar29,0);
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        *puVar15 = pvVar14;
        *(ulong *)((long)pvVar14 + 0x68) = *(ulong *)((long)pvVar14 + 0x68) & 0xffffffff7fffffff;
        *(ulong *)((long)pvVar14 + 0x58) =
             *(ulong *)((long)pvVar14 + 0x58) &
             (1L << ((ulong)DAT_02828cb0 & 0x3f) ^ 0xffffffffffffffffU);
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bf0);
        uVar8 = DAT_0282c3c0;
        uVar28 = *puVar15;
        uVar24 = (ulong)DAT_0282c3c0;
        if (iVar18 != 0) {
          FUN_007fc3c0(&DAT_0282b3f8,&DAT_027034ec);
          if (puVar30 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e0 = 0xffffffffffff3fff;
          local_d8 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
          local_d0 = DAT_0c7b1c38;
          uStack_cc = 0xffffffff;
          uStack_c8 = 0xffffffff;
          local_c4 = 0;
          FUN_0097d130(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_e0,0);
          if (iVar19 != 0) {
            if (puVar30 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
            lVar29 = *plVar13;
            if ((((DAT_0282b418 != DAT_0282b828) || (DAT_0282b420 != DAT_0282b830)) ||
                (_DAT_0282b41c != _DAT_0282b82c)) || (_DAT_0282b41c == 0x20)) {
              plVar13 = (long *)(lVar29 + 0x40);
              (**(code **)(*plVar13 + 0x40))(plVar13,4);
              (**(code **)(*plVar13 + 0x30))(plVar13);
              lVar16 = (**(code **)*plVar13)(plVar13);
              pvVar14 = *(void **)(lVar16 + 8);
              lVar27 = *(long *)(lVar16 + 0x18);
              if ((ulong)((long)pvVar14 + (*(long *)(lVar16 + 0x28) - lVar27)) < 4) {
                sVar3 = *(long *)(lVar16 + 0x28) * 2 + 4;
                pvVar17 = realloc(pvVar14,sVar3);
                *(void **)(lVar16 + 8) = pvVar17;
                if (pvVar17 == (void *)0x0) {
                  printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                         "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long *)(lVar16 + 0x18) = (long)pvVar17 + (lVar27 - (long)pvVar14);
                *(size_t *)(lVar16 + 0x28) = sVar3;
              }
              if (((DAT_0282b420 == 1) && (DAT_0282b418 == 0x3f)) ||
                 ((DAT_0282b830 == 1 && (DAT_0282b828 == 0x3f)))) {
                local_e0 = 0;
                local_d8 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
                local_d0 = DAT_0c7b1c38;
                uStack_cc = 0xffffffff;
                uStack_c8 = 0xffffffff;
                local_c4 = 0;
                    /* try { // try from 007c73c4 to 007c744f has its CatchHandler @ 007c9f0c */
                FUN_00975080(lVar29,&DAT_0282b418,&DAT_0282b828,&local_e0,0,0);
              }
              else {
                puVar12 = (ulong *)&DAT_0c7aeaa0;
                puVar5 = &DAT_0c7aeaa8;
                if (_DAT_0282b41c != 0x40) {
                  puVar12 = (ulong *)&DAT_0c7aeab0;
                  puVar5 = &DAT_0c7aeab8;
                }
                local_d8 = CONCAT44(_DAT_0282b82c,DAT_0282b828);
                local_140 = *puVar12;
                local_138 = CONCAT44(local_138._4_4_,*puVar5);
                uStack_cc = 0;
                uStack_c8 = 0xffffffff;
                local_d0 = DAT_0282b830;
                local_c4 = 0;
                FUN_009752a0(lVar29,&DAT_0282b418,&local_140,&local_e0,0x20000000);
              }
                    /* try { // try from 007c7458 to 007c745f has its CatchHandler @ 007c9f28 */
              (**(code **)(*plVar13 + 0x38))(plVar13);
            }
          }
        }
        if (puVar30 == (undefined *)0x0) {
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e0 = (ulong)DAT_0282c370 | 0x8000000000;
          local_d8 = 0x200000002;
          FUN_0097ee60(*puVar15,&local_e0,0x7fffffffffffffff,0,0);
        }
        else {
          armAsm::__tls_init();
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e0 = (ulong)DAT_0282c370 | 0x8000000000;
          local_d8 = 0x200000002;
          FUN_0097ee60(*puVar15,&local_e0,0x7fffffffffffffff,0,0);
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        uVar21 = DAT_0282c440;
        uVar20 = DAT_0282c370;
        lVar16 = *plVar13;
        plVar13 = (long *)(lVar16 + 0x40);
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar27 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar27)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar27 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        uVar7 = uVar8 << 5;
        *(undefined1 *)(lVar16 + 0x20) = 1;
        **(uint **)(lVar16 + 0x18) = uVar7 | uVar21 | uVar20 << 0x10 | 0x4e201c00;
        *(long *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + 4;
                    /* try { // try from 007c75b4 to 007c75bb has its CatchHandler @ 007ca030 */
        (**(code **)(*(long *)(lVar16 + 0x40) + 0x38))(plVar13);
        puVar30 = PTR___tls_init_00c93cd0;
        local_e0 = local_e0 & 0xffffffffffffff00;
        uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
        local_c0 = 0;
        local_98 = (undefined8 *)0x0;
        local_88 = 0xffffffffffffffff;
        if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
                    /* try { // try from 007c75e4 to 007c75e7 has its CatchHandler @ 007ca098 */
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_140 = (ulong)DAT_0282c370 | 0x8000000000;
        local_138 = 0x200000002;
                    /* try { // try from 007c7604 to 007c7617 has its CatchHandler @ 007ca098 */
        FUN_0097ee60(*puVar15,&local_140,0x47f0000000000000,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c7638 to 007c7663 has its CatchHandler @ 007ca150 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9c44 to 007c9c47 has its CatchHandler @ 007c9fd8 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        if (DAT_0282c430._4_4_ == 0x10) {
          uVar20 = 0xc00000;
        }
        else if (DAT_0282c430._4_4_ == 0x40) {
          uVar20 = 0x400000;
        }
        else {
          uVar20 = 0;
        }
        uVar21 = (uint)DAT_0282c430 << 5;
        uVar1 = DAT_0282c370 << 0x10;
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar20 | uVar21 | uVar1 | 0x1e202000;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c7720 to 007c7727 has its CatchHandler @ 007ca034 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c773c to 007c7747 has its CatchHandler @ 007ca098 */
        FUN_0097cdd0(*puVar15,&local_e0,2);
        local_140 = local_140 & 0xffffffffffffff00;
        local_12c._0_5_ = CONCAT14(1,(undefined4)local_12c);
        local_120 = 0;
        local_f8 = (undefined8 *)0x0;
        local_e8 = 0xffffffffffffffff;
        if (puVar30 != (undefined *)0x0) {
                    /* try { // try from 007c7764 to 007c7767 has its CatchHandler @ 007ca094 */
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_1a0 = (ulong)DAT_0282c370 | 0x8000000000;
        local_198 = 0x200000002;
                    /* try { // try from 007c7784 to 007c7797 has its CatchHandler @ 007ca094 */
        FUN_0097ee60(*puVar15,&local_1a0,0x3810000000000000,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c77b8 to 007c77e3 has its CatchHandler @ 007ca140 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9c20 to 007c9c23 has its CatchHandler @ 007c9fe0 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        if (DAT_0282c430._4_4_ == 0x10) {
          uVar20 = 0xc00000;
        }
        else if (DAT_0282c430._4_4_ == 0x40) {
          uVar20 = 0x400000;
        }
        else {
          uVar20 = 0;
        }
        uVar21 = (uint)DAT_0282c430 << 5;
        uVar1 = DAT_0282c370 << 0x10;
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar20 | uVar21 | uVar1 | 0x1e202000;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c78a0 to 007c78a7 has its CatchHandler @ 007ca038 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c78bc to 007c78c7 has its CatchHandler @ 007ca094 */
        FUN_0097cdd0(*puVar15,&local_140,3);
        local_1a0 = local_1a0 & 0xffffffffffffff00;
        local_18c._0_5_ = CONCAT14(1,(undefined4)local_18c);
        local_180 = 0;
        local_158 = (undefined8 *)0x0;
        local_148 = 0xffffffffffffffff;
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar16 = *plVar13;
        plVar13 = (long *)(lVar16 + 0x40);
                    /* try { // try from 007c7900 to 007c792b has its CatchHandler @ 007ca120 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar27 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar27)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9c68 to 007c9c6b has its CatchHandler @ 007c9fc8 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar27 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        uVar8 = uVar8 | uVar7;
        uVar20 = uVar8 | 0x1e624000;
        *(undefined1 *)(lVar16 + 0x20) = 1;
        **(uint **)(lVar16 + 0x18) = uVar20;
        *(long *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + 4;
                    /* try { // try from 007c79b8 to 007c79bf has its CatchHandler @ 007ca01c */
        (**(code **)(*(long *)(lVar16 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c79d4 to 007c79db has its CatchHandler @ 007ca130 */
        FUN_0097bd60(*puVar15,&local_1a0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar29 = *plVar13;
                    /* try { // try from 007c79f4 to 007c7a13 has its CatchHandler @ 007ca130 */
        FUN_0097a6f0(lVar29 + 0xe0,&local_e0);
        FUN_00974d50(lVar29,&local_e0,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
        local_200[0] = local_200[0] & 0xffffffffffffff00;
        local_1e8 = 1;
        local_1e0 = 0;
        local_1b8 = (undefined8 *)0x0;
        local_1a8 = 0xffffffffffffffff;
        if (puVar30 != (undefined *)0x0) {
                    /* try { // try from 007c7a30 to 007c7a33 has its CatchHandler @ 007ca158 */
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_260 = (ulong)DAT_0282c370 | 0x8000000000;
        local_258 = 0x200000002;
                    /* try { // try from 007c7a54 to 007c7a67 has its CatchHandler @ 007ca158 */
        FUN_0097ee60(*puVar15,&local_260,0x4800000000000000,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar16 = *plVar13;
        plVar13 = (long *)(lVar16 + 0x40);
                    /* try { // try from 007c7a88 to 007c7ab3 has its CatchHandler @ 007ca100 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar27 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar27)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9bd8 to 007c9bdb has its CatchHandler @ 007c9fe4 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar27 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        puVar30 = PTR___tls_init_00c93cd0;
        if (DAT_0282c430._4_4_ == 0x10) {
          uVar21 = 0xc00000;
        }
        else if (DAT_0282c430._4_4_ == 0x40) {
          uVar21 = 0x400000;
        }
        else {
          uVar21 = 0;
        }
        uVar1 = (uint)DAT_0282c430 << 5;
        uVar2 = DAT_0282c370 << 0x10;
        *(undefined1 *)(lVar16 + 0x20) = 1;
        **(uint **)(lVar16 + 0x18) = uVar21 | uVar1 | uVar2 | 0x1e202000;
        *(long *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + 4;
                    /* try { // try from 007c7b84 to 007c7b8b has its CatchHandler @ 007ca024 */
        (**(code **)(*(long *)(lVar16 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c7ba0 to 007c7bb3 has its CatchHandler @ 007ca158 */
        FUN_0097cdd0(*puVar15,local_200,2);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_260 = (ulong)DAT_0282c370 | 0x8000000000;
        local_258 = 0x200000002;
                    /* try { // try from 007c7bd4 to 007c7be7 has its CatchHandler @ 007ca158 */
        FUN_0097ee60(*puVar15,&local_260,0x10000000000000,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        uVar21 = DAT_0282c370;
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c7c10 to 007c7c3b has its CatchHandler @ 007ca110 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9d40 to 007c9d43 has its CatchHandler @ 007c9f54 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar8 | uVar21 << 0x10 | 0x6ee08400;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c7cbc to 007c7cc3 has its CatchHandler @ 007ca020 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        puVar30 = PTR___tls_init_00c93cd0;
        if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c7cec to 007c7d17 has its CatchHandler @ 007ca0e0 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9d64 to 007c9d67 has its CatchHandler @ 007c9f44 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar20;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c7d88 to 007c7d8f has its CatchHandler @ 007ca028 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
                    /* try { // try from 007c7d94 to 007c7d97 has its CatchHandler @ 007ca158 */
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_260 = (ulong)DAT_0282c360 | 0x8000000000;
        local_258 = 0x400000002;
                    /* try { // try from 007c7dbc to 007c7dcf has its CatchHandler @ 007ca158 */
        FUN_0097ee60(*puVar15,&local_260,0x800000,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        uVar21 = DAT_0282c360;
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c7df8 to 007c7e23 has its CatchHandler @ 007ca0f0 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9cd4 to 007c9cd7 has its CatchHandler @ 007c9f84 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar8 | uVar21 << 0x10 | 0x4ea08400;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c7ea4 to 007c7eab has its CatchHandler @ 007ca02c */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        puVar30 = PTR___tls_init_00c93cd0;
        if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c7ec8 to 007c7ecf has its CatchHandler @ 007ca158 */
        FUN_0097bd60(*puVar15,&local_1a0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar29 = *plVar13;
                    /* try { // try from 007c7ee8 to 007c7f0f has its CatchHandler @ 007ca158 */
        FUN_0097a6f0(lVar29 + 0xe0,local_200);
        FUN_00974d50(lVar29,local_200,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_260 = (ulong)DAT_0282c360 | 0x8000000000;
        local_258 = 0x400000002;
                    /* try { // try from 007c7f34 to 007c7f47 has its CatchHandler @ 007ca158 */
        FUN_0097ee60(*puVar15,&local_260,0x7fffffff,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c7f68 to 007c7f93 has its CatchHandler @ 007ca0c0 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9d1c to 007c9d1f has its CatchHandler @ 007c9f64 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar20;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8004 to 007c800b has its CatchHandler @ 007ca014 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        uVar21 = DAT_0282c360;
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c8034 to 007c805f has its CatchHandler @ 007ca0d0 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9cf8 to 007c9cfb has its CatchHandler @ 007c9f74 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar8 | uVar21 << 0x10 | 0x4ea01c00;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c80e4 to 007c80eb has its CatchHandler @ 007ca018 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        puVar30 = PTR___tls_init_00c93cd0;
        if (iVar18 != 0) {
          if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_260 = 0x8010;
          local_258 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
          local_250 = DAT_0c7b1c38;
          local_24c = 0xffffffffffffffff;
          local_244 = 0;
                    /* try { // try from 007c8140 to 007c8157 has its CatchHandler @ 007c9fb4 */
          FUN_0097d130(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_260,0x20000000);
          if (iVar19 != 0) {
            if (puVar30 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c8174 to 007c8183 has its CatchHandler @ 007ca158 */
            FUN_0097b280(*puVar15,&DAT_0282b418,1);
          }
        }
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c8198 to 007c819f has its CatchHandler @ 007ca158 */
        FUN_0097bd60(*puVar15,&local_1a0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar29 = *plVar13;
                    /* try { // try from 007c81b8 to 007c81d7 has its CatchHandler @ 007ca158 */
        FUN_0097a6f0(lVar29 + 0xe0,&local_140);
        FUN_00974d50(lVar29,&local_140,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
        if (iVar18 != 0) {
          local_260 = local_260 & 0xffffffffffffff00;
          local_24c._0_5_ = CONCAT14(1,(undefined4)local_24c);
          local_240 = 0;
          local_218 = (undefined8 *)0x0;
          local_208 = 0xffffffffffffffff;
          if (puVar30 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_278 = 0x100000002;
                    /* try { // try from 007c8220 to 007c822f has its CatchHandler @ 007c9f40 */
          local_280 = uVar24 | 0x4000000000;
          FUN_00980430(0,*puVar15,&local_280,0);
          if (puVar30 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c8244 to 007c824f has its CatchHandler @ 007ca048 */
          FUN_0097cdd0(*puVar15,&local_260,0);
          if (puVar30 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_280 = 0x4008;
          local_278 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
          local_26c = 0xffffffffffffffff;
          local_264 = 0;
                    /* try { // try from 007c8294 to 007c82ab has its CatchHandler @ 007c9fc4 */
          FUN_0097d130(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_280,0x20000000);
          if (bVar4) {
            if (puVar30 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
            uVar21 = (uint)DAT_0282c430;
            lVar27 = *plVar13;
            plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c82dc to 007c8307 has its CatchHandler @ 007c9ffc */
            (**(code **)(*plVar13 + 0x40))(plVar13,4);
            (**(code **)(*plVar13 + 0x30))(plVar13);
            lVar29 = (**(code **)*plVar13)(plVar13);
            pvVar14 = *(void **)(lVar29 + 8);
            lVar16 = *(long *)(lVar29 + 0x18);
            if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
              sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
              pvVar17 = realloc(pvVar14,sVar3);
              *(void **)(lVar29 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) {
                printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                       "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9dd0 to 007c9dd3 has its CatchHandler @ 007c9f04 */
                abort();
              }
              *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
              *(size_t *)(lVar29 + 0x28) = sVar3;
            }
            *(undefined1 *)(lVar27 + 0x20) = 1;
            **(uint **)(lVar27 + 0x18) = uVar7 | uVar21 | 0x6f410400;
            *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8390 to 007c8397 has its CatchHandler @ 007c9f34 */
            (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
            if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
            uVar21 = (uint)DAT_0282c430;
            lVar27 = *plVar13;
            plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c83c8 to 007c83f3 has its CatchHandler @ 007c9ff4 */
            (**(code **)(*plVar13 + 0x40))(plVar13,4);
            (**(code **)(*plVar13 + 0x30))(plVar13);
            lVar29 = (**(code **)*plVar13)(plVar13);
            pvVar14 = *(void **)(lVar29 + 8);
            lVar16 = *(long *)(lVar29 + 0x18);
            if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
              sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
              pvVar17 = realloc(pvVar14,sVar3);
              *(void **)(lVar29 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) {
                printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                       "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9e18 to 007c9e1b has its CatchHandler @ 007c9efc */
                abort();
              }
              *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
              *(size_t *)(lVar29 + 0x28) = sVar3;
            }
            *(undefined1 *)(lVar27 + 0x20) = 1;
            **(uint **)(lVar27 + 0x18) = uVar21 | uVar21 << 5 | 0x4f5f5400;
            *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8478 to 007c847f has its CatchHandler @ 007c9f30 */
            (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
            puVar30 = PTR___tls_init_00c93cd0;
            if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
            lVar27 = *plVar13;
            plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c84a8 to 007c84d3 has its CatchHandler @ 007ca004 */
            (**(code **)(*plVar13 + 0x40))(plVar13,4);
            (**(code **)(*plVar13 + 0x30))(plVar13);
            lVar29 = (**(code **)*plVar13)(plVar13);
            pvVar14 = *(void **)(lVar29 + 8);
            lVar16 = *(long *)(lVar29 + 0x18);
            if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
              sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
              pvVar17 = realloc(pvVar14,sVar3);
              *(void **)(lVar29 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) {
                printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                       "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9e3c to 007c9e3f has its CatchHandler @ 007c9ef8 */
                abort();
              }
              *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
              *(size_t *)(lVar29 + 0x28) = sVar3;
            }
            *(undefined1 *)(lVar27 + 0x20) = 1;
            **(uint **)(lVar27 + 0x18) = uVar8 | 0x4f4c5400;
            *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8554 to 007c855b has its CatchHandler @ 007c9f3c */
            (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
            if (puVar30 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
            lVar27 = *plVar13;
            plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c857c to 007c85a7 has its CatchHandler @ 007c9ff8 */
            (**(code **)(*plVar13 + 0x40))(plVar13,4);
            (**(code **)(*plVar13 + 0x30))(plVar13);
            lVar29 = (**(code **)*plVar13)(plVar13);
            pvVar14 = *(void **)(lVar29 + 8);
            lVar16 = *(long *)(lVar29 + 0x18);
            if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
              sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
              pvVar17 = realloc(pvVar14,sVar3);
              *(void **)(lVar29 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) {
                printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                       "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9df4 to 007c9df7 has its CatchHandler @ 007c9f00 */
                abort();
              }
              *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
              *(size_t *)(lVar29 + 0x28) = sVar3;
            }
            *(undefined1 *)(lVar27 + 0x20) = 1;
            **(uint **)(lVar27 + 0x18) = uVar8 | 0x6f570400;
            *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8628 to 007c862f has its CatchHandler @ 007c9f2c */
            (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
            if (puVar30 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
            uVar21 = (uint)DAT_0282c430;
            lVar27 = *plVar13;
            plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c8658 to 007c8683 has its CatchHandler @ 007ca000 */
            (**(code **)(*plVar13 + 0x40))(plVar13,4);
            (**(code **)(*plVar13 + 0x30))(plVar13);
            lVar29 = (**(code **)*plVar13)(plVar13);
            pvVar14 = *(void **)(lVar29 + 8);
            lVar16 = *(long *)(lVar29 + 0x18);
            if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
              sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
              pvVar17 = realloc(pvVar14,sVar3);
              *(void **)(lVar29 + 8) = pvVar17;
              if (pvVar17 == (void *)0x0) {
                printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                       "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9dac to 007c9daf has its CatchHandler @ 007c9f08 */
                abort();
              }
              *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
              *(size_t *)(lVar29 + 0x28) = sVar3;
            }
            *(undefined1 *)(lVar27 + 0x20) = 1;
            **(uint **)(lVar27 + 0x18) = uVar8 | uVar21 << 0x10 | 0x4ea01c00;
            *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8708 to 007c870f has its CatchHandler @ 007c9f38 */
            (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
            puVar30 = PTR___tls_init_00c93cd0;
            if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c872c to 007c8733 has its CatchHandler @ 007ca048 */
            FUN_0097bd60(*puVar15,&local_1a0);
          }
          if (puVar30 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
          lVar29 = *plVar13;
                    /* try { // try from 007c874c to 007c876b has its CatchHandler @ 007ca048 */
          FUN_0097a6f0(lVar29 + 0xe0,&local_260);
          FUN_00974d50(lVar29,&local_260,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
          puVar15 = local_218;
          if (local_218 != (undefined8 *)0x0) {
            pvVar14 = (void *)*local_218;
            if (pvVar14 != (void *)0x0) {
              local_218[1] = pvVar14;
              operator_delete(pvVar14);
            }
            operator_delete(puVar15);
          }
        }
        if (puVar30 != (undefined *)0x0) {
                    /* try { // try from 007c8790 to 007c8793 has its CatchHandler @ 007ca158 */
          armAsm::__tls_init();
        }
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_260 = (ulong)DAT_0282c360 | 0x8000000000;
        local_258 = 0x400000002;
                    /* try { // try from 007c87b8 to 007c87cb has its CatchHandler @ 007ca158 */
        FUN_0097ee60(*puVar15,&local_260,0x80000000,0,0);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c87ec to 007c8817 has its CatchHandler @ 007ca0b0 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9cb0 to 007c9cb3 has its CatchHandler @ 007c9f94 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar20;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8888 to 007c888f has its CatchHandler @ 007ca010 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        uVar20 = DAT_0282c360;
        lVar27 = *plVar13;
        plVar13 = (long *)(lVar27 + 0x40);
                    /* try { // try from 007c88b8 to 007c88e3 has its CatchHandler @ 007ca0a0 */
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar16 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar16)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c9c8c to 007c9c8f has its CatchHandler @ 007c9fa4 */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar16 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        *(undefined1 *)(lVar27 + 0x20) = 1;
        **(uint **)(lVar27 + 0x18) = uVar8 | uVar20 << 0x10 | 0x4e201c00;
        *(long *)(lVar27 + 0x18) = *(long *)(lVar27 + 0x18) + 4;
                    /* try { // try from 007c8964 to 007c896b has its CatchHandler @ 007ca008 */
        (**(code **)(*(long *)(lVar27 + 0x40) + 0x38))(plVar13);
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar29 = *plVar13;
                    /* try { // try from 007c8984 to 007c89db has its CatchHandler @ 007ca158 */
        FUN_0097a6f0(lVar29 + 0xe0,&local_1a0);
        FUN_00974d50(lVar29,&local_1a0,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
        if ((iVar18 != 0) && (FUN_007fc920(&DAT_027034ec,&DAT_0282b3f8), iVar19 != 0)) {
          FUN_007fc920(&DAT_027034f4,&DAT_0282b418);
        }
        puVar15 = local_1b8;
        if (local_1b8 != (undefined8 *)0x0) {
          pvVar14 = (void *)*local_1b8;
          if (pvVar14 != (void *)0x0) {
            local_1b8[1] = pvVar14;
            operator_delete(pvVar14);
          }
          operator_delete(puVar15);
        }
        puVar15 = local_158;
        if (local_158 != (undefined8 *)0x0) {
          pvVar14 = (void *)*local_158;
          if (pvVar14 != (void *)0x0) {
            local_158[1] = pvVar14;
            operator_delete(pvVar14);
          }
          operator_delete(puVar15);
        }
        puVar15 = local_f8;
        if (local_f8 != (undefined8 *)0x0) {
          pvVar14 = (void *)*local_f8;
          if (pvVar14 != (void *)0x0) {
            local_f8[1] = pvVar14;
            operator_delete(pvVar14);
          }
          operator_delete(puVar15);
        }
        puVar15 = local_98;
        if (local_98 != (undefined8 *)0x0) {
          pvVar14 = (void *)*local_98;
          if (pvVar14 != (void *)0x0) {
            local_98[1] = pvVar14;
            operator_delete(pvVar14);
          }
          operator_delete(puVar15);
        }
        if (puVar30 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar16 = *plVar13;
        plVar13 = (long *)(lVar16 + 0x40);
        (**(code **)(*plVar13 + 0x40))(plVar13,4);
        (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar29 = (**(code **)*plVar13)(plVar13);
        pvVar14 = *(void **)(lVar29 + 8);
        lVar27 = *(long *)(lVar29 + 0x18);
        if ((ulong)((long)pvVar14 + (*(long *)(lVar29 + 0x28) - lVar27)) < 4) {
          sVar3 = *(long *)(lVar29 + 0x28) * 2 + 4;
          pvVar17 = realloc(pvVar14,sVar3);
          *(void **)(lVar29 + 8) = pvVar17;
          if (pvVar17 == (void *)0x0) {
            printf("Assertion failed (%s)\nin %s, line %i\n","buffer_ != NULL",
                   "/home/user/p2-arm-ct/3rdparty/vixl/src/code-buffer-vixl.cc",0xa6);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar29 + 0x18) = (long)pvVar17 + (lVar27 - (long)pvVar14);
          *(size_t *)(lVar29 + 0x28) = sVar3;
        }
        uVar8 = DAT_0282b818 << 5;
        *(undefined1 *)(lVar16 + 0x20) = 1;
        **(uint **)(lVar16 + 0x18) = uVar8 | 0xd65f0000;
        *(long *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + 4;
                    /* try { // try from 007c8b2c to 007c8b33 has its CatchHandler @ 007ca00c */
        (**(code **)(*(long *)(lVar16 + 0x40) + 0x38))(plVar13);
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        plVar23 = (long *)*puVar15;
        plVar13 = plVar23;
        if (plVar23[0x13] != plVar23[0x14]) {
          FUN_0097a0e0(plVar23 + 0x10,1);
          plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
          plVar13 = (long *)*plVar13;
        }
        *(undefined1 *)(plVar23 + 4) = 0;
        uVar24 = (ulong)(uint)((int)plVar13[3] - (int)plVar13[1]);
        (**(code **)(*plVar13 + 8))();
        puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        *puVar15 = 0;
        plVar13 = (long *)__emutls_get_address(&DAT_00c99bf0);
        FUN_005b14ac(*plVar13,*plVar13 + uVar24);
        *plVar13 = *plVar13 + uVar24;
        plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
        *plVar13 = *plVar13 - uVar24;
        FUN_009a6510(&local_e0,"FPUd_ToDouble(%u,%u,%u)",iVar18,iVar19,bVar4);
        if ((local_e0 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_cc,local_d0));
        }
        (&DAT_0282c460)[lVar26 + local_2e8 * 2 + local_2f0 * 4] = uVar28;
        bVar4 = true;
        lVar26 = 1;
        bVar11 = false;
      } while (bVar10);
      local_2e8 = 1;
      bVar4 = iVar19 == 0;
      iVar19 = 1;
    } while (bVar4);
    local_2f0 = 1;
    bVar4 = iVar18 == 0;
    iVar18 = 1;
  } while (bVar4);
  puVar12 = (ulong *)__emutls_get_address(&DAT_00c99bf0);
  uVar24 = *puVar12;
  uVar25 = uVar24 + 0xf & 0xfffffffffffffff0;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
  lVar26 = (*plVar13 + uVar24) - uVar25;
  *plVar13 = lVar26;
  *puVar12 = uVar25;
  pvVar14 = operator_new(0x330);
                    /* try { // try from 007c8c64 to 007c8c73 has its CatchHandler @ 007c9ebc */
  FUN_0097af10(pvVar14,uVar25,lVar26,0);
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar24 = *(ulong *)((long)pvVar14 + 0x68);
  *puVar15 = pvVar14;
  *(ulong *)((long)pvVar14 + 0x68) = uVar24 & 0xffffffff7fffffff;
  *(ulong *)((long)pvVar14 + 0x58) =
       *(ulong *)((long)pvVar14 + 0x58) & (1L << ((ulong)DAT_02828cb0 & 0x3f) ^ 0xffffffffffffffffU)
  ;
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bf0);
  uVar28 = *puVar15;
  uVar25 = (ulong)DAT_0282c3c0;
  uVar24 = (ulong)DAT_0282c420;
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    pvVar14 = (void *)*puVar15;
  }
  FUN_007baf80(pvVar14,DAT_0282b3f8,DAT_0282b400,uVar25 | 0x2000000000,0x100000002);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  FUN_007baf80(*puVar15,CONCAT44(_DAT_0282b41c,DAT_0282b418),DAT_0282b420,uVar24 | 0x2000000000,
               0x100000002);
  if (puVar30 == (undefined *)0x0) {
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    FUN_007c49e0(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,0x17);
  }
  else {
    armAsm::__tls_init();
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    FUN_007c49e0(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,0x17);
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  FUN_007c49e0(*puVar15,&DAT_0282b418,&DAT_0282b418,0x17);
  if (puVar30 == (undefined *)0x0) {
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_d8 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
    uStack_cc = 0xffffffff;
    uStack_c8 = 0xffffffff;
    local_e0 = 0xff;
    local_d0 = DAT_0c7b1c38;
    local_c4 = 0;
    FUN_0097d130(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_e0,0);
  }
  else {
    armAsm::__tls_init();
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_d8 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
    uStack_cc = 0xffffffff;
    uStack_c8 = 0xffffffff;
    local_e0 = 0xff;
    local_d0 = DAT_0c7b1c38;
    local_c4 = 0;
    FUN_0097d130(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_e0,0);
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_d8 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  uStack_cc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  local_e0 = 0xff;
  local_d0 = DAT_0c7b1c38;
  local_c4 = 0;
  FUN_0097d130(*puVar15,&DAT_0282b418,&DAT_0282b418,&local_e0,0);
  local_e0 = local_e0 & 0xffffffffffffff00;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  local_c0 = 0;
  local_98 = (undefined8 *)0x0;
  local_88 = 0xffffffffffffffff;
  local_140 = local_140 & 0xffffffffffffff00;
  local_12c._0_5_ = CONCAT14(1,(undefined4)local_12c);
  local_120 = 0;
  local_f8 = (undefined8 *)0x0;
  local_e8 = 0xffffffffffffffff;
  local_1a0 = local_1a0 & 0xffffffffffffff00;
  local_18c._0_5_ = CONCAT14(1,(undefined4)local_18c);
  local_180 = 0;
  local_158 = (undefined8 *)0x0;
  local_148 = 0xffffffffffffffff;
  local_200[0] = local_200[0] & 0xffffffffffffff00;
  local_1e8 = 1;
  local_1e0 = 0;
  local_1b8 = (undefined8 *)0x0;
  local_1a8 = 0xffffffffffffffff;
  local_260 = local_260 & 0xffffffffffffff00;
  local_24c._0_5_ = CONCAT14(1,(undefined4)local_24c);
  local_240 = 0;
  local_218 = (undefined8 *)0x0;
  local_208 = 0xffffffffffffffff;
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = CONCAT44(_DAT_0282b41c,DAT_0282b418);
  local_270 = DAT_0282b420;
  local_26c = 0xffffffff00000000;
  local_264 = 0;
                    /* try { // try from 007c8f60 to 007c8f73 has its CatchHandler @ 007c9eb8 */
  FUN_0097fe20(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_280,0,0x40000000);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_280 = 0x19;
  local_270 = DAT_0c7b1c38;
  local_26c = 0xffffffffffffffff;
  local_264 = 0;
                    /* try { // try from 007c8fb4 to 007c8fc3 has its CatchHandler @ 007c9eb4 */
  FUN_00980300(*puVar15,&DAT_0282b3f8,&local_280);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c8fe0 to 007c8feb has its CatchHandler @ 007c9ef0 */
  FUN_0097cdd0(*puVar15,&local_e0,10);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_280 = 0;
  local_270 = DAT_0c7b1c38;
  local_26c = 0xffffffffffffffff;
  local_264 = 0;
                    /* try { // try from 007c9028 to 007c9037 has its CatchHandler @ 007c9eb0 */
  FUN_00980300(*puVar15,&DAT_0282b3f8,&local_280);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9050 to 007c905b has its CatchHandler @ 007c9ef0 */
  FUN_0097cdd0(*puVar15,&local_140,0xc);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9074 to 007c907f has its CatchHandler @ 007c9ef0 */
  FUN_0097cdd0(*puVar15,local_200,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_280 = 0xffffffffffffffe7;
  local_270 = DAT_0c7b1c38;
  local_26c = 0xffffffffffffffff;
  local_264 = 0;
                    /* try { // try from 007c90c0 to 007c90d3 has its CatchHandler @ 007c9eac */
  FUN_00980300(*puVar15,&DAT_0282b3f8,&local_280);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c90ec to 007c90f7 has its CatchHandler @ 007c9ef0 */
  FUN_0097cdd0(*puVar15,&local_1a0,0xd);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = DAT_0282b3f8;
  local_270 = DAT_0282b400;
  local_26c = 0xffffffff00000000;
  local_264 = 0;
  iVar18 = (int)((ulong)DAT_0282b3f8 >> 0x20);
  if ((((int)DAT_0c7b1c30 == (int)DAT_0282b3f8) && (DAT_0282b400 == DAT_0c7b1c38)) &&
     (DAT_0c7b1c30._4_4_ == iVar18)) {
                    /* try { // try from 007c915c to 007c91bb has its CatchHandler @ 007c9ea8 */
    FUN_0097b280(*puVar15,&DAT_0282b3f8);
  }
  else {
    puVar5 = &DAT_0c7b0b98;
    if (iVar18 != 0x40) {
      puVar5 = &DAT_0c7b0ba8;
    }
    puVar6 = &DAT_0c7b0b90;
    if (iVar18 != 0x40) {
      puVar6 = &DAT_0c7b0ba0;
    }
    local_2a0[2] = *puVar6;
    local_288 = CONCAT44(local_288._4_4_,*puVar5);
    FUN_0097fe20(*puVar15,&DAT_0282b3f8,local_2a0 + 2,&local_280,0,0x40000000);
  }
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_280 = 1;
  local_270 = DAT_0c7b1c38;
  local_26c = 0xffffffffffffffff;
  local_264 = 0;
                    /* try { // try from 007c91fc to 007c921b has its CatchHandler @ 007c9ea4 */
  FUN_0097fe20(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_280,0,0x40000000);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9234 to 007c9247 has its CatchHandler @ 007c9ef0 */
  FUN_0097b280(*puVar15,&DAT_0282b418,0xffffffffffffffff);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9260 to 007c926f has its CatchHandler @ 007c9ef0 */
  FUN_007c4b40(*puVar15,&DAT_0282b418,&DAT_0282b418,&DAT_0282b3f8);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_280 = CONCAT44(_DAT_0282b41c,DAT_0282b418);
  local_278 = CONCAT44(local_278._4_4_,DAT_0282b420);
                    /* try { // try from 007c9298 to 007c92a3 has its CatchHandler @ 007c9ef0 */
  FUN_007c4c90(*puVar15,&DAT_0282c360,&local_280);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar25 = uVar25 | 0x8000000000;
  local_278 = 0x1000000002;
  local_288 = 0x1000000002;
  local_2a0[0] = (ulong)DAT_0282c380 | 0x8000000000;
  local_2a0[1] = 0x1000000002;
                    /* try { // try from 007c92e0 to 007c92ef has its CatchHandler @ 007c9ea0 */
  local_2a0[2] = uVar25;
  local_280 = uVar25;
  FUN_007ad8e0(*puVar15,&local_280,local_2a0 + 2,local_2a0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9308 to 007c930f has its CatchHandler @ 007c9ef0 */
  FUN_0097bd60(*puVar15,&local_260);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c932c to 007c9353 has its CatchHandler @ 007c9ef0 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_e0);
  FUN_00974d50(lVar26,&local_e0,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_280 = (ulong)DAT_0282c360 | 0x8000000000;
  local_278 = 0x400000002;
                    /* try { // try from 007c937c to 007c938f has its CatchHandler @ 007c9ef0 */
  FUN_0097ee60(*puVar15,&local_280,0x80000000,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar24 = uVar24 | 0x8000000000;
  local_278 = 0x1000000002;
  local_288 = 0x1000000002;
  local_2a0[0] = (ulong)DAT_0282c380 | 0x8000000000;
  local_2a0[1] = 0x1000000002;
                    /* try { // try from 007c93c0 to 007c93cf has its CatchHandler @ 007c9e9c */
  local_2a0[2] = uVar24;
  local_280 = uVar24;
  FUN_007ad8e0(*puVar15,&local_280,local_2a0 + 2,local_2a0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c93e8 to 007c93ef has its CatchHandler @ 007c9ef0 */
  FUN_0097bd60(*puVar15,&local_260);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c940c to 007c942b has its CatchHandler @ 007c9ef0 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_140);
  FUN_00974d50(lVar26,&local_140,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_280 = 1;
  local_270 = DAT_0c7b1c38;
  local_26c = 0xffffffffffffffff;
  local_264 = 0;
                    /* try { // try from 007c946c to 007c948b has its CatchHandler @ 007c9e98 */
  FUN_0097fe20(*puVar15,&DAT_0282b3f8,&DAT_0282b3f8,&local_280,0,0x40000000);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c94a4 to 007c94b7 has its CatchHandler @ 007c9ef0 */
  FUN_0097b280(*puVar15,&DAT_0282b418,0xffffffffffffffff);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c94d0 to 007c94df has its CatchHandler @ 007c9ef0 */
  FUN_007c4b40(*puVar15,&DAT_0282b418,&DAT_0282b418,&DAT_0282b3f8);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_280 = CONCAT44(_DAT_0282b41c,DAT_0282b418);
  local_278 = CONCAT44(local_278._4_4_,DAT_0282b420);
                    /* try { // try from 007c9508 to 007c9513 has its CatchHandler @ 007c9ef0 */
  FUN_007c4c90(*puVar15,&DAT_0282c360,&local_280);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = 0x1000000002;
  local_288 = 0x1000000002;
  local_2a0[0] = (ulong)DAT_0282c360 | 0x8000000000;
  local_2a0[1] = 0x1000000002;
                    /* try { // try from 007c9544 to 007c9553 has its CatchHandler @ 007c9e94 */
  local_2a0[2] = uVar24;
  local_280 = uVar24;
  FUN_007ad8e0(*puVar15,&local_280,local_2a0 + 2,local_2a0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c956c to 007c9573 has its CatchHandler @ 007c9ef0 */
  FUN_0097bd60(*puVar15,&local_260);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c9590 to 007c95b7 has its CatchHandler @ 007c9ef0 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_1a0);
  FUN_00974d50(lVar26,&local_1a0,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_280 = (ulong)DAT_0282c360 | 0x8000000000;
  local_278 = 0x400000002;
                    /* try { // try from 007c95e0 to 007c95f3 has its CatchHandler @ 007c9ef0 */
  FUN_0097ee60(*puVar15,&local_280,0x80000000,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_278 = 0x1000000002;
  local_288 = 0x1000000002;
  local_2a0[0] = (ulong)DAT_0282c380 | 0x8000000000;
  local_2a0[1] = 0x1000000002;
                    /* try { // try from 007c9620 to 007c962f has its CatchHandler @ 007c9e90 */
  local_2a0[2] = uVar25;
  local_280 = uVar25;
  FUN_007ad8e0(*puVar15,&local_280,local_2a0 + 2,local_2a0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9648 to 007c964f has its CatchHandler @ 007c9ef0 */
  FUN_0097bd60(*puVar15,&local_260);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c966c to 007c968b has its CatchHandler @ 007c9ef0 */
  FUN_0097a6f0(lVar26 + 0xe0,local_200);
  FUN_00974d50(lVar26,local_200,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c96a8 to 007c96c7 has its CatchHandler @ 007c9ef0 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_260);
  FUN_00974d50(lVar26,&local_260,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  puVar15 = local_218;
  if (local_218 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_218;
    if (pvVar14 != (void *)0x0) {
      local_218[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  puVar15 = local_1b8;
  if (local_1b8 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_1b8;
    if (pvVar14 != (void *)0x0) {
      local_1b8[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  puVar15 = local_158;
  if (local_158 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_158;
    if (pvVar14 != (void *)0x0) {
      local_158[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  puVar15 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_f8;
    if (pvVar14 != (void *)0x0) {
      local_f8[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  puVar15 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_98;
    if (pvVar14 != (void *)0x0) {
      local_98[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  FUN_007aa410(*puVar15,&DAT_0282b818);
  plVar23 = (long *)*puVar15;
  plVar13 = plVar23;
  if (plVar23[0x13] != plVar23[0x14]) {
    FUN_0097a0e0(plVar23 + 0x10,1);
    plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
    plVar13 = (long *)*plVar13;
  }
  *(undefined1 *)(plVar23 + 4) = 0;
  uVar25 = (ulong)(uint)((int)plVar13[3] - (int)plVar13[1]);
  (**(code **)(*plVar13 + 8))();
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  *puVar15 = 0;
  puVar12 = (ulong *)__emutls_get_address(&DAT_00c99bf0);
  FUN_005b14ac(*puVar12,*puVar12 + uVar25);
  uVar24 = *puVar12;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
  uVar22 = uVar24 + uVar25 + 0xf & 0xfffffffffffffff0;
  lVar26 = (*plVar13 + uVar24 + uVar25) - (uVar25 + uVar22);
  DAT_0282b3c8 = uVar28;
  *plVar13 = lVar26;
  *puVar12 = uVar22;
  pvVar14 = operator_new(0x330);
                    /* try { // try from 007c9854 to 007c9863 has its CatchHandler @ 007c9e88 */
  FUN_0097af10(pvVar14,uVar22,lVar26,0);
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar24 = *(ulong *)((long)pvVar14 + 0x68);
  *puVar15 = pvVar14;
  *(ulong *)((long)pvVar14 + 0x68) = uVar24 & 0xffffffff7fffffff;
  *(ulong *)((long)pvVar14 + 0x58) =
       *(ulong *)((long)pvVar14 + 0x58) & (1L << ((ulong)DAT_02828cb0 & 0x3f) ^ 0xffffffffffffffffU)
  ;
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bf0);
  local_e0 = local_e0 & 0xffffffffffffff00;
  uVar28 = *puVar15;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  local_c0 = 0;
  local_98 = (undefined8 *)0x0;
  local_88 = 0xffffffffffffffff;
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
    puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    pvVar14 = (void *)*puVar15;
  }
                    /* try { // try from 007c98e4 to 007c98f7 has its CatchHandler @ 007c9ee8 */
  FUN_0097b280(pvVar14,&DAT_0282b3f8,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9910 to 007c9923 has its CatchHandler @ 007c9ee8 */
  FUN_0097b280(*puVar15,&DAT_0282b438,0x3f490fda);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_138 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_12c = 0xffffffffffffffff;
  local_140 = 0x3e800000;
  local_130 = DAT_0c7b1c38;
  local_124 = 0;
                    /* try { // try from 007c995c to 007c996f has its CatchHandler @ 007c9e80 */
  FUN_00980300(*puVar15,&DAT_0282b3f8,&local_140);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9988 to 007c9993 has its CatchHandler @ 007c9ee8 */
  FUN_0097cdd0(*puVar15,&local_e0,1);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_138 = CONCAT44(DAT_0c7b1c30._4_4_,(int)DAT_0c7b1c30);
  local_12c = 0xffffffffffffffff;
  local_140 = 0x40490fdb;
  local_130 = DAT_0c7b1c38;
  local_124 = 0;
                    /* try { // try from 007c99d0 to 007c99df has its CatchHandler @ 007c9e78 */
  FUN_00980300(*puVar15,&DAT_0282b418,&local_140);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_12c = 0xffffffff00000000;
  local_138 = DAT_0282b438;
  local_130 = DAT_0282b440;
  local_124 = 0;
  local_198 = DAT_0282b3f8;
  local_18c = 0xffffffff00000000;
  local_190 = DAT_0282b400;
  local_184 = 0;
                    /* try { // try from 007c9a30 to 007c9a4b has its CatchHandler @ 007c9e70 */
  FUN_0097f0f0(*puVar15,&DAT_0282b3f8,&local_140,&local_1a0,0,0,0);
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar26 = *plVar13;
                    /* try { // try from 007c9a68 to 007c9a87 has its CatchHandler @ 007c9ee8 */
  FUN_0097a6f0(lVar26 + 0xe0,&local_e0);
  FUN_00974d50(lVar26,&local_e0,*(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 8));
  if (puVar30 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 007c9aa0 to 007c9aab has its CatchHandler @ 007c9ee8 */
  FUN_007aa410(*puVar15,&DAT_0282b818);
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  plVar23 = (long *)*puVar15;
  plVar13 = plVar23;
  if (plVar23[0x13] != plVar23[0x14]) {
                    /* try { // try from 007c9acc to 007c9ad3 has its CatchHandler @ 007c9e68 */
    FUN_0097a0e0(plVar23 + 0x10,1);
    plVar13 = (long *)__emutls_get_address(&DAT_00c99bd0);
    plVar13 = (long *)*plVar13;
  }
  *(undefined1 *)(plVar23 + 4) = 0;
  uVar24 = (ulong)(uint)((int)plVar13[3] - (int)plVar13[1]);
  (**(code **)(*plVar13 + 8))();
  puVar15 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  *puVar15 = 0;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99bf0);
  FUN_005b14ac(*plVar13,*plVar13 + uVar24);
  *plVar13 = *plVar13 + uVar24;
  plVar13 = (long *)__emutls_get_address(&DAT_00c99c10);
  puVar15 = local_98;
  *plVar13 = *plVar13 - uVar24;
  if (local_98 != (undefined8 *)0x0) {
    pvVar14 = (void *)*local_98;
    if (pvVar14 != (void *)0x0) {
      local_98[1] = pvVar14;
      operator_delete(pvVar14);
    }
    operator_delete(puVar15);
  }
  DAT_0282b3d0 = uVar28;
  if (*(long *)(lVar9 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

