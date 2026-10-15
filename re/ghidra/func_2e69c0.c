// vaddr 0x2E69C0  ghidra 0x3E69C0  name=FUN_003e69c0  size=13668 instr-addr
// duvod: isolated yield x18
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Removing unreachable block (ram,0x003e7fcc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_003e69c0(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  size_t sVar13;
  long lVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  byte bVar21;
  uint uVar22;
  byte *pbVar23;
  long *plVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  undefined **ppuVar29;
  byte *pbVar30;
  uint uVar31;
  long lVar32;
  int *piVar33;
  long lVar35;
  int *piVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long *plVar39;
  char *pcVar40;
  ulong *puVar41;
  byte **ppbVar42;
  byte **ppbVar43;
  char *unaff_x22;
  void *pvVar44;
  ulong *puVar45;
  char *unaff_x24;
  void *pvVar46;
  undefined **unaff_x25;
  undefined4 uVar47;
  ulong uVar48;
  undefined **ppuVar49;
  undefined *puVar50;
  undefined2 uVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  undefined **local_1e8;
  undefined **ppuStack_1e0;
  undefined **local_1d8;
  char *local_1d0;
  ulong uStack_1c8;
  undefined **local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong local_1a0;
  long lStack_198;
  void *local_190;
  undefined8 uStack_188;
  long local_180;
  void *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined **local_150;
  undefined **ppuStack_148;
  undefined **local_140;
  undefined **local_138;
  undefined **local_130;
  undefined **ppuStack_128;
  undefined **local_120;
  undefined **local_118;
  undefined **local_110;
  ulong *puStack_108;
  ulong *local_100;
  ulong *local_f8;
  long local_f0;
  byte **ppbStack_e8;
  byte *local_e0;
  ulong local_d8;
  float local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_78 [3];
  int *piVar34;
  
  lVar3 = tpidr_el0;
  local_78[0] = *(long *)(lVar3 + 0x28);
  uStack_188 = 0;
  local_190 = (void *)0x0;
  local_178 = (void *)0x0;
  local_180 = 0;
  lStack_198 = 0;
  local_1a0 = 0;
  local_170 = 0;
  uStack_16c = 0xffffffff;
  uStack_168 = 0xffffffff;
  uStack_164 = 0xffffffff;
  uStack_160 = 0xffffffff;
  uStack_15c = 0xffffffffffffffff;
  ppuStack_148 = (undefined **)0x0;
  local_150 = (undefined **)0x0;
  local_138 = (undefined **)0x0;
  local_140 = (undefined **)0x0;
  ppuStack_128 = (undefined **)0x0;
  local_130 = (undefined **)0x0;
  local_118 = (undefined **)0x0;
  local_120 = (undefined **)0x0;
  puStack_108 = (ulong *)0x0;
  local_110 = (undefined **)0x0;
  local_f8 = (ulong *)0x0;
  local_100 = (ulong *)0x0;
  local_d0 = 1.0;
  lStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_b0 = &DAT_001dde50;
  uStack_a8 = (byte **)0x4;
  ppbStack_e8 = (byte **)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = (byte *)0x0;
                    /* try { // try from 003e6a50 to 003e6a57 has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = &DAT_001dde50;
    uStack_a8 = (byte **)0x4;
                    /* try { // try from 003e6a6c to 003e6a9b has its CatchHandler @ 003e9fbc */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    lVar9 = *(long *)*param_2 + lVar9 * 0x90;
    pvVar46 = *(void **)(lVar9 + 0x48);
    unaff_x22 = *(char **)(lVar9 + 0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_1a0,(ulong)unaff_x22,'\0');
    pvVar44 = (void *)((ulong)&local_1a0 | 1);
    if ((local_1a0 & 1) != 0) {
      pvVar44 = local_190;
    }
    memcpy(pvVar44,pvVar46,(size_t)unaff_x22);
  }
  local_b0 = "region";
  uStack_a8 = (byte **)0x6;
                    /* try { // try from 003e6ad0 to 003e6ad7 has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "region";
    uStack_a8 = (byte **)0x6;
                    /* try { // try from 003e6aec to 003e6b23 has its CatchHandler @ 003e9fb8 */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    lVar9 = *(long *)*param_2 + lVar9 * 0x90;
    unaff_x22 = *(char **)(lVar9 + 0x48);
    uVar10 = *(ulong *)(lVar9 + 0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &uStack_188,uVar10,'\0');
    pvVar44 = local_178;
    if ((uStack_188 & 1) == 0) {
      pvVar44 = (void *)((long)&uStack_188 + 1);
    }
    memcpy(pvVar44,unaff_x22,uVar10);
  }
  local_b0 = "compat";
  uStack_a8 = (byte **)0x6;
                    /* try { // try from 003e6b58 to 003e6b5f has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_1d0 = (char *)((ulong)local_1d0 & 0xffffffff00000000);
    local_b0 = "compat";
    uStack_a8 = (byte **)0x6;
                    /* try { // try from 003e6b78 to 003e6bd3 has its CatchHandler @ 003e9f6c */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    lVar9 = *(long *)*param_2 + lVar9 * 0x90;
    uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
    if ((uVar10 & 1) == 0) {
      local_90 = (undefined **)0x0;
      uStack_a8 = (byte **)0x0;
      local_b0 = (char *)0x0;
      uStack_98 = (undefined **)0x0;
      local_a0 = (undefined **)0x0;
      (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
    }
    local_170 = local_1d0._0_4_;
  }
  local_b0 = "roundModes";
  uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6bf0 to 003e6bf7 has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "roundModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6c0c to 003e6c33 has its CatchHandler @ 003e9fb4 */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "eeRoundMode";
    uStack_a8 = (byte **)0xb;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "roundModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6c50 to 003e6cc3 has its CatchHandler @ 003e9f8c */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "eeRoundMode";
      uStack_a8 = (byte **)0xb;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_16c = local_1d0._0_4_;
    }
    local_b0 = "roundModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6cd8 to 003e6cff has its CatchHandler @ 003e9fb0 */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "vuRoundMode";
    uStack_a8 = (byte **)0xb;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "roundModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6d1c to 003e6d8f has its CatchHandler @ 003e9f88 */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "vuRoundMode";
      uStack_a8 = (byte **)0xb;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_168 = local_1d0._0_4_;
      uStack_164 = local_1d0._0_4_;
    }
    local_b0 = "roundModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6da4 to 003e6dcb has its CatchHandler @ 003e9fac */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "vu0RoundMode";
    uStack_a8 = (byte **)0xc;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "roundModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6de8 to 003e6e5b has its CatchHandler @ 003e9f84 */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "vu0RoundMode";
      uStack_a8 = (byte **)0xc;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_168 = local_1d0._0_4_;
    }
    local_b0 = "roundModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6e70 to 003e6e97 has its CatchHandler @ 003e9fa4 */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "vu1RoundMode";
    uStack_a8 = (byte **)0xc;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "roundModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6eb4 to 003e6f27 has its CatchHandler @ 003e9f7c */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "vu1RoundMode";
      uStack_a8 = (byte **)0xc;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_164 = local_1d0._0_4_;
    }
  }
  local_b0 = "clampModes";
  uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6f44 to 003e6f4b has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "clampModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6f60 to 003e6f87 has its CatchHandler @ 003e9fa8 */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "eeClampMode";
    uStack_a8 = (byte **)0xb;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "clampModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e6fa4 to 003e7017 has its CatchHandler @ 003e9f80 */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "eeClampMode";
      uStack_a8 = (byte **)0xb;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_160 = local_1d0._0_4_;
    }
    local_b0 = "clampModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e702c to 003e7053 has its CatchHandler @ 003e9fa0 */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "vuClampMode";
    uStack_a8 = (byte **)0xb;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "clampModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e7070 to 003e70e3 has its CatchHandler @ 003e9f78 */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "vuClampMode";
      uStack_a8 = (byte **)0xb;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_15c = CONCAT44(local_1d0._0_4_,local_1d0._0_4_);
    }
    local_b0 = "clampModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e70f8 to 003e711f has its CatchHandler @ 003e9f9c */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "vu0ClampMode";
    uStack_a8 = (byte **)0xc;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "clampModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e713c to 003e71af has its CatchHandler @ 003e9f74 */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "vu0ClampMode";
      uStack_a8 = (byte **)0xc;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_15c = CONCAT44(uStack_15c._4_4_,local_1d0._0_4_);
    }
    local_b0 = "clampModes";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e71c4 to 003e71eb has its CatchHandler @ 003e9f98 */
    uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    local_b0 = "vu1ClampMode";
    uStack_a8 = (byte **)0xc;
    lVar9 = FUN_00b7b3d0(*param_2,uVar11,&local_b0);
    if (lVar9 != -1) {
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,0xffffffff);
      local_b0 = "clampModes";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e7208 to 003e727b has its CatchHandler @ 003e9f70 */
      uVar11 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      local_b0 = "vu1ClampMode";
      uStack_a8 = (byte **)0xc;
      lVar9 = FUN_00b7b3d0(plVar39,uVar11,&local_b0);
      lVar9 = *plVar39 + lVar9 * 0x90;
      uVar10 = FUN_003ea500(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),&local_1d0);
      if ((uVar10 & 1) == 0) {
        local_90 = (undefined **)0x0;
        uStack_a8 = (byte **)0x0;
        local_b0 = (char *)0x0;
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        (*(code *)PTR_FUN_00c9ad70)("could not deserialize value",0x1b,&local_b0,DAT_00c9ad58);
      }
      uStack_15c = CONCAT44(local_1d0._0_4_,(undefined4)uStack_15c);
    }
  }
  local_b0 = "gameFixes";
  uStack_a8 = (byte **)0x9;
                    /* try { // try from 003e7298 to 003e729f has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "gameFixes";
    uStack_a8 = (byte **)0x9;
                    /* try { // try from 003e72c4 to 003e72cb has its CatchHandler @ 003e9f60 */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    if (*(long *)(*(long *)*param_2 + lVar9 * 0x90 + 0x70) != -1) {
      local_b0 = "gameFixes";
      uStack_a8 = (byte **)0x9;
                    /* try { // try from 003e72f8 to 003e72ff has its CatchHandler @ 003e9f44 */
      lVar9 = FUN_00b7b3d0((long *)*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      lVar17 = *plVar39;
      lVar9 = *(long *)(lVar17 + lVar9 * 0x90 + 0x70);
      if (lVar9 != -1) {
        ppuVar49 = (undefined **)((ulong)&local_1d0 | 1);
        do {
          lVar17 = lVar17 + lVar9 * 0x90;
          uVar10 = *(ulong *)(lVar17 + 0x50);
          if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 003e9eb0 to 003e9eb7 has its CatchHandler @ 003ea078 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          unaff_x24 = *(char **)(lVar17 + 0x48);
          if (uVar10 < 0x17) {
            local_1d0 = (char *)CONCAT71(local_1d0._1_7_,(char)((int)uVar10 << 1));
            unaff_x25 = ppuVar49;
            if (uVar10 != 0) goto LAB_003e739c;
          }
          else {
            uVar27 = uVar10 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 003e7384 to 003e738b has its CatchHandler @ 003ea010 */
            unaff_x25 = (undefined **)operator_new(uVar27);
            local_1d0 = (char *)(uVar27 | 1);
            uStack_1c8 = uVar10;
            local_1c0 = unaff_x25;
LAB_003e739c:
            memcpy(unaff_x25,unaff_x24,uVar10);
          }
          *(char *)((long)unaff_x25 + uVar10) = '\0';
          bVar21 = (byte)local_1d0._0_1_ & 1;
          uVar27 = (ulong)((byte)local_1d0._0_1_ >> 1);
          uVar10 = uVar27;
          if (((ulong)local_1d0 & 1) != 0) {
            uVar10 = uStack_1c8;
          }
          if (3 < uVar10) {
            ppuVar29 = ppuVar49;
            if (((ulong)local_1d0 & 1) != 0) {
              ppuVar29 = local_1c0;
            }
            if (*(int *)((long)ppuVar29 + (uVar10 - 4)) == 0x6b636148) {
                    /* try { // try from 003e745c to 003e7467 has its CatchHandler @ 003e9fc4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1d0,uVar10 - 4,0xffffffffffffffff);
              uVar10 = 0;
              do {
                iVar8 = std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)&local_1d0,(&PTR_s_FpuMul_00c62160)[uVar10]);
                ppuVar29 = local_150;
                if (iVar8 == 0) {
                  ppuVar15 = local_150;
                  unaff_x24 = (char *)local_150;
                  if (local_150 != ppuStack_148) {
                    while (uVar10 != *(uint *)ppuVar15) {
                      ppuVar15 = (undefined **)((long)ppuVar15 + 4);
                      if (ppuVar15 == ppuStack_148) goto LAB_003e74c8;
                    }
                  }
                  if (ppuVar15 == ppuStack_148) {
LAB_003e74c8:
                    uVar47 = (undefined4)uVar10;
                    if (ppuStack_148 != local_140) {
                      *(undefined4 *)ppuStack_148 = uVar47;
                      ppuStack_148 = (undefined **)((long)ppuStack_148 + 4);
                      goto LAB_003e7448;
                    }
                    uVar27 = (long)ppuStack_148 - (long)local_150;
                    lVar17 = (long)uVar27 >> 2;
                    uVar10 = lVar17 + 1;
                    if (uVar10 >> 0x3e != 0) {
                    /* try { // try from 003e9ef8 to 003e9eff has its CatchHandler @ 003e9f68 */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar10 <= (ulong)((long)uVar27 >> 1)) {
                      uVar10 = (long)uVar27 >> 1;
                    }
                    if (0x7ffffffffffffffb < uVar27) {
                      uVar10 = 0x3fffffffffffffff;
                    }
                    if (uVar10 == 0) {
                      unaff_x25 = (undefined **)0x0;
                      ppuVar15 = (undefined **)((undefined4 *)(lVar17 * 4) + 1);
                      *(undefined4 *)(lVar17 * 4) = uVar47;
                    }
                    else {
                      if (uVar10 >> 0x3e != 0) {
                    /* try { // try from 003e9f08 to 003e9f13 has its CatchHandler @ 003e9f68 */
                    /* WARNING: Subroutine does not return */
                        FUN_003d5c00(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                    /* try { // try from 003e7520 to 003e7523 has its CatchHandler @ 003e9f28 */
                      unaff_x25 = (undefined **)operator_new(uVar10 << 2);
                      pcVar2 = (char *)((long)unaff_x25 + lVar17 * 4);
                      ppuVar15 = (undefined **)(pcVar2 + 4);
                      *(undefined4 *)pcVar2 = uVar47;
                    }
                    if (0 < (long)uVar27) {
                      memcpy(unaff_x25,ppuVar29,uVar27);
                    }
                    local_140 = (undefined **)((long)unaff_x25 + uVar10 * 4);
                    unaff_x24 = (char *)ppuVar29;
                    ppuVar12 = ppuVar29;
                    local_150 = unaff_x25;
                    ppuStack_148 = ppuVar15;
                    goto joined_r0x003e7560;
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 != 0x13);
              bVar21 = (byte)local_1d0._0_1_ & 1;
              uVar27 = (ulong)((byte)local_1d0._0_1_ >> 1);
            }
          }
          local_b0 = (char *)ppuVar49;
          uStack_a8 = (byte **)uVar27;
          if (bVar21 != 0) {
            local_b0 = (char *)local_1c0;
            uStack_a8 = (byte **)uStack_1c8;
          }
          local_a0 = (undefined **)*param_1;
          uStack_98 = (undefined **)param_1[1];
                    /* try { // try from 003e740c to 003e7423 has its CatchHandler @ 003ea050 */
          FUN_00b5c180(&local_1e8,
                       "[GameDB] Invalid gamefix: \'{}\', specified for serial: \'{}\'. Dropping!",
                       0x45,0xdd,&local_b0);
                    /* try { // try from 003e7424 to 003e7437 has its CatchHandler @ 003ea04c */
          FUN_00988ad0(&PTR_FUN_00c9aa28,0xc,&local_1e8);
          ppuVar29 = (undefined **)((ulong)local_1e8 & 1);
          ppuVar12 = local_1d8;
joined_r0x003e7560:
          if (ppuVar29 != (undefined **)0x0) {
            operator_delete(ppuVar12);
          }
LAB_003e7448:
          unaff_x22 = "[GameDB] Invalid gamefix: \'{}\', specified for serial: \'{}\'. Dropping!";
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          lVar17 = *plVar39;
          lVar9 = *(long *)(lVar17 + lVar9 * 0x90 + 0x80);
        } while (lVar9 != -1);
      }
    }
  }
  local_b0 = "speedHacks";
  uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e75ac to 003e75b3 has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "speedHacks";
    uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e75c8 to 003e75cf has its CatchHandler @ 003e9f5c */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    if (*(long *)(*(long *)*param_2 + lVar9 * 0x90 + 0x70) != -1) {
      local_b0 = "speedHacks";
      uStack_a8 = (byte **)0xa;
                    /* try { // try from 003e75fc to 003e7603 has its CatchHandler @ 003e9f40 */
      lVar9 = FUN_00b7b3d0((long *)*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      lVar17 = *plVar39;
      lVar9 = *(long *)(lVar17 + lVar9 * 0x90 + 0x70);
      if (lVar9 != -1) {
        ppuVar49 = (undefined **)((ulong)&local_1d0 | 1);
        unaff_x24 = "[GameDB] Invalid speedhack: \'{}\', specified for serial: \'{}\'. Dropping!";
        do {
          lVar17 = lVar17 + lVar9 * 0x90;
          uVar10 = *(ulong *)(lVar17 + 0x20);
          if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 003e9eb8 to 003e9ebf has its CatchHandler @ 003ea074 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          unaff_x22 = *(char **)(lVar17 + 0x18);
          if (uVar10 < 0x17) {
            local_1d0 = (char *)CONCAT71(local_1d0._1_7_,(char)((int)uVar10 << 1));
            ppuVar29 = ppuVar49;
            if (uVar10 != 0) goto LAB_003e76ac;
          }
          else {
            uVar27 = uVar10 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 003e7694 to 003e769b has its CatchHandler @ 003ea00c */
            ppuVar29 = (undefined **)operator_new(uVar27);
            local_1d0 = (char *)(uVar27 | 1);
            uStack_1c8 = uVar10;
            local_1c0 = ppuVar29;
LAB_003e76ac:
            memcpy(ppuVar29,unaff_x22,uVar10);
          }
          *(char *)((long)ppuVar29 + uVar10) = '\0';
          bVar21 = (byte)local_1d0._0_1_ & 1;
          uVar10 = (ulong)((byte)local_1d0._0_1_ >> 1);
          if (((ulong)local_1d0 & 1) != 0) {
            uVar10 = uStack_1c8;
          }
          if (uVar10 < 9) {
LAB_003e7718:
            local_b0 = (char *)ppuVar49;
            if (bVar21 != 0) {
              local_b0 = (char *)local_1c0;
            }
            uStack_a8 = (byte **)0x0;
            local_a0 = (undefined **)*param_1;
            uStack_98 = (undefined **)param_1[1];
                    /* try { // try from 003e7734 to 003e774b has its CatchHandler @ 003ea054 */
            FUN_00b5c180(&local_1e8,
                         "[GameDB] Invalid speedhack: \'{}\', specified for serial: \'{}\'. Dropping!"
                         ,0x47,0xdc,&local_b0);
                    /* try { // try from 003e774c to 003e775f has its CatchHandler @ 003ea058 */
            FUN_00988ad0(&PTR_FUN_00c9aa28,0xc,&local_1e8);
            ppuVar29 = local_1d8;
            if (((ulong)local_1e8 & 1) != 0) {
LAB_003e776c:
              operator_delete(ppuVar29);
            }
          }
          else {
            ppuVar29 = ppuVar49;
            if (((ulong)local_1d0 & 1) != 0) {
              ppuVar29 = local_1c0;
            }
            plVar24 = (long *)((long)ppuVar29 + (uVar10 - 9));
            if (*plVar24 != 0x6361486465657053 || (char)plVar24[1] != 'k') goto LAB_003e7718;
                    /* try { // try from 003e7784 to 003e778f has its CatchHandler @ 003e9fc0 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1d0,uVar10 - 9,0xffffffffffffffff);
            iVar8 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             *)&local_1d0,"mvuFlag");
            if (iVar8 == 0) {
              ppuVar29 = local_138;
              if (local_138 == local_130) {
                uVar47 = 0;
                unaff_x22 = (char *)local_138;
              }
              else {
                do {
                  ppuVar15 = ppuVar29 + 1;
                  iVar8 = *(int *)ppuVar29;
                  ppuVar29 = ppuVar15;
                } while (iVar8 != 0 && ppuVar15 != local_130);
                unaff_x22 = (char *)local_130;
                if (iVar8 == 0) goto LAB_003e77a4;
                uVar47 = 0;
              }
            }
            else {
LAB_003e77a4:
              iVar8 = std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 *)&local_1d0,"InstantVU1");
              if (iVar8 == 0) {
                ppuVar29 = local_138;
                if (local_138 == local_130) {
                  uVar47 = 1;
                  unaff_x22 = (char *)local_138;
                }
                else {
                  do {
                    ppuVar15 = ppuVar29 + 1;
                    iVar8 = *(int *)ppuVar29;
                    ppuVar29 = ppuVar15;
                  } while (iVar8 != 1 && ppuVar15 != local_130);
                  unaff_x22 = (char *)local_130;
                  if (iVar8 == 1) goto LAB_003e77b8;
                  uVar47 = 1;
                }
              }
              else {
LAB_003e77b8:
                iVar8 = std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)&local_1d0,"MTVU");
                if (iVar8 != 0) {
LAB_003e77cc:
                  bVar21 = (byte)local_1d0._0_1_ & 1;
                  goto LAB_003e7718;
                }
                ppuVar29 = local_138;
                if (local_138 == local_130) {
                  uVar47 = 2;
                  unaff_x22 = (char *)local_138;
                }
                else {
                  do {
                    ppuVar15 = ppuVar29 + 1;
                    iVar8 = *(int *)ppuVar29;
                    ppuVar29 = ppuVar15;
                  } while (iVar8 != 2 && ppuVar15 != local_130);
                  unaff_x22 = (char *)local_130;
                  if (iVar8 == 2) goto LAB_003e77cc;
                  uVar47 = 2;
                }
              }
            }
            ppuVar29 = local_138;
            iVar8 = atoi(*(char **)(*plVar39 + lVar9 * 0x90 + 0x48));
            if (ppuStack_128 <= unaff_x22) {
              unaff_x22 = (char *)((long)unaff_x22 - (long)ppuVar29);
              lVar17 = (long)unaff_x22 >> 3;
              uVar10 = lVar17 + 1;
              if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 003e9f00 to 003e9f07 has its CatchHandler @ 003e9f64 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar27 = (long)ppuStack_128 - (long)ppuVar29 >> 2;
              if (uVar10 <= uVar27) {
                uVar10 = uVar27;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_128 - (long)ppuVar29)) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                ppuVar12 = (undefined **)0x0;
                ppuVar15 = (undefined **)(lVar17 * 8);
                *(undefined4 *)ppuVar15 = uVar47;
                *(int *)((long)ppuVar15 + 4) = iVar8;
              }
              else {
                if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 003e9f14 to 003e9f1f has its CatchHandler @ 003e9f64 */
                    /* WARNING: Subroutine does not return */
                  FUN_003d5c00(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 003e7908 to 003e790b has its CatchHandler @ 003e9f24 */
                ppuVar12 = (undefined **)operator_new(uVar10 << 3);
                ppuVar15 = ppuVar12 + lVar17;
                *(undefined4 *)ppuVar15 = uVar47;
                *(int *)((long)ppuVar15 + 4) = iVar8;
              }
              if (0 < (long)unaff_x22) {
                memcpy(ppuVar12,ppuVar29,(size_t)unaff_x22);
              }
              ppuStack_128 = ppuVar12 + uVar10;
              local_130 = ppuVar15 + 1;
              local_138 = ppuVar12;
              if (ppuVar29 == (undefined **)0x0) goto LAB_003e7770;
              goto LAB_003e776c;
            }
            *(undefined4 *)unaff_x22 = uVar47;
            *(int *)((long)unaff_x22 + 4) = iVar8;
            local_130 = (undefined **)((long)unaff_x22 + 8);
          }
LAB_003e7770:
          unaff_x25 = (undefined **)0x90;
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          lVar17 = *plVar39;
          lVar9 = *(long *)(lVar17 + lVar9 * 0x90 + 0x80);
        } while (lVar9 != -1);
      }
    }
  }
  local_b0 = "gsHWFixes";
  uStack_a8 = (byte **)0x9;
                    /* try { // try from 003e7988 to 003e798f has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "gsHWFixes";
    uStack_a8 = (byte **)0x9;
                    /* try { // try from 003e79a8 to 003e79b3 has its CatchHandler @ 003e9f58 */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    unaff_x25 = (undefined **)*param_2;
    puVar50 = *unaff_x25;
    lVar9 = *(long *)(puVar50 + lVar9 * 0x90 + 0x70);
    if (lVar9 != -1) {
      uVar10 = (long)&local_90 + 4;
LAB_003e7a40:
      lVar17 = 0;
      pcVar2 = *(char **)(puVar50 + lVar9 * 0x90 + 0x18);
      uVar27 = *(ulong *)(puVar50 + lVar9 * 0x90 + 0x20);
      do {
        unaff_x22 = (&PTR_s_autoFlush_00c612f8)[lVar17];
        sVar13 = strlen(unaff_x22);
        bVar7 = sVar13 == uVar27;
        sVar1 = sVar13;
        if (uVar27 <= sVar13) {
          sVar1 = uVar27;
        }
        if (sVar1 != 0) {
          iVar8 = memcmp(pcVar2,unaff_x22,sVar1);
          bVar7 = false;
          if (iVar8 == 0) {
            bVar7 = sVar13 == uVar27;
          }
        }
        if (bVar7) {
          iVar8 = (int)lVar17;
          if (1 < iVar8 - 0x1fU) {
            bVar7 = true;
            bVar21 = puVar50[lVar9 * 0x90];
            goto joined_r0x003e7b38;
          }
          if ((puVar50[lVar9 * 0x90] & 1) == 0) {
            unaff_x22 = (char *)0x0;
            ppuVar49 = (undefined **)0x0;
            local_1e8 = (undefined **)0x0;
            ppuStack_1e0 = (undefined **)0x0;
            if (iVar8 == 0x1f) goto LAB_003e7d04;
          }
          else {
            ppuVar49 = *(undefined ***)(puVar50 + lVar9 * 0x90 + 0x48);
            unaff_x22 = *(char **)(puVar50 + lVar9 * 0x90 + 0x50);
            local_1e8 = ppuVar49;
            ppuStack_1e0 = (undefined **)unaff_x22;
            if (iVar8 == 0x1f) {
              if ((undefined **)unaff_x22 == (undefined **)0x0) goto LAB_003e7d04;
              uVar48 = 0;
              ppuVar29 = &PTR_s_GSC_GodHand_00c78168;
              goto LAB_003e7bd4;
            }
          }
          unaff_x22 = (char *)ppuStack_1e0;
          ppuVar49 = local_1e8;
          uVar25 = FUN_00722e30(&local_1e8);
          uVar48 = uVar25 & 0xffffffff;
          uVar26 = (uint)uVar25;
          goto joined_r0x003e7c00;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x21);
      lVar17 = 0;
      bVar7 = false;
      bVar21 = puVar50[lVar9 * 0x90];
joined_r0x003e7b38:
      if ((bVar21 & 1) != 0) {
        pcVar40 = *(char **)(puVar50 + lVar9 * 0x90 + 0x48);
        pbVar23 = *(byte **)(puVar50 + lVar9 * 0x90 + 0x50);
        if (pbVar23 == (byte *)0x0) {
          uVar26 = 0;
        }
        else {
          uVar26 = (uint)(*pcVar40 == '-');
        }
        pbVar30 = (byte *)(pcVar40 + (long)pbVar23);
        uVar48 = (ulong)uVar26;
        pbVar18 = (byte *)(pcVar40 + uVar48);
        pbVar28 = pbVar30;
        if (pbVar18 != pbVar30) {
          lVar14 = (long)pbVar23 - uVar48;
          pbVar23 = pbVar18;
          do {
            bVar21 = *pbVar23;
            uVar26 = (uint)bVar21;
            if (bVar21 != 0x30) {
              if ((lVar14 != 0) && (pbVar28 = pbVar23, bVar21 - 0x30 < 10)) {
                lVar32 = 10;
                plVar39 = local_78;
                lVar14 = -0x29 - (long)&local_b0;
                uVar25 = (long)&local_88 + 4;
                goto LAB_003e7c48;
              }
              break;
            }
            pbVar23 = pbVar23 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (pbVar28 == pbVar18) goto LAB_003e7ebc;
        uVar31 = 0;
        if (uVar48 == 0) goto LAB_003e7ecc;
        goto LAB_003e7ce8;
      }
      uVar26 = 1;
      if (bVar7) goto LAB_003e7ef4;
      goto LAB_003e7ab8;
    }
  }
LAB_003e7fd0:
  local_b0 = "memcardFilters";
  uStack_a8 = (byte **)0xe;
                    /* try { // try from 003e7fe8 to 003e7fef has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "memcardFilters";
    uStack_a8 = (byte **)0xe;
                    /* try { // try from 003e8004 to 003e800b has its CatchHandler @ 003e9f54 */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    if (*(long *)(*(long *)*param_2 + lVar9 * 0x90 + 0x70) != -1) {
      local_b0 = "memcardFilters";
      uStack_a8 = (byte **)0xe;
                    /* try { // try from 003e8038 to 003e8043 has its CatchHandler @ 003e9f3c */
      lVar9 = FUN_00b7b3d0((long *)*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      lVar17 = *plVar39;
      lVar9 = *(long *)(lVar17 + lVar9 * 0x90 + 0x70);
      if (lVar9 != -1) {
        ppuVar49 = (undefined **)((ulong)&local_b0 | 1);
        unaff_x22 = &DAT_00000018;
        do {
          lVar17 = lVar17 + lVar9 * 0x90;
          uVar10 = *(ulong *)(lVar17 + 0x50);
          if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 003e9ec0 to 003e9ec7 has its CatchHandler @ 003ea070 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          pvVar44 = *(void **)(lVar17 + 0x48);
          if (uVar10 < 0x17) {
            local_b0 = (char *)CONCAT71(local_b0._1_7_,(char)((int)uVar10 << 1));
            unaff_x24 = (char *)ppuVar49;
            if (uVar10 != 0) goto LAB_003e811c;
            *(char *)ppuVar49 = '\0';
            if (local_100 < local_f8) goto LAB_003e8084;
LAB_003e813c:
            puVar45 = local_100;
            puVar4 = puStack_108;
            unaff_x24 = (char *)(((long)local_100 - (long)puStack_108) / 0x18);
            unaff_x25 = (undefined **)((long)unaff_x24 + 1);
            if ((undefined **)0xaaaaaaaaaaaaaaa < unaff_x25) {
                    /* try { // try from 003e9ec8 to 003e9ecf has its CatchHandler @ 003ea034 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            lVar17 = (long)local_f8 - (long)puStack_108 >> 3;
            ppuVar29 = (undefined **)(lVar17 * 0x5555555555555556);
            if (unaff_x25 <= ppuVar29) {
              unaff_x25 = ppuVar29;
            }
            if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
              unaff_x25 = (undefined **)0xaaaaaaaaaaaaaaa;
            }
            if (unaff_x25 == (undefined **)0x0) {
              pvVar44 = (void *)0x0;
            }
            else {
              if ((undefined **)0xaaaaaaaaaaaaaaa < unaff_x25) {
                    /* try { // try from 003e9ed8 to 003e9ee3 has its CatchHandler @ 003ea034 */
                    /* WARNING: Subroutine does not return */
                FUN_003d5c00("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 003e81ac to 003e81af has its CatchHandler @ 003e9ffc */
              pvVar44 = operator_new((long)unaff_x25 * 0x18);
            }
            ppuVar29 = local_a0;
            puVar5 = puStack_108;
            puStack_108 = (ulong *)((long)pvVar44 + (long)unaff_x24 * 0x18);
            puStack_108[1] = (ulong)uStack_a8;
            *puStack_108 = (ulong)local_b0;
            local_f8 = (ulong *)((long)pvVar44 + (long)unaff_x25 * 0x18);
            uStack_a8 = (byte **)0x0;
            local_a0 = (undefined **)0x0;
            puStack_108[2] = (ulong)ppuVar29;
            local_b0 = (char *)0x0;
            puVar6 = puStack_108 + 3;
            if (puVar45 != puVar4) {
              do {
                uVar27 = puVar45[-2];
                uVar10 = puVar45[-3];
                puStack_108[-1] = puVar45[-1];
                puStack_108[-2] = uVar27;
                puStack_108[-3] = uVar10;
                puStack_108 = puStack_108 + -3;
                puVar45[-2] = 0;
                puVar45[-1] = 0;
                puVar45[-3] = 0;
                puVar45 = puVar45 + -3;
                puVar41 = local_100;
              } while (puVar45 != puVar4);
              while (puVar4 = puVar41, local_100 = puVar6, puVar45 = puVar5, puVar6 = local_100,
                    puVar4 != puVar5) {
                puVar41 = puVar4 + -3;
                if ((*puVar41 & 1) != 0) {
                  operator_delete((void *)puVar4[-1]);
                  puVar6 = local_100;
                }
              }
            }
            local_100 = puVar6;
            if (puVar45 != (ulong *)0x0) {
              operator_delete(puVar45);
            }
            if (((ulong)local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          else {
            unaff_x25 = (undefined **)(uVar10 + 0x10 & 0xfffffffffffffff0);
                    /* try { // try from 003e8104 to 003e810b has its CatchHandler @ 003ea008 */
            unaff_x24 = (char *)operator_new((ulong)unaff_x25);
            local_b0 = (char *)((ulong)unaff_x25 | 1);
            uStack_a8 = (byte **)uVar10;
            local_a0 = (undefined **)unaff_x24;
LAB_003e811c:
            memcpy(unaff_x24,pvVar44,uVar10);
            *(char *)((long)unaff_x24 + uVar10) = '\0';
            if (local_f8 <= local_100) goto LAB_003e813c;
LAB_003e8084:
            local_100[1] = (ulong)uStack_a8;
            *local_100 = (ulong)local_b0;
            local_100[2] = (ulong)local_a0;
            local_100 = local_100 + 3;
          }
          lVar17 = *plVar39;
          lVar9 = *(long *)(lVar17 + lVar9 * 0x90 + 0x80);
        } while (lVar9 != -1);
      }
    }
  }
  local_b0 = "patches";
  uStack_a8 = (byte **)0x7;
                    /* try { // try from 003e828c to 003e8293 has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "patches";
    uStack_a8 = (byte **)0x7;
                    /* try { // try from 003e82ac to 003e82b3 has its CatchHandler @ 003e9f50 */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    if (*(long *)(*(long *)*param_2 + lVar9 * 0x90 + 0x70) != -1) {
      local_b0 = "patches";
      uStack_a8 = (byte **)0x7;
                    /* try { // try from 003e82e4 to 003e82eb has its CatchHandler @ 003e9f38 */
      lVar9 = FUN_00b7b3d0((long *)*param_2,param_2[1],&local_b0);
      unaff_x22 = (char *)*param_2;
      puVar50 = *(undefined **)unaff_x22;
      lVar9 = *(long *)(puVar50 + lVar9 * 0x90 + 0x70);
      if (lVar9 != -1) {
        unaff_x24 = (char *)0x90;
        unaff_x25 = (undefined **)0x7;
LAB_003e8344:
        pbVar23 = *(byte **)(puVar50 + lVar9 * 0x90 + 0x18);
        ppbVar42 = *(byte ***)(puVar50 + lVar9 * 0x90 + 0x20);
        if (ppbVar42 != (byte **)0x7) {
          pbVar30 = pbVar23 + (long)ppbVar42;
          if (ppbVar42 != (byte **)0x0) goto LAB_003e8380;
LAB_003e83f8:
          if (pbVar30 != pbVar23) goto LAB_003e8400;
LAB_003e8a30:
          local_a0 = (undefined **)*param_1;
          uStack_98 = (undefined **)param_1[1];
                    /* try { // try from 003e8a40 to 003e8a5b has its CatchHandler @ 003e9ff8 */
          local_b0 = (char *)pbVar23;
          uStack_a8 = ppbVar42;
          FUN_00b5c180(&local_1d0,"[GameDB] Invalid CRC \'{}\' found for serial: \'{}\'. Skipping!",
                       0x3b,0xdd,&local_b0);
                    /* try { // try from 003e8a5c to 003e8a6f has its CatchHandler @ 003e9ff4 */
          FUN_00988ad0(&PTR_FUN_00c9aa28,0xc,&local_1d0);
          goto joined_r0x003e8a74;
        }
        iVar8 = strncasecmp((char *)pbVar23,"default",7);
        if (iVar8 != 0) {
LAB_003e8380:
          pbVar18 = pbVar23 + (long)ppbVar42;
          lVar17 = 0;
          do {
            uVar26 = (uint)pbVar23[lVar17];
            pbVar30 = pbVar18;
            if (uVar26 != 0x30) {
              pbVar28 = pbVar23 + lVar17;
              if (pbVar28 == pbVar18) break;
              uVar52 = (uint)pbVar23[lVar17];
              if (uVar26 - 0x30 < 10) {
                uVar52 = uVar52 - 0x30;
                pbVar30 = pbVar23 + lVar17 + 1;
                if (pbVar30 == pbVar18) goto LAB_003e851c;
LAB_003e83d0:
                uVar10 = (ulong)uVar52;
                bVar21 = pbVar23[lVar17 + 1];
                uVar26 = bVar21 - 0x30;
                if (uVar26 < 10) {
LAB_003e8578:
                  pbVar30 = pbVar28 + (long)(pbVar18 + (-lVar17 - (long)pbVar23));
                  uVar26 = uVar26 + uVar52 * 0x10;
                  uVar10 = (ulong)uVar26;
                  if (pbVar23 + lVar17 + 2 == pbVar18) goto LAB_003e8760;
                  bVar21 = pbVar23[lVar17 + 2];
                  uVar52 = bVar21 - 0x30;
                  if (uVar52 < 10) {
LAB_003e85b8:
                    uVar52 = uVar52 + uVar26 * 0x10;
joined_r0x003e85c8:
                    uVar10 = (ulong)uVar52;
                    if (pbVar23 + lVar17 + 3 == pbVar18) goto LAB_003e8760;
                    bVar21 = pbVar23[lVar17 + 3];
                    uVar26 = bVar21 - 0x30;
                    if (uVar26 < 10) {
LAB_003e85ec:
                      uVar26 = uVar26 + uVar52 * 0x10;
                    }
                    else {
                      uVar26 = (uint)bVar21;
                      if (bVar21 - 0x61 < 6) {
                        uVar26 = uVar26 - 0x57;
                        goto LAB_003e85ec;
                      }
                      pbVar28 = pbVar23 + lVar17 + 3;
                      if (5 < uVar26 - 0x41) goto LAB_003e8b6c;
                      uVar26 = (uVar26 - 0x37) + uVar52 * 0x10;
                    }
                    uVar10 = (ulong)uVar26;
                    if (pbVar23 + lVar17 + 4 == pbVar18) goto LAB_003e8760;
                    bVar21 = pbVar23[lVar17 + 4];
                    uVar52 = bVar21 - 0x30;
                    if (uVar52 < 10) {
LAB_003e8620:
                      uVar52 = uVar52 + uVar26 * 0x10;
                    }
                    else {
                      uVar52 = (uint)bVar21;
                      if (bVar21 - 0x61 < 6) {
                        uVar52 = uVar52 - 0x57;
                        goto LAB_003e8620;
                      }
                      pbVar28 = pbVar23 + lVar17 + 4;
                      if (5 < uVar52 - 0x41) goto LAB_003e8b6c;
                      uVar52 = (uVar52 - 0x37) + uVar26 * 0x10;
                    }
                    uVar10 = (ulong)uVar52;
                    if (pbVar23 + lVar17 + 5 != pbVar18) {
                      bVar21 = pbVar23[lVar17 + 5];
                      uVar26 = bVar21 - 0x30;
                      if (9 < uVar26) {
                        uVar26 = (uint)bVar21;
                        if (bVar21 - 0x61 < 6) {
                          uVar26 = uVar26 - 0x57;
                        }
                        else {
                          pbVar28 = pbVar23 + lVar17 + 5;
                          if (5 < uVar26 - 0x41) goto LAB_003e8b6c;
                          uVar26 = uVar26 - 0x37;
                        }
                      }
                      uVar26 = uVar26 + uVar52 * 0x10;
                      uVar10 = (ulong)uVar26;
                      if (pbVar23 + lVar17 + 6 != pbVar18) {
                        bVar21 = pbVar23[lVar17 + 6];
                        uVar52 = bVar21 - 0x30;
                        if (9 < uVar52) {
                          uVar52 = (uint)bVar21;
                          if (bVar21 - 0x61 < 6) {
                            uVar52 = uVar52 - 0x57;
                          }
                          else {
                            pbVar28 = pbVar23 + lVar17 + 6;
                            if (5 < uVar52 - 0x41) goto LAB_003e8b6c;
                            uVar52 = uVar52 - 0x37;
                          }
                        }
                        uVar10 = (ulong)(uVar52 + uVar26 * 0x10);
                        pbVar28 = pbVar23 + lVar17 + 7;
                        if (pbVar28 != pbVar18) {
                          bVar21 = *pbVar28;
                          uVar26 = bVar21 - 0x30;
                          if (9 < uVar26) {
                            uVar26 = (uint)bVar21;
                            if (bVar21 - 0x61 < 6) {
                              uVar26 = uVar26 - 0x57;
                            }
                            else {
                              if (5 < uVar26 - 0x41) goto LAB_003e8b6c;
                              uVar26 = uVar26 - 0x37;
                            }
                          }
                          uVar10 = uVar10 << 4;
                          lVar14 = 7;
                          if ((uVar10 & 0xffffffff00000000) == 0) {
                            lVar14 = 8;
                          }
                          pbVar30 = pbVar23 + lVar17 + lVar14;
                          goto LAB_003e8764;
                        }
                      }
                    }
                    goto LAB_003e8760;
                  }
                  uVar52 = (uint)bVar21;
                  if (bVar21 - 0x61 < 6) {
                    uVar52 = uVar52 - 0x57;
                    goto LAB_003e85b8;
                  }
                  pbVar28 = pbVar23 + lVar17 + 2;
                  if (uVar52 - 0x41 < 6) {
                    uVar52 = (uVar52 - 0x37) + uVar26 * 0x10;
                    goto joined_r0x003e85c8;
                  }
LAB_003e8b6c:
                  pbVar30 = pbVar28;
                  uVar26 = 0;
                }
                else {
                  uVar26 = (uint)bVar21;
                  if (bVar21 - 0x61 < 6) {
                    uVar26 = uVar26 - 0x57;
                    goto LAB_003e8578;
                  }
                  if (uVar26 - 0x41 < 6) {
                    uVar26 = uVar26 - 0x37;
                    goto LAB_003e8578;
                  }
LAB_003e8760:
                  uVar26 = 0;
                }
LAB_003e8764:
                uVar52 = (uint)uVar10;
                if (pbVar30 != pbVar18) {
                  bVar21 = *pbVar30;
                  if (((bVar21 - 0x30 < 10) || (bVar21 - 0x61 < 6)) || (bVar21 - 0x41 < 6))
                  goto LAB_003e8a30;
                }
                if (CARRY4(uVar52,uVar26)) goto LAB_003e8a30;
              }
              else {
                pbVar30 = pbVar28;
                if ((0x25 < uVar26 - 0x41) ||
                   ((1L << ((ulong)(uVar26 - 0x41) & 0x3f) & 0x3f0000003fU) == 0)) break;
                iVar8 = -0x57;
                if (5 < uVar52 - 0x61) {
                  iVar8 = -0x37;
                }
                uVar52 = iVar8 + uVar52;
                pbVar30 = pbVar23 + lVar17 + 1;
                if (pbVar30 != pbVar18) goto LAB_003e83d0;
LAB_003e851c:
                uVar26 = 0;
              }
              uVar52 = uVar52 + uVar26;
              ppbVar43 = (byte **)(ulong)uVar52;
              goto joined_r0x003e87ac;
            }
            lVar17 = lVar17 + 1;
          } while (pbVar23 + lVar17 != pbVar18);
          goto LAB_003e83f8;
        }
LAB_003e8400:
        uVar52 = 0;
        ppbVar43 = (byte **)0x0;
joined_r0x003e87ac:
        if (ppbStack_e8 != (byte **)0x0) {
          uVar11 = CONCAT17(POPCOUNT((char)((ulong)ppbStack_e8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)((ulong)ppbStack_e8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)((ulong)ppbStack_e8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)((ulong)ppbStack_e8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)((ulong)ppbStack_e8
                                                                               >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)((ulong)
                                                  ppbStack_e8 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)ppbStack_e8 >> 8))
                                                           ,POPCOUNT((char)ppbStack_e8))))))));
          uVar51 = NEON_uaddlv(uVar11,1);
          uVar10 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar51) & 0xffffffff;
          if (uVar10 < 2) {
            ppbVar19 = (byte **)((ulong)((int)ppbStack_e8 - 1) & (ulong)ppbVar43);
          }
          else {
            ppbVar19 = ppbVar43;
            if (ppbStack_e8 <= ppbVar43) {
              uVar27 = 0;
              if (ppbStack_e8 != (byte **)0x0) {
                uVar27 = (ulong)ppbVar43 / (ulong)ppbStack_e8;
              }
              ppbVar19 = (byte **)((long)ppbVar43 - uVar27 * (long)ppbStack_e8);
            }
          }
          plVar39 = *(long **)(local_f0 + (long)ppbVar19 * 8);
          if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
            if (uVar10 < 2) {
              do {
                if ((byte **)plVar39[1] == ppbVar43) {
                  if (*(uint *)(plVar39 + 2) == uVar52) goto LAB_003e8524;
                }
                else if ((byte **)((ulong)plVar39[1] & (long)ppbStack_e8 - 1U) != ppbVar19) break;
                plVar39 = (long *)*plVar39;
              } while (plVar39 != (long *)0x0);
            }
            else {
              do {
                ppbVar20 = (byte **)plVar39[1];
                if (ppbVar20 == ppbVar43) {
                  if (*(uint *)(plVar39 + 2) == uVar52) goto LAB_003e8524;
                }
                else {
                  if (ppbStack_e8 <= ppbVar20) {
                    uVar10 = 0;
                    if (ppbStack_e8 != (byte **)0x0) {
                      uVar10 = (ulong)ppbVar20 / (ulong)ppbStack_e8;
                    }
                    ppbVar20 = (byte **)((long)ppbVar20 - uVar10 * (long)ppbStack_e8);
                  }
                  if (ppbVar20 != ppbVar19) break;
                }
                plVar39 = (long *)*plVar39;
              } while (plVar39 != (long *)0x0);
            }
          }
        }
        local_1d0 = (char *)0x0;
        uStack_1c8 = 0;
        local_1c0 = (undefined **)0x0;
        local_b0 = "content";
        uStack_a8 = (byte **)0x7;
                    /* try { // try from 003e87c4 to 003e87d3 has its CatchHandler @ 003ea07c */
        lVar17 = FUN_00b7b3d0(unaff_x22,lVar9,&local_b0);
        if (lVar17 != -1) {
          local_b0 = "content";
          uStack_a8 = (byte **)0x7;
                    /* try { // try from 003e87e8 to 003e8817 has its CatchHandler @ 003ea030 */
          lVar17 = FUN_00b7b3d0(unaff_x22,lVar9,&local_b0);
          ppbVar42 = *(byte ***)(*(undefined **)unaff_x22 + lVar17 * 0x90 + 0x48);
          uVar10 = *(ulong *)(*(undefined **)unaff_x22 + lVar17 * 0x90 + 0x50);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1d0,uVar10,'\0');
          ppuVar49 = (undefined **)((ulong)&local_1d0 | 1);
          if (((ulong)local_1d0 & 1) != 0) {
            ppuVar49 = local_1c0;
          }
          memcpy(ppuVar49,ppbVar42,uVar10);
        }
        ppbVar19 = ppbStack_e8;
        if (ppbStack_e8 == (byte **)0x0) {
LAB_003e88bc:
                    /* try { // try from 003e88bc to 003e88c3 has its CatchHandler @ 003ea07c */
          pbVar23 = (byte *)operator_new(0x30);
          uVar10 = uStack_1c8;
          pcVar2 = local_1d0;
          *(uint *)(pbVar23 + 0x10) = uVar52;
          *(undefined ***)(pbVar23 + 0x28) = local_1c0;
          local_1d0 = (char *)0x0;
          uStack_1c8 = 0;
          local_1c0 = (undefined **)0x0;
          local_a0 = (undefined **)CONCAT71(local_a0._1_7_,1);
          *(ulong *)(pbVar23 + 0x20) = uVar10;
          *(char **)(pbVar23 + 0x18) = pcVar2;
          pbVar23[0] = 0;
          pbVar23[1] = 0;
          pbVar23[2] = 0;
          pbVar23[3] = 0;
          pbVar23[4] = 0;
          pbVar23[5] = 0;
          pbVar23[6] = 0;
          pbVar23[7] = 0;
          *(byte ***)(pbVar23 + 8) = ppbVar43;
          local_b0 = (char *)pbVar23;
          uStack_a8 = &local_e0;
          if ((ppbVar19 == (byte **)0x0) || (local_d0 * (float)ppbVar19 < (float)(local_d8 + 1))) {
            if (ppbVar19 < (byte **)0x3) {
              uVar10 = 1;
            }
            else {
              uVar10 = (ulong)(((ulong)ppbVar19 & (long)ppbVar19 - 1U) != 0);
            }
            ppbVar20 = (byte **)(uVar10 | (long)ppbVar19 << 1);
            ppbVar42 = (byte **)(long)((float)(local_d8 + 1) / local_d0);
            if (ppbVar42 <= ppbVar20) {
              ppbVar42 = ppbVar20;
            }
            if ((long)ppbVar42 - 1U == 0) {
              ppbVar42 = (byte **)0x2;
            }
            else if (((ulong)ppbVar42 & (long)ppbVar42 - 1U) != 0) {
                    /* try { // try from 003e89a8 to 003e89cb has its CatchHandler @ 003e9fe4 */
              ppbVar42 = (byte **)std::__ndk1::__next_prime((ulong)ppbVar42);
              ppbVar19 = ppbStack_e8;
            }
            ppbVar20 = ppbVar42;
            if (ppbVar19 < ppbVar42) {
LAB_003e89c0:
              FUN_003e5920(&local_f0,ppbVar20);
            }
            else if (ppbVar42 < ppbVar19) {
              ppbVar20 = (byte **)(long)((float)local_d8 / local_d0);
              if ((ppbVar19 < (byte **)0x3) ||
                 (uVar11 = CONCAT17(POPCOUNT((char)((ulong)ppbVar19 >> 0x38)),
                                    CONCAT16(POPCOUNT((char)((ulong)ppbVar19 >> 0x30)),
                                             CONCAT15(POPCOUNT((char)((ulong)ppbVar19 >> 0x28)),
                                                      CONCAT14(POPCOUNT((char)((ulong)ppbVar19 >>
                                                                              0x20)),
                                                               CONCAT13(POPCOUNT((char)((ulong)
                                                  ppbVar19 >> 0x18)),
                                                  CONCAT12(POPCOUNT((char)((ulong)ppbVar19 >> 0x10))
                                                           ,CONCAT11(POPCOUNT((char)((ulong)ppbVar19
                                                                                    >> 8)),
                                                                     POPCOUNT((char)ppbVar19))))))))
                 , uVar51 = NEON_uaddlv(uVar11,1),
                 1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar51))) {
                    /* try { // try from 003e8a7c to 003e8a7f has its CatchHandler @ 003e9fe4 */
                ppbVar20 = (byte **)std::__ndk1::__next_prime((ulong)ppbVar20);
              }
              else if ((byte **)0x1 < ppbVar20) {
                ppbVar20 = (byte **)(1L << (-LZCOUNT((long)ppbVar20 + -1) & 0x3fU));
              }
              if (ppbVar20 <= ppbVar42) {
                ppbVar20 = ppbVar42;
              }
              if (ppbVar20 < ppbVar19) goto LAB_003e89c0;
            }
            ppbVar19 = ppbStack_e8;
            if (((ulong)ppbStack_e8 & (long)ppbStack_e8 - 1U) == 0) {
              ppbVar42 = (byte **)((ulong)((int)ppbStack_e8 - 1) & (ulong)ppbVar43);
            }
            else {
              ppbVar42 = ppbVar43;
              if (ppbStack_e8 <= ppbVar43) {
                uVar10 = 0;
                if (ppbStack_e8 != (byte **)0x0) {
                  uVar10 = (ulong)ppbVar43 / (ulong)ppbStack_e8;
                }
                ppbVar42 = (byte **)((long)ppbVar43 - uVar10 * (long)ppbStack_e8);
              }
            }
          }
          puVar38 = *(undefined8 **)(local_f0 + (long)ppbVar42 * 8);
          if (puVar38 == (undefined8 *)0x0) {
            *(byte **)pbVar23 = local_e0;
            *(byte ***)(local_f0 + (long)ppbVar42 * 8) = &local_e0;
            local_e0 = pbVar23;
            if (*(long *)pbVar23 != 0) {
              ppbVar42 = *(byte ***)(*(long *)pbVar23 + 8);
              if (((ulong)ppbVar19 & (long)ppbVar19 - 1U) == 0) {
                ppbVar42 = (byte **)((ulong)ppbVar42 & (long)ppbVar19 - 1U);
              }
              else if (ppbVar19 <= ppbVar42) {
                uVar10 = 0;
                if (ppbVar19 != (byte **)0x0) {
                  uVar10 = (ulong)ppbVar42 / (ulong)ppbVar19;
                }
                ppbVar42 = (byte **)((long)ppbVar42 - uVar10 * (long)ppbVar19);
              }
              *(byte **)(local_f0 + (long)ppbVar42 * 8) = pbVar23;
            }
          }
          else {
            *(undefined8 *)pbVar23 = *puVar38;
            *puVar38 = pbVar23;
          }
          local_d8 = local_d8 + 1;
        }
        else if (((ulong)ppbStack_e8 & (long)ppbStack_e8 - 1U) == 0) {
          ppbVar42 = (byte **)((ulong)((int)ppbStack_e8 - 1) & (ulong)ppbVar43);
          plVar39 = *(long **)(local_f0 + (long)ppbVar42 * 8);
          if (plVar39 == (long *)0x0) goto LAB_003e88bc;
          do {
            plVar39 = (long *)*plVar39;
            if ((plVar39 == (long *)0x0) ||
               ((byte **)plVar39[1] != ppbVar43 &&
                (byte **)((ulong)plVar39[1] & (long)ppbStack_e8 - 1U) != ppbVar42))
            goto LAB_003e88bc;
          } while (*(uint *)(plVar39 + 2) != uVar52);
        }
        else {
          if (ppbVar43 < ppbStack_e8) {
            plVar39 = *(long **)(local_f0 + (long)ppbVar43 * 8);
            ppbVar42 = ppbVar43;
          }
          else {
            uVar10 = 0;
            if (ppbStack_e8 != (byte **)0x0) {
              uVar10 = (ulong)ppbVar43 / (ulong)ppbStack_e8;
            }
            ppbVar42 = (byte **)((long)ppbVar43 - uVar10 * (long)ppbStack_e8);
            plVar39 = *(long **)(local_f0 + (long)ppbVar42 * 8);
          }
          if (plVar39 == (long *)0x0) goto LAB_003e88bc;
          do {
            plVar39 = (long *)*plVar39;
            if (plVar39 == (long *)0x0) goto LAB_003e88bc;
            ppbVar20 = (byte **)plVar39[1];
            if (ppbVar20 != ppbVar43) {
              if (ppbStack_e8 <= ppbVar20) {
                uVar10 = 0;
                if (ppbStack_e8 != (byte **)0x0) {
                  uVar10 = (ulong)ppbVar20 / (ulong)ppbStack_e8;
                }
                ppbVar20 = (byte **)((long)ppbVar20 - uVar10 * (long)ppbStack_e8);
              }
              if (ppbVar20 != ppbVar42) goto LAB_003e88bc;
            }
          } while (*(uint *)(plVar39 + 2) != uVar52);
        }
        goto joined_r0x003e8a74;
      }
    }
  }
