// vaddr 0xB3B020  ghidra 0xC3B020  name=FUN_00c3b020  size=8712 instr-addr
// duvod: isolated yield x12
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00c3b020(long param_1,long *param_2,ulong *param_3,undefined1 (*param_4) [16],ulong param_5
                 ,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  byte bVar30;
  ushort uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  bool bVar41;
  undefined4 uVar42;
  undefined1 *puVar43;
  uint *puVar44;
  undefined8 *puVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined1 (*pauVar49) [16];
  undefined8 uVar50;
  ulong uVar51;
  undefined1 (*pauVar52) [16];
  int *piVar53;
  uint *puVar54;
  undefined1 (*pauVar55) [16];
  code *pcVar56;
  ulong uVar57;
  long lVar58;
  uint uVar59;
  uint uVar60;
  ulong uVar62;
  long lVar63;
  long lVar64;
  uint uVar65;
  undefined8 *puVar66;
  uint uVar67;
  ulong uVar68;
  ulong uVar69;
  byte *pbVar70;
  ulong uVar71;
  ulong uVar72;
  undefined8 *puVar73;
  uint uVar74;
  undefined1 (*pauVar75) [16];
  undefined8 *puVar76;
  undefined1 (*pauVar77) [16];
  undefined1 (*pauVar78) [16];
  undefined1 *puVar79;
  long lVar80;
  undefined1 *puVar81;
  undefined1 (*pauVar82) [16];
  long lVar83;
  uint *puVar84;
  ulong uVar85;
  void *__s;
  uint uVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  undefined1 auVar91 [16];
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar98;
  int iVar99;
  uint uVar100;
  undefined1 auVar97 [16];
  int iVar101;
  int iVar102;
  uint uVar103;
  int iVar104;
  int iVar105;
  int iVar107;
  int iVar108;
  uint uVar109;
  int iVar110;
  int iVar111;
  uint uVar112;
  undefined1 auVar106 [16];
  int iVar113;
  int iVar114;
  uint uVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  uint local_15c;
  int local_14c;
  undefined1 (*local_120) [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_a4;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_90;
  uint local_88 [2];
  long local_80;
  ulong uVar61;
  
  lVar32 = tpidr_el0;
  local_80 = *(long *)(lVar32 + 0x28);
  uVar60 = *(uint *)(param_1 + 0x100);
  uVar29 = *(uint *)(param_1 + 0x104);
  uVar57 = 0;
  if (2 < uVar60) {
    uVar57 = 3;
  }
  uVar59 = 3;
  if (uVar60 - 3 != 0) {
    uVar59 = 4;
  }
  uVar61 = (ulong)uVar59;
  lVar80 = *(long *)(param_1 + 8);
  if (0xfffffffc < uVar60 - 6) {
    uVar57 = (ulong)(uVar60 - 3);
  }
  uVar60 = *(uint *)(param_1 + 0x18);
  if (0xffe < uVar29) {
    uVar29 = 0xfff;
  }
  local_a4 = *(undefined4 *)(param_1 + 0x2c);
  pauVar52 = *(undefined1 (**) [16])(param_1 + 0x110);
  if (pauVar52 == (undefined1 (*) [16])0x0) {
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    uStack_d8 = SUB168(*pauVar52,8);
    local_e0 = SUB168(*pauVar52,0);
    uStack_c8 = SUB168(pauVar52[1],8);
    uStack_d0 = SUB168(pauVar52[1],0);
    local_c0 = *(undefined8 *)pauVar52[2];
  }
  pauVar52 = (undefined1 (*) [16])(*param_4 + param_5);
  local_b4 = 0;
  lVar27 = *(long *)(param_1 + 0xa0);
  puVar28 = *(uint **)(param_1 + 0xa8);
  local_b8 = 0;
  FUN_00c3f820(&local_e0,0,param_5 & 0xffffffff);
  iVar87 = *(int *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    if (param_5 < 0x401) {
      *(undefined4 *)(param_1 + 0xd0) = 1;
    }
    lVar58 = *(long *)(param_1 + 0xd8);
    if (*(int *)(lVar58 + 0x808) == 2) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      if (iVar87 != 2) {
        lVar83 = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        lVar63 = *(long *)(param_1 + 0x80);
        do {
          uVar71 = *(ulong *)(lVar58 + 8 + lVar83 * 8);
          iVar88 = 1 << (ulong)(0xb - ((uint)uVar71 & 0xff) & 0x1f);
          if ((uVar71 & 0xff) == 0) {
            iVar88 = 1;
          }
          *(int *)(lVar63 + lVar83 * 4) = iVar88;
          *(int *)(param_1 + 0xb0) = iVar88 + *(int *)(param_1 + 0xb0);
          lVar83 = lVar83 + 1;
        } while (lVar83 != 0x100);
      }
      lVar83 = 0;
      lVar63 = (long)(1 << (ulong)(*(ushort *)(lVar58 + 0x10c0) - 1 & 0x1f));
      if (*(ushort *)(lVar58 + 0x10c0) == 0) {
        lVar63 = 1;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      lVar64 = *(long *)(param_1 + 0x88);
      piVar53 = (int *)(lVar58 + lVar63 * 4 + 0x10c8);
      do {
        iVar88 = 1 << (ulong)(10 - (*piVar53 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar53 + 0xffffU < 0x10000) {
          iVar88 = 1;
        }
        *(int *)(lVar64 + lVar83) = iVar88;
        *(int *)(param_1 + 0xb4) = iVar88 + *(int *)(param_1 + 0xb4);
        lVar83 = lVar83 + 4;
        piVar53 = piVar53 + 2;
      } while (lVar83 != 0x90);
      lVar83 = 0;
      uVar31 = *(ushort *)(lVar58 + 0xb14);
      lVar63 = (long)(1 << (ulong)(uVar31 - 1 & 0x1f));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (uVar31 == 0) {
        lVar63 = 1;
      }
      lVar64 = *(long *)(param_1 + 0x90);
      piVar53 = (int *)(lVar58 + lVar63 * 4 + 0xb1c);
      do {
        iVar88 = 1 << (ulong)(10 - (*piVar53 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar53 + 0xffffU < 0x10000) {
          iVar88 = 1;
        }
        *(int *)(lVar64 + lVar83) = iVar88;
        *(int *)(param_1 + 0xb8) = iVar88 + *(int *)(param_1 + 0xb8);
        lVar83 = lVar83 + 4;
        piVar53 = piVar53 + 2;
      } while (lVar83 != 0xd4);
      lVar83 = 0;
      uVar31 = *(ushort *)(lVar58 + 0x810);
      lVar63 = (long)(1 << (ulong)(uVar31 - 1 & 0x1f));
      *(undefined4 *)(param_1 + 0xbc) = 0;
      if (uVar31 == 0) {
        lVar63 = 1;
      }
      lVar64 = *(long *)(param_1 + 0x98);
      piVar53 = (int *)(lVar58 + lVar63 * 4 + 0x818);
      do {
        iVar88 = 1 << (ulong)(10 - (*piVar53 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar53 + 0xffffU < 0x10000) {
          iVar88 = 1;
        }
        *(int *)(lVar64 + lVar83) = iVar88;
        uVar86 = iVar88 + *(int *)(param_1 + 0xbc);
        *(uint *)(param_1 + 0xbc) = uVar86;
        lVar83 = lVar83 + 4;
        piVar53 = piVar53 + 2;
      } while (lVar83 != 0x80);
      goto joined_r0x00c3bc6c;
    }
    if (iVar87 != 2) {
      __s = *(void **)(param_1 + 0x80);
      memset(__s,0,0x400);
      pauVar55 = param_4;
      if (0 < (long)param_5) {
        do {
          puVar81 = *pauVar55;
          lVar58 = (ulong)(byte)(*pauVar55)[0] * 4;
          *(int *)((long)__s + lVar58) = *(int *)((long)__s + lVar58) + 1;
          pauVar55 = (undefined1 (*) [16])(puVar81 + 1);
        } while ((undefined1 (*) [16])(puVar81 + 1) < pauVar52);
      }
      lVar58 = 0;
      lVar83 = *(long *)(param_1 + 0x80);
      iVar87 = 0;
      iVar88 = 0;
      iVar89 = 0;
      iVar90 = 0;
      iVar92 = 0;
      iVar93 = 0;
      iVar94 = 0;
      iVar95 = 0;
      do {
        puVar54 = (uint *)(lVar83 + lVar58);
        uVar86 = (*puVar54 >> 8) + 1;
        uVar67 = (puVar54[1] >> 8) + 1;
        uVar100 = (puVar54[2] >> 8) + 1;
        uVar103 = (puVar54[3] >> 8) + 1;
        uVar65 = ((uint)*(undefined8 *)(puVar54 + 4) >> 8) + 1;
        uVar109 = (uint)((ulong)*(undefined8 *)(puVar54 + 4) >> 0x28) + 1;
        uVar112 = ((uint)*(undefined8 *)(puVar54 + 6) >> 8) + 1;
        uVar115 = (uint)((ulong)*(undefined8 *)(puVar54 + 6) >> 0x28) + 1;
        puVar54[4] = uVar100;
        puVar54[5] = uVar103;
        *puVar54 = uVar86;
        puVar54[1] = uVar67;
        puVar54[8] = uVar112;
        puVar54[9] = uVar115;
        puVar54[4] = uVar65;
        puVar54[5] = uVar109;
        iVar87 = uVar86 + iVar87;
        iVar88 = uVar67 + iVar88;
        iVar89 = uVar100 + iVar89;
        iVar90 = uVar103 + iVar90;
        iVar92 = uVar65 + iVar92;
        iVar93 = uVar109 + iVar93;
        iVar94 = uVar112 + iVar94;
        iVar95 = uVar115 + iVar95;
        lVar58 = lVar58 + 0x20;
      } while (lVar58 != 0x400);
      *(int *)(param_1 + 0xb0) =
           iVar92 + iVar87 + iVar93 + iVar88 + iVar94 + iVar89 + iVar95 + iVar90;
    }
    uVar34 = _UNK_002a1f04;
    uVar33 = _DAT_002a1efc;
    uVar50 = _DAT_002a1eec;
    puVar66 = *(undefined8 **)(param_1 + 0x88);
    puVar66[5] = _UNK_002a1ef4;
    puVar66[4] = uVar50;
    puVar66[7] = uVar34;
    puVar66[6] = uVar33;
    uVar36 = _UNK_002a1f54;
    uVar35 = _DAT_002a1f4c;
    uVar34 = _UNK_002a1ee4;
    uVar33 = _DAT_002a1edc;
    uVar50 = _DAT_002a1ecc;
    puVar66[1] = _UNK_002a1ed4;
    *puVar66 = uVar50;
    puVar66[3] = uVar34;
    puVar66[2] = uVar33;
    puVar66[0x11] = uVar36;
    puVar66[0x10] = uVar35;
    uVar38 = _UNK_002a1f44;
    uVar37 = _DAT_002a1f3c;
    uVar36 = _DAT_002a1f2c;
    uVar35 = _UNK_002a1f24;
    uVar34 = _DAT_002a1f1c;
    uVar33 = _UNK_002a1f14;
    uVar50 = _DAT_002a1f0c;
    puVar66[0xd] = _UNK_002a1f34;
    puVar66[0xc] = uVar36;
    puVar66[0xf] = uVar38;
    puVar66[0xe] = uVar37;
    puVar66[9] = uVar33;
    puVar66[8] = uVar50;
    puVar66[0xb] = uVar35;
    puVar66[10] = uVar34;
    *(undefined4 *)(param_1 + 0xb4) = 0x28;
    puVar66 = *(undefined8 **)(param_1 + 0x90);
    *(undefined4 *)(puVar66 + 2) = 1;
    *(undefined4 *)((long)puVar66 + 0x14) = 1;
    *puVar66 = 0x100000001;
    *(undefined4 *)(puVar66 + 4) = 1;
    *(undefined4 *)((long)puVar66 + 0x24) = 1;
    puVar66[2] = 0x100000001;
    *(undefined4 *)(puVar66 + 6) = 1;
    *(undefined4 *)((long)puVar66 + 0x34) = 1;
    puVar66[4] = 0x100000001;
    *(undefined4 *)(puVar66 + 8) = 1;
    *(undefined4 *)((long)puVar66 + 0x44) = 1;
    puVar66[6] = 0x100000001;
    *(undefined4 *)(puVar66 + 10) = 1;
    *(undefined4 *)((long)puVar66 + 0x54) = 1;
    puVar66[8] = 0x100000001;
    *(undefined4 *)(puVar66 + 0xc) = 1;
    *(undefined4 *)((long)puVar66 + 100) = 1;
    puVar66[10] = 0x100000001;
    *(undefined4 *)(puVar66 + 0xe) = 1;
    *(undefined4 *)((long)puVar66 + 0x74) = 1;
    puVar66[0xc] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x10) = 1;
    *(undefined4 *)((long)puVar66 + 0x84) = 1;
    puVar66[0xe] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x12) = 1;
    *(undefined4 *)((long)puVar66 + 0x94) = 1;
    puVar66[0x10] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x14) = 1;
    *(undefined4 *)((long)puVar66 + 0xa4) = 1;
    puVar66[0x12] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x16) = 1;
    *(undefined4 *)((long)puVar66 + 0xb4) = 1;
    puVar66[0x14] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x18) = 1;
    *(undefined4 *)((long)puVar66 + 0xc4) = 1;
    puVar66[0x16] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x1a) = 1;
    *(undefined4 *)((long)puVar66 + 0xd4) = 1;
    puVar66[0x18] = 0x100000001;
    *(undefined4 *)(puVar66 + 0x1a) = 1;
    uVar86 = 0x35;
    *(undefined4 *)(param_1 + 0xb8) = 0x35;
    uVar34 = _UNK_002a1fd4;
    uVar33 = _DAT_002a1fcc;
    uVar50 = _DAT_002a1fbc;
    puVar66 = *(undefined8 **)(param_1 + 0x98);
    puVar66[0xd] = _UNK_002a1fc4;
    puVar66[0xc] = uVar50;
    puVar66[0xf] = uVar34;
    puVar66[0xe] = uVar33;
    uVar40 = _UNK_002a1fb4;
    uVar39 = _DAT_002a1fac;
    uVar38 = _DAT_002a1f9c;
    uVar37 = _UNK_002a1f94;
    uVar36 = _DAT_002a1f8c;
    auVar91 = _DAT_002a1f7c;
    uVar35 = _UNK_002a1f74;
    uVar34 = _DAT_002a1f6c;
    uVar33 = _UNK_002a1f64;
    uVar50 = _DAT_002a1f5c;
    puVar66[9] = _UNK_002a1fa4;
    puVar66[8] = uVar38;
    puVar66[0xb] = uVar40;
    puVar66[10] = uVar39;
    puVar66[5] = auVar91._8_8_;
    puVar66[4] = auVar91._0_8_;
    puVar66[7] = uVar37;
    puVar66[6] = uVar36;
    puVar66[1] = uVar33;
    *puVar66 = uVar50;
    puVar66[3] = uVar35;
    puVar66[2] = uVar34;
  }
  else {
    if (iVar87 != 2) {
      piVar53 = *(int **)(param_1 + 0x80);
      uVar86 = (int)*(undefined8 *)(piVar53 + 0xfc) +
               (int)*(undefined8 *)(piVar53 + 0xf4) +
               (int)*(undefined8 *)(piVar53 + 0xec) +
               (int)*(undefined8 *)(piVar53 + 0xe4) +
               (int)*(undefined8 *)(piVar53 + 0xdc) +
               (int)*(undefined8 *)(piVar53 + 0xd4) +
               (int)*(undefined8 *)(piVar53 + 0xcc) +
               (int)*(undefined8 *)(piVar53 + 0xc4) +
               (int)*(undefined8 *)(piVar53 + 0xbc) +
               (int)*(undefined8 *)(piVar53 + 0xb4) +
               (int)*(undefined8 *)(piVar53 + 0xac) +
               (int)*(undefined8 *)(piVar53 + 0xa4) +
               (int)*(undefined8 *)(piVar53 + 0x9c) +
               (int)*(undefined8 *)(piVar53 + 0x94) +
               (int)*(undefined8 *)(piVar53 + 0x8c) +
               (int)*(undefined8 *)(piVar53 + 0x84) +
               (int)*(undefined8 *)(piVar53 + 0x7c) +
               (int)*(undefined8 *)(piVar53 + 0x74) +
               (int)*(undefined8 *)(piVar53 + 0x6c) +
               (int)*(undefined8 *)(piVar53 + 100) +
               (int)*(undefined8 *)(piVar53 + 0x5c) +
               (int)*(undefined8 *)(piVar53 + 0x54) +
               (int)*(undefined8 *)(piVar53 + 0x4c) +
               (int)*(undefined8 *)(piVar53 + 0x44) +
               (int)*(undefined8 *)(piVar53 + 0x3c) +
               (int)*(undefined8 *)(piVar53 + 0x34) +
               (int)*(undefined8 *)(piVar53 + 0x2c) +
               (int)*(undefined8 *)(piVar53 + 0x24) +
               (int)*(undefined8 *)(piVar53 + 0x1c) +
               (int)*(undefined8 *)(piVar53 + 0x14) +
               (int)*(undefined8 *)(piVar53 + 0xc) + piVar53[4] +
               piVar53[0xf8] +
               piVar53[0xf0] +
               piVar53[0xe8] +
               piVar53[0xe0] +
               piVar53[0xd8] +
               piVar53[0xd0] +
               piVar53[200] +
               piVar53[0xc0] +
               piVar53[0xb8] +
               piVar53[0xb0] +
               piVar53[0xa8] +
               piVar53[0xa0] +
               piVar53[0x98] +
               piVar53[0x90] +
               piVar53[0x88] +
               piVar53[0x80] +
               piVar53[0x78] +
               piVar53[0x70] +
               piVar53[0x68] +
               piVar53[0x60] +
               piVar53[0x58] +
               piVar53[0x50] +
               piVar53[0x48] +
               piVar53[0x40] +
               piVar53[0x38] +
               piVar53[0x30] +
               piVar53[0x28] + piVar53[0x20] + piVar53[0x18] + piVar53[0x10] + piVar53[8] + *piVar53
               + (int)((ulong)*(undefined8 *)(piVar53 + 0xfc) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xf4) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xec) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xe4) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xdc) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xd4) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xcc) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xc4) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xbc) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xb4) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xac) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xa4) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x9c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x94) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x8c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x84) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x7c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x74) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x6c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 100) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x5c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x54) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x4c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x44) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x3c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x34) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x2c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x24) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x1c) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0x14) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar53 + 0xc) >> 0x20) + piVar53[5] +
                 piVar53[0xf9] +
                 piVar53[0xf1] +
                 piVar53[0xe9] +
                 piVar53[0xe1] +
                 piVar53[0xd9] +
                 piVar53[0xd1] +
                 piVar53[0xc9] +
                 piVar53[0xc1] +
                 piVar53[0xb9] +
                 piVar53[0xb1] +
                 piVar53[0xa9] +
                 piVar53[0xa1] +
                 piVar53[0x99] +
                 piVar53[0x91] +
                 piVar53[0x89] +
                 piVar53[0x81] +
                 piVar53[0x79] +
                 piVar53[0x71] +
                 piVar53[0x69] +
                 piVar53[0x61] +
                 piVar53[0x59] +
                 piVar53[0x51] +
                 piVar53[0x49] +
                 piVar53[0x41] +
                 piVar53[0x39] +
                 piVar53[0x31] +
                 piVar53[0x29] +
                 piVar53[0x21] + piVar53[0x19] + piVar53[0x11] + piVar53[9] + piVar53[1] +
               (int)*(undefined8 *)(piVar53 + 0xfe) +
               (int)*(undefined8 *)(piVar53 + 0xf6) +
               (int)*(undefined8 *)(piVar53 + 0xee) +
               (int)*(undefined8 *)(piVar53 + 0xe6) +
               (int)*(undefined8 *)(piVar53 + 0xde) +
               (int)*(undefined8 *)(piVar53 + 0xd6) +
               (int)*(undefined8 *)(piVar53 + 0xce) +
               (int)*(undefined8 *)(piVar53 + 0xc6) +
               (int)*(undefined8 *)(piVar53 + 0xbe) +
               (int)*(undefined8 *)(piVar53 + 0xb6) +
               (int)*(undefined8 *)(piVar53 + 0xae) +
               (int)*(undefined8 *)(piVar53 + 0xa6) +
               (int)*(undefined8 *)(piVar53 + 0x9e) +
               (int)*(undefined8 *)(piVar53 + 0x96) +
               (int)*(undefined8 *)(piVar53 + 0x8e) +
               (int)*(undefined8 *)(piVar53 + 0x86) +
               (int)*(undefined8 *)(piVar53 + 0x7e) +
               (int)*(undefined8 *)(piVar53 + 0x76) +
               (int)*(undefined8 *)(piVar53 + 0x6e) +
               (int)*(undefined8 *)(piVar53 + 0x66) +
               (int)*(undefined8 *)(piVar53 + 0x5e) +
               (int)*(undefined8 *)(piVar53 + 0x56) +
               (int)*(undefined8 *)(piVar53 + 0x4e) +
               (int)*(undefined8 *)(piVar53 + 0x46) +
               (int)*(undefined8 *)(piVar53 + 0x3e) +
               (int)*(undefined8 *)(piVar53 + 0x36) +
               (int)*(undefined8 *)(piVar53 + 0x2e) +
               (int)*(undefined8 *)(piVar53 + 0x26) +
               (int)*(undefined8 *)(piVar53 + 0x1e) +
               (int)*(undefined8 *)(piVar53 + 0x16) +
               (int)*(undefined8 *)(piVar53 + 0xe) + piVar53[6] +
               piVar53[0xfa] +
               piVar53[0xf2] +
               piVar53[0xea] +
               piVar53[0xe2] +
               piVar53[0xda] +
               piVar53[0xd2] +
               piVar53[0xca] +
               piVar53[0xc2] +
               piVar53[0xba] +
               piVar53[0xb2] +
               piVar53[0xaa] +
               piVar53[0xa2] +
               piVar53[0x9a] +
               piVar53[0x92] +
               piVar53[0x8a] +
               piVar53[0x82] +
               piVar53[0x7a] +
               piVar53[0x72] +
               piVar53[0x6a] +
               piVar53[0x62] +
               piVar53[0x5a] +
               piVar53[0x52] +
               piVar53[0x4a] +
               piVar53[0x42] +
               piVar53[0x3a] +
               piVar53[0x32] +
               piVar53[0x2a] +
               piVar53[0x22] + piVar53[0x1a] + piVar53[0x12] + piVar53[10] + piVar53[2] +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xfe) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xf6) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xee) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xe6) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xde) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xd6) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xce) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xc6) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xbe) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xb6) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xae) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xa6) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x9e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x96) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x8e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x86) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x7e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x76) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x6e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x66) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x5e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x56) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x4e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x46) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x3e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x36) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x2e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x26) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x1e) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0x16) >> 0x20) +
               (int)((ulong)*(undefined8 *)(piVar53 + 0xe) >> 0x20) + piVar53[7] +
               piVar53[0xfb] +
               piVar53[0xf3] +
               piVar53[0xeb] +
               piVar53[0xe3] +
               piVar53[0xdb] +
               piVar53[0xd3] +
               piVar53[0xcb] +
               piVar53[0xc3] +
               piVar53[0xbb] +
               piVar53[0xb3] +
               piVar53[0xab] +
               piVar53[0xa3] +
               piVar53[0x9b] +
               piVar53[0x93] +
               piVar53[0x8b] +
               piVar53[0x83] +
               piVar53[0x7b] +
               piVar53[0x73] +
               piVar53[0x6b] +
               piVar53[99] +
               piVar53[0x5b] +
               piVar53[0x53] +
               piVar53[0x4b] +
               piVar53[0x43] +
               piVar53[0x3b] +
               piVar53[0x33] +
               piVar53[0x2b] +
               piVar53[0x23] + piVar53[0x1b] + piVar53[0x13] + piVar53[0xb] + piVar53[3];
      if (0x1fff < uVar86) {
        lVar58 = 0;
        uVar86 = (uint)LZCOUNT(uVar86 >> 0xc);
        uVar71 = CONCAT44(uVar86,uVar86) ^ 0x1f0000001f;
        iVar87 = 0;
        iVar88 = 0;
        iVar89 = 0;
        iVar90 = 0;
        auVar91._0_4_ = -(int)uVar71;
        auVar91._4_4_ = -(int)(uVar71 >> 0x20);
        auVar91._8_4_ = -(uVar86 ^ 0x1f);
        auVar91._12_4_ = -(uVar86 ^ 0x1f);
        iVar92 = 0;
        iVar93 = 0;
        iVar94 = 0;
        iVar95 = 0;
        do {
          pauVar55 = (undefined1 (*) [16])((long)piVar53 + lVar58);
          auVar97 = NEON_ushl(*pauVar55,auVar91,4);
          auVar106 = NEON_ushl(pauVar55[1],auVar91,4);
          iVar96 = auVar97._0_4_ + 1;
          iVar98 = auVar97._4_4_ + 1;
          iVar99 = auVar97._8_4_ + 1;
          iVar101 = auVar97._12_4_ + 1;
          iVar104 = auVar106._0_4_ + 1;
          iVar107 = auVar106._4_4_ + 1;
          iVar110 = auVar106._8_4_ + 1;
          iVar113 = auVar106._12_4_ + 1;
          *(int *)pauVar55[1] = iVar99;
          *(int *)(pauVar55[1] + 4) = iVar101;
          *(int *)*pauVar55 = iVar96;
          *(int *)(*pauVar55 + 4) = iVar98;
          *(int *)pauVar55[2] = iVar110;
          *(int *)(pauVar55[2] + 4) = iVar113;
          *(int *)pauVar55[1] = iVar104;
          *(int *)(pauVar55[1] + 4) = iVar107;
          iVar87 = iVar96 + iVar87;
          iVar88 = iVar98 + iVar88;
          iVar89 = iVar99 + iVar89;
          iVar90 = iVar101 + iVar90;
          iVar92 = iVar104 + iVar92;
          iVar93 = iVar107 + iVar93;
          iVar94 = iVar110 + iVar94;
          iVar95 = iVar113 + iVar95;
          lVar58 = lVar58 + 0x20;
        } while (lVar58 != 0x400);
        uVar86 = iVar92 + iVar87 + iVar93 + iVar88 + iVar94 + iVar89 + iVar95 + iVar90;
      }
      *(uint *)(param_1 + 0xb0) = uVar86;
    }
    puVar54 = *(uint **)(param_1 + 0x88);
    uVar86 = puVar54[1] + *puVar54 + puVar54[2] + puVar54[3] + puVar54[4] + puVar54[5] + puVar54[6]
             + puVar54[7] + puVar54[8] + puVar54[9] + puVar54[10] + puVar54[0xb] + puVar54[0xc] +
             puVar54[0xd] + puVar54[0xe] + puVar54[0xf] + puVar54[0x10] + puVar54[0x11] +
             puVar54[0x12] + puVar54[0x13] + puVar54[0x14] + puVar54[0x15] + puVar54[0x16] +
             puVar54[0x17] + puVar54[0x18] + puVar54[0x19] + puVar54[0x1a] + puVar54[0x1b] +
             puVar54[0x1c] + puVar54[0x1d] + puVar54[0x1e] + puVar54[0x1f] + puVar54[0x20] +
             puVar54[0x21] + puVar54[0x22] + puVar54[0x23];
    if (0xfff < uVar86) {
      uVar86 = (uint)LZCOUNT(uVar86 >> 0xb) ^ 0x1f;
      uVar67 = (*puVar54 >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar100 = (puVar54[1] >> (ulong)(uVar86 & 0x1f)) + 1;
      *puVar54 = uVar67;
      puVar54[1] = uVar100;
      uVar103 = (puVar54[2] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar65 = (puVar54[3] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[2] = uVar103;
      puVar54[3] = uVar65;
      uVar109 = (puVar54[4] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar112 = (puVar54[5] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[4] = uVar109;
      puVar54[5] = uVar112;
      uVar115 = (puVar54[6] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar74 = (puVar54[7] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[6] = uVar115;
      puVar54[7] = uVar74;
      uVar46 = (puVar54[8] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar1 = (puVar54[9] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[8] = uVar46;
      puVar54[9] = uVar1;
      uVar2 = (puVar54[10] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar3 = (puVar54[0xb] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[10] = uVar2;
      puVar54[0xb] = uVar3;
      uVar4 = (puVar54[0xc] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar5 = (puVar54[0xd] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0xc] = uVar4;
      puVar54[0xd] = uVar5;
      uVar6 = (puVar54[0xe] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar7 = (puVar54[0xf] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0xe] = uVar6;
      puVar54[0xf] = uVar7;
      uVar8 = (puVar54[0x10] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar9 = (puVar54[0x11] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x10] = uVar8;
      puVar54[0x11] = uVar9;
      uVar10 = (puVar54[0x12] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar11 = (puVar54[0x13] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x12] = uVar10;
      puVar54[0x13] = uVar11;
      uVar12 = (puVar54[0x14] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar13 = (puVar54[0x15] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x14] = uVar12;
      puVar54[0x15] = uVar13;
      uVar14 = (puVar54[0x16] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar15 = (puVar54[0x17] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x16] = uVar14;
      puVar54[0x17] = uVar15;
      uVar16 = (puVar54[0x18] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar17 = (puVar54[0x19] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x18] = uVar16;
      puVar54[0x19] = uVar17;
      uVar18 = (puVar54[0x1a] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar19 = (puVar54[0x1b] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x1a] = uVar18;
      puVar54[0x1b] = uVar19;
      uVar20 = (puVar54[0x1c] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar21 = (puVar54[0x1d] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x1c] = uVar20;
      puVar54[0x1d] = uVar21;
      uVar22 = (puVar54[0x1e] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar23 = (puVar54[0x1f] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x1e] = uVar22;
      puVar54[0x1f] = uVar23;
      uVar24 = (puVar54[0x20] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar25 = (puVar54[0x21] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x20] = uVar24;
      puVar54[0x21] = uVar25;
      uVar26 = (puVar54[0x22] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar86 = (puVar54[0x23] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x22] = uVar26;
      puVar54[0x23] = uVar86;
      uVar86 = uVar100 + uVar67 + uVar103 + uVar65 + uVar109 + uVar112 + uVar115 + uVar74 + uVar46 +
               uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
               uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 +
               uVar20 + uVar21 + uVar22 + uVar23 + uVar24 + uVar25 + uVar26 + uVar86;
    }
    *(uint *)(param_1 + 0xb4) = uVar86;
    pauVar55 = *(undefined1 (**) [16])(param_1 + 0x90);
    uVar86 = *(int *)*pauVar55 + *(int *)pauVar55[4] + *(int *)pauVar55[2] + *(int *)pauVar55[6] +
             (int)*(undefined8 *)pauVar55[1] + *(int *)pauVar55[5] +
             *(int *)pauVar55[3] + *(int *)pauVar55[7] +
             *(int *)pauVar55[8] + *(int *)pauVar55[10] +
             *(int *)pauVar55[9] + *(int *)pauVar55[0xb] + *(int *)pauVar55[0xc] +
             *(int *)(*pauVar55 + 4) + *(int *)(pauVar55[4] + 4) +
             *(int *)(pauVar55[2] + 4) + *(int *)(pauVar55[6] + 4) +
             (int)((ulong)*(undefined8 *)pauVar55[1] >> 0x20) + *(int *)(pauVar55[5] + 4) +
             *(int *)(pauVar55[3] + 4) + *(int *)(pauVar55[7] + 4) +
             *(int *)(pauVar55[8] + 4) + *(int *)(pauVar55[10] + 4) +
             *(int *)(pauVar55[9] + 4) + *(int *)(pauVar55[0xb] + 4) + *(int *)(pauVar55[0xc] + 4) +
             *(int *)(*pauVar55 + 8) + *(int *)(pauVar55[4] + 8) +
             *(int *)(pauVar55[2] + 8) + *(int *)(pauVar55[6] + 8) +
             (int)*(undefined8 *)(pauVar55[1] + 8) + *(int *)(pauVar55[5] + 8) +
             *(int *)(pauVar55[3] + 8) + *(int *)(pauVar55[7] + 8) +
             *(int *)(pauVar55[8] + 8) + *(int *)(pauVar55[10] + 8) +
             *(int *)(pauVar55[9] + 8) + *(int *)(pauVar55[0xb] + 8) + *(int *)(pauVar55[0xc] + 8) +
             *(int *)(*pauVar55 + 0xc) + *(int *)(pauVar55[4] + 0xc) +
             *(int *)(pauVar55[2] + 0xc) + *(int *)(pauVar55[6] + 0xc) +
             (int)((ulong)*(undefined8 *)(pauVar55[1] + 8) >> 0x20) + *(int *)(pauVar55[5] + 0xc) +
             *(int *)(pauVar55[3] + 0xc) + *(int *)(pauVar55[7] + 0xc) +
             *(int *)(pauVar55[8] + 0xc) + *(int *)(pauVar55[10] + 0xc) +
             *(int *)(pauVar55[9] + 0xc) + *(int *)(pauVar55[0xb] + 0xc) +
             *(int *)(pauVar55[0xc] + 0xc) + *(int *)pauVar55[0xd];
    if (0xfff < uVar86) {
      uVar67 = (uint)LZCOUNT(uVar86 >> 0xb);
      uVar86 = uVar67 ^ 0x1f;
      uVar71 = CONCAT44(uVar67,uVar67) ^ 0x1f0000001f;
      auVar97._0_4_ = -(int)uVar71;
      auVar97._4_4_ = -(int)(uVar71 >> 0x20);
      auVar97._8_4_ = -uVar86;
      auVar97._12_4_ = -uVar86;
      auVar91 = NEON_ushl(*pauVar55,auVar97,4);
      iVar93 = auVar91._0_4_ + 1;
      iVar94 = auVar91._4_4_ + 1;
      iVar95 = auVar91._8_4_ + 1;
      iVar96 = auVar91._12_4_ + 1;
      auVar91 = NEON_ushl(pauVar55[1],auVar97,4);
      iVar98 = auVar91._0_4_ + 1;
      iVar99 = auVar91._4_4_ + 1;
      iVar101 = auVar91._8_4_ + 1;
      iVar104 = auVar91._12_4_ + 1;
      *(int *)pauVar55[1] = iVar95;
      *(int *)(pauVar55[1] + 4) = iVar96;
      *(int *)*pauVar55 = iVar93;
      *(int *)(*pauVar55 + 4) = iVar94;
      *(int *)pauVar55[2] = iVar101;
      *(int *)(pauVar55[2] + 4) = iVar104;
      *(int *)pauVar55[1] = iVar98;
      *(int *)(pauVar55[1] + 4) = iVar99;
      auVar91 = NEON_ushl(pauVar55[2],auVar97,4);
      iVar107 = auVar91._0_4_ + 1;
      iVar110 = auVar91._4_4_ + 1;
      iVar113 = auVar91._8_4_ + 1;
      iVar102 = auVar91._12_4_ + 1;
      auVar91 = NEON_ushl(pauVar55[3],auVar97,4);
      iVar105 = auVar91._0_4_ + 1;
      iVar108 = auVar91._4_4_ + 1;
      iVar111 = auVar91._8_4_ + 1;
      iVar114 = auVar91._12_4_ + 1;
      *(int *)pauVar55[3] = iVar113;
      *(int *)(pauVar55[3] + 4) = iVar102;
      *(int *)pauVar55[2] = iVar107;
      *(int *)(pauVar55[2] + 4) = iVar110;
      *(int *)pauVar55[4] = iVar111;
      *(int *)(pauVar55[4] + 4) = iVar114;
      *(int *)pauVar55[3] = iVar105;
      *(int *)(pauVar55[3] + 4) = iVar108;
      auVar91 = NEON_ushl(pauVar55[4],auVar97,4);
      iVar116 = auVar91._0_4_ + 1;
      iVar117 = auVar91._4_4_ + 1;
      iVar118 = auVar91._8_4_ + 1;
      iVar119 = auVar91._12_4_ + 1;
      auVar91 = NEON_ushl(pauVar55[5],auVar97,4);
      iVar120 = auVar91._0_4_ + 1;
      iVar121 = auVar91._4_4_ + 1;
      iVar122 = auVar91._8_4_ + 1;
      iVar123 = auVar91._12_4_ + 1;
      *(int *)pauVar55[5] = iVar118;
      *(int *)(pauVar55[5] + 4) = iVar119;
      *(int *)pauVar55[4] = iVar116;
      *(int *)(pauVar55[4] + 4) = iVar117;
      *(int *)pauVar55[6] = iVar122;
      *(int *)(pauVar55[6] + 4) = iVar123;
      *(int *)pauVar55[5] = iVar120;
      *(int *)(pauVar55[5] + 4) = iVar121;
      auVar91 = NEON_ushl(pauVar55[6],auVar97,4);
      iVar124 = auVar91._0_4_ + 1;
      iVar125 = auVar91._4_4_ + 1;
      iVar126 = auVar91._8_4_ + 1;
      iVar127 = auVar91._12_4_ + 1;
      auVar91 = NEON_ushl(pauVar55[7],auVar97,4);
      iVar128 = auVar91._0_4_ + 1;
      iVar129 = auVar91._4_4_ + 1;
      iVar130 = auVar91._8_4_ + 1;
      iVar131 = auVar91._12_4_ + 1;
      *(int *)pauVar55[7] = iVar126;
      *(int *)(pauVar55[7] + 4) = iVar127;
      *(int *)pauVar55[6] = iVar124;
      *(int *)(pauVar55[6] + 4) = iVar125;
      *(int *)pauVar55[8] = iVar130;
      *(int *)(pauVar55[8] + 4) = iVar131;
      *(int *)pauVar55[7] = iVar128;
      *(int *)(pauVar55[7] + 4) = iVar129;
      auVar91 = NEON_ushl(pauVar55[8],auVar97,4);
      iVar132 = auVar91._0_4_ + 1;
      iVar133 = auVar91._4_4_ + 1;
      iVar134 = auVar91._8_4_ + 1;
      iVar135 = auVar91._12_4_ + 1;
      auVar91 = NEON_ushl(pauVar55[9],auVar97,4);
      iVar136 = auVar91._0_4_ + 1;
      iVar137 = auVar91._4_4_ + 1;
      iVar138 = auVar91._8_4_ + 1;
      iVar139 = auVar91._12_4_ + 1;
      *(int *)pauVar55[9] = iVar134;
      *(int *)(pauVar55[9] + 4) = iVar135;
      *(int *)pauVar55[8] = iVar132;
      *(int *)(pauVar55[8] + 4) = iVar133;
      *(int *)pauVar55[10] = iVar138;
      *(int *)(pauVar55[10] + 4) = iVar139;
      *(int *)pauVar55[9] = iVar136;
      *(int *)(pauVar55[9] + 4) = iVar137;
      auVar91 = NEON_ushl(pauVar55[10],auVar97,4);
      iVar140 = auVar91._0_4_ + 1;
      iVar141 = auVar91._4_4_ + 1;
      iVar142 = auVar91._8_4_ + 1;
      iVar143 = auVar91._12_4_ + 1;
      auVar91 = NEON_ushl(pauVar55[0xb],auVar97,4);
      iVar144 = auVar91._0_4_ + 1;
      iVar145 = auVar91._4_4_ + 1;
      iVar146 = auVar91._8_4_ + 1;
      iVar147 = auVar91._12_4_ + 1;
      *(int *)pauVar55[0xb] = iVar142;
      *(int *)(pauVar55[0xb] + 4) = iVar143;
      *(int *)pauVar55[10] = iVar140;
      *(int *)(pauVar55[10] + 4) = iVar141;
      *(int *)pauVar55[0xc] = iVar146;
      *(int *)(pauVar55[0xc] + 4) = iVar147;
      *(int *)pauVar55[0xb] = iVar144;
      *(int *)(pauVar55[0xb] + 4) = iVar145;
      auVar91 = NEON_ushl(pauVar55[0xc],auVar97,4);
      iVar88 = auVar91._0_4_ + 1;
      iVar89 = auVar91._4_4_ + 1;
      iVar90 = auVar91._8_4_ + 1;
      iVar92 = auVar91._12_4_ + 1;
      *(int *)pauVar55[0xd] = iVar90;
      *(int *)(pauVar55[0xd] + 4) = iVar92;
      *(int *)pauVar55[0xc] = iVar88;
      *(int *)(pauVar55[0xc] + 4) = iVar89;
      iVar87 = (*(uint *)pauVar55[0xd] >> (ulong)(uVar86 & 0x1f)) + 1;
      *(int *)pauVar55[0xd] = iVar87;
      uVar86 = iVar87 + iVar88 + iVar144 + iVar140 + iVar136 + iVar132 + iVar128 + iVar124 + iVar120
                                                                                             + 
                                                  iVar116 + iVar105 + iVar107 + iVar98 + iVar93 +
                        iVar89 + iVar145 + iVar141 + iVar137 + iVar133 + iVar129 + iVar125 + iVar121
                                                                                             + 
                                                  iVar117 + iVar108 + iVar110 + iVar99 + iVar94 +
                        iVar90 + iVar146 + iVar142 + iVar138 + iVar134 + iVar130 + iVar126 + iVar122
                                                                                             + 
                                                  iVar118 + iVar111 + iVar113 + iVar101 + iVar95 +
                        iVar92 + iVar147 + iVar143 + iVar139 + iVar135 + iVar131 + iVar127 + iVar123
                                                                                             + 
                                                  iVar119 + iVar114 + iVar102 + iVar104 + iVar96;
    }
    *(uint *)(param_1 + 0xb8) = uVar86;
    puVar54 = *(uint **)(param_1 + 0x98);
    local_15c = puVar54[0x18];
    uVar86 = puVar54[1] + *puVar54 + puVar54[2] + puVar54[3] + puVar54[4] + puVar54[5] + puVar54[6]
             + puVar54[7] + puVar54[8] + puVar54[9] + puVar54[10] + puVar54[0xb] + puVar54[0xc] +
             puVar54[0xd] + puVar54[0xe] + puVar54[0xf] + puVar54[0x10] + puVar54[0x11] +
             puVar54[0x12] + puVar54[0x13] + puVar54[0x14] + puVar54[0x15] + puVar54[0x16] +
             puVar54[0x17] + local_15c + puVar54[0x19] + puVar54[0x1a] + puVar54[0x1b] +
             puVar54[0x1c] + puVar54[0x1d] + puVar54[0x1e] + puVar54[0x1f];
    if (0xfff < uVar86) {
      uVar86 = (uint)LZCOUNT(uVar86 >> 0xb) ^ 0x1f;
      uVar67 = (*puVar54 >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar100 = (puVar54[1] >> (ulong)(uVar86 & 0x1f)) + 1;
      *puVar54 = uVar67;
      puVar54[1] = uVar100;
      uVar103 = (puVar54[2] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar65 = (puVar54[3] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[2] = uVar103;
      puVar54[3] = uVar65;
      uVar109 = (puVar54[4] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar112 = (puVar54[5] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[4] = uVar109;
      puVar54[5] = uVar112;
      uVar115 = (puVar54[6] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar74 = (puVar54[7] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[6] = uVar115;
      puVar54[7] = uVar74;
      uVar46 = (puVar54[8] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar1 = (puVar54[9] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[8] = uVar46;
      puVar54[9] = uVar1;
      uVar2 = (puVar54[10] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar3 = (puVar54[0xb] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[10] = uVar2;
      puVar54[0xb] = uVar3;
      uVar4 = (puVar54[0xc] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar5 = (puVar54[0xd] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0xc] = uVar4;
      puVar54[0xd] = uVar5;
      uVar6 = (puVar54[0xe] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar7 = (puVar54[0xf] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0xe] = uVar6;
      puVar54[0xf] = uVar7;
      uVar8 = (puVar54[0x10] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar9 = (puVar54[0x11] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x10] = uVar8;
      puVar54[0x11] = uVar9;
      uVar10 = (puVar54[0x12] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar11 = (puVar54[0x13] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x12] = uVar10;
      puVar54[0x13] = uVar11;
      uVar12 = (puVar54[0x14] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar13 = (puVar54[0x15] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x14] = uVar12;
      puVar54[0x15] = uVar13;
      uVar14 = (puVar54[0x16] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar15 = (puVar54[0x17] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x16] = uVar14;
      puVar54[0x17] = uVar15;
      uVar16 = (local_15c >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar17 = (puVar54[0x19] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x18] = uVar16;
      puVar54[0x19] = uVar17;
      uVar18 = (puVar54[0x1a] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar19 = (puVar54[0x1b] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x1a] = uVar18;
      puVar54[0x1b] = uVar19;
      uVar20 = (puVar54[0x1c] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar21 = (puVar54[0x1d] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x1c] = uVar20;
      puVar54[0x1d] = uVar21;
      uVar22 = (puVar54[0x1e] >> (ulong)(uVar86 & 0x1f)) + 1;
      uVar86 = (puVar54[0x1f] >> (ulong)(uVar86 & 0x1f)) + 1;
      puVar54[0x1e] = uVar22;
      puVar54[0x1f] = uVar86;
      uVar86 = uVar100 + uVar67 + uVar103 + uVar65 + uVar109 + uVar112 + uVar115 + uVar74 + uVar46 +
               uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
               uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 +
               uVar20 + uVar21 + uVar22 + uVar86;
    }
  }
  *(uint *)(param_1 + 0xbc) = uVar86;
  iVar87 = *(int *)(param_1 + 0xe0);
joined_r0x00c3bc6c:
  if (iVar87 != 2) {
    *(uint *)(param_1 + 0xc0) = (int)LZCOUNT(*(int *)(param_1 + 0xb0) + 1) << 8 ^ 0x1f00;
  }
  pauVar82 = (undefined1 (*) [16])(pauVar52[-1] + 8);
  *(uint *)(param_1 + 0xcc) = (int)LZCOUNT(uVar86 + 1) << 8 ^ 0x1f00;
  *(ulong *)(param_1 + 0xc4) =
       (ulong)CONCAT15((char)LZCOUNT((int)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20) + 1),
                       (uint5)(uint)(LZCOUNT((int)*(undefined8 *)(param_1 + 0xb4) + 1) << 8)) ^
       0x1f0000001f00;
  pauVar55 = param_4;
  if ((undefined1 (*) [16])(lVar80 + (ulong)uVar60) == param_4) {
    pauVar55 = (undefined1 (*) [16])(*param_4 + 1);
  }
  local_120 = param_4;
  if (pauVar55 < pauVar82) {
    pauVar75 = pauVar52 + -2;
    uVar62 = uVar61 - 1;
    uVar71 = (uVar61 - 3 >> 1) + 1;
    pcVar56 = (code *)(&PTR_FUN_00c92be8)[(ulong)param_6 * 4 + uVar57];
    uVar57 = uVar71 & 3;
    puVar54 = puVar28 + 0x1c;
    do {
      while( true ) {
        uVar60 = (uint)((long)pauVar55 - (long)local_120);
        uVar42 = (*pcVar56)(lVar27,param_1,&local_a4,pauVar55,pauVar52,param_3,uVar60 == 0,uVar61);
        local_90 = CONCAT44(local_90._4_4_,uVar42);
        FUN_00c3f9c0(&local_e0,lVar27,&local_90,(int)pauVar55 - (int)param_4,
                     (int)pauVar52 - (int)pauVar55);
        if ((uint)local_90 == 0) break;
        puVar28[4] = (uint)*param_3;
        puVar28[5] = *(uint *)((long)param_3 + 4);
        puVar28[6] = (uint)param_3[1];
        puVar28[2] = 0;
        puVar28[3] = uVar60;
        iVar87 = *(int *)(param_1 + 0xd0);
        if (iVar87 == 1) {
          uVar86 = (int)LZCOUNT(uVar60 + 1) << 8 ^ 0x1f00;
          *puVar28 = uVar86;
          uVar68 = (ulong)((uint)local_90 - 1);
          uVar67 = *(uint *)(lVar27 + uVar68 * 8 + 4);
          if (uVar67 <= uVar29) {
            iVar88 = 0;
            if (uVar62 < 2) goto LAB_00c3c064;
LAB_00c3beec:
            if (uVar61 - 3 < 6) {
              uVar68 = 0;
            }
            else {
              uVar68 = 0;
              puVar44 = puVar54;
              uVar69 = uVar71 & 0xfffffffffffffffc;
              do {
                puVar44[-0x15] = 0x40000000;
                puVar44[-0xe] = 0x40000000;
                puVar44[-7] = 0x40000000;
                *puVar44 = 0x40000000;
                puVar44[7] = 0x40000000;
                puVar44[0xe] = 0x40000000;
                puVar44[0x15] = 0x40000000;
                uVar68 = uVar68 + 8;
                uVar69 = uVar69 - 4;
                puVar44[0x1c] = 0x40000000;
                puVar44 = puVar44 + 0x38;
              } while (uVar69 != 0);
            }
            if (uVar57 != 0) {
              puVar44 = puVar28 + uVar68 * 7 + 0xe;
              uVar69 = uVar57;
              do {
                puVar28[(uVar68 | 1) * 7] = 0x40000000;
                *puVar44 = 0x40000000;
                uVar68 = uVar68 + 2;
                uVar69 = uVar69 - 1;
                puVar44 = puVar44 + 0xe;
              } while (uVar69 != 0);
            }
            if (uVar62 != (uVar62 & 0xfffffffffffffffe)) {
              uVar67 = uVar59 - (int)(uVar62 | 1);
              uVar68 = uVar62 | 1;
              goto joined_r0x00c3c078;
            }
            goto LAB_00c3c0e8;
          }
LAB_00c3c01c:
          uVar86 = 0;
          uVar100 = *(uint *)(lVar27 + uVar68 * 8);
LAB_00c3cab4:
          local_90 = *(ulong *)(puVar28 + (ulong)uVar86 * 7 + 4);
          uVar68 = local_90;
          local_88[0] = puVar28[(ulong)uVar86 * 7 + 6];
          if (uVar100 < 3) {
            uVar103 = uVar100;
            if (uVar60 == 0) {
              uVar103 = uVar100 + 1;
            }
            if (uVar103 == 3) {
              uVar65 = (uint)local_90 - 1;
LAB_00c3cb18:
              puVar44 = (uint *)((ulong)&local_90 | 4);
              if (uVar103 < 2) {
                puVar44 = local_88;
              }
              local_88[0] = *puVar44;
              goto LAB_00c3cb30;
            }
            if (uVar103 != 0) {
              uVar65 = local_88[(ulong)uVar103 - 2];
              goto LAB_00c3cb18;
            }
          }
          else {
            local_90._4_4_ = (uint)(local_90 >> 0x20);
            uVar65 = uVar100 - 2;
            local_88[0] = local_90._4_4_;
LAB_00c3cb30:
            local_90 = CONCAT44((uint)local_90,uVar65);
            uVar68 = local_90;
          }
          local_90 = uVar68;
          *param_3 = local_90;
          *(uint *)(param_3 + 1) = local_88[0];
        }
        else {
          if (uVar60 == 0x20000) {
            iVar88 = *(int *)(param_1 + 0xc4);
            piVar53 = *(int **)(param_1 + 0x88);
            uVar86 = iVar88 + ((int)LZCOUNT(piVar53[0x23] + 1) << 8 ^ 0xffffe0ffU) + 0x1101;
          }
          else {
            if (uVar60 < 0x40) {
              uVar86 = (uint)(byte)(&DAT_002a2000)[(long)pauVar55 - (long)local_120 & 0xffffffff];
            }
            else {
              uVar86 = 0x32 - (int)LZCOUNT(uVar60);
            }
            iVar88 = *(int *)(param_1 + 0xc4);
            piVar53 = *(int **)(param_1 + 0x88);
            uVar86 = iVar88 + (uint)(byte)(&DAT_002a1fdc)[uVar86] * 0x100 +
                     ((int)LZCOUNT(piVar53[uVar86] + 1) << 8 ^ 0xffffe0ffU) + 1;
          }
          *puVar28 = uVar86;
          uVar68 = (ulong)((uint)local_90 - 1);
          uVar67 = *(uint *)(lVar27 + uVar68 * 8 + 4);
          if (uVar29 < uVar67) goto LAB_00c3c01c;
          iVar88 = iVar88 + ((int)LZCOUNT(*piVar53 + 1) << 8 ^ 0xffffe0ffU) + 1;
          if (1 < uVar62) goto LAB_00c3beec;
LAB_00c3c064:
          uVar67 = uVar59 - 1;
          uVar68 = 1;
joined_r0x00c3c078:
          uVar69 = uVar68;
          if ((uVar67 & 7) != 0) {
            uVar72 = (ulong)uVar67 & 7;
            puVar44 = puVar28 + uVar68 * 7;
            do {
              uVar69 = uVar69 + 1;
              uVar72 = uVar72 - 1;
              *puVar44 = 0x40000000;
              puVar44 = puVar44 + 7;
            } while (uVar72 != 0);
          }
          if (6 < ~uVar68 + uVar61) {
            lVar80 = uVar61 - uVar69;
            puVar44 = puVar54 + uVar69 * 7;
            do {
              puVar44[-0x1c] = 0x40000000;
              puVar44[-0x15] = 0x40000000;
              puVar44[-0xe] = 0x40000000;
              puVar44[-7] = 0x40000000;
              *puVar44 = 0x40000000;
              puVar44[7] = 0x40000000;
              puVar44[0xe] = 0x40000000;
              lVar80 = lVar80 + -8;
              puVar44[0x15] = 0x40000000;
              puVar44 = puVar44 + 0x38;
            } while (lVar80 != 0);
          }
LAB_00c3c0e8:
          uVar68 = 0;
          uVar67 = (uint)local_90;
          if ((uint)local_90 < 2) {
            uVar67 = 1;
          }
          uVar69 = uVar61;
          do {
            puVar44 = (uint *)(lVar27 + uVar68 * 8);
            uVar103 = *puVar44;
            uVar65 = puVar44[1];
            uVar100 = (uint)LZCOUNT(uVar103 + 1) ^ 0x1f;
            iVar89 = uVar100 * 0x200 + -0x25cd;
            if (uVar100 < 0x14) {
              iVar89 = 0x33;
            }
            if ((uint)uVar69 <= uVar65) {
              if (iVar87 == 1) {
                do {
                  uVar109 = (uint)uVar69;
                  puVar44 = puVar28 + uVar69 * 7;
                  puVar44[2] = uVar109;
                  puVar44[3] = uVar60;
                  *puVar44 = iVar88 + uVar86 + 0x1000 + uVar100 * 0x100 +
                             ((int)LZCOUNT(uVar109 - 2) << 8 ^ 0x1f00U);
                  puVar44[1] = uVar103;
                  uVar69 = (ulong)(uVar109 + 1);
                } while (uVar109 + 1 <= uVar65);
              }
              else {
                iVar90 = *(int *)(param_1 + 200);
                iVar92 = *(int *)(param_1 + 0xcc);
                lVar80 = *(long *)(param_1 + 0x90);
                lVar58 = *(long *)(param_1 + 0x98);
                do {
                  uVar112 = (uint)uVar69;
                  uVar109 = uVar112 - 3;
                  if (uVar109 < 0x80) {
                    uVar72 = (ulong)(byte)(&DAT_002a2075)[uVar109];
                  }
                  else {
                    uVar72 = (ulong)(0x43 - (int)LZCOUNT(uVar109));
                  }
                  iVar93 = *(int *)(lVar58 + (ulong)uVar100 * 4);
                  iVar94 = *(int *)(lVar80 + uVar72 * 4);
                  bVar30 = (&DAT_002a2040)[uVar72];
                  puVar44 = puVar28 + uVar69 * 7;
                  puVar44[2] = uVar112;
                  puVar44[3] = uVar60;
                  *puVar44 = iVar88 + uVar86 + 2 + iVar89 + iVar92 + iVar90 +
                             ((int)LZCOUNT(iVar93 + 1) << 8 ^ 0xffffe0ffU) +
                             (uVar100 + bVar30) * 0x100 +
                             ((int)LZCOUNT(iVar94 + 1) << 8 ^ 0xffffe0ffU);
                  puVar44[1] = uVar103;
                  uVar69 = (ulong)(uVar112 + 1);
                } while (uVar112 + 1 <= uVar65);
              }
            }
            uVar68 = uVar68 + 1;
          } while (uVar68 != uVar67);
          uVar103 = (int)uVar69 - 1;
          if (uVar103 != 0) {
            uVar68 = 1;
            uVar86 = uVar103;
            do {
              while( true ) {
                uVar103 = (uint)uVar68;
                uVar69 = (ulong)(uVar103 - 1);
                if (puVar28[uVar69 * 7 + 2] == 0) {
                  uVar60 = puVar28[uVar69 * 7 + 3] + 1;
                }
                else {
                  uVar60 = 1;
                }
                pauVar77 = (undefined1 (*) [16])(*pauVar55 + uVar68);
                uVar67 = puVar28[uVar69 * 7];
                if (*(int *)(param_1 + 0xe0) != 2) break;
                iVar87 = uVar67 + 0x800;
                if (*(int *)(param_1 + 0xd0) == 1) {
LAB_00c3c348:
                  uVar67 = (iVar87 + ((int)LZCOUNT(uVar60 + 1) << 8 ^ 0x1f00U)) -
                           ((int)LZCOUNT(uVar60) << 8 ^ 0x1f00U);
                  puVar44 = puVar28 + uVar68 * 7;
                  puVar84 = puVar44 + 2;
                  uVar100 = *puVar44;
                  if ((int)uVar100 < (int)uVar67) goto LAB_00c3c380;
                }
                else {
                  if (uVar60 != 0x20000) goto LAB_00c3c428;
LAB_00c3c2a0:
                  iVar88 = *(int *)(param_1 + 0xc4);
                  lVar80 = *(long *)(param_1 + 0x88);
                  iVar87 = iVar87 + iVar88 +
                           ((int)LZCOUNT(*(int *)(lVar80 + 0x8c) + 1) << 8 ^ 0xffffe0ffU) + 0x1101;
                  uVar67 = 0x1ffff;
LAB_00c3c2d4:
                  uVar67 = 0x32 - (int)LZCOUNT(uVar67);
LAB_00c3c2e0:
                  uVar67 = iVar87 - (iVar88 + (uint)(byte)(&DAT_002a1fdc)[uVar67] * 0x100 +
                                     ((int)LZCOUNT(*(int *)(lVar80 + (ulong)uVar67 * 4) + 1) << 8 ^
                                     0xffffe0ffU) + 1);
                  puVar44 = puVar28 + uVar68 * 7;
                  puVar84 = puVar44 + 2;
                  uVar100 = *puVar44;
                  if ((int)uVar100 < (int)uVar67) goto LAB_00c3c380;
                }
LAB_00c3c324:
                puVar28[uVar68 * 7 + 1] = 0;
                puVar28[uVar68 * 7 + 2] = 0;
                puVar28[uVar68 * 7 + 3] = uVar60;
                *puVar44 = uVar67;
                uVar100 = uVar67;
LAB_00c3c3c4:
                uVar50 = 0;
                *(undefined8 *)(puVar28 + uVar68 * 7 + 4) =
                     *(undefined8 *)(puVar28 + uVar69 * 7 + 4);
                puVar28[uVar68 * 7 + 6] = puVar28[uVar69 * 7 + 6];
                bVar41 = true;
                if (pauVar82 < pauVar77) goto LAB_00c3c230;
LAB_00c3c558:
                if (uVar103 == uVar86) goto LAB_00c3ca78;
                uVar65 = uVar103 + 1;
                if ((int)puVar28[(ulong)uVar65 * 7] <= (int)(uVar100 + 0x80)) goto LAB_00c3c230;
                if (bVar41) {
                  uVar60 = puVar28[uVar68 * 7 + 3];
                  if (*(int *)(param_1 + 0xd0) == 1) goto LAB_00c3c5d4;
LAB_00c3c594:
                  local_14c = *(int *)(param_1 + 0xc4) +
                              ((int)LZCOUNT(**(int **)(param_1 + 0x88) + 1) << 8 ^ 0xffffe0ffU) + 1;
                }
                else {
                  uVar60 = 0;
                  if (*(int *)(param_1 + 0xd0) != 1) goto LAB_00c3c594;
LAB_00c3c5d4:
                  local_14c = 0;
                }
                uVar42 = (*pcVar56)(lVar27,param_1,&local_a4,pauVar77,pauVar52,
                                    puVar28 + uVar68 * 7 + 4,uVar50,uVar61);
                local_90 = CONCAT44(local_90._4_4_,uVar42);
                FUN_00c3f9c0(&local_e0,lVar27,&local_90,(int)pauVar77 - (int)param_4,
                             (int)pauVar52 - (int)pauVar77);
                if ((uint)local_90 != 0) {
                  uVar67 = *(uint *)(lVar27 + (ulong)((uint)local_90 - 1) * 8 + 4);
                  if ((uVar29 < uVar67) || (0xfff < uVar67 + uVar103)) {
                    if (*puVar84 == 0) {
                      uVar65 = puVar28[uVar68 * 7 + 3];
                    }
                    else {
                      uVar65 = 0;
                    }
                    uVar100 = *(uint *)(lVar27 + (ulong)((uint)local_90 - 1) * 8);
                    uVar86 = 0;
                    if (uVar103 - uVar65 < 0x1001) {
                      uVar86 = uVar103 - uVar65;
                    }
                    goto joined_r0x00c3d060;
                  }
                  uVar68 = 0;
                  do {
                    puVar44 = (uint *)(lVar27 + uVar68 * 8);
                    uVar67 = uVar59;
                    if (uVar68 != 0) {
                      uVar67 = puVar44[-1] + 1;
                    }
                    uVar112 = *puVar44;
                    uVar115 = puVar44[1];
                    uVar109 = (uint)LZCOUNT(uVar112 + 1) ^ 0x1f;
                    iVar87 = uVar109 * 0x200 + -0x25cd;
                    if (uVar109 < 0x14) {
                      iVar87 = 0x33;
                    }
                    if (uVar67 <= uVar115) {
                      if (*(int *)(param_1 + 0xd0) == 1) {
                        uVar74 = uVar115 + uVar103;
                        do {
                          uVar46 = uVar115 + uVar103;
                          uVar1 = local_14c + uVar100 + 0x1000 + uVar109 * 0x100 +
                                  ((int)LZCOUNT(uVar115 - 2) << 8 ^ 0x1f00U);
                          if (uVar86 < uVar46) {
                            uVar72 = (ulong)uVar74;
                            uVar69 = (ulong)uVar86;
                            uVar47 = uVar72 - uVar69;
                            uVar86 = uVar74;
                            if (1 < uVar47) {
                              uVar48 = uVar47 & 0xfffffffffffffffe;
                              lVar80 = 0;
                              if (uVar48 - 2 != 0) {
                                uVar51 = ((uVar72 - uVar69 & 0xfffffffffffffffe) - 2 >> 1) + 1 &
                                         0xfffffffffffffffe;
                                puVar44 = puVar28 + uVar69 * 7 + 0xe;
                                do {
                                  puVar44[-7] = 0x40000000;
                                  *puVar44 = 0x40000000;
                                  puVar44[7] = 0x40000000;
                                  lVar80 = lVar80 + 4;
                                  uVar51 = uVar51 - 2;
                                  puVar44[0xe] = 0x40000000;
                                  puVar44 = puVar44 + 0x1c;
                                } while (uVar51 != 0);
                              }
                              if (((uVar48 - 2 >> 1) + 1 & 1) != 0) {
                                puVar28[(lVar80 + uVar69) * 7 + 7] = 0x40000000;
                                puVar28[(lVar80 + uVar69) * 7 + 0xe] = 0x40000000;
                              }
                              if (uVar47 == uVar48) goto LAB_00c3c6fc;
                              uVar69 = uVar48 + uVar69;
                            }
                            uVar47 = uVar69;
                            if ((uVar74 - (int)uVar69 & 7) != 0) {
                              uVar48 = (ulong)(uVar74 - (int)uVar69) & 7;
                              puVar44 = puVar28 + uVar69 * 7 + 7;
                              do {
                                uVar47 = uVar47 + 1;
                                uVar48 = uVar48 - 1;
                                *puVar44 = 0x40000000;
                                puVar44 = puVar44 + 7;
                              } while (uVar48 != 0);
                            }
                            if (6 < ~uVar69 + uVar72) {
                              lVar80 = uVar72 - uVar47;
                              puVar44 = puVar54 + uVar47 * 7;
                              do {
                                puVar44[-0x15] = 0x40000000;
                                puVar44[-0xe] = 0x40000000;
                                puVar44[-7] = 0x40000000;
                                *puVar44 = 0x40000000;
                                puVar44[7] = 0x40000000;
                                puVar44[0xe] = 0x40000000;
                                puVar44[0x15] = 0x40000000;
                                lVar80 = lVar80 + -8;
                                puVar44[0x1c] = 0x40000000;
                                puVar44 = puVar44 + 0x38;
                              } while (lVar80 != 0);
                            }
                          }
                          else if ((int)puVar28[(ulong)uVar46 * 7] <= (int)uVar1) break;
LAB_00c3c6fc:
                          puVar44 = puVar28 + (ulong)uVar46 * 7;
                          puVar44[2] = uVar115;
                          puVar44[3] = uVar60;
                          *puVar44 = uVar1;
                          puVar44[1] = uVar112;
                          uVar115 = uVar115 - 1;
                          uVar74 = uVar74 - 1;
                        } while (uVar67 <= uVar115);
                      }
                      else {
                        iVar88 = *(int *)(param_1 + 200);
                        iVar89 = *(int *)(param_1 + 0xcc);
                        lVar80 = *(long *)(param_1 + 0x90);
                        lVar58 = *(long *)(param_1 + 0x98);
                        uVar74 = uVar115 + uVar103;
                        do {
                          uVar46 = uVar115 - 3;
                          if (uVar46 < 0x80) {
                            uVar46 = (uint)(byte)(&DAT_002a2075)[uVar46];
                          }
                          else {
                            uVar46 = 0x43 - (int)LZCOUNT(uVar46);
                          }
                          uVar1 = uVar115 + uVar103;
                          uVar46 = local_14c + uVar100 + 2 + iVar87 + iVar89 + iVar88 +
                                   ((int)LZCOUNT(*(int *)(lVar58 + (ulong)uVar109 * 4) + 1) << 8 ^
                                   0xffffe0ffU) + (uVar109 + (byte)(&DAT_002a2040)[uVar46]) * 0x100
                                   + ((int)LZCOUNT(*(int *)(lVar80 + (ulong)uVar46 * 4) + 1) << 8 ^
                                     0xffffe0ffU);
                          if (uVar86 < uVar1) {
                            uVar72 = (ulong)uVar74;
                            uVar69 = (ulong)uVar86;
                            uVar47 = uVar72 - uVar69;
                            uVar86 = uVar74;
                            if (1 < uVar47) {
                              uVar51 = uVar47 & 0xfffffffffffffffe;
                              uVar48 = (uVar51 - 2 >> 1) + 1;
                              lVar83 = 0;
                              if (uVar51 - 2 != 0) {
                                uVar85 = uVar48 & 0xfffffffffffffffe;
                                puVar44 = puVar28 + uVar69 * 7 + 0xe;
                                do {
                                  puVar44[-7] = 0x40000000;
                                  *puVar44 = 0x40000000;
                                  puVar44[7] = 0x40000000;
                                  lVar83 = lVar83 + 4;
                                  uVar85 = uVar85 - 2;
                                  puVar44[0xe] = 0x40000000;
                                  puVar44 = puVar44 + 0x1c;
                                } while (uVar85 != 0);
                              }
                              if ((uVar48 & 1) != 0) {
                                puVar28[(lVar83 + uVar69) * 7 + 7] = 0x40000000;
                                puVar28[(lVar83 + uVar69) * 7 + 0xe] = 0x40000000;
                              }
                              if (uVar47 == uVar51) goto LAB_00c3c898;
                              uVar69 = uVar51 + uVar69;
                            }
                            uVar47 = uVar69;
                            if ((uVar74 - (int)uVar69 & 7) != 0) {
                              uVar48 = (ulong)(uVar74 - (int)uVar69) & 7;
                              puVar44 = puVar28 + uVar69 * 7 + 7;
                              do {
                                uVar47 = uVar47 + 1;
                                uVar48 = uVar48 - 1;
                                *puVar44 = 0x40000000;
                                puVar44 = puVar44 + 7;
                              } while (uVar48 != 0);
                            }
                            if (6 < ~uVar69 + uVar72) {
                              lVar83 = uVar72 - uVar47;
                              puVar44 = puVar54 + uVar47 * 7;
                              do {
                                puVar44[-0x15] = 0x40000000;
                                puVar44[-0xe] = 0x40000000;
                                puVar44[-7] = 0x40000000;
                                *puVar44 = 0x40000000;
                                puVar44[7] = 0x40000000;
                                puVar44[0xe] = 0x40000000;
                                puVar44[0x15] = 0x40000000;
                                lVar83 = lVar83 + -8;
                                puVar44[0x1c] = 0x40000000;
                                puVar44 = puVar44 + 0x38;
                              } while (lVar83 != 0);
                            }
                          }
                          else if ((int)puVar28[(ulong)uVar1 * 7] <= (int)uVar46) break;
LAB_00c3c898:
                          puVar44 = puVar28 + (ulong)uVar1 * 7;
                          puVar44[2] = uVar115;
                          puVar44[3] = uVar60;
                          *puVar44 = uVar46;
                          puVar44[1] = uVar112;
                          uVar115 = uVar115 - 1;
                          uVar74 = uVar74 - 1;
                        } while (uVar67 <= uVar115);
                      }
                    }
                    uVar68 = uVar68 + 1;
                  } while (uVar68 != (local_90 & 0xffffffff));
                }
                uVar103 = uVar86;
                uVar68 = (ulong)uVar65;
                uVar86 = uVar103;
                if (uVar103 < uVar65) goto LAB_00c3ca78;
              }
              if (*(int *)(param_1 + 0xd0) == 1) {
                iVar87 = uVar67 + 0x600;
                goto LAB_00c3c348;
              }
              iVar87 = uVar67 + *(int *)(param_1 + 0xc0) +
                       ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x80) +
                                             (ulong)(byte)pauVar77[-1][0xf] * 4) + 1) << 8 ^
                       0xffffe0ffU) + 1;
              if (uVar60 == 0x20000) goto LAB_00c3c2a0;
LAB_00c3c428:
              if (uVar60 < 0x40) {
                uVar67 = (uint)(byte)(&DAT_002a2000)[uVar60];
              }
              else {
                uVar67 = 0x32 - (int)LZCOUNT(uVar60);
              }
              iVar88 = *(int *)(param_1 + 0xc4);
              lVar80 = *(long *)(param_1 + 0x88);
              iVar87 = iVar87 + iVar88 + (uint)(byte)(&DAT_002a1fdc)[uVar67] * 0x100 +
                       ((int)LZCOUNT(*(int *)(lVar80 + (ulong)uVar67 * 4) + 1) << 8 ^ 0xffffe0ffU) +
                       1;
              uVar67 = uVar60 - 1;
              if (uVar67 != 0x20000) {
                if (0x3f < uVar67) goto LAB_00c3c2d4;
                uVar67 = (uint)(byte)(&DAT_002a2000)[uVar67];
                goto LAB_00c3c2e0;
              }
              uVar67 = iVar87 - (iVar88 + ((int)LZCOUNT(*(int *)(lVar80 + 0x8c) + 1) << 8 ^
                                          0xffffe0ffU) + 0x1101);
              puVar44 = puVar28 + uVar68 * 7;
              puVar84 = puVar44 + 2;
              uVar100 = *puVar44;
              if ((int)uVar67 <= (int)uVar100) goto LAB_00c3c324;
LAB_00c3c380:
              if (*puVar84 == 0) goto LAB_00c3c3c4;
              uVar67 = uVar103 - *puVar84;
              uVar60 = puVar28[uVar68 * 7 + 1];
              uVar69 = (ulong)uVar60;
              local_90 = *(ulong *)(puVar28 + (ulong)uVar67 * 7 + 4);
              uVar72 = local_90;
              local_88[0] = puVar28[(ulong)uVar67 * 7 + 6];
              if (uVar60 < 3) {
                if (puVar28[uVar68 * 7 + 3] == 0) {
                  uVar69 = uVar69 + 1;
                }
                uVar60 = (uint)uVar69;
                if (uVar60 == 3) {
                  iVar87 = (uint)local_90 + -1;
LAB_00c3c518:
                  puVar44 = (uint *)((ulong)&local_90 | 4);
                  if (uVar60 < 2) {
                    puVar44 = local_88;
                  }
                  local_88[0] = *puVar44;
                  goto LAB_00c3c530;
                }
                if (uVar60 != 0) {
                  iVar87 = *(int *)((long)&local_90 + uVar69 * 4);
                  goto LAB_00c3c518;
                }
              }
              else {
                local_90._4_4_ = (uint)(local_90 >> 0x20);
                iVar87 = uVar60 - 2;
                local_88[0] = local_90._4_4_;
LAB_00c3c530:
                local_90 = CONCAT44((uint)local_90,iVar87);
                uVar72 = local_90;
              }
              local_90 = uVar72;
              bVar41 = false;
              *(ulong *)(puVar28 + uVar68 * 7 + 4) = local_90;
              puVar28[uVar68 * 7 + 6] = local_88[0];
              uVar50 = 1;
              if (pauVar77 <= pauVar82) goto LAB_00c3c558;
LAB_00c3c230:
              uVar60 = uVar103 + 1;
              uVar68 = (ulong)uVar60;
              uVar103 = uVar86;
            } while (uVar60 <= uVar86);
          }
LAB_00c3ca78:
          puVar44 = puVar28 + (ulong)uVar103 * 7;
          local_15c = *puVar44;
          uVar100 = puVar44[1];
          uVar67 = puVar44[2];
          uVar60 = puVar44[3];
          local_a0 = *(undefined8 *)(puVar44 + 4);
          local_98 = puVar44[6];
          uVar86 = 0;
          if (uVar60 + uVar67 <= uVar103) {
            uVar86 = uVar103 - (uVar60 + uVar67);
          }
joined_r0x00c3d060:
          if (uVar67 != 0) goto LAB_00c3cab4;
          uVar68 = *(ulong *)(puVar28 + (ulong)uVar86 * 7 + 4);
          *(uint *)(param_3 + 1) = puVar28[(ulong)uVar86 * 7 + 6];
          *param_3 = uVar68;
        }
        uVar103 = uVar86 + 1;
        puVar44 = puVar28 + (ulong)uVar103 * 7;
        *puVar44 = local_15c;
        puVar44[1] = uVar100;
        puVar44[2] = uVar67;
        puVar44[3] = uVar60;
        *(undefined8 *)(puVar44 + 4) = local_a0;
        puVar44[6] = local_98;
        uVar60 = uVar86;
        if (uVar86 == 0) {
          uVar67 = 1;
          goto LAB_00c3cc0c;
        }
        do {
          uVar67 = uVar60;
          pauVar77 = (undefined1 (*) [16])(puVar28 + (ulong)uVar86 * 7);
          auVar91 = *pauVar77;
          auVar97 = *(undefined1 (*) [16])((long)*pauVar77 + 0xc);
          puVar44 = puVar28 + (ulong)uVar67 * 7;
          uVar100 = *(uint *)((long)*pauVar77 + 0xc) + *(uint *)((long)*pauVar77 + 8);
          *(long *)(puVar44 + 5) = auVar97._8_8_;
          *(long *)(puVar44 + 3) = auVar97._0_8_;
          *(long *)(puVar44 + 2) = auVar91._8_8_;
          *(long *)puVar44 = auVar91._0_8_;
          bVar41 = uVar100 <= uVar86;
          uVar100 = uVar86 - uVar100;
          uVar86 = 0;
          if (bVar41) {
            uVar86 = uVar100;
          }
          uVar60 = uVar67 - 1;
        } while (bVar41 && uVar100 != 0);
        for (; uVar67 <= uVar103; uVar67 = uVar67 + 1) {
LAB_00c3cc0c:
          while( true ) {
            uVar60 = puVar28[(ulong)uVar67 * 7 + 2];
            uVar86 = puVar28[(ulong)uVar67 * 7 + 3];
            uVar68 = (ulong)uVar86;
            if (uVar60 == 0) break;
            uVar100 = puVar28[(ulong)uVar67 * 7 + 1];
            if (*(int *)(param_1 + 0xe0) != 2) {
              if (uVar86 != 0) {
                lVar80 = *(long *)(param_1 + 0x80);
                if (uVar68 - 1 < 3) {
                  uVar69 = 0;
                }
                else {
                  uVar69 = 0;
                  do {
                    pbVar70 = *local_120 + uVar69;
                    *(int *)(lVar80 + (ulong)*pbVar70 * 4) =
                         *(int *)(lVar80 + (ulong)*pbVar70 * 4) + 2;
                    *(int *)(lVar80 + (ulong)pbVar70[1] * 4) =
                         *(int *)(lVar80 + (ulong)pbVar70[1] * 4) + 2;
                    *(int *)(lVar80 + (ulong)pbVar70[2] * 4) =
                         *(int *)(lVar80 + (ulong)pbVar70[2] * 4) + 2;
                    uVar69 = uVar69 + 4;
                    *(int *)(lVar80 + (ulong)pbVar70[3] * 4) =
                         *(int *)(lVar80 + (ulong)pbVar70[3] * 4) + 2;
                  } while ((uVar68 & 0xfffffffc) != uVar69);
                }
                uVar72 = uVar68 & 3;
                if ((uVar86 & 3) != 0) {
                  pbVar70 = *local_120 + uVar69;
                  do {
                    *(int *)(lVar80 + (ulong)*pbVar70 * 4) =
                         *(int *)(lVar80 + (ulong)*pbVar70 * 4) + 2;
                    uVar72 = uVar72 - 1;
                    pbVar70 = pbVar70 + 1;
                  } while (uVar72 != 0);
                }
              }
              *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + uVar86 * 2;
            }
            if (uVar86 < 0x40) {
              uVar65 = (uint)(byte)(&DAT_002a2000)[uVar68];
            }
            else {
              uVar65 = 0x32 - (int)LZCOUNT(uVar86);
            }
            *(int *)(*(long *)(param_1 + 0x88) + (ulong)uVar65 * 4) =
                 *(int *)(*(long *)(param_1 + 0x88) + (ulong)uVar65 * 4) + 1;
            *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
            lVar80 = (ulong)((uint)LZCOUNT(uVar100 + 1) ^ 0x1f) * 4;
            *(int *)(*(long *)(param_1 + 0x98) + lVar80) =
                 *(int *)(*(long *)(param_1 + 0x98) + lVar80) + 1;
            *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
            uVar65 = uVar60 - 3;
            if (uVar65 < 0x80) {
              uVar65 = (uint)(byte)(&DAT_002a2075)[uVar65];
            }
            else {
              uVar65 = 0x43 - (int)LZCOUNT(uVar65);
            }
            *(int *)(*(long *)(param_1 + 0x90) + (ulong)uVar65 * 4) =
                 *(int *)(*(long *)(param_1 + 0x90) + (ulong)uVar65 * 4) + 1;
            *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
            pauVar55 = (undefined1 (*) [16])(*local_120 + uVar68);
            if (pauVar75 < pauVar55) {
              puVar73 = (undefined8 *)param_2[3];
              pauVar77 = local_120;
              puVar66 = puVar73;
              if (local_120 <= pauVar75) {
                puVar66 = (undefined8 *)((long)puVar73 + ((long)pauVar75 - (long)local_120));
                puVar45 = puVar73;
                pauVar78 = local_120;
                do {
                  auVar91 = *pauVar78;
                  puVar76 = puVar45 + 2;
                  puVar45[1] = auVar91._8_8_;
                  *puVar45 = auVar91._0_8_;
                  puVar45 = puVar76;
                  pauVar78 = pauVar78 + 1;
                  pauVar77 = pauVar75;
                } while (puVar76 < puVar66);
              }
              if (pauVar77 < pauVar55) {
                pauVar78 = local_120;
                if (local_120 <= pauVar75) {
                  pauVar78 = pauVar75;
                }
                puVar81 = (undefined1 *)((long)local_120 + (uVar68 - (long)pauVar78));
                if ((undefined1 *)0x7 < puVar81) {
                  pauVar49 = local_120;
                  if (local_120 <= pauVar75) {
                    pauVar49 = pauVar75;
                  }
                  if (((undefined8 *)
                       ((long)pauVar77 + (long)((long)local_120 + (uVar68 - (long)pauVar49))) <=
                       puVar66) || ((undefined1 (*) [16])((long)puVar73 + uVar68) <= pauVar77)) {
                    if (puVar81 < (undefined1 *)0x20) {
                      puVar43 = (undefined1 *)0x0;
                    }
                    else {
                      puVar43 = (undefined1 *)((ulong)puVar81 & 0xffffffffffffffe0);
                      uVar69 = ((ulong)(puVar43 + -0x20) >> 5) + 1;
                      if (puVar43 + -0x20 < (undefined1 *)0x60) {
                        lVar80 = 0;
                      }
                      else {
                        lVar80 = 0;
                        uVar72 = uVar69 & 0xffffffffffffffc;
                        do {
                          puVar45 = (undefined8 *)(pauVar77[4] + lVar80);
                          uVar50 = puVar45[-8];
                          uVar33 = puVar45[-6];
                          uVar34 = puVar45[-5];
                          puVar76 = (undefined8 *)
                                    ((long)puVar73 +
                                    (long)((long)pauVar78 + lVar80 + (0x70 - (long)local_120)));
                          puVar76[-0xd] = puVar45[-7];
                          puVar76[-0xe] = uVar50;
                          puVar76[-0xb] = uVar34;
                          puVar76[-0xc] = uVar33;
                          uVar50 = puVar45[-4];
                          uVar33 = puVar45[-2];
                          uVar34 = puVar45[-1];
                          puVar76[-9] = puVar45[-3];
                          puVar76[-10] = uVar50;
                          puVar76[-7] = uVar34;
                          puVar76[-8] = uVar33;
                          uVar50 = *puVar45;
                          uVar33 = puVar45[2];
                          uVar34 = puVar45[3];
                          puVar76[-5] = puVar45[1];
                          puVar76[-6] = uVar50;
                          puVar76[-3] = uVar34;
                          puVar76[-4] = uVar33;
                          auVar91 = *(undefined1 (*) [16])(puVar45 + 4);
                          auVar97 = *(undefined1 (*) [16])(puVar45 + 6);
                          puVar76[-1] = auVar91._8_8_;
                          puVar76[-2] = auVar91._0_8_;
                          puVar76[1] = auVar97._8_8_;
                          *puVar76 = auVar97._0_8_;
                          lVar80 = lVar80 + 0x80;
                          uVar72 = uVar72 - 4;
                        } while (uVar72 != 0);
                      }
                      uVar69 = uVar69 & 3;
                      if (uVar69 != 0) {
                        pauVar49 = (undefined1 (*) [16])(pauVar77[1] + lVar80);
                        puVar45 = (undefined8 *)
                                  ((long)puVar73 +
                                  (long)((long)pauVar78 + (lVar80 - (long)local_120) + 0x10));
                        do {
                          auVar91 = pauVar49[-1];
                          auVar97 = *pauVar49;
                          puVar45[-1] = auVar91._8_8_;
                          puVar45[-2] = auVar91._0_8_;
                          puVar45[1] = auVar97._8_8_;
                          *puVar45 = auVar97._0_8_;
                          uVar69 = uVar69 - 1;
                          pauVar49 = pauVar49 + 2;
                          puVar45 = puVar45 + 4;
                        } while (uVar69 != 0);
                      }
                      if (puVar81 == puVar43) goto LAB_00c3cfb8;
                      if (((ulong)puVar81 & 0x18) == 0) {
                        pauVar77 = (undefined1 (*) [16])(*pauVar77 + (long)puVar43);
                        puVar66 = (undefined8 *)((long)puVar66 + (long)puVar43);
                        goto LAB_00c3cfa8;
                      }
                    }
                    pauVar49 = local_120;
                    if (local_120 <= pauVar75) {
                      pauVar49 = pauVar75;
                    }
                    puVar79 = (undefined1 *)((long)local_120 + (uVar68 - (long)pauVar49));
                    puVar81 = (undefined1 *)((ulong)puVar79 & 0xfffffffffffffff8);
                    lVar80 = (long)puVar43 - (long)puVar81;
                    puVar45 = (undefined8 *)(*pauVar77 + (long)puVar43);
                    puVar73 = (undefined8 *)
                              ((long)puVar73 +
                              (long)((long)pauVar78 + ((long)puVar43 - (long)local_120)));
                    do {
                      *puVar73 = *puVar45;
                      lVar80 = lVar80 + 8;
                      puVar45 = puVar45 + 1;
                      puVar73 = puVar73 + 1;
                    } while (lVar80 != 0);
                    puVar66 = (undefined8 *)((long)puVar66 + (long)puVar81);
                    pauVar77 = (undefined1 (*) [16])(*pauVar77 + (long)puVar81);
                    if (puVar79 == puVar81) goto LAB_00c3cfb8;
                  }
                }
LAB_00c3cfa8:
                do {
                  puVar81 = *pauVar77;
                  *(undefined1 *)puVar66 = (*pauVar77)[0];
                  puVar66 = (undefined8 *)((long)puVar66 + 1);
                  pauVar77 = (undefined1 (*) [16])(puVar81 + 1);
                } while ((undefined1 (*) [16])(puVar81 + 1) < pauVar55);
              }
LAB_00c3cfb8:
              param_2[3] = param_2[3] + uVar68;
              if (0xffff < uVar86) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)(param_2[1] - *param_2) >> 3);
              }
            }
            else {
              puVar66 = (undefined8 *)param_2[3];
              auVar91 = *local_120;
              puVar66[1] = auVar91._8_8_;
              *puVar66 = auVar91._0_8_;
              lVar80 = param_2[3];
              if (0x10 < uVar86) {
                puVar66 = (undefined8 *)(lVar80 + 0x10);
                pauVar55 = local_120;
                do {
                  pauVar55 = pauVar55 + 1;
                  auVar91 = *pauVar55;
                  puVar73 = puVar66 + 2;
                  puVar66[1] = auVar91._8_8_;
                  *puVar66 = auVar91._0_8_;
                  puVar66 = puVar73;
                } while (puVar73 < (undefined8 *)(lVar80 + uVar68));
                goto LAB_00c3cfb8;
              }
              param_2[3] = lVar80 + uVar68;
            }
            piVar53 = (int *)param_2[1];
            *(short *)(piVar53 + 1) = (short)uVar86;
            *piVar53 = uVar100 + 1;
            if (0xffff < (ulong)uVar60 - 3) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar53 - *param_2) >> 3);
            }
            *(short *)((long)piVar53 + 6) = (short)((ulong)uVar60 - 3);
            param_2[1] = (long)(piVar53 + 2);
            pauVar55 = (undefined1 (*) [16])(*local_120 + (uVar60 + uVar86));
            uVar67 = uVar67 + 1;
            local_120 = pauVar55;
            if (uVar103 < uVar67) goto LAB_00c3cbb4;
          }
          pauVar55 = (undefined1 (*) [16])(*local_120 + uVar68);
        }
LAB_00c3cbb4:
        if (*(int *)(param_1 + 0xe0) != 2) {
          *(uint *)(param_1 + 0xc0) = (int)LZCOUNT(*(int *)(param_1 + 0xb0) + 1) << 8 ^ 0x1f00;
        }
        *(ulong *)(param_1 + 0xc4) =
             (ulong)CONCAT15((char)LZCOUNT((int)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20) + 1
                                          ),
                             (uint5)(uint)(LZCOUNT((int)*(undefined8 *)(param_1 + 0xb4) + 1) << 8))
             ^ 0x1f0000001f00;
        *(uint *)(param_1 + 0xcc) = (int)LZCOUNT(*(int *)(param_1 + 0xbc) + 1) << 8 ^ 0x1f00;
        if (pauVar82 <= pauVar55) goto LAB_00c3d084;
      }
      pauVar55 = (undefined1 (*) [16])(*pauVar55 + 1);
    } while (pauVar55 < pauVar82);
  }
LAB_00c3d084:
  if (*(long *)(lVar32 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)pauVar52 - (long)local_120;
}