LAB_003e8b78:
  local_b0 = "dynaPatches";
  uStack_a8 = (undefined **)0xb;
                    /* try { // try from 003e8b90 to 003e8b97 has its CatchHandler @ 003ea098 */
  lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
  if (lVar9 != -1) {
    local_b0 = "dynaPatches";
    uStack_a8 = (undefined **)0xb;
                    /* try { // try from 003e8bb8 to 003e8bbf has its CatchHandler @ 003e9f4c */
    lVar9 = FUN_00b7b3d0(*param_2,param_2[1],&local_b0);
    if (*(long *)(*(long *)*param_2 + lVar9 * 0x90 + 0x70) != -1) {
      local_b0 = "dynaPatches";
      uStack_a8 = (undefined **)0xb;
                    /* try { // try from 003e8bec to 003e8bf7 has its CatchHandler @ 003e9f34 */
      puVar38 = &local_b0;
      lVar9 = FUN_00b7b3d0((long *)*param_2,param_2[1],&local_b0);
      plVar39 = (long *)*param_2;
      for (lVar9 = *(long *)(*plVar39 + lVar9 * 0x90 + 0x70); lVar9 != -1;
          lVar9 = *(long *)(*plVar39 + lVar9 * 0x90 + 0x80)) {
        uStack_98 = (undefined **)0x0;
        local_a0 = (undefined **)0x0;
        local_88 = (undefined **)0x0;
        local_90 = (undefined **)0x0;
        local_1d0 = "pattern";
        uStack_1c8 = 7;
        uStack_a8 = (undefined **)0x0;
        local_b0 = (char *)0x0;
                    /* try { // try from 003e8c74 to 003e8c83 has its CatchHandler @ 003ea094 */
        lVar17 = FUN_00b7b3d0(plVar39,lVar9,&local_1d0);
        if (lVar17 != -1) {
          local_1d0 = "pattern";
          uStack_1c8 = 7;
                    /* try { // try from 003e8c9c to 003e8cab has its CatchHandler @ 003ea02c */
          lVar17 = FUN_00b7b3d0(plVar39,lVar9,&local_1d0);
          if (*(long *)(*plVar39 + lVar17 * 0x90 + 0x70) != -1) {
            local_1d0 = "pattern";
            uStack_1c8 = 7;
                    /* try { // try from 003e8cd4 to 003e8ce3 has its CatchHandler @ 003ea004 */
            lVar17 = FUN_00b7b3d0(plVar39,lVar9,&local_1d0);
            for (lVar17 = *(long *)(*plVar39 + lVar17 * 0x90 + 0x70); lVar17 != -1;
                lVar17 = *(long *)(*plVar39 + lVar17 * 0x90 + 0x80)) {
              local_1d0 = "offset";
              uStack_1c8 = 6;
                    /* try { // try from 003e8d2c to 003e8d3b has its CatchHandler @ 003ea0b8 */
              lVar14 = FUN_00b7b3d0(plVar39,lVar17,&local_1d0);
              lVar14 = *plVar39 + lVar14 * 0x90;
              uVar10 = *(ulong *)(lVar14 + 0x50);
              if (uVar10 == 0) {
LAB_003e90d4:
                local_1b0 = 0;
                uStack_1c8 = 0;
                local_1d0 = (char *)0x0;
                uStack_1b8 = 0;
                local_1c0 = (undefined **)0x0;
                    /* try { // try from 003e90f0 to 003e9103 has its CatchHandler @ 003ea0b8 */
                (*(code *)PTR_FUN_00c9ad70)
                          ("could not deserialize value",0x1b,&local_1d0,DAT_00c9ad58);
              }
              else {
                pbVar23 = *(byte **)(lVar14 + 0x48);
                bVar21 = *pbVar23;
                uVar26 = (uint)bVar21;
                if (bVar21 != 0x30) {
                  if (bVar21 != 0x2d) {
                    if (bVar21 - 0x3a < 0xfffffff6) {
LAB_003e9270:
                      puVar38 = (undefined8 *)0x0;
                    }
                    else {
                      puVar38 = (undefined8 *)0x0;
                      do {
                        uVar10 = uVar10 - 1;
                        pbVar23 = pbVar23 + 1;
                        puVar38 = (undefined8 *)(ulong)((uVar26 + (int)puVar38 * 10) - 0x30);
                        if (uVar10 == 0) goto LAB_003e8db0;
                        uVar26 = (uint)*pbVar23;
                      } while (0xfffffff5 < uVar26 - 0x3a);
                    }
                  }
                  goto LAB_003e90d4;
                }
                if (uVar10 != 1) {
                  bVar21 = pbVar23[1] & 0xdf;
                  if (bVar21 == 0x42) {
                    if (2 < uVar10) {
                      puVar38 = (undefined8 *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (int)puVar38 << 1;
                        puVar38 = (undefined8 *)(ulong)uVar26;
                        if (*pbVar23 != 0x30) {
                          if (*pbVar23 != 0x31) goto LAB_003e90d4;
                          puVar38 = (undefined8 *)(ulong)(uVar26 | 1);
                        }
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e8db0;
                    }
                  }
                  else if (bVar21 == 0x4f) {
                    if (2 < uVar10) {
                      puVar38 = (undefined8 *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        if (*pbVar23 - 0x38 < 0xfffffff8) goto LAB_003e90d4;
                        puVar38 = (undefined8 *)(ulong)(((uint)*pbVar23 + (int)puVar38 * 8) - 0x30);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e8db0;
                    }
                  }
                  else if (bVar21 == 0x58) {
                    if (2 < uVar10) {
                      puVar38 = (undefined8 *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (uint)*pbVar23;
                        if (uVar26 - 0x30 < 10) {
                          iVar8 = -0x30;
                        }
                        else if (uVar26 - 0x61 < 6) {
                          iVar8 = -0x57;
                        }
                        else {
                          if (5 < uVar26 - 0x41) goto LAB_003e90d4;
                          iVar8 = -0x37;
                        }
                        puVar38 = (undefined8 *)(ulong)(uVar26 + (int)puVar38 * 0x10 + iVar8);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e8db0;
                    }
                  }
                  else {
                    lVar14 = 0;
                    pbVar30 = pbVar23 + 2;
                    do {
                      pbVar18 = pbVar30;
                      lVar32 = lVar14;
                      if (uVar10 - 1 == lVar32) goto LAB_003e8dac;
                      bVar21 = pbVar23[lVar32 + 1];
                      uVar26 = (uint)bVar21;
                      lVar14 = lVar32 + 1;
                      pbVar30 = pbVar18 + 1;
                    } while (bVar21 == 0x30);
                    if (lVar32 + 1 == -1) goto LAB_003e8dac;
                    if (bVar21 - 0x3a < 0xfffffff6) goto LAB_003e9270;
                    puVar38 = (undefined8 *)0x0;
                    lVar14 = (uVar10 - lVar32) + -2;
                    do {
                      puVar38 = (undefined8 *)(ulong)((uVar26 + (int)puVar38 * 10) - 0x30);
                      if (lVar14 == 0) goto LAB_003e8db0;
                      uVar26 = (uint)*pbVar18;
                      lVar14 = lVar14 + -1;
                      pbVar18 = pbVar18 + 1;
                    } while (0xfffffff5 < uVar26 - 0x3a);
                  }
                  goto LAB_003e90d4;
                }
LAB_003e8dac:
                puVar38 = (undefined8 *)0x0;
              }
LAB_003e8db0:
              local_1d0 = "value";
              uStack_1c8 = 5;
                    /* try { // try from 003e8dc0 to 003e8e63 has its CatchHandler @ 003ea0bc */
              lVar14 = FUN_00b7b3d0(plVar39,lVar17,&local_1d0);
              lVar14 = *plVar39 + lVar14 * 0x90;
              uVar10 = *(ulong *)(lVar14 + 0x50);
              if (uVar10 == 0) {
LAB_003e8e34:
                local_1b0 = 0;
                uStack_1c8 = 0;
                local_1d0 = (char *)0x0;
                uStack_1b8 = 0;
                local_1c0 = (undefined **)0x0;
                (*(code *)PTR_FUN_00c9ad70)
                          ("could not deserialize value",0x1b,&local_1d0,DAT_00c9ad58);
              }
              else {
                pbVar23 = *(byte **)(lVar14 + 0x48);
                bVar21 = *pbVar23;
                uVar26 = (uint)bVar21;
                if (bVar21 != 0x30) {
                  if (bVar21 != 0x2d) {
                    if (bVar21 - 0x3a < 0xfffffff6) {
LAB_003e9278:
                      unaff_x25 = (undefined **)0x0;
                    }
                    else {
                      unaff_x25 = (undefined **)0x0;
                      do {
                        uVar10 = uVar10 - 1;
                        pbVar23 = pbVar23 + 1;
                        unaff_x25 = (undefined **)(ulong)((uVar26 + (int)unaff_x25 * 10) - 0x30);
                        if (uVar10 == 0) goto LAB_003e8e74;
                        uVar26 = (uint)*pbVar23;
                      } while (0xfffffff5 < uVar26 - 0x3a);
                    }
                  }
                  goto LAB_003e8e34;
                }
                if (uVar10 != 1) {
                  bVar21 = pbVar23[1] & 0xdf;
                  if (bVar21 == 0x42) {
                    if (2 < uVar10) {
                      unaff_x25 = (undefined **)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (int)unaff_x25 << 1;
                        unaff_x25 = (undefined **)(ulong)uVar26;
                        if (*pbVar23 != 0x30) {
                          if (*pbVar23 != 0x31) goto LAB_003e8e34;
                          unaff_x25 = (undefined **)(ulong)(uVar26 | 1);
                        }
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e8e74;
                    }
                  }
                  else if (bVar21 == 0x4f) {
                    if (2 < uVar10) {
                      unaff_x25 = (undefined **)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        if (*pbVar23 - 0x38 < 0xfffffff8) goto LAB_003e8e34;
                        unaff_x25 = (undefined **)
                                    (ulong)(((uint)*pbVar23 + (int)unaff_x25 * 8) - 0x30);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e8e74;
                    }
                  }
                  else if (bVar21 == 0x58) {
                    if (2 < uVar10) {
                      unaff_x25 = (undefined **)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (uint)*pbVar23;
                        if (uVar26 - 0x30 < 10) {
                          iVar8 = -0x30;
                        }
                        else if (uVar26 - 0x61 < 6) {
                          iVar8 = -0x57;
                        }
                        else {
                          if (5 < uVar26 - 0x41) goto LAB_003e8e34;
                          iVar8 = -0x37;
                        }
                        unaff_x25 = (undefined **)(ulong)(uVar26 + (int)unaff_x25 * 0x10 + iVar8);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e8e74;
                    }
                  }
                  else {
                    lVar14 = 0;
                    pbVar30 = pbVar23 + 2;
                    do {
                      pbVar18 = pbVar30;
                      lVar32 = lVar14;
                      if (uVar10 - 1 == lVar32) goto LAB_003e8e70;
                      bVar21 = pbVar23[lVar32 + 1];
                      uVar26 = (uint)bVar21;
                      lVar14 = lVar32 + 1;
                      pbVar30 = pbVar18 + 1;
                    } while (bVar21 == 0x30);
                    if (lVar32 + 1 == -1) goto LAB_003e8e70;
                    if (bVar21 - 0x3a < 0xfffffff6) goto LAB_003e9278;
                    unaff_x25 = (undefined **)0x0;
                    lVar14 = (uVar10 - lVar32) + -2;
                    do {
                      unaff_x25 = (undefined **)(ulong)((uVar26 + (int)unaff_x25 * 10) - 0x30);
                      if (lVar14 == 0) goto LAB_003e8e74;
                      uVar26 = (uint)*pbVar18;
                      lVar14 = lVar14 + -1;
                      pbVar18 = pbVar18 + 1;
                    } while (0xfffffff5 < uVar26 - 0x3a);
                  }
                  goto LAB_003e8e34;
                }
LAB_003e8e70:
                unaff_x25 = (undefined **)0x0;
              }
LAB_003e8e74:
              ppuVar49 = (undefined **)local_b0;
              if (uStack_a8 == local_a0) {
                uVar27 = (long)uStack_a8 - (long)local_b0;
                lVar14 = (long)uVar27 >> 3;
                uVar10 = lVar14 + 1;
                if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 003e9e88 to 003e9e8f has its CatchHandler @ 003ea0ac */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar10 <= (ulong)((long)uVar27 >> 2)) {
                  uVar10 = (long)uVar27 >> 2;
                }
                if (0x7ffffffffffffff7 < uVar27) {
                  uVar10 = 0x1fffffffffffffff;
                }
                if (uVar10 == 0) {
                  ppuVar15 = (undefined **)0x0;
                  ppuVar29 = (undefined **)(lVar14 * 8);
                  *ppuVar29 = (undefined *)((ulong)puVar38 & 0xffffffff | (long)unaff_x25 << 0x20);
                }
                else {
                  if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 003e9e98 to 003e9ea3 has its CatchHandler @ 003ea0ac */
                    /* WARNING: Subroutine does not return */
                    FUN_003d5c00(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 003e8ec8 to 003e8ecb has its CatchHandler @ 003ea0a4 */
                  ppuVar15 = (undefined **)operator_new(uVar10 << 3);
                  ppuVar29 = ppuVar15 + lVar14;
                  *ppuVar29 = (undefined *)((ulong)puVar38 & 0xffffffff | (long)unaff_x25 << 0x20);
                }
                if (0 < (long)uVar27) {
                  memcpy(ppuVar15,ppuVar49,uVar27);
                }
                local_a0 = ppuVar15 + uVar10;
                local_b0 = (char *)ppuVar15;
                uStack_a8 = ppuVar29 + 1;
                if (ppuVar49 != (undefined **)0x0) {
                  operator_delete(ppuVar49);
                }
              }
              else {
                *uStack_a8 = (undefined *)((ulong)puVar38 & 0xffffffff | (long)unaff_x25 << 0x20);
                uStack_a8 = uStack_a8 + 1;
              }
            }
            local_1d0 = "replacement";
            uStack_1c8 = 0xb;
                    /* try { // try from 003e9290 to 003e929f has its CatchHandler @ 003ea000 */
            lVar17 = FUN_00b7b3d0(plVar39,lVar9,&local_1d0);
            for (lVar17 = *(long *)(*plVar39 + lVar17 * 0x90 + 0x70); lVar17 != -1;
                lVar17 = *(long *)(*plVar39 + lVar17 * 0x90 + 0x80)) {
              local_1d0 = "offset";
              uStack_1c8 = 6;
                    /* try { // try from 003e92e8 to 003e938b has its CatchHandler @ 003ea0b0 */
              lVar14 = FUN_00b7b3d0(plVar39,lVar17,&local_1d0);
              lVar14 = *plVar39 + lVar14 * 0x90;
              uVar10 = *(ulong *)(lVar14 + 0x50);
              if (uVar10 == 0) {
LAB_003e935c:
                local_1b0 = 0;
                uStack_1c8 = 0;
                local_1d0 = (char *)0x0;
                uStack_1b8 = 0;
                local_1c0 = (undefined **)0x0;
                (*(code *)PTR_FUN_00c9ad70)
                          ("could not deserialize value",0x1b,&local_1d0,DAT_00c9ad58);
              }
              else {
                pbVar23 = *(byte **)(lVar14 + 0x48);
                bVar21 = *pbVar23;
                uVar26 = (uint)bVar21;
                if (bVar21 != 0x30) {
                  if (bVar21 != 0x2d) {
                    if (bVar21 - 0x3a < 0xfffffff6) {
LAB_003e982c:
                      unaff_x22 = (char *)0x0;
                    }
                    else {
                      unaff_x22 = (char *)0x0;
                      do {
                        uVar10 = uVar10 - 1;
                        pbVar23 = pbVar23 + 1;
                        unaff_x22 = (char *)(ulong)((uVar26 + (int)unaff_x22 * 10) - 0x30);
                        if (uVar10 == 0) goto LAB_003e939c;
                        uVar26 = (uint)*pbVar23;
                      } while (0xfffffff5 < uVar26 - 0x3a);
                    }
                  }
                  goto LAB_003e935c;
                }
                if (uVar10 != 1) {
                  bVar21 = pbVar23[1] & 0xdf;
                  if (bVar21 == 0x42) {
                    if (2 < uVar10) {
                      unaff_x22 = (char *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (int)unaff_x22 << 1;
                        unaff_x22 = (char *)(ulong)uVar26;
                        if (*pbVar23 != 0x30) {
                          if (*pbVar23 != 0x31) goto LAB_003e935c;
                          unaff_x22 = (char *)(ulong)(uVar26 | 1);
                        }
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e939c;
                    }
                  }
                  else if (bVar21 == 0x4f) {
                    if (2 < uVar10) {
                      unaff_x22 = (char *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        if (*pbVar23 - 0x38 < 0xfffffff8) goto LAB_003e935c;
                        unaff_x22 = (char *)(ulong)(((uint)*pbVar23 + (int)unaff_x22 * 8) - 0x30);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e939c;
                    }
                  }
                  else if (bVar21 == 0x58) {
                    if (2 < uVar10) {
                      unaff_x22 = (char *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (uint)*pbVar23;
                        if (uVar26 - 0x30 < 10) {
                          iVar8 = -0x30;
                        }
                        else if (uVar26 - 0x61 < 6) {
                          iVar8 = -0x57;
                        }
                        else {
                          if (5 < uVar26 - 0x41) goto LAB_003e935c;
                          iVar8 = -0x37;
                        }
                        unaff_x22 = (char *)(ulong)(uVar26 + (int)unaff_x22 * 0x10 + iVar8);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e939c;
                    }
                  }
                  else {
                    lVar14 = 0;
                    pbVar30 = pbVar23 + 2;
                    do {
                      pbVar18 = pbVar30;
                      lVar32 = lVar14;
                      if (uVar10 - 1 == lVar32) goto LAB_003e9398;
                      bVar21 = pbVar23[lVar32 + 1];
                      uVar26 = (uint)bVar21;
                      lVar14 = lVar32 + 1;
                      pbVar30 = pbVar18 + 1;
                    } while (bVar21 == 0x30);
                    if (lVar32 + 1 == -1) goto LAB_003e9398;
                    if (bVar21 - 0x3a < 0xfffffff6) goto LAB_003e982c;
                    unaff_x22 = (char *)0x0;
                    lVar14 = (uVar10 - lVar32) + -2;
                    do {
                      unaff_x22 = (char *)(ulong)((uVar26 + (int)unaff_x22 * 10) - 0x30);
                      if (lVar14 == 0) goto LAB_003e939c;
                      uVar26 = (uint)*pbVar18;
                      lVar14 = lVar14 + -1;
                      pbVar18 = pbVar18 + 1;
                    } while (0xfffffff5 < uVar26 - 0x3a);
                  }
                  goto LAB_003e935c;
                }
LAB_003e9398:
                unaff_x22 = (char *)0x0;
              }
LAB_003e939c:
              local_1d0 = "value";
              uStack_1c8 = 5;
                    /* try { // try from 003e93ac to 003e93bb has its CatchHandler @ 003ea0b4 */
              lVar14 = FUN_00b7b3d0(plVar39,lVar17,&local_1d0);
              lVar14 = *plVar39 + lVar14 * 0x90;
              uVar10 = *(ulong *)(lVar14 + 0x50);
              if (uVar10 == 0) {
LAB_003e9784:
                local_1b0 = 0;
                uStack_1c8 = 0;
                local_1d0 = (char *)0x0;
                uStack_1b8 = 0;
                local_1c0 = (undefined **)0x0;
                    /* try { // try from 003e97a0 to 003e97b3 has its CatchHandler @ 003ea0b4 */
                (*(code *)PTR_FUN_00c9ad70)
                          ("could not deserialize value",0x1b,&local_1d0,DAT_00c9ad58);
              }
              else {
                pbVar23 = *(byte **)(lVar14 + 0x48);
                bVar21 = *pbVar23;
                uVar26 = (uint)bVar21;
                if (bVar21 != 0x30) {
                  if (bVar21 != 0x2d) {
                    if (bVar21 - 0x3a < 0xfffffff6) {
LAB_003e9834:
                      unaff_x24 = (char *)0x0;
                    }
                    else {
                      unaff_x24 = (char *)0x0;
                      do {
                        uVar10 = uVar10 - 1;
                        pbVar23 = pbVar23 + 1;
                        unaff_x24 = (char *)(ulong)((uVar26 + (int)unaff_x24 * 10) - 0x30);
                        if (uVar10 == 0) goto LAB_003e9430;
                        uVar26 = (uint)*pbVar23;
                      } while (0xfffffff5 < uVar26 - 0x3a);
                    }
                  }
                  goto LAB_003e9784;
                }
                if (uVar10 != 1) {
                  bVar21 = pbVar23[1] & 0xdf;
                  if (bVar21 == 0x42) {
                    if (2 < uVar10) {
                      unaff_x24 = (char *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (int)unaff_x24 << 1;
                        unaff_x24 = (char *)(ulong)uVar26;
                        if (*pbVar23 != 0x30) {
                          if (*pbVar23 != 0x31) goto LAB_003e9784;
                          unaff_x24 = (char *)(ulong)(uVar26 | 1);
                        }
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e9430;
                    }
                  }
                  else if (bVar21 == 0x4f) {
                    if (2 < uVar10) {
                      unaff_x24 = (char *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        if (*pbVar23 - 0x38 < 0xfffffff8) goto LAB_003e9784;
                        unaff_x24 = (char *)(ulong)(((uint)*pbVar23 + (int)unaff_x24 * 8) - 0x30);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e9430;
                    }
                  }
                  else if (bVar21 == 0x58) {
                    if (2 < uVar10) {
                      unaff_x24 = (char *)0x0;
                      pbVar23 = pbVar23 + 2;
                      lVar14 = uVar10 - 2;
                      do {
                        uVar26 = (uint)*pbVar23;
                        if (uVar26 - 0x30 < 10) {
                          iVar8 = -0x30;
                        }
                        else if (uVar26 - 0x61 < 6) {
                          iVar8 = -0x57;
                        }
                        else {
                          if (5 < uVar26 - 0x41) goto LAB_003e9784;
                          iVar8 = -0x37;
                        }
                        unaff_x24 = (char *)(ulong)(uVar26 + (int)unaff_x24 * 0x10 + iVar8);
                        pbVar23 = pbVar23 + 1;
                        lVar14 = lVar14 + -1;
                      } while (lVar14 != 0);
                      goto LAB_003e9430;
                    }
                  }
                  else {
                    lVar14 = 0;
                    pbVar30 = pbVar23 + 2;
                    do {
                      pbVar18 = pbVar30;
                      lVar32 = lVar14;
                      if (uVar10 - 1 == lVar32) goto LAB_003e942c;
                      bVar21 = pbVar23[lVar32 + 1];
                      uVar26 = (uint)bVar21;
                      lVar14 = lVar32 + 1;
                      pbVar30 = pbVar18 + 1;
                    } while (bVar21 == 0x30);
                    if (lVar32 + 1 == -1) goto LAB_003e942c;
                    if (bVar21 - 0x3a < 0xfffffff6) goto LAB_003e9834;
                    unaff_x24 = (char *)0x0;
                    lVar14 = (uVar10 - lVar32) + -2;
                    do {
                      unaff_x24 = (char *)(ulong)((uVar26 + (int)unaff_x24 * 10) - 0x30);
                      if (lVar14 == 0) goto LAB_003e9430;
                      uVar26 = (uint)*pbVar18;
                      lVar14 = lVar14 + -1;
                      pbVar18 = pbVar18 + 1;
                    } while (0xfffffff5 < uVar26 - 0x3a);
                  }
                  goto LAB_003e9784;
                }
LAB_003e942c:
                unaff_x24 = (char *)0x0;
              }
LAB_003e9430:
              ppuVar49 = uStack_98;
              if (local_90 == local_88) {
                uVar27 = (long)local_90 - (long)uStack_98;
                lVar14 = (long)uVar27 >> 3;
                uVar10 = lVar14 + 1;
                if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 003e9e90 to 003e9e97 has its CatchHandler @ 003ea0a8 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar10 <= (ulong)((long)uVar27 >> 2)) {
                  uVar10 = (long)uVar27 >> 2;
                }
                if (0x7ffffffffffffff7 < uVar27) {
                  uVar10 = 0x1fffffffffffffff;
                }
                if (uVar10 == 0) {
                  ppuVar15 = (undefined **)0x0;
                  ppuVar29 = (undefined **)(lVar14 * 8);
                  *ppuVar29 = (undefined *)((ulong)unaff_x22 & 0xffffffff | (long)unaff_x24 << 0x20)
                  ;
                }
                else {
                  if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 003e9ea4 to 003e9eaf has its CatchHandler @ 003ea0a8 */
                    /* WARNING: Subroutine does not return */
                    FUN_003d5c00(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 003e9484 to 003e9487 has its CatchHandler @ 003ea0a0 */
                  ppuVar15 = (undefined **)operator_new(uVar10 << 3);
                  ppuVar29 = ppuVar15 + lVar14;
                  *ppuVar29 = (undefined *)((ulong)unaff_x22 & 0xffffffff | (long)unaff_x24 << 0x20)
                  ;
                }
                if (0 < (long)uVar27) {
                  memcpy(ppuVar15,ppuVar49,uVar27);
                }
                local_88 = ppuVar15 + uVar10;
                uStack_98 = ppuVar15;
                local_90 = ppuVar29 + 1;
                if (ppuVar49 != (undefined **)0x0) {
                  operator_delete(ppuVar49);
                }
              }
              else {
                *local_90 = (undefined *)((ulong)unaff_x22 & 0xffffffff | (long)unaff_x24 << 0x20);
                local_90 = local_90 + 1;
              }
            }
          }
        }
        lVar17 = lStack_c0;
        if (lStack_c0 == local_b8) {
                    /* try { // try from 003e9860 to 003e986b has its CatchHandler @ 003ea094 */
          FUN_003ea9a0(&local_c8,&local_b0);
        }
        else {
                    /* try { // try from 003e9848 to 003e9853 has its CatchHandler @ 003ea020 */
          FUN_003eabc0(lStack_c0,&local_b0);
          lStack_c0 = lVar17 + 0x30;
        }
        if (uStack_98 != (undefined **)0x0) {
          local_90 = uStack_98;
          operator_delete(uStack_98);
        }
        if ((undefined **)local_b0 != (undefined **)0x0) {
          uStack_a8 = (byte **)local_b0;
          operator_delete(local_b0);
        }
      }
    }
  }
  pvVar44 = (void *)*param_1;
  uVar10 = param_1[1];
                    /* try { // try from 003e9898 to 003e989f has its CatchHandler @ 003ea098 */
  plVar39 = (long *)operator_new(0x118);
  uStack_a8 = (byte **)&DAT_00ca11f8;
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffffffffff00);
  local_b0 = (char *)plVar39;
  if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 003e9ef0 to 003e9ef7 has its CatchHandler @ 003e9fc8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 0x17) {
    pvVar46 = (void *)((long)plVar39 + 0x11);
    *(byte *)(plVar39 + 2) = (byte)((int)uVar10 << 1);
    if (uVar10 != 0) goto LAB_003e98fc;
  }
  else {
    uVar27 = uVar10 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 003e98e4 to 003e98eb has its CatchHandler @ 003e9fc8 */
    pvVar46 = operator_new(uVar27);
    plVar39[3] = uVar10;
    plVar39[4] = (long)pvVar46;
    plVar39[2] = uVar27 | 1;
LAB_003e98fc:
    memcpy(pvVar46,pvVar44,uVar10);
  }
  lVar32 = local_b8;
  lVar14 = lStack_c0;
  lVar17 = local_c8;
  ppbVar42 = ppbStack_e8;
  lVar9 = local_f0;
  ppuVar29 = local_110;
  ppuVar49 = local_140;
  *(undefined1 *)((long)pvVar46 + uVar10) = 0;
  plVar39[6] = lStack_198;
  plVar39[5] = local_1a0;
  local_1a0 = 0;
  lStack_198 = 0;
  plVar39[7] = (long)local_190;
  plVar39[9] = local_180;
  plVar39[8] = uStack_188;
  local_190 = (void *)0x0;
  uStack_188 = 0;
  plVar39[10] = (long)local_178;
  local_180 = 0;
  local_178 = (void *)0x0;
  plVar39[0xc] = CONCAT44(uStack_164,uStack_168);
  plVar39[0xb] = CONCAT44(uStack_16c,local_170);
  plVar39[0xf] = (long)local_150;
  plVar39[0x10] = (long)ppuStack_148;
  local_150 = (undefined **)0x0;
  ppuStack_148 = (undefined **)0x0;
  local_140 = (undefined **)0x0;
  plVar39[0x11] = (long)ppuVar49;
  plVar39[0x12] = (long)local_138;
  plVar39[0x13] = (long)local_130;
  plVar39[0x14] = (long)ppuStack_128;
  local_138 = (undefined **)0x0;
  local_130 = (undefined **)0x0;
  plVar39[0x15] = (long)local_120;
  plVar39[0x16] = (long)local_118;
  ppuStack_128 = (undefined **)0x0;
  local_120 = (undefined **)0x0;
  local_118 = (undefined **)0x0;
  local_110 = (undefined **)0x0;
  plVar39[0x17] = (long)ppuVar29;
  plVar39[0x18] = (long)puStack_108;
  plVar39[0x19] = (long)local_100;
  plVar39[0x1a] = (long)local_f8;
  puStack_108 = (ulong *)0x0;
  local_100 = (ulong *)0x0;
  local_f8 = (ulong *)0x0;
  local_f0 = 0;
  plVar39[0x1b] = lVar9;
  plVar39[0x1c] = (long)ppbStack_e8;
  plVar39[0x1d] = (long)local_e0;
  plVar39[0x1e] = local_d8;
  ppbStack_e8 = (byte **)0x0;
  *(float *)(plVar39 + 0x1f) = local_d0;
  *(undefined8 *)((long)plVar39 + 0x6c) = uStack_15c;
  *(ulong *)((long)plVar39 + 100) = CONCAT44(uStack_160,uStack_164);
  if (local_d8 != 0) {
    ppbVar43 = *(byte ***)(local_e0 + 8);
    if (((ulong)ppbVar42 & (long)ppbVar42 - 1U) == 0) {
      ppbVar43 = (byte **)((ulong)ppbVar43 & (long)ppbVar42 - 1U);
    }
    else if (ppbVar42 <= ppbVar43) {
      uVar10 = 0;
      if (ppbVar42 != (byte **)0x0) {
        uVar10 = (ulong)ppbVar43 / (ulong)ppbVar42;
      }
      ppbVar43 = (byte **)((long)ppbVar43 - uVar10 * (long)ppbVar42);
    }
    *(long **)(lVar9 + (long)ppbVar43 * 8) = plVar39 + 0x1d;
    local_e0 = (byte *)0x0;
    local_d8 = 0;
  }
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  local_a0 = (undefined **)CONCAT71(local_a0._1_7_,1);
  plVar39[0x22] = lVar32;
  pvVar44 = (void *)((long)plVar39 + 0x11);
  uVar10 = (ulong)(*(byte *)(plVar39 + 2) >> 1);
  pvVar46 = pvVar44;
  if ((*(byte *)(plVar39 + 2) & 1) != 0) {
    uVar10 = plVar39[3];
    pvVar46 = (void *)plVar39[4];
  }
  plVar39[0x21] = lVar14;
  plVar39[0x20] = lVar17;
                    /* try { // try from 003e9a40 to 003e9a47 has its CatchHandler @ 003e9f94 */
  lVar9 = FUN_003e61b0(&local_1d0,pvVar46,uVar10);
  *plVar39 = 0;
  plVar39[1] = lVar9;
  bVar7 = (*(byte *)(plVar39 + 2) & 1) != 0;
  pvVar46 = pvVar44;
  if (bVar7) {
    pvVar46 = (void *)plVar39[4];
  }
  uVar10 = (ulong)(*(byte *)(plVar39 + 2) >> 1);
  if (bVar7) {
    uVar10 = plVar39[3];
  }
                    /* try { // try from 003e9a64 to 003e9a6b has its CatchHandler @ 003e9f90 */
  uVar27 = FUN_003e61b0(&local_1d0,pvVar46,uVar10);
  plVar39[1] = uVar27;
  uVar10 = DAT_00ca11f0;
  if (DAT_00ca11f0 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(DAT_00ca11f0 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_00ca11f0 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_00ca11f0 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_00ca11f0 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_00ca11f0 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_00ca11f0 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_00ca11f0 >> 8)),POPCOUNT((char)DAT_00ca11f0)))
                                                  )))));
    uVar51 = NEON_uaddlv(uVar11,1);
    uVar48 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar51) & 0xffffffff;
    if (uVar48 < 2) {
      uVar27 = DAT_00ca11f0 - 1 & uVar27;
    }
    else if (DAT_00ca11f0 <= uVar27) {
      uVar25 = 0;
      if (DAT_00ca11f0 != 0) {
        uVar25 = uVar27 / DAT_00ca11f0;
      }
      uVar27 = uVar27 - uVar25 * DAT_00ca11f0;
    }
    plVar24 = *(long **)(DAT_00ca11e8 + uVar27 * 8);
    if (plVar24 != (long *)0x0) {
      sVar1 = (ulong)(*(byte *)(plVar39 + 2) >> 1);
      if ((*(byte *)(plVar39 + 2) & 1) != 0) {
        pvVar44 = (void *)plVar39[4];
        sVar1 = plVar39[3];
      }
      plVar24 = (long *)*plVar24;
      if (plVar24 != (long *)0x0) {
        if (uVar48 < 2) {
          uVar48 = DAT_00ca11f0 - 1;
          if (sVar1 == 0) {
            do {
              if ((plVar24[1] & uVar48) != uVar27) break;
              uVar25 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
              if ((*(byte *)(plVar24 + 2) & 1) != 0) {
                uVar25 = plVar24[3];
              }
              if (uVar25 == 0) goto LAB_003e9d58;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              if ((plVar24[1] & uVar48) != uVar27) break;
              bVar21 = *(byte *)(plVar24 + 2);
              sVar13 = (ulong)(bVar21 >> 1);
              if ((bVar21 & 1) != 0) {
                sVar13 = plVar24[3];
              }
              if (sVar13 == sVar1) {
                if ((bVar21 & 1) == 0) {
                  uVar25 = 0;
                  while (*(char *)((long)plVar24 + uVar25 + 0x11) ==
                         *(char *)((long)pvVar44 + uVar25)) {
                    uVar25 = uVar25 + 1;
                    if (bVar21 >> 1 == uVar25) goto LAB_003e9d54;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar24[4],pvVar44,sVar1);
                  if (iVar8 == 0) goto LAB_003e9d58;
                }
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
        else if (sVar1 == 0) {
          do {
            uVar48 = plVar24[1];
            if (DAT_00ca11f0 <= uVar48) {
              uVar25 = 0;
              if (DAT_00ca11f0 != 0) {
                uVar25 = uVar48 / DAT_00ca11f0;
              }
              uVar48 = uVar48 - uVar25 * DAT_00ca11f0;
            }
            if (uVar48 != uVar27) break;
            uVar48 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
            if ((*(byte *)(plVar24 + 2) & 1) != 0) {
              uVar48 = plVar24[3];
            }
            if (uVar48 == 0) goto LAB_003e9d58;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar48 = plVar24[1];
            if (uVar10 <= uVar48) {
              uVar25 = 0;
              if (uVar10 != 0) {
                uVar25 = uVar48 / uVar10;
              }
              uVar48 = uVar48 - uVar25 * uVar10;
            }
            if (uVar48 != uVar27) break;
            bVar21 = *(byte *)(plVar24 + 2);
            sVar13 = (ulong)(bVar21 >> 1);
            if ((bVar21 & 1) != 0) {
              sVar13 = plVar24[3];
            }
            if (sVar13 == sVar1) {
              if ((bVar21 & 1) == 0) {
                uVar48 = 0;
                while (*(char *)((long)plVar24 + uVar48 + 0x11) == *(char *)((long)pvVar44 + uVar48)
                      ) {
                  uVar48 = uVar48 + 1;
                  if (bVar21 >> 1 == uVar48) goto LAB_003e9d54;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar24[4],pvVar44,sVar1);
                if (iVar8 == 0) goto LAB_003e9d58;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
  }
  if ((uVar10 == 0) || (DAT_00ca1208 * (float)uVar10 < (float)(DAT_00ca1200 + 1))) {
    if (uVar10 < 3) {
      uVar27 = 1;
    }
    else {
      uVar27 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar27 = uVar27 | uVar10 << 1;
    uVar48 = (ulong)((float)(DAT_00ca1200 + 1) / DAT_00ca1208);
    if (uVar48 <= uVar27) {
      uVar48 = uVar27;
    }
    if (uVar48 - 1 == 0) {
      uVar48 = 2;
    }
    else if ((uVar48 & uVar48 - 1) != 0) {
                    /* try { // try from 003e9be8 to 003e9d83 has its CatchHandler @ 003e9f48 */
      uVar48 = std::__ndk1::__next_prime(uVar48);
      uVar10 = DAT_00ca11f0;
    }
    uVar27 = uVar48;
    if (uVar10 < uVar48) {
LAB_003e9c00:
      FUN_003e6610(uVar27);
    }
    else if (uVar48 < uVar10) {
      uVar27 = (ulong)((float)DAT_00ca1200 / DAT_00ca1208);
      if ((uVar10 < 3) ||
         (uVar11 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
         uVar51 = NEON_uaddlv(uVar11,1), 1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar51)))
      {
        uVar27 = std::__ndk1::__next_prime(uVar27);
      }
      else if (1 < uVar27) {
        uVar27 = 1L << (-LZCOUNT(uVar27 - 1) & 0x3fU);
      }
      if (uVar27 <= uVar48) {
        uVar27 = uVar48;
      }
      if (uVar27 < uVar10) goto LAB_003e9c00;
    }
  }
LAB_003e9d94:
  uVar10 = DAT_00ca11f0;
  lVar9 = DAT_00ca11e8;
  uVar48 = plVar39[1];
  uVar11 = CONCAT17(POPCOUNT((char)(DAT_00ca11f0 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(DAT_00ca11f0 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(DAT_00ca11f0 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(DAT_00ca11f0 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(DAT_00ca11f0 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(DAT_00ca11f0 >>
                                                                                0x10)),
                                                                 CONCAT11(POPCOUNT((char)(
                                                  DAT_00ca11f0 >> 8)),POPCOUNT((char)DAT_00ca11f0)))
                                                  )))));
  uVar51 = NEON_uaddlv(uVar11,1);
  uVar27 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar51) & 0xffffffff;
  if (uVar27 < 2) {
    uVar48 = DAT_00ca11f0 - 1 & uVar48;
  }
  else if (DAT_00ca11f0 <= uVar48) {
    uVar25 = 0;
    if (DAT_00ca11f0 != 0) {
      uVar25 = uVar48 / DAT_00ca11f0;
    }
    uVar48 = uVar48 - uVar25 * DAT_00ca11f0;
  }
  plVar24 = *(long **)(DAT_00ca11e8 + uVar48 * 8);
  if (plVar24 == (long *)0x0) {
    *plVar39 = (long)DAT_00ca11f8;
    DAT_00ca11f8 = plVar39;
    *(long ***)(lVar9 + uVar48 * 8) = &DAT_00ca11f8;
    if (*plVar39 != 0) {
      uVar48 = *(ulong *)(*plVar39 + 8);
      if (uVar27 < 2) {
        uVar48 = uVar48 & uVar10 - 1;
      }
      else if (uVar10 <= uVar48) {
        uVar27 = 0;
        if (uVar10 != 0) {
          uVar27 = uVar48 / uVar10;
        }
        uVar48 = uVar48 - uVar27 * uVar10;
      }
      plVar24 = (long *)(DAT_00ca11e8 + uVar48 * 8);
      goto LAB_003e9e3c;
    }
  }
  else {
    *plVar39 = *plVar24;
LAB_003e9e3c:
    *plVar24 = (long)plVar39;
  }
  DAT_00ca1200 = DAT_00ca1200 + 1;
LAB_003e9e50:
  FUN_003d5c80(&local_1a0);
  if (*(long *)(lVar3 + 0x28) != local_78[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_003e7bd4:
  pcVar40 = *ppuVar29;
  ppuVar15 = (undefined **)strlen(pcVar40);
  if (((undefined **)unaff_x22 != ppuVar15) ||
     (iVar8 = memcmp(ppuVar49,pcVar40,(size_t)unaff_x22), iVar8 != 0)) goto LAB_003e7bc4;
  uVar26 = (uint)uVar48;
joined_r0x003e7c00:
  if ((uVar26 >> 0xf & 1) == 0) {
    uVar26 = (uint)uVar48;
    uVar52 = uVar26 >> 8 & 0xff;
    if (local_118 < local_110) goto LAB_003e7a1c;
    goto LAB_003e7f04;
  }
LAB_003e7d04:
  local_a0 = (undefined **)*param_1;
  uStack_98 = (undefined **)param_1[1];
                    /* try { // try from 003e7d18 to 003e7d33 has its CatchHandler @ 003e9fe0 */
  local_b0 = pcVar2;
  uStack_a8 = (byte **)uVar27;
  local_90 = ppuVar49;
  local_88 = (undefined **)unaff_x22;
  FUN_00b5c180(&local_1d0,"[GameDB] Invalid GS HW Fix Value for \'{}\' in \'{}\': \'{}\'",0x37,0xddd
               ,&local_b0);
                    /* try { // try from 003e7d34 to 003e7d47 has its CatchHandler @ 003e9fdc */
  FUN_00988ad0(&PTR_FUN_00c9aa28,0xc,&local_1d0);
  goto LAB_003e7d4c;
LAB_003e7bc4:
  uVar48 = uVar48 + 1;
  ppuVar29 = ppuVar29 + 3;
  if (uVar48 == 0x28) goto LAB_003e7d04;
  goto LAB_003e7bd4;
  while( true ) {
    uVar26 = (uint)*pbVar23;
    plVar39 = (long *)((long)plVar24 + -4);
    lVar14 = lVar35 + 4;
    uVar25 = uVar16 - 4;
    if (9 < uVar26 - 0x30) break;
LAB_003e7c48:
    uVar16 = uVar25;
    lVar35 = lVar14;
    plVar24 = plVar39;
    pbVar23 = pbVar23 + 1;
    lVar32 = lVar32 + -1;
    *(uint *)((long)&local_b0 + lVar32 * 4) = uVar26 - 0x30;
    if ((pbVar23 == pbVar30) || (lVar32 == 0)) break;
  }
  lVar14 = (lVar32 << 0x20) >> 0x1e;
  piVar33 = (int *)((long)&local_b0 + lVar14 + 4);
  uVar52 = *(uint *)((long)&local_b0 + lVar14);
  if (piVar33 < (int *)((long)&local_90 + 4U)) {
    uVar25 = (long)&uStack_a8 + lVar32 * 4;
    if (uVar25 <= uVar10) {
      uVar25 = uVar10;
    }
    uVar25 = (uVar25 - ((long)&local_b0 + lVar32 * 4)) - 5;
    if (uVar25 < 0x1c) {
      piVar36 = &DAT_00235a40;
    }
    else {
      uVar25 = (uVar25 >> 2) + 1;
      uVar37 = uVar25 & 0x7ffffffffffffff8;
      iVar53 = 0;
      iVar54 = 0;
      iVar8 = 0;
      lVar14 = 0;
      if (uVar37 - 8 == 0) {
        iVar55 = 0;
        iVar56 = 0;
        iVar57 = 0;
        iVar58 = 0;
LAB_003e7df4:
        lVar35 = lVar14 * 4;
        piVar36 = piVar33 + lVar14;
        uVar52 = uVar52 + (int)*(undefined8 *)(&DAT_00235a40 + lVar14) * (int)*(undefined8 *)piVar36
        ;
        iVar8 = iVar8 + (int)((ulong)*(undefined8 *)(&DAT_00235a40 + lVar14) >> 0x20) *
                        (int)((ulong)*(undefined8 *)piVar36 >> 0x20);
        iVar53 = iVar53 + (int)*(undefined8 *)(&UNK_00235a48 + lVar35) *
                          (int)*(undefined8 *)(piVar36 + 2);
        iVar54 = iVar54 + (int)((ulong)*(undefined8 *)(&UNK_00235a48 + lVar35) >> 0x20) *
                          (int)((ulong)*(undefined8 *)(piVar36 + 2) >> 0x20);
        iVar55 = iVar55 + (int)*(undefined8 *)(&DAT_00235a50 + lVar35) *
                          (int)*(undefined8 *)(piVar36 + 4);
        iVar56 = iVar56 + (int)((ulong)*(undefined8 *)(&DAT_00235a50 + lVar35) >> 0x20) *
                          (int)((ulong)*(undefined8 *)(piVar36 + 4) >> 0x20);
        iVar57 = iVar57 + (int)*(undefined8 *)(&UNK_00235a58 + lVar35) *
                          (int)*(undefined8 *)(piVar36 + 6);
        iVar58 = iVar58 + (int)((ulong)*(undefined8 *)(&UNK_00235a58 + lVar35) >> 0x20) *
                          (int)((ulong)*(undefined8 *)(piVar36 + 6) >> 0x20);
      }
      else {
        if (uVar16 <= uVar10) {
          uVar16 = uVar10;
        }
        uVar16 = (((uVar16 + lVar35 >> 2) + 1 & 0x7ffffffffffffff8) - 8 >> 3) + 1 &
                 0x3ffffffffffffffe;
        iVar55 = 0;
        iVar56 = 0;
        iVar57 = 0;
        iVar58 = 0;
        puVar38 = (undefined8 *)&DAT_00235a60;
        do {
          uVar52 = uVar52 + (int)puVar38[-4] * (int)plVar24[-2] + (int)*puVar38 * (int)plVar24[2];
          iVar8 = iVar8 + (int)((ulong)puVar38[-4] >> 0x20) * (int)((ulong)plVar24[-2] >> 0x20) +
                  (int)((ulong)*puVar38 >> 0x20) * (int)((ulong)plVar24[2] >> 0x20);
          iVar53 = iVar53 + (int)puVar38[-3] * (int)plVar24[-1] + (int)puVar38[1] * (int)plVar24[3];
          iVar54 = iVar54 + (int)((ulong)puVar38[-3] >> 0x20) * (int)((ulong)plVar24[-1] >> 0x20) +
                   (int)((ulong)puVar38[1] >> 0x20) * (int)((ulong)plVar24[3] >> 0x20);
          iVar55 = iVar55 + (int)puVar38[-2] * (int)*plVar24 + (int)puVar38[2] * (int)plVar24[4];
          iVar56 = iVar56 + (int)((ulong)puVar38[-2] >> 0x20) * (int)((ulong)*plVar24 >> 0x20) +
                   (int)((ulong)puVar38[2] >> 0x20) * (int)((ulong)plVar24[4] >> 0x20);
          iVar57 = iVar57 + (int)puVar38[-1] * (int)plVar24[1] + (int)puVar38[3] * (int)plVar24[5];
          iVar58 = iVar58 + (int)((ulong)puVar38[-1] >> 0x20) * (int)((ulong)plVar24[1] >> 0x20) +
                   (int)((ulong)puVar38[3] >> 0x20) * (int)((ulong)plVar24[5] >> 0x20);
          lVar14 = lVar14 + 0x10;
          uVar16 = uVar16 - 2;
          plVar24 = plVar24 + 8;
          puVar38 = puVar38 + 8;
        } while (uVar16 != 0);
        if (((uVar37 - 8 >> 3) + 1 & 1) != 0) goto LAB_003e7df4;
      }
      uVar52 = iVar55 + uVar52 + iVar56 + iVar8 + iVar57 + iVar53 + iVar58 + iVar54;
      if (uVar25 == uVar37) goto LAB_003e7e5c;
      piVar36 = &DAT_00235a40 + uVar37;
      piVar33 = piVar33 + uVar37;
    }
    do {
      piVar34 = piVar33 + 1;
      uVar52 = uVar52 + *piVar36 * *piVar33;
      piVar33 = piVar34;
      piVar36 = piVar36 + 1;
    } while (piVar34 < (int *)((long)&local_90 + 4U));
  }
LAB_003e7e5c:
  uVar25 = ((ulong)local_90 >> 0x20) *
           (ulong)*(uint *)((long)&DAT_00235a3c + (0x900000000 - (lVar32 << 0x20) >> 0x1e));
  pbVar23 = pbVar23 + -(ulong)((uVar25 & 0xffffffff00000000) != 0);
  uVar31 = (uint)uVar25;
  if (pbVar23 == pbVar30) {
    if (CARRY4(uVar52,uVar31)) {
LAB_003e7ebc:
      uVar26 = (uint)pbVar23;
      goto LAB_003e7ec0;
    }
LAB_003e7ec4:
    uVar31 = uVar31 + uVar52;
    if (uVar48 == 0) {
LAB_003e7ecc:
      uVar22 = (int)uVar31 >> 0x1f & 0x22;
      uVar26 = uVar31;
    }
    else {
LAB_003e7ce8:
      uVar26 = -uVar31;
      uVar22 = 0x22;
      if (uVar31 < 0x80000001) {
        uVar22 = 0;
      }
    }
  }
  else {
    uVar26 = *pbVar23 - 0x30;
    uVar22 = 0x16;
    if (uVar26 < 10) {
LAB_003e7ec0:
      uVar22 = 0x16;
    }
    else if (!CARRY4(uVar52,uVar31)) goto LAB_003e7ec4;
  }
  if (uVar22 != 0) {
    uVar26 = 0;
  }
  if ((bool)(bVar7 & uVar22 == 0)) {
LAB_003e7ef4:
    uVar52 = uVar26 >> 8;
    if (local_118 < local_110) {
LAB_003e7a1c:
      *(int *)local_118 = (int)lVar17;
      *(uint *)((long)local_118 + 4) = uVar26 & 0xff | uVar52 << 8;
      local_118 = local_118 + 1;
      goto LAB_003e7a28;
    }
LAB_003e7f04:
    ppuVar49 = local_120;
    unaff_x22 = (char *)((long)local_118 - (long)local_120);
    lVar14 = (long)unaff_x22 >> 3;
    uVar27 = lVar14 + 1;
    if (uVar27 >> 0x3d != 0) {
                    /* try { // try from 003e9ed0 to 003e9ed7 has its CatchHandler @ 003ea01c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar48 = (long)local_110 - (long)local_120 >> 2;
    if (uVar27 <= uVar48) {
      uVar27 = uVar48;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)local_110 - (long)local_120)) {
      uVar27 = 0x1fffffffffffffff;
    }
    if (uVar27 == 0) {
      ppuVar15 = (undefined **)0x0;
      ppuVar29 = (undefined **)(lVar14 * 8);
      *(int *)ppuVar29 = (int)lVar17;
      *(uint *)((long)ppuVar29 + 4) = uVar26 & 0xff | uVar52 << 8;
    }
    else {
      if (uVar27 >> 0x3d != 0) {
                    /* try { // try from 003e9ee4 to 003e9eef has its CatchHandler @ 003ea01c */
                    /* WARNING: Subroutine does not return */
        FUN_003d5c00("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 003e7f4c to 003e7f4f has its CatchHandler @ 003e9fd8 */
      ppuVar15 = (undefined **)operator_new(uVar27 << 3);
      ppuVar29 = ppuVar15 + lVar14;
      *(int *)ppuVar29 = (int)lVar17;
      *(uint *)((long)ppuVar29 + 4) = uVar26 & 0xff | uVar52 << 8;
    }
    if (0 < (long)unaff_x22) {
      memcpy(ppuVar15,ppuVar49,(size_t)unaff_x22);
    }
    local_110 = ppuVar15 + uVar27;
    local_118 = ppuVar29 + 1;
    ppuVar29 = ppuVar49;
    local_120 = ppuVar15;
  }
  else {
LAB_003e7ab8:
    local_a0 = (undefined **)*param_1;
    uStack_98 = (undefined **)param_1[1];
                    /* try { // try from 003e7ac8 to 003e7ae3 has its CatchHandler @ 003ea018 */
    local_b0 = pcVar2;
    uStack_a8 = (byte **)uVar27;
    FUN_00b5c180(&local_1d0,
                 "[GameDB] Invalid GS HW Fix: \'{}\' specified for serial \'{}\'. Dropping!",0x45,
                 0xdd,&local_b0);
                    /* try { // try from 003e7ae4 to 003e7af7 has its CatchHandler @ 003ea014 */
    FUN_00988ad0(&PTR_FUN_00c9aa28,0xc,&local_1d0);
LAB_003e7d4c:
    ppuVar49 = (undefined **)((ulong)local_1d0 & 1);
    ppuVar29 = local_1c0;
  }
  if (ppuVar49 != (undefined **)0x0) {
    operator_delete(ppuVar29);
  }
LAB_003e7a28:
  puVar50 = *unaff_x25;
  lVar9 = *(long *)(puVar50 + lVar9 * 0x90 + 0x80);
  unaff_x24 = (char *)&PTR_s_autoFlush_00c612f8;
  if (lVar9 == -1) goto LAB_003e7fd0;
  goto LAB_003e7a40;
LAB_003e8524:
  local_a0 = (undefined **)*param_1;
  uStack_98 = (undefined **)param_1[1];
                    /* try { // try from 003e8534 to 003e854f has its CatchHandler @ 003e9f30 */
  local_b0 = (char *)pbVar23;
  uStack_a8 = ppbVar42;
  FUN_00b5c180(&local_1d0,
               "[GameDB] Duplicate CRC \'{}\' found for serial: \'{}\'. Skipping, CRCs are case-insensitive!"
               ,0x58,0xdd,&local_b0);
                    /* try { // try from 003e8550 to 003e8563 has its CatchHandler @ 003e9f2c */
  FUN_00988ad0(&PTR_FUN_00c9aa28,0xc,&local_1d0);
joined_r0x003e8a74:
  if (((ulong)local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  puVar50 = *(undefined **)unaff_x22;
  lVar9 = *(long *)(puVar50 + lVar9 * 0x90 + 0x80);
  if (lVar9 == -1) goto LAB_003e8b78;
  goto LAB_003e8344;
LAB_003e9d54:
  if (plVar24 != (long *)0x0) {
LAB_003e9d58:
    FUN_003d5c80(plVar39 + 5);
    if ((*(byte *)(plVar39 + 2) & 1) != 0) {
      operator_delete((void *)plVar39[4]);
    }
    operator_delete(plVar39);
    goto LAB_003e9e50;
  }
  goto LAB_003e9d94;
}

