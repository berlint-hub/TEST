// vaddr 0x74C780  ghidra 0x84C780  name=FUN_0084c780  size=22464 instr-addr
// duvod: data 0xB99BD0 (102 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0084c780(long param_1,ulong param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  undefined *puVar16;
  int *piVar17;
  bool bVar18;
  long *plVar19;
  void *__dest;
  undefined8 uVar20;
  undefined8 uVar21;
  void *pvVar22;
  uint *puVar23;
  uint *puVar24;
  undefined1 uVar25;
  uint uVar26;
  int iVar27;
  undefined4 uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  ushort uVar36;
  uint uVar37;
  char cVar38;
  uint uVar39;
  uint uVar40;
  byte *pbVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined8 *puVar46;
  undefined1 *puVar47;
  uint uVar48;
  int *piVar49;
  int *piVar50;
  undefined *puVar51;
  long lVar52;
  long *plVar53;
  size_t __n;
  uint uVar54;
  int iVar55;
  uint *puVar56;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  long lVar57;
  long lVar58;
  byte bVar65;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  long lVar66;
  undefined8 uVar67;
  byte bVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  int local_180;
  int *local_178;
  undefined4 local_170;
  int iStack_16c;
  int iStack_168;
  int local_164;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *local_130;
  undefined8 local_120;
  int *local_118;
  undefined8 local_110;
  int local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int *local_e8;
  undefined4 local_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_a0;
  undefined8 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  if (PTR___tls_init_00c93d88 != (undefined *)0x0) {
    armAsmPtr::__tls_init();
  }
  puVar23 = (uint *)(param_1 + 0x2c4);
  plVar19 = (long *)__emutls_get_address(&DAT_00c99bf0);
  lVar52 = *plVar19;
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
  uVar6 = *(uint *)(param_1 + 0x2d8) >> 3;
  lVar32 = *(long *)(*plVar19 + 0x18);
  lVar29 = *(long *)(*plVar19 + 8);
  if (*(char *)((long)param_3 + 6) != '\0') {
    uVar6 = 1;
  }
  puVar56 = (uint *)(param_1 + 0x3c4e4);
  *puVar56 = (uint)((param_2 & 0xffffffff) >> 2);
  FUN_00857520(param_1,param_2 & 0xffffffff,1);
  FUN_00857980(*(undefined8 *)(param_1 + 0x485d8),0);
  *(undefined1 *)(param_1 + 0x3c4d8) = 0;
  plVar19 = (long *)(param_1 + 0x2f0);
  *(uint *)(param_1 + 0x3c4e8) = *puVar56;
  *(undefined8 *)(param_1 + 0x3c4dc) = 0;
  puVar23[0] = 0;
  puVar23[1] = 0;
  if (plVar19 != param_3) {
    lVar57 = *param_3;
    lVar66 = param_3[3];
    lVar58 = param_3[2];
    *(long *)(param_1 + 0x2f8) = param_3[1];
    *plVar19 = lVar57;
    *(long *)(param_1 + 0x308) = lVar66;
    *(long *)(param_1 + 0x300) = lVar58;
    lVar66 = param_3[5];
    lVar58 = param_3[4];
    lVar76 = param_3[7];
    lVar75 = param_3[6];
    lVar57 = param_3[8];
    lVar78 = param_3[0xb];
    lVar77 = param_3[10];
    *(long *)(param_1 + 0x338) = param_3[9];
    *(long *)(param_1 + 0x330) = lVar57;
    *(long *)(param_1 + 0x348) = lVar78;
    *(long *)(param_1 + 0x340) = lVar77;
    *(long *)(param_1 + 0x318) = lVar66;
    *(long *)(param_1 + 0x310) = lVar58;
    *(long *)(param_1 + 0x328) = lVar76;
    *(long *)(param_1 + 800) = lVar75;
    lVar66 = param_3[0xd];
    lVar58 = param_3[0xc];
    lVar76 = param_3[0xf];
    lVar75 = param_3[0xe];
    lVar57 = param_3[0x10];
    lVar78 = param_3[0x13];
    lVar77 = param_3[0x12];
    *(long *)(param_1 + 0x378) = param_3[0x11];
    *(long *)(param_1 + 0x370) = lVar57;
    *(long *)(param_1 + 0x388) = lVar78;
    *(long *)(param_1 + 0x380) = lVar77;
    *(long *)(param_1 + 0x358) = lVar66;
    *(long *)(param_1 + 0x350) = lVar58;
    *(long *)(param_1 + 0x368) = lVar76;
    *(long *)(param_1 + 0x360) = lVar75;
  }
  lVar52 = lVar52 + (lVar32 - lVar29);
  if ((long *)(param_1 + 0x48530) != param_3) {
    lVar29 = *param_3;
    lVar57 = param_3[3];
    lVar32 = param_3[2];
    *(long *)(param_1 + 0x48538) = param_3[1];
    *(long *)(param_1 + 0x48530) = lVar29;
    *(long *)(param_1 + 0x48548) = lVar57;
    *(long *)(param_1 + 0x48540) = lVar32;
    lVar57 = param_3[5];
    lVar32 = param_3[4];
    lVar66 = param_3[7];
    lVar58 = param_3[6];
    lVar29 = param_3[8];
    lVar76 = param_3[0xb];
    lVar75 = param_3[10];
    *(long *)(param_1 + 0x48578) = param_3[9];
    *(long *)(param_1 + 0x48570) = lVar29;
    *(long *)(param_1 + 0x48588) = lVar76;
    *(long *)(param_1 + 0x48580) = lVar75;
    *(long *)(param_1 + 0x48558) = lVar57;
    *(long *)(param_1 + 0x48550) = lVar32;
    *(long *)(param_1 + 0x48568) = lVar66;
    *(long *)(param_1 + 0x48560) = lVar58;
    lVar57 = param_3[0xd];
    lVar32 = param_3[0xc];
    lVar66 = param_3[0xf];
    lVar58 = param_3[0xe];
    lVar29 = param_3[0x10];
    lVar76 = param_3[0x13];
    lVar75 = param_3[0x12];
    *(long *)(param_1 + 0x485b8) = param_3[0x11];
    *(long *)(param_1 + 0x485b0) = lVar29;
    *(long *)(param_1 + 0x485c8) = lVar76;
    *(long *)(param_1 + 0x485c0) = lVar75;
    *(long *)(param_1 + 0x48598) = lVar57;
    *(long *)(param_1 + 0x48590) = lVar32;
    *(long *)(param_1 + 0x485a8) = lVar66;
    *(long *)(param_1 + 0x485a0) = lVar58;
  }
  *(long *)(param_1 + 0x430) = lVar52;
  puVar46 = *(undefined8 **)
             (*(long *)(param_1 + 0x484f0) + ((ulong)*(uint *)(param_1 + 0x3c4e8) & 0xfffffffe) * 4
             + 0x4000);
  uVar26 = (uint)*(byte *)(param_1 + 0x2f0);
  if (*(byte *)(param_1 + 0x2f0) == 0) {
    uVar26 = (uint)*plVar19 & 0xff;
    for (puVar4 = (undefined8 *)puVar46[4]; puVar4 != (undefined8 *)puVar46[5]; puVar4 = puVar4 + 2)
    {
      if (puVar4[1] == *plVar19) {
        piVar50 = (int *)*puVar4;
        goto LAB_0084cb8c;
      }
    }
    goto LAB_0084ca64;
  }
  piVar33 = (int *)puVar46[2];
  if (piVar33 != (int *)0x0) {
    piVar17 = piVar33;
    piVar49 = (int *)0x0;
    do {
      piVar50 = piVar17;
      iVar79 = -(uint)(*(int *)plVar19 == *piVar50);
      iVar80 = -(uint)(*(int *)(param_1 + 0x2f8) == piVar50[2]);
      iVar81 = -(uint)(*(int *)(param_1 + 0x300) == piVar50[4]);
      iVar82 = -(uint)(*(int *)(param_1 + 0x308) == piVar50[6]);
      iVar27 = -(uint)(*(int *)(param_1 + 0x2f4) == piVar50[1]);
      iVar55 = -(uint)(*(int *)(param_1 + 0x2fc) == piVar50[3]);
      iVar14 = -(uint)(*(int *)(param_1 + 0x304) == piVar50[5]);
      iVar15 = -(uint)(*(int *)(param_1 + 0x30c) == piVar50[7]);
      auVar9[1] = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar79 >> 8);
      auVar9[0] = (byte)iVar27 & (byte)iVar79;
      auVar9[2] = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
      auVar9[3] = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar79 >> 0x18);
      auVar9[4] = (byte)iVar55 & (byte)iVar80;
      auVar9[5] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar80 >> 8);
      auVar9[6] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
      auVar9[7] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar80 >> 0x18);
      auVar9[8] = (byte)iVar14 & (byte)iVar81;
      auVar9[9] = (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar81 >> 8);
      auVar9[10] = (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar81 >> 0x10);
      auVar9[0xb] = (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar81 >> 0x18);
      auVar9[0xc] = (byte)iVar15 & (byte)iVar82;
      auVar9[0xd] = (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar82 >> 8);
      auVar9[0xe] = (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
      auVar9[0xf] = (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar82 >> 0x18);
      iVar27 = NEON_uminv(auVar9,4);
      if (iVar27 == -1) {
        iVar79 = -(uint)(*(int *)(param_1 + 0x310) == piVar50[8]);
        iVar80 = -(uint)(*(int *)(param_1 + 0x318) == piVar50[10]);
        iVar81 = -(uint)(*(int *)(param_1 + 800) == piVar50[0xc]);
        iVar82 = -(uint)(*(int *)(param_1 + 0x328) == piVar50[0xe]);
        iVar27 = -(uint)(*(int *)(param_1 + 0x314) == piVar50[9]);
        iVar55 = -(uint)(*(int *)(param_1 + 0x31c) == piVar50[0xb]);
        iVar14 = -(uint)(*(int *)(param_1 + 0x324) == piVar50[0xd]);
        iVar15 = -(uint)(*(int *)(param_1 + 0x32c) == piVar50[0xf]);
        auVar10[1] = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar79 >> 8);
        auVar10[0] = (byte)iVar27 & (byte)iVar79;
        auVar10[2] = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
        auVar10[3] = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar79 >> 0x18);
        auVar10[4] = (byte)iVar55 & (byte)iVar80;
        auVar10[5] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar80 >> 8);
        auVar10[6] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
        auVar10[7] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar80 >> 0x18);
        auVar10[8] = (byte)iVar14 & (byte)iVar81;
        auVar10[9] = (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar81 >> 8);
        auVar10[10] = (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar81 >> 0x10);
        auVar10[0xb] = (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar81 >> 0x18);
        auVar10[0xc] = (byte)iVar15 & (byte)iVar82;
        auVar10[0xd] = (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar82 >> 8);
        auVar10[0xe] = (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
        auVar10[0xf] = (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar82 >> 0x18);
        iVar27 = NEON_uminv(auVar10,4);
        if (iVar27 == -1) {
          iVar79 = -(uint)(*(int *)(param_1 + 0x330) == piVar50[0x10]);
          iVar80 = -(uint)(*(int *)(param_1 + 0x338) == piVar50[0x12]);
          iVar81 = -(uint)(*(int *)(param_1 + 0x340) == piVar50[0x14]);
          iVar82 = -(uint)(*(int *)(param_1 + 0x348) == piVar50[0x16]);
          iVar27 = -(uint)(*(int *)(param_1 + 0x334) == piVar50[0x11]);
          iVar55 = -(uint)(*(int *)(param_1 + 0x33c) == piVar50[0x13]);
          iVar14 = -(uint)(*(int *)(param_1 + 0x344) == piVar50[0x15]);
          iVar15 = -(uint)(*(int *)(param_1 + 0x34c) == piVar50[0x17]);
          auVar11[1] = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar79 >> 8);
          auVar11[0] = (byte)iVar27 & (byte)iVar79;
          auVar11[2] = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
          auVar11[3] = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar79 >> 0x18);
          auVar11[4] = (byte)iVar55 & (byte)iVar80;
          auVar11[5] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar80 >> 8);
          auVar11[6] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
          auVar11[7] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar80 >> 0x18);
          auVar11[8] = (byte)iVar14 & (byte)iVar81;
          auVar11[9] = (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar81 >> 8);
          auVar11[10] = (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar81 >> 0x10);
          auVar11[0xb] = (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar81 >> 0x18);
          auVar11[0xc] = (byte)iVar15 & (byte)iVar82;
          auVar11[0xd] = (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar82 >> 8);
          auVar11[0xe] = (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
          auVar11[0xf] = (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar82 >> 0x18);
          iVar27 = NEON_uminv(auVar11,4);
          if (iVar27 == -1) {
            iVar79 = -(uint)(*(int *)(param_1 + 0x350) == piVar50[0x18]);
            iVar80 = -(uint)(*(int *)(param_1 + 0x358) == piVar50[0x1a]);
            iVar81 = -(uint)(*(int *)(param_1 + 0x360) == piVar50[0x1c]);
            iVar82 = -(uint)(*(int *)(param_1 + 0x368) == piVar50[0x1e]);
            iVar27 = -(uint)(*(int *)(param_1 + 0x354) == piVar50[0x19]);
            iVar55 = -(uint)(*(int *)(param_1 + 0x35c) == piVar50[0x1b]);
            iVar14 = -(uint)(*(int *)(param_1 + 0x364) == piVar50[0x1d]);
            iVar15 = -(uint)(*(int *)(param_1 + 0x36c) == piVar50[0x1f]);
            auVar12[1] = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar79 >> 8);
            auVar12[0] = (byte)iVar27 & (byte)iVar79;
            auVar12[2] = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
            auVar12[3] = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar79 >> 0x18);
            auVar12[4] = (byte)iVar55 & (byte)iVar80;
            auVar12[5] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar80 >> 8);
            auVar12[6] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
            auVar12[7] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar80 >> 0x18);
            auVar12[8] = (byte)iVar14 & (byte)iVar81;
            auVar12[9] = (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar81 >> 8);
            auVar12[10] = (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar81 >> 0x10);
            auVar12[0xb] = (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar81 >> 0x18);
            auVar12[0xc] = (byte)iVar15 & (byte)iVar82;
            auVar12[0xd] = (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar82 >> 8);
            auVar12[0xe] = (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
            auVar12[0xf] = (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar82 >> 0x18);
            iVar27 = NEON_uminv(auVar12,4);
            if (iVar27 == -1) {
              iVar79 = -(uint)(*(int *)(param_1 + 0x370) == piVar50[0x20]);
              iVar80 = -(uint)(*(int *)(param_1 + 0x378) == piVar50[0x22]);
              iVar81 = -(uint)(*(int *)(param_1 + 0x380) == piVar50[0x24]);
              iVar82 = -(uint)(*(int *)(param_1 + 0x388) == piVar50[0x26]);
              iVar27 = -(uint)(*(int *)(param_1 + 0x374) == piVar50[0x21]);
              iVar55 = -(uint)(*(int *)(param_1 + 0x37c) == piVar50[0x23]);
              iVar14 = -(uint)(*(int *)(param_1 + 900) == piVar50[0x25]);
              iVar15 = -(uint)(*(int *)(param_1 + 0x38c) == piVar50[0x27]);
              auVar13[1] = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar79 >> 8);
              auVar13[0] = (byte)iVar27 & (byte)iVar79;
              auVar13[2] = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar79 >> 0x10);
              auVar13[3] = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar79 >> 0x18);
              auVar13[4] = (byte)iVar55 & (byte)iVar80;
              auVar13[5] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar80 >> 8);
              auVar13[6] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
              auVar13[7] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar80 >> 0x18);
              auVar13[8] = (byte)iVar14 & (byte)iVar81;
              auVar13[9] = (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar81 >> 8);
              auVar13[10] = (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar81 >> 0x10);
              auVar13[0xb] = (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar81 >> 0x18);
              auVar13[0xc] = (byte)iVar15 & (byte)iVar82;
              auVar13[0xd] = (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar82 >> 8);
              auVar13[0xe] = (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar82 >> 0x10);
              auVar13[0xf] = (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar82 >> 0x18);
              iVar27 = NEON_uminv(auVar13,4);
              if (iVar27 == -1) {
                if (piVar50 == piVar33) goto LAB_0084cb8c;
                *(undefined8 *)(piVar49 + 0x54) = *(undefined8 *)(piVar50 + 0x54);
                *(undefined8 *)(piVar50 + 0x54) = puVar46[2];
                puVar46[2] = piVar50;
                goto LAB_0084cb90;
              }
            }
          }
        }
      }
      piVar17 = *(int **)(piVar50 + 0x54);
      piVar49 = piVar50;
    } while (*(int **)(piVar50 + 0x54) != (int *)0x0);
  }
LAB_0084ca68:
  bVar18 = false;
  *(int *)((long)puVar46 + 0x3c) = *(int *)((long)puVar46 + 0x3c) + 1;
  plVar53 = puVar46 + 3;
LAB_0084ca7c:
  local_e8 = (int *)0x0;
  posix_memalign(&local_e8,0x10,0x160);
  piVar50 = local_e8;
  local_e8[0x52] = 0;
  local_e8[0x53] = 0;
  local_e8[0x54] = 0;
  local_e8[0x55] = 0;
  if (*plVar53 == 0) {
    puVar4 = puVar46;
    if (!bVar18) {
      puVar4 = puVar46 + 2;
    }
    *puVar4 = local_e8;
  }
  else {
    *(int **)(*plVar53 + 0x150) = local_e8;
  }
  *plVar53 = (long)local_e8;
  memcpy(local_e8,plVar19,0x150);
  lVar29 = *plVar19;
  puVar4 = (undefined8 *)puVar46[5];
  if (puVar4 < (undefined8 *)puVar46[6]) {
    *puVar4 = piVar50;
    puVar4[1] = lVar29;
    puVar46[5] = puVar4 + 2;
  }
  else {
    pvVar22 = (void *)puVar46[4];
    __n = (long)puVar4 - (long)pvVar22;
    uVar30 = ((long)__n >> 4) + 1;
    if (uVar30 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar34 = (long)puVar46[6] - (long)pvVar22;
    uVar35 = (long)uVar34 >> 3;
    if (uVar30 <= uVar35) {
      uVar30 = uVar35;
    }
    if (0x7fffffffffffffef < uVar34) {
      uVar30 = 0xfffffffffffffff;
    }
    if (uVar30 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003d5c00("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar30 * 0x10);
    puVar4 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar4 = piVar50;
    puVar4[1] = lVar29;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar22,__n);
    }
    puVar46[4] = __dest;
    puVar46[5] = puVar4 + 2;
    puVar46[6] = (void *)((long)__dest + uVar30 * 0x10);
    if (pvVar22 != (void *)0x0) {
      operator_delete(pvVar22);
    }
  }
LAB_0084cb90:
  *(int **)(param_1 + 0x440) = piVar50;
  cVar38 = *(char *)((long)piVar50 + 6);
  *(undefined2 *)(param_1 + 0x2f5) = 0;
  *(undefined1 *)(param_1 + 0x2f1) = 0;
  *(undefined1 *)(param_1 + 0x2fc) = 0;
  bVar59 = DAT_02704f20;
  *(undefined1 *)(param_1 + 0x3c458) = 0;
  *(undefined4 *)(param_1 + 0x3c45c) = 0;
  uVar25 = 0;
  if (cVar38 != '\0') {
    uVar25 = 7;
  }
  *(uint *)(param_1 + 0x3c4ec) = bVar59 >> 3 & 1;
  *(undefined1 *)(param_1 + 0x2f0) = uVar25;
  *(undefined1 *)(param_1 + 0x3c460) = 0;
  *(undefined4 *)(param_1 + 0x3c464) = 0;
  *(undefined1 *)(param_1 + 0x3c468) = 0;
  *(undefined4 *)(param_1 + 0x3c46c) = 0;
  *(undefined1 *)(param_1 + 0x3c470) = 0;
  *(undefined4 *)(param_1 + 0x3c474) = 0;
  *(undefined1 *)(param_1 + 0x3c478) = 0;
  *(undefined4 *)(param_1 + 0x3c47c) = 0;
  *(undefined1 *)(param_1 + 0x3c480) = 0;
  *(undefined4 *)(param_1 + 0x3c484) = 0;
  *(undefined1 *)(param_1 + 0x3c488) = 0;
  *(undefined4 *)(param_1 + 0x3c48c) = 0;
  *(undefined1 *)(param_1 + 0x3c490) = 0;
  *(undefined4 *)(param_1 + 0x3c494) = 0;
  *(undefined1 *)(param_1 + 0x3c498) = 0;
  *(undefined4 *)(param_1 + 0x3c49c) = 0;
  *(undefined1 *)(param_1 + 0x3c4a0) = 0;
  *(undefined4 *)(param_1 + 0x3c4a4) = 0;
  *(undefined1 *)(param_1 + 0x3c4a8) = 0;
  *(undefined4 *)(param_1 + 0x3c4ac) = 0;
  *(undefined1 *)(param_1 + 0x3c4b0) = 0;
  *(undefined4 *)(param_1 + 0x3c4b4) = 0;
  *(undefined1 *)(param_1 + 0x3c4b8) = 0;
  *(undefined4 *)(param_1 + 0x3c4bc) = 0;
  *(undefined1 *)(param_1 + 0x3c4c0) = 0;
  *(undefined4 *)(param_1 + 0x3c4c4) = 0;
  uVar26 = 0;
  if (*(char *)(param_1 + 0x2fd) != '\0') {
    uVar26 = (uint)*(ushort *)(param_1 + 0x2fe);
  }
  puVar1 = (uint *)(param_1 + 0x2cc);
  *(undefined1 *)(param_1 + 0x3c4c8) = 0;
  *(undefined4 *)(param_1 + 0x3c4cc) = 0;
  *(char *)(param_1 + 0x3c4d0) = *(char *)(param_1 + 0x2fd);
  *(uint *)(param_1 + 0x3c4d4) = uVar26;
  *(undefined1 *)(param_1 + 0x3c4d8) = 0;
  if (*(uint *)(param_1 + 0x3c4e0) < uVar6) {
    uVar45 = 0;
    uVar31 = *puVar56;
    uVar26 = *(uint *)(param_1 + 0x2e0);
    lVar29 = (&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2];
    do {
      uVar26 = uVar31 + 1 & uVar26;
      *puVar56 = uVar26;
      uVar28 = *(undefined4 *)(lVar29 + (ulong)uVar26 * 4);
      puVar46 = (undefined8 *)(param_1 + 0x458 + (ulong)(uVar26 >> 1) * 0x78);
      puVar46[1] = 0;
      *puVar46 = 0;
      puVar46[3] = 0;
      puVar46[2] = 0;
      *(undefined4 *)(param_1 + 0x2c0) = uVar28;
      puVar46[5] = 0;
      puVar46[4] = 0;
      puVar46[7] = 0;
      puVar46[6] = 0;
      puVar46[9] = 0;
      puVar46[8] = 0;
      puVar46[0xb] = 0;
      puVar46[10] = 0;
      puVar46[0xe] = 0;
      *(undefined8 *)(param_1 + 0x448) = 0;
      *(undefined8 *)(param_1 + 0x450) = 0;
      puVar46[0xd] = 0;
      puVar46[0xc] = 0;
      FUN_00848180(param_1,1);
      (*(code *)(&PTR_FUN_00c7abc8)[(ulong)*(uint *)(param_1 + 0x2c0) & 0x3f])(param_1,0);
      uVar26 = *puVar56;
      uVar30 = (ulong)uVar26;
      uVar34 = (ulong)(uVar26 >> 1);
      if ((*(char *)(param_1 + 0x458 + uVar34 * 0x78 + 1) != '\0') &&
         (*(int *)(param_1 + 0x2c0) != -0x7ffffcc4)) {
        *(undefined1 *)(param_1 + uVar34 * 0x78 + 0x45a) = 1;
      }
      uVar31 = *puVar1;
      lVar29 = (&DAT_02819158)[(ulong)uVar31 * 0xc2];
      uVar37 = *(uint *)(lVar29 + uVar30 * 4);
      if ((uVar37 >> 0x1e & 1) == 0) {
LAB_0084cd94:
        if (((uVar37 >> 0x1d & 1) != 0) && (uVar31 == 0)) {
          *(undefined1 *)(param_1 + 0x2fc) = 1;
          if ((uVar26 & 0x3ffffffe) != 0) {
            uVar26 = *(uint *)(param_1 + 0x2e0) & uVar26 - 2;
            *puVar56 = uVar26;
            *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + (ulong)uVar26 * 4);
            uVar31 = *(uint *)(lVar29 + (ulong)uVar26 * 4);
            uVar26 = uVar26 + 2 & *(uint *)(param_1 + 0x2e0);
            uVar30 = (ulong)uVar26;
            *puVar56 = uVar26;
            *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + uVar30 * 4);
            if ((uVar31 >> 0x1d & 1) != 0) goto LAB_0084cdec;
            uVar34 = (ulong)(uVar26 >> 1);
          }
          *(undefined1 *)(param_1 + uVar34 * 0x78 + 0x489) = 1;
        }
      }
      else {
        if (*(char *)(param_1 + 0x2f6) != '\x01') {
          uVar45 = 1;
          *(undefined1 *)(param_1 + uVar34 * 0x78 + 0x487) = 1;
        }
        if (uVar31 == 0) {
          *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) | 7;
          uVar37 = *(uint *)(lVar29 + uVar30 * 4);
          goto LAB_0084cd94;
        }
      }
LAB_0084cdec:
      uVar26 = (uint)uVar30;
      if (*(int *)(lVar29 + uVar30 * 4) < 0) {
        lVar29 = param_1 + (ulong)(uVar26 >> 1) * 0x78;
        *(undefined1 *)(lVar29 + 0x4c6) = 1;
        *(undefined1 *)(lVar29 + 0x488) = 1;
        if (((DAT_02704f28 >> 0xd & 1) != 0) &&
           (FUN_00857520(param_1,(uVar26 & 0x3ffffffe) << 2,0), uVar45 < 2)) {
          FUN_00857520(param_1,*puVar56 * 4 + 8 & 0xfffffff8,1);
        }
      }
      else {
        uVar26 = *(uint *)(param_1 + 0x2e0) & uVar26 - 1;
        *puVar56 = uVar26;
        uVar26 = *(uint *)(lVar29 + (ulong)uVar26 * 4);
        *(uint *)(param_1 + 0x2c0) = uVar26;
        (**(code **)((long)&PTR_FUN_00c7b1c8 + ((ulong)(uVar26 >> 0x16) & 0x3f8)))(param_1,0);
        uVar26 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
        *puVar56 = uVar26;
        *(undefined4 *)(param_1 + 0x2c0) =
             *(undefined4 *)
              ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
      }
      lVar29 = (&DAT_02819158)[(ulong)*puVar1 * 0xc2];
      uVar26 = *puVar56;
      uVar31 = *(uint *)(lVar29 + (ulong)uVar26 * 4);
      uVar30 = (ulong)(uVar26 >> 1);
      if ((uVar31 >> 0x1c & 1) == 0) {
        if ((uVar31 >> 0x1b & 1) != 0) goto LAB_0084cf10;
LAB_0084cee4:
        FUN_00848180(param_1,*(undefined1 *)(param_1 + uVar30 * 0x78 + 0x458));
        uVar30 = (ulong)*(byte *)(param_1 + 0x450);
        if (*(byte *)(param_1 + 0x450) != 0) goto LAB_0084cf34;
LAB_0084cf74:
        uVar34 = (ulong)*puVar56;
        uVar35 = (ulong)(*puVar56 >> 1);
        cVar38 = *(char *)(param_1 + uVar35 * 0x78 + 0x4a1);
joined_r0x0084cf6c:
        if (cVar38 != '\0') goto LAB_0084cfb0;
LAB_0084cfa4:
        if (*(char *)(param_1 + uVar35 * 0x78 + 0x4a6) != '\0') goto LAB_0084cfb0;
      }
      else {
        *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x48b) = 1;
        if ((*(uint *)(lVar29 + (ulong)uVar26 * 4) >> 0x1b & 1) == 0) goto LAB_0084cee4;
LAB_0084cf10:
        *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x48a) = 1;
        FUN_00848180(param_1,*(undefined1 *)(param_1 + uVar30 * 0x78 + 0x458));
        uVar30 = (ulong)*(byte *)(param_1 + 0x450);
        if (*(byte *)(param_1 + 0x450) == 0) goto LAB_0084cf74;
LAB_0084cf34:
        if ((uint)uVar30 != (uint)*(byte *)(param_1 + 0x451)) goto LAB_0084cf74;
        uVar34 = (ulong)*puVar56;
        uVar35 = (ulong)(*puVar56 >> 1);
        if (*(char *)(param_1 + 0x456) == '\0' && *(char *)(param_1 + 0x452) == '\0') {
          *(undefined1 *)(param_1 + uVar35 * 0x78 + 0x4c6) = 1;
          cVar38 = *(char *)(param_1 + uVar35 * 0x78 + 0x4a1);
          goto joined_r0x0084cf6c;
        }
        *(undefined1 *)(param_1 + uVar35 * 0x78 + 0x4c8) = 1;
        cVar38 = *(char *)(param_1 + uVar35 * 0x78 + 0x4a1);
        if (cVar38 == '\0') goto LAB_0084cfa4;
LAB_0084cfb0:
        cVar5 = *(char *)(param_1 + uVar35 * 0x78 + 0x48c);
        if (cVar5 != '\0') {
          puVar47 = (undefined1 *)(param_1 + uVar35 * 0x78 + 0x45c);
          if ((cVar5 == cVar38) &&
             (((((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x48d) != '\0' &&
                 (*(char *)(lVar29 + 0x4a2) != '\0')) ||
                ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x48e) != '\0' &&
                 (*(char *)(lVar29 + 0x4a3) != '\0')))) ||
               ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x48f) != '\0' &&
                (*(char *)(lVar29 + 0x4a4) != '\0')))) ||
              ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x490) != '\0' &&
               (*(char *)(lVar29 + 0x4a5) != '\0')))))) {
            *puVar47 = 1;
          }
          if ((cVar5 == *(char *)(param_1 + uVar35 * 0x78 + 0x4a6)) &&
             ((((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x48d) != '\0' &&
                (*(char *)(lVar29 + 0x4a7) != '\0')) ||
               ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x48e) != '\0' &&
                (*(char *)(lVar29 + 0x4a8) != '\0')))) ||
              (((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x48f) != '\0' &&
                (*(char *)(lVar29 + 0x4a9) != '\0')) ||
               ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x490) != '\0' &&
                (*(char *)(lVar29 + 0x4aa) != '\0')))))))) {
            *puVar47 = 1;
          }
        }
      }
      if ((*(char *)(param_1 + uVar35 * 0x78 + 0x45c) != '\0') &&
         (((cVar38 = *(char *)(param_1 + uVar35 * 0x78 + 0x491), cVar38 != '\0' ||
           (*(char *)(param_1 + uVar35 * 0x78 + 0x496) != '\0')) &&
          (cVar5 = *(char *)(param_1 + uVar35 * 0x78 + 0x49c), cVar5 != '\0')))) {
        puVar47 = (undefined1 *)(param_1 + uVar35 * 0x78 + 0x45d);
        if ((cVar5 == cVar38) &&
           ((((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x49d) != '\0' &&
              (*(char *)(lVar29 + 0x492) != '\0')) ||
             ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x49e) != '\0' &&
              (*(char *)(lVar29 + 0x493) != '\0')))) ||
            (((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x49f) != '\0' &&
              (*(char *)(lVar29 + 0x494) != '\0')) ||
             ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x4a0) != '\0' &&
              (*(char *)(lVar29 + 0x495) != '\0')))))))) {
          *puVar47 = 1;
        }
        if ((cVar5 == *(char *)(param_1 + uVar35 * 0x78 + 0x496)) &&
           (((((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x49d) != '\0' &&
               (*(char *)(lVar29 + 0x497) != '\0')) ||
              ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x49e) != '\0' &&
               (*(char *)(lVar29 + 0x498) != '\0')))) ||
             ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x49f) != '\0' &&
              (*(char *)(lVar29 + 0x499) != '\0')))) ||
            ((lVar29 = param_1 + uVar35 * 0x78, *(char *)(lVar29 + 0x4a0) != '\0' &&
             (*(char *)(lVar29 + 0x49a) != '\0')))))) {
          *puVar47 = 1;
        }
      }
      lVar29 = param_1 + 0x310;
      bVar60 = *(byte *)(lVar29 + uVar30 * 4);
      bVar59 = *(byte *)(param_1 + 0x448);
      if (*(byte *)(param_1 + 0x448) <= bVar60) {
        bVar59 = bVar60;
      }
      *(byte *)(lVar29 + uVar30 * 4) = bVar59;
      lVar32 = lVar29 + (ulong)*(byte *)(param_1 + 0x450) * 4;
      bVar59 = *(byte *)(param_1 + 0x449);
      if (*(byte *)(param_1 + 0x449) <= *(byte *)(lVar32 + 1)) {
        bVar59 = *(byte *)(lVar32 + 1);
      }
      *(byte *)(lVar32 + 1) = bVar59;
      pbVar41 = (byte *)(lVar29 + (ulong)*(byte *)(param_1 + 0x451) * 4);
      bVar59 = *(byte *)(param_1 + 1099);
      if (*(byte *)(param_1 + 1099) <= *(byte *)(lVar32 + 3)) {
        bVar59 = *(byte *)(lVar32 + 3);
      }
      bVar60 = *(byte *)(param_1 + 0x44d);
      if (*(byte *)(param_1 + 0x44d) <= pbVar41[1]) {
        bVar60 = pbVar41[1];
      }
      pbVar41[1] = bVar60;
      lVar29 = lVar29 + (ulong)*(byte *)(param_1 + 0x451) * 4;
      *(byte *)(lVar32 + 3) = bVar59;
      bVar59 = *(byte *)(param_1 + 0x44f);
      if (*(byte *)(param_1 + 0x44f) <= *(byte *)(lVar29 + 3)) {
        bVar59 = *(byte *)(lVar29 + 3);
      }
      bVar60 = *(byte *)(param_1 + 0x44a);
      if (*(byte *)(param_1 + 0x44a) <= *(byte *)(lVar32 + 2)) {
        bVar60 = *(byte *)(lVar32 + 2);
      }
      bVar61 = *(byte *)(param_1 + 0x44c);
      bVar62 = *pbVar41;
      *(byte *)(lVar32 + 2) = bVar60;
      bVar60 = *(byte *)(param_1 + 0x44e);
      *(byte *)(lVar29 + 3) = bVar59;
      bVar59 = *(byte *)(param_1 + 0x453);
      if (bVar61 <= bVar62) {
        bVar61 = bVar62;
      }
      if (bVar60 <= *(byte *)(lVar29 + 2)) {
        bVar60 = *(byte *)(lVar29 + 2);
      }
      *pbVar41 = bVar61;
      lVar32 = param_1 + (ulong)bVar59;
      *(byte *)(lVar29 + 2) = bVar60;
      bVar62 = *(byte *)(lVar32 + 0x300);
      bVar63 = *(byte *)(param_1 + 0x2f2);
      bVar60 = *(byte *)(param_1 + 0x454);
      uVar34 = uVar34 >> 1;
      bVar64 = *(byte *)(param_1 + 0x2f3);
      bVar61 = *(byte *)(param_1 + 0x455);
      bVar59 = *(byte *)(param_1 + 0x452);
      if (*(byte *)(param_1 + 0x452) <= bVar62) {
        bVar59 = bVar62;
      }
      bVar62 = *(byte *)(param_1 + 0x2f7);
      *(byte *)(lVar32 + 0x300) = bVar59;
      if (bVar60 <= bVar63) {
        bVar60 = bVar63;
      }
      *(byte *)(param_1 + 0x2f2) = bVar60;
      if (bVar61 <= bVar64) {
        bVar61 = bVar64;
      }
      *(byte *)(param_1 + 0x2f3) = bVar61;
      bVar59 = *(byte *)(param_1 + 0x456);
      if (*(byte *)(param_1 + 0x456) <= bVar62) {
        bVar59 = bVar62;
      }
      *(byte *)(param_1 + 0x2f7) = bVar59;
      bVar59 = *(byte *)(param_1 + 0x457);
      if (*(byte *)(param_1 + 0x457) <= *(byte *)(param_1 + 0x2f4)) {
        bVar59 = *(byte *)(param_1 + 0x2f4);
      }
      *(byte *)(param_1 + 0x2f4) = bVar59;
      if (*(char *)(param_1 + uVar34 * 0x78 + 0x4ce) == '\0') {
        lVar29 = param_1 + uVar34 * 0x78;
        iVar27 = (uint)*(byte *)(lVar29 + 0x458) + *(int *)(param_1 + 0x2f8) + 1;
        *(int *)(param_1 + 0x2f8) = iVar27;
        if (*(char *)(lVar29 + 0x4cd) != '\0') {
          *(int *)(param_1 + uVar34 * 0x78 + 0x4c0) = iVar27;
          iVar27 = 0;
          piVar50 = (int *)(param_1 + 0x2f8);
          goto LAB_0084d310;
        }
      }
      else {
        iVar27 = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 1;
        piVar50 = (int *)(param_1 + uVar34 * 0x78 + 0x4c0);
LAB_0084d310:
        *piVar50 = 0;
      }
      iVar55 = *(int *)(param_1 + 0x2c8);
      lVar29 = param_1 + 0x458 + uVar34 * 0x78;
      *(int *)(lVar29 + 0x10) = iVar55;
      *(uint *)(lVar29 + 0x14) = (uint)(iVar55 == 0);
      uVar34 = (ulong)*(uint *)(param_1 + 0x2cc);
      bVar18 = *(int *)(param_1 + 0x2c4) == 0;
      iVar55 = *(int *)(param_1 + 0x3c4e0);
      uVar31 = *(uint *)(param_1 + 0x3c4e4);
      uVar30 = (ulong)(uVar31 >> 1);
      lVar29 = param_1 + 0x458 + uVar30 * 0x78;
      *(uint *)(lVar29 + 0x18) = (uint)(!bVar18 && uVar34 != 0);
      *(uint *)(lVar29 + 0x1c) = (uint)(bVar18 && uVar34 != 0);
      *(int *)(param_1 + 0x3c4e0) = iVar55 + 1;
      if (1 < uVar45) {
        *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x45a) = 1;
        if (uVar45 == 3) {
          *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x45b) = 1;
        }
        uVar26 = *(uint *)(param_1 + 0x2e0) & uVar31 - 2;
        *(uint *)(param_1 + 0x3c4e4) = uVar26;
        lVar29 = (&DAT_02819158)[uVar34 * 0xc2];
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + (ulong)uVar26 * 4);
        cVar38 = *(char *)(param_1 + (ulong)(uVar26 >> 1) * 0x78 + 0x487);
        uVar26 = uVar26 + 2 & *(uint *)(param_1 + 0x2e0);
        *(uint *)(param_1 + 0x3c4e4) = uVar26;
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + (ulong)uVar26 * 4);
        uVar30 = (ulong)(uVar26 >> 1);
        if ((cVar38 != '\0') && (*(char *)(param_1 + 0x3c4d8) != '\0')) {
          *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x4c6) = 1;
        }
        if ((((*(char *)(param_1 + uVar30 * 0x78 + 0x45b) != '\0') &&
             (*(char *)(param_1 + uVar30 * 0x78 + 0x4c5) == '\0')) &&
            (cVar38 = *(char *)(param_1 + uVar30 * 0x78 + 0x4ab), cVar38 != '\0')) &&
           ((*(char *)(param_1 + uVar30 * 0x78 + 0x4ac) != '\0' &&
            (*(char *)(param_1 + uVar30 * 0x78 + 0x4cc) == '\0')))) {
          *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x4c9) = 1;
          *(char *)(param_1 + 0x2f5) = cVar38;
        }
joined_r0x008512a0:
        if (iVar27 != 0) {
          *(int *)(param_1 + uVar30 * 0x78 + 0x4c0) = iVar27;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        break;
      }
      uVar26 = 2;
      if (uVar45 != 1) {
        uVar26 = uVar45;
      }
      bVar59 = *(byte *)(param_1 + 0x3c4d8);
      if (bVar59 == 0) {
        uVar45 = uVar26;
        if ((*(char *)(param_1 + uVar30 * 0x78 + 0x489) != '\0') && (uVar26 == 0)) {
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x487) == '\0') {
            *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) | 7;
            iVar27 = *(int *)(param_1 + 0x2f8);
            goto joined_r0x008512a0;
          }
          uVar45 = 0;
        }
      }
      else {
        if (bVar59 < 3) {
          uVar26 = *(uint *)(param_1 + 0x2e0) & uVar31 - 1;
          *puVar56 = uVar26;
          uVar31 = *(uint *)((&DAT_02819158)[uVar34 * 0xc2] + (ulong)uVar26 * 4);
          *(uint *)(param_1 + 0x2c0) = uVar31;
          local_e8 = (int *)0x0;
          local_e0 = 0;
          iStack_dc = 0;
          local_d8 = 0;
          iStack_d4 = 0;
                    /* try { // try from 0084d3dc to 0084d3ef has its CatchHandler @ 00851fcc */
          FUN_008452d0(param_1,(uVar26 + ((int)(uVar31 << 0x15) >> 0x1f & 0xdffffc00U |
                                         uVar31 & 0x3ff) * 2 + 2 & *(uint *)(param_1 + 0x2e0)) << 2,
                       0,0,&local_e8);
          if (local_e8 != (int *)0x0) {
            local_e0 = SUB84(local_e8,0);
            iStack_dc = (int)((ulong)local_e8 >> 0x20);
            operator_delete(local_e8);
          }
          uVar34 = (ulong)*(uint *)(param_1 + 0x2cc);
          uVar31 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar31;
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)((&DAT_02819158)[uVar34 * 0xc2] + (ulong)uVar31 * 4);
          *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 7;
          cVar38 = *(char *)(*(long *)(param_1 + 0x440) + 6);
        }
        else if (bVar59 < 9) {
          uVar26 = *(uint *)(param_1 + 0x2e0) & uVar31 - 1;
          *puVar56 = uVar26;
          uVar31 = *(uint *)((&DAT_02819158)[uVar34 * 0xc2] + (ulong)uVar26 * 4);
          *(uint *)(param_1 + 0x2c0) = uVar31;
          local_e8 = (int *)0x0;
          local_e0 = 0;
          iStack_dc = 0;
          local_d8 = 0;
          iStack_d4 = 0;
                    /* try { // try from 0084d4cc to 0084d4df has its CatchHandler @ 00851fc0 */
          FUN_008452d0(param_1,(uVar26 + ((int)(uVar31 << 0x15) >> 0x1f & 0xdffffc00U |
                                         uVar31 & 0x3ff) * 2 + 2 & *(uint *)(param_1 + 0x2e0)) << 2,
                       0,0,&local_e8);
          if (local_e8 != (int *)0x0) {
            local_e0 = SUB84(local_e8,0);
            iStack_dc = (int)((ulong)local_e8 >> 0x20);
            operator_delete(local_e8);
          }
          uVar26 = *puVar56 + 4 & *(uint *)(param_1 + 0x2e0);
          bVar59 = *(byte *)(param_1 + 0x2f0);
          *(undefined1 *)(param_1 + 0x2f0) = 0;
          *puVar56 = uVar26;
          local_e8 = (int *)0x0;
          local_e0 = 0;
          iStack_dc = 0;
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)
                ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
          local_d8 = 0;
          iStack_d4 = 0;
                    /* try { // try from 0084d534 to 0084d547 has its CatchHandler @ 00851fbc */
          FUN_008452d0(param_1,(uVar26 & 0x3ffffffe) << 2,0,0,&local_e8);
          if (local_e8 != (int *)0x0) {
            local_e0 = SUB84(local_e8,0);
            iStack_dc = (int)((ulong)local_e8 >> 0x20);
            operator_delete(local_e8);
          }
          uVar31 = *puVar56 - 3 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar31;
          uVar34 = (ulong)*(uint *)(param_1 + 0x2cc);
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)((&DAT_02819158)[uVar34 * 0xc2] + (ulong)uVar31 * 4);
          *(byte *)(param_1 + 0x2f0) = (*(byte *)(param_1 + 0x2f0) | bVar59) & 7;
          cVar38 = *(char *)(*(long *)(param_1 + 0x440) + 6);
        }
        else {
          *(undefined1 *)(param_1 + 0x2f0) = 7;
          cVar38 = *(char *)(*(long *)(param_1 + 0x440) + 6);
        }
        if (cVar38 == '\x01') {
          FUN_009887f0(&PTR_FUN_00c9aa28,"microVU%d Warning: Branch, E-bit, Branch! [%04x]",uVar34,
                       (uVar31 & 0x3ffffffe) << 2);
          uVar31 = *puVar56;
          uVar34 = (ulong)*puVar1;
        }
        uVar26 = uVar31 + 2 & *(uint *)(param_1 + 0x2e0);
        *puVar56 = uVar26;
        lVar29 = (&DAT_02819158)[uVar34 * 0xc2];
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + (ulong)uVar26 * 4);
        if ((*(uint *)(lVar29 + (ulong)uVar26 * 4) >> 0x1e & 1) != 0) {
          *(undefined1 *)(param_1 + 0x2f6) = 1;
        }
        uVar31 = uVar26 - 2 & *(uint *)(param_1 + 0x2e0);
        *(uint *)(param_1 + 0x3c4e4) = uVar31;
        uVar30 = (ulong)(uVar31 >> 1);
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + (ulong)uVar31 * 4);
        *(undefined1 *)(param_1 + 0x3c4d8) = 0;
        uVar45 = 3;
      }
      if (*(char *)(param_1 + uVar30 * 0x78 + 0x45a) != '\0') {
        iVar27 = *(int *)(param_1 + 0x2f8);
        goto joined_r0x008512a0;
      }
      uVar26 = *(uint *)(param_1 + 0x2e0);
      uVar31 = uVar26 & uVar31 + 1;
      *(uint *)(param_1 + 0x3c4e4) = uVar31;
      lVar29 = (&DAT_02819158)[uVar34 * 0xc2];
      *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar29 + (ulong)uVar31 * 4);
    } while (*(uint *)(param_1 + 0x3c4e0) < uVar6);
  }
  *(undefined2 *)(param_1 + 0x2fe) = 0;
  *(undefined1 *)(param_1 + 0x2fd) = 0;
  if (*(char *)(param_1 + 0x2fc) == '\0') {
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_e8 = DAT_02abf980;
    uStack_c0 = _UNK_0022d5b8;
    local_c8 = _DAT_0022d5b0;
    iStack_dc = (int)DAT_0c7b1c30;
    local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
    local_e0 = DAT_02abf988;
    iStack_d4 = DAT_0c7b1c38;
    uVar20 = *puVar46;
    if (DAT_02b50b08 == 1) {
      uVar28 = 0xc0000000;
      if (_DAT_02b50b04 != 0x40) {
        uVar28 = 0x80000000;
      }
    }
    else {
      uVar26 = _DAT_02b50b04 - 8U >> 3 | _DAT_02b50b04 << 0x1d;
      if (uVar26 < 8) {
        uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
      }
      else {
        uVar28 = 0x4800000;
      }
    }
    puVar46 = (undefined8 *)&DAT_02b50b00;
  }
  else {
    if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
      puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      FUN_0097b280(*puVar46,&DAT_02b50910,1);
    }
    else {
      armAsm::__tls_init();
      puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      FUN_0097b280(*puVar46,&DAT_02b50910,1);
      armAsm::__tls_init();
    }
    puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_e8 = DAT_02abf980;
    uStack_c0 = _UNK_0022d5b8;
    local_c8 = _DAT_0022d5b0;
    iStack_dc = (int)DAT_0c7b1c30;
    local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
    local_e0 = DAT_02abf988;
    iStack_d4 = DAT_0c7b1c38;
    uVar20 = *puVar46;
    if (DAT_02b50918 == 1) {
      uVar28 = 0xc0000000;
      if (DAT_02b50910._4_4_ != 0x40) {
        uVar28 = 0x80000000;
      }
      puVar46 = &DAT_02b50910;
    }
    else {
      uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
      if (uVar26 < 8) {
        uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
        puVar46 = &DAT_02b50910;
      }
      else {
        uVar28 = 0x4800000;
        puVar46 = &DAT_02b50910;
      }
    }
  }
  uStack_cc = 0;
  local_d0 = 0x460;
  _DAT_0022d5b0 = local_c8;
  _UNK_0022d5b8 = uStack_c0;
  DAT_02abf980 = local_e8;
  DAT_02abf988 = local_e0;
  DAT_0c7b1c38 = iStack_d4;
  FUN_00981440(uVar20,puVar46,&local_e8,uVar28);
  uVar31 = *(uint *)(param_1 + 0x3c4e0);
  uVar45 = *(uint *)(param_1 + 0x3c4e4);
  bVar59 = *(byte *)(param_1 + 0x2f0);
  uVar37 = *(uint *)(param_1 + 0x2e0);
  uVar26 = 0;
  if (0 < (int)uVar31) {
    uVar39 = uVar45;
    if ((bVar59 >> 1 & 1) == 0) {
      if ((bVar59 & 1) == 0) {
        do {
          bVar18 = *(char *)(param_1 + (ulong)(uVar39 >> 1) * 0x78 + 0x478) == '\0';
          uVar40 = uVar26;
          if ((!bVar18 && 1 < uVar26) && (bVar18 || uVar26 != 2)) break;
          uVar39 = uVar39 - 2 & uVar37;
          uVar26 = uVar26 + 1;
          uVar40 = uVar31;
        } while (uVar31 != uVar26);
      }
      else {
        do {
          if ((*(char *)(param_1 + (ulong)(uVar39 >> 1) * 0x78 + 0x478) != '\0') &&
             (*(undefined1 *)(param_1 + (ulong)(uVar39 >> 1) * 0x78 + 0x479) = 1, uVar40 = uVar26,
             2 < uVar26)) break;
          uVar39 = uVar39 - 2 & uVar37;
          uVar26 = uVar26 + 1;
          uVar40 = uVar31;
        } while (uVar31 != uVar26);
      }
    }
    else if ((bVar59 & 1) == 0) {
      do {
        if ((*(char *)(param_1 + (ulong)(uVar39 >> 1) * 0x78 + 0x478) != '\0') &&
           (*(undefined1 *)(param_1 + (ulong)(uVar39 >> 1) * 0x78 + 0x47d) = 1, uVar40 = uVar26,
           2 < uVar26)) break;
        uVar39 = uVar39 - 2 & uVar37;
        uVar26 = uVar26 + 1;
        uVar40 = uVar31;
      } while (uVar31 != uVar26);
    }
    else {
      do {
        if (*(char *)(param_1 + (ulong)(uVar39 >> 1) * 0x78 + 0x478) != '\0') {
          lVar29 = param_1 + (ulong)(uVar39 >> 1) * 0x78;
          *(undefined1 *)(lVar29 + 0x47d) = 1;
          *(undefined1 *)(lVar29 + 0x479) = 1;
          uVar40 = uVar26;
          if (2 < uVar26) break;
        }
        uVar39 = uVar39 - 2 & uVar37;
        uVar26 = uVar26 + 1;
        uVar40 = uVar31;
      } while (uVar31 != uVar26);
    }
    uVar26 = uVar40;
    *puVar56 = uVar39;
  }
  local_198 = _UNK_0022ec08;
  local_1a0 = _DAT_0022ec00;
  uStack_188 = _UNK_0022ec08;
  local_190 = _DAT_0022ec00;
  pbVar41 = *(byte **)(param_1 + 0x440);
  bVar60 = *pbVar41;
  if ((bVar60 & 1) == 0) {
    uVar39 = pbVar41[1] >> 2 & 3;
    local_1b0 = 0xffffffffffffffff;
    uStack_1a8 = 0xffffffffffffffff;
    *(undefined4 *)((ulong)&local_1b0 | ((ulong)((pbVar41[1] >> 2) - 1) & 3) << 2) = 0;
    bVar60 = *pbVar41;
  }
  else {
    uVar39 = 0;
    uStack_1a8 = _UNK_0022ec08;
    local_1b0 = _DAT_0022ec00;
  }
  if ((bVar60 >> 1 & 1) == 0) {
    local_1a0 = 0xffffffffffffffff;
    local_198 = 0xffffffffffffffff;
    bVar60 = *pbVar41;
  }
  if ((bVar60 >> 2 & 1) == 0) {
    uVar40 = (uint)(pbVar41[1] >> 6);
    local_190 = 0xffffffffffffffff;
    uStack_188 = 0xffffffffffffffff;
    *(undefined4 *)(((ulong)&local_1b0 | ((ulong)((pbVar41[1] >> 6) - 1) & 3) << 2) + 0x20) = 0;
    uVar43 = *(uint *)(param_1 + 0x3c4e8);
    *(undefined4 *)(param_1 + 0x3c4e0) = 0;
    *(uint *)(param_1 + 0x3c4e4) = uVar43;
    if (uVar31 == 0) goto LAB_0084de40;
LAB_0084da4c:
    local_180 = 0;
    uVar44 = 0;
    uVar42 = 0;
    iVar27 = *(int *)(param_1 + 0x3c4ec);
    do {
      uVar30 = (ulong)(uVar43 >> 1);
      cVar38 = *(char *)(param_1 + uVar30 * 0x78 + 0x4c7);
      if (cVar38 != '\0') {
        if ((bVar59 & 1) == 0) {
          uVar54 = uVar44;
          uVar48 = uVar43;
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0') {
            if (0 < (int)uVar44) {
              do {
                uVar48 = uVar48 - 2 & uVar37;
                lVar29 = param_1 + (ulong)(uVar48 >> 1) * 0x78;
                if (*(char *)(lVar29 + 0x479) != '\0') break;
                if (*(char *)(param_1 + (ulong)(uVar48 >> 1) * 0x78 + 0x478) != '\0') {
                  *(undefined1 *)(lVar29 + 0x479) = 1;
                  goto LAB_0084dad0;
                }
                uVar7 = uVar54 - 1;
                bVar18 = 0 < (int)uVar54;
                uVar54 = uVar7;
              } while (uVar7 != 0 && bVar18);
            }
          }
          else {
            *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x479) = 1;
            if (0 < (int)uVar44) {
LAB_0084dad0:
              iVar55 = uVar54 + 1;
              do {
                uVar48 = uVar48 - 2 & uVar37;
                if (*(char *)(param_1 + (ulong)(uVar48 >> 1) * 0x78 + 0x479) != '\0') break;
                *(undefined1 *)(param_1 + (ulong)(uVar48 >> 1) * 0x78 + 0x478) = 0;
                iVar55 = iVar55 + -1;
              } while (1 < iVar55);
            }
          }
        }
        else if (uVar26 < uVar31 - uVar44) {
          uVar54 = uVar44;
          uVar48 = uVar43;
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0') {
            if (0 < (int)uVar44) {
              do {
                uVar48 = uVar48 - 2 & uVar37;
                lVar29 = param_1 + (ulong)(uVar48 >> 1) * 0x78;
                if (*(char *)(lVar29 + 0x479) != '\0') break;
                if (*(char *)(param_1 + (ulong)(uVar48 >> 1) * 0x78 + 0x478) != '\0') {
                  *(undefined1 *)(lVar29 + 0x479) = 1;
                  goto LAB_0084db38;
                }
                uVar7 = uVar54 - 1;
                bVar18 = 0 < (int)uVar54;
                uVar54 = uVar7;
              } while (uVar7 != 0 && bVar18);
            }
          }
          else {
            *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x479) = 1;
            if (0 < (int)uVar44) {
LAB_0084db38:
              iVar55 = uVar54 + 1;
              do {
                uVar48 = uVar48 - 2 & uVar37;
                if (*(char *)(param_1 + (ulong)(uVar48 >> 1) * 0x78 + 0x479) != '\0') break;
                *(undefined1 *)(param_1 + (ulong)(uVar48 >> 1) * 0x78 + 0x478) = 0;
                iVar55 = iVar55 + -1;
              } while (1 < iVar55);
            }
          }
        }
      }
      lVar29 = param_1 + uVar30 * 0x78;
      local_180 = local_180 + (uint)*(byte *)(lVar29 + 0x458);
      iVar55 = (int)local_1b0;
      if (((int)local_1b0 == -1 || (int)local_1b0 + 1 < 0 != SCARRY4((int)local_1b0,1)) ||
          local_180 < (int)local_1b0) {
        iVar55 = -1;
      }
      iVar14 = local_1b0._4_4_;
      if (local_1b0._4_4_ > local_180 || iVar55 >= local_1b0._4_4_) {
        iVar14 = iVar55;
      }
      iVar15 = (int)uStack_1a8;
      if (local_180 < (int)uStack_1a8 || (int)uStack_1a8 <= iVar14) {
        iVar15 = iVar14;
      }
      iVar79 = (int)local_1a0;
      if (((int)local_1a0 == -1 || (int)local_1a0 + 1 < 0 != SCARRY4((int)local_1a0,1)) ||
          local_180 < (int)local_1a0) {
        iVar79 = -1;
      }
      iVar80 = local_1a0._4_4_;
      if (local_1a0._4_4_ > local_180 || iVar79 >= local_1a0._4_4_) {
        iVar80 = iVar79;
      }
      iVar81 = (int)local_198;
      if (local_180 < (int)local_198 || (int)local_198 <= iVar80) {
        iVar81 = iVar80;
      }
      iVar82 = (int)local_190;
      if (((int)local_190 == -1 || (int)local_190 + 1 < 0 != SCARRY4((int)local_190,1)) ||
          local_180 < (int)local_190) {
        iVar82 = -1;
      }
      iVar2 = local_190._4_4_;
      if (local_190._4_4_ > local_180 || iVar82 >= local_190._4_4_) {
        iVar2 = iVar82;
      }
      *(byte *)(lVar29 + 0x47b) = (char)uVar39 - 1U & 3;
      *(byte *)(lVar29 + 0x480) = (char)uVar42 - 1U & 3;
      iVar3 = (int)uStack_188;
      if (local_180 < (int)uStack_188 || (int)uStack_188 <= iVar2) {
        iVar3 = iVar2;
      }
      *(char *)(lVar29 + 0x47a) = (char)uVar39;
      *(char *)(lVar29 + 0x47f) = (char)uVar42;
      *(char *)(lVar29 + 0x484) = (char)uVar40;
      *(bool *)(lVar29 + 0x47c) =
           iVar15 < uStack_1a8._4_4_ && uStack_1a8._4_4_ <= local_180 ||
           (local_180 < (int)uStack_1a8 || (int)uStack_1a8 <= iVar14) &&
           (local_1b0._4_4_ <= local_180 && iVar55 < local_1b0._4_4_);
      *(bool *)(lVar29 + 0x481) =
           iVar81 < local_198._4_4_ && local_198._4_4_ <= local_180 ||
           (local_180 < (int)local_198 || (int)local_198 <= iVar80) &&
           (local_1a0._4_4_ <= local_180 && iVar79 < local_1a0._4_4_);
      *(bool *)(lVar29 + 0x486) =
           iVar3 < uStack_188._4_4_ && uStack_188._4_4_ <= local_180 ||
           (local_180 < (int)uStack_188 || (int)uStack_188 <= iVar2) &&
           (local_190._4_4_ <= local_180 && iVar82 < local_190._4_4_);
      *(byte *)(lVar29 + 0x485) = (char)uVar40 - 1U & 3;
      if ((iVar27 == 0) || (*(char *)(param_1 + uVar30 * 0x78 + 0x479) != '\0')) {
        if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0' && cVar38 == '\0') goto LAB_0084dd50;
LAB_0084ddd0:
        *(int *)((long)&local_1b0 + (ulong)uVar39 * 4) = local_180 + 4;
        uVar39 = uVar39 + 1 & 3;
        cVar38 = *(char *)(param_1 + uVar30 * 0x78 + 0x47d);
      }
      else {
        *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x478) = 0;
        if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) != '\0' || cVar38 != '\0') goto LAB_0084ddd0;
LAB_0084dd50:
        if (*(char *)(param_1 + uVar30 * 0x78 + 0x464) != '\0') goto LAB_0084ddd0;
        cVar38 = *(char *)(param_1 + uVar30 * 0x78 + 0x47d);
      }
      if (cVar38 != '\0') {
        *(int *)((long)&local_1a0 + (long)(int)uVar42 * 4) = local_180 + 4;
        uVar42 = uVar42 + 1 & 3;
      }
      if (*(char *)(param_1 + uVar30 * 0x78 + 0x482) != '\0') {
        *(int *)((long)&local_190 + (ulong)uVar40 * 4) = local_180 + 4;
        uVar40 = uVar40 + 1 & 3;
      }
      local_180 = local_180 + 1;
      uVar43 = uVar43 + 2 & uVar37;
      uVar44 = uVar44 + 1;
    } while (uVar44 != uVar31);
    if (uVar31 < 2) {
      uVar31 = 1;
    }
    *(uint *)(param_1 + 0x3c4e0) = uVar31;
    *(uint *)(param_1 + 0x3c4e4) = uVar43;
  }
  else {
    uVar40 = 0;
    uVar43 = *(uint *)(param_1 + 0x3c4e8);
    *(undefined4 *)(param_1 + 0x3c4e0) = 0;
    *(uint *)(param_1 + 0x3c4e4) = uVar43;
    if (uVar31 != 0) goto LAB_0084da4c;
LAB_0084de40:
    local_180 = 0;
    uVar42 = 0;
  }
  bVar60 = (byte)(uVar39 << 2);
  bVar61 = (byte)(uVar40 << 6);
  if ((bVar59 & 1) != 0) {
    bVar60 = 0;
  }
  if ((bVar59 & 4) != 0) {
    bVar61 = 0;
  }
  *(byte *)(param_1 + 0x2f1) = *(byte *)(param_1 + 0x2f1) | (byte)(uVar42 << 4) | bVar60 | bVar61;
  *puVar56 = uVar45;
  lVar29 = 0x310;
  do {
    pbVar41 = (byte *)(param_1 + lVar29);
    lVar29 = lVar29 + 0x40;
    *pbVar41 = *pbVar41 & ~-(*pbVar41 == 1);
    pbVar41[1] = pbVar41[1] & ~-(pbVar41[1] == 1);
    pbVar41[2] = pbVar41[2] & ~-(pbVar41[2] == 1);
    pbVar41[3] = pbVar41[3] & ~-(pbVar41[3] == 1);
    pbVar41[4] = pbVar41[4] & ~-(pbVar41[4] == 1);
    pbVar41[5] = pbVar41[5] & ~-(pbVar41[5] == 1);
    pbVar41[6] = pbVar41[6] & ~-(pbVar41[6] == 1);
    pbVar41[7] = pbVar41[7] & ~-(pbVar41[7] == 1);
    pbVar41[8] = pbVar41[8] & ~-(pbVar41[8] == 1);
    pbVar41[9] = pbVar41[9] & ~-(pbVar41[9] == 1);
    pbVar41[10] = pbVar41[10] & ~-(pbVar41[10] == 1);
    pbVar41[0xb] = pbVar41[0xb] & ~-(pbVar41[0xb] == 1);
    pbVar41[0xc] = pbVar41[0xc] & ~-(pbVar41[0xc] == 1);
    pbVar41[0xd] = pbVar41[0xd] & ~-(pbVar41[0xd] == 1);
    pbVar41[0xe] = pbVar41[0xe] & ~-(pbVar41[0xe] == 1);
    pbVar41[0xf] = pbVar41[0xf] & ~-(pbVar41[0xf] == 1);
    pbVar41[0x10] = pbVar41[0x10] & ~-(pbVar41[0x10] == 1);
    pbVar41[0x11] = pbVar41[0x11] & ~-(pbVar41[0x11] == 1);
    pbVar41[0x12] = pbVar41[0x12] & ~-(pbVar41[0x12] == 1);
    pbVar41[0x13] = pbVar41[0x13] & ~-(pbVar41[0x13] == 1);
    pbVar41[0x14] = pbVar41[0x14] & ~-(pbVar41[0x14] == 1);
    pbVar41[0x15] = pbVar41[0x15] & ~-(pbVar41[0x15] == 1);
    pbVar41[0x16] = pbVar41[0x16] & ~-(pbVar41[0x16] == 1);
    pbVar41[0x17] = pbVar41[0x17] & ~-(pbVar41[0x17] == 1);
    pbVar41[0x18] = pbVar41[0x18] & ~-(pbVar41[0x18] == 1);
    pbVar41[0x19] = pbVar41[0x19] & ~-(pbVar41[0x19] == 1);
    pbVar41[0x1a] = pbVar41[0x1a] & ~-(pbVar41[0x1a] == 1);
    pbVar41[0x1b] = pbVar41[0x1b] & ~-(pbVar41[0x1b] == 1);
    pbVar41[0x1c] = pbVar41[0x1c] & ~-(pbVar41[0x1c] == 1);
    pbVar41[0x1d] = pbVar41[0x1d] & ~-(pbVar41[0x1d] == 1);
    pbVar41[0x1e] = pbVar41[0x1e] & ~-(pbVar41[0x1e] == 1);
    pbVar41[0x1f] = pbVar41[0x1f] & ~-(pbVar41[0x1f] == 1);
    pbVar41[0x20] = pbVar41[0x20] & ~-(pbVar41[0x20] == 1);
    pbVar41[0x21] = pbVar41[0x21] & ~-(pbVar41[0x21] == 1);
    pbVar41[0x22] = pbVar41[0x22] & ~-(pbVar41[0x22] == 1);
    pbVar41[0x23] = pbVar41[0x23] & ~-(pbVar41[0x23] == 1);
    pbVar41[0x24] = pbVar41[0x24] & ~-(pbVar41[0x24] == 1);
    pbVar41[0x25] = pbVar41[0x25] & ~-(pbVar41[0x25] == 1);
    pbVar41[0x26] = pbVar41[0x26] & ~-(pbVar41[0x26] == 1);
    pbVar41[0x27] = pbVar41[0x27] & ~-(pbVar41[0x27] == 1);
    pbVar41[0x28] = pbVar41[0x28] & ~-(pbVar41[0x28] == 1);
    pbVar41[0x29] = pbVar41[0x29] & ~-(pbVar41[0x29] == 1);
    pbVar41[0x2a] = pbVar41[0x2a] & ~-(pbVar41[0x2a] == 1);
    pbVar41[0x2b] = pbVar41[0x2b] & ~-(pbVar41[0x2b] == 1);
    pbVar41[0x2c] = pbVar41[0x2c] & ~-(pbVar41[0x2c] == 1);
    pbVar41[0x2d] = pbVar41[0x2d] & ~-(pbVar41[0x2d] == 1);
    pbVar41[0x2e] = pbVar41[0x2e] & ~-(pbVar41[0x2e] == 1);
    pbVar41[0x2f] = pbVar41[0x2f] & ~-(pbVar41[0x2f] == 1);
    pbVar41[0x30] = pbVar41[0x30] & ~-(pbVar41[0x30] == 1);
    pbVar41[0x31] = pbVar41[0x31] & ~-(pbVar41[0x31] == 1);
    pbVar41[0x32] = pbVar41[0x32] & ~-(pbVar41[0x32] == 1);
    pbVar41[0x33] = pbVar41[0x33] & ~-(pbVar41[0x33] == 1);
    pbVar41[0x34] = pbVar41[0x34] & ~-(pbVar41[0x34] == 1);
    pbVar41[0x35] = pbVar41[0x35] & ~-(pbVar41[0x35] == 1);
    pbVar41[0x36] = pbVar41[0x36] & ~-(pbVar41[0x36] == 1);
    pbVar41[0x37] = pbVar41[0x37] & ~-(pbVar41[0x37] == 1);
    pbVar41[0x38] = pbVar41[0x38] & ~-(pbVar41[0x38] == 1);
    pbVar41[0x39] = pbVar41[0x39] & ~-(pbVar41[0x39] == 1);
    pbVar41[0x3a] = pbVar41[0x3a] & ~-(pbVar41[0x3a] == 1);
    pbVar41[0x3b] = pbVar41[0x3b] & ~-(pbVar41[0x3b] == 1);
    pbVar41[0x3c] = pbVar41[0x3c] & ~-(pbVar41[0x3c] == 1);
    pbVar41[0x3d] = pbVar41[0x3d] & ~-(pbVar41[0x3d] == 1);
    pbVar41[0x3e] = pbVar41[0x3e] & ~-(pbVar41[0x3e] == 1);
    pbVar41[0x3f] = pbVar41[0x3f] & ~-(pbVar41[0x3f] == 1);
  } while (lVar29 != 0x390);
  uVar67 = *(undefined8 *)(param_1 + 0x308);
  uVar20 = *(undefined8 *)(param_1 + 0x300);
  bVar59 = (byte)((ulong)uVar20 >> 8);
  bVar60 = (byte)((ulong)uVar20 >> 0x10);
  bVar61 = (byte)((ulong)uVar20 >> 0x18);
  bVar62 = (byte)((ulong)uVar20 >> 0x20);
  bVar63 = (byte)((ulong)uVar20 >> 0x28);
  bVar64 = (byte)((ulong)uVar20 >> 0x30);
  bVar65 = (byte)((ulong)uVar20 >> 0x38);
  bVar68 = (byte)((ulong)uVar67 >> 8);
  bVar69 = (byte)((ulong)uVar67 >> 0x10);
  bVar70 = (byte)((ulong)uVar67 >> 0x18);
  bVar71 = (byte)((ulong)uVar67 >> 0x20);
  bVar72 = (byte)((ulong)uVar67 >> 0x28);
  bVar73 = (byte)((ulong)uVar67 >> 0x30);
  bVar74 = (byte)((ulong)uVar67 >> 0x38);
  *(ulong *)(param_1 + 0x308) =
       CONCAT17(bVar74 & ~-(bVar74 == 1),
                CONCAT16(bVar73 & ~-(bVar73 == 1),
                         CONCAT15(bVar72 & ~-(bVar72 == 1),
                                  CONCAT14(bVar71 & ~-(bVar71 == 1),
                                           CONCAT13(bVar70 & ~-(bVar70 == 1),
                                                    CONCAT12(bVar69 & ~-(bVar69 == 1),
                                                             CONCAT11(bVar68 & ~-(bVar68 == 1),
                                                                      (byte)uVar67 &
                                                                      ~-((byte)uVar67 == 1))))))));
  *(ulong *)(param_1 + 0x300) =
       CONCAT17(bVar65 & ~-(bVar65 == 1),
                CONCAT16(bVar64 & ~-(bVar64 == 1),
                         CONCAT15(bVar63 & ~-(bVar63 == 1),
                                  CONCAT14(bVar62 & ~-(bVar62 == 1),
                                           CONCAT13(bVar61 & ~-(bVar61 == 1),
                                                    CONCAT12(bVar60 & ~-(bVar60 == 1),
                                                             CONCAT11(bVar59 & ~-(bVar59 == 1),
                                                                      (byte)uVar20 &
                                                                      ~-((byte)uVar20 == 1))))))));
  cVar38 = *(char *)(param_1 + 0x2f2);
  if (cVar38 != '\0') {
    cVar5 = '\0';
    if (cVar38 != '\x01') {
      cVar5 = cVar38;
    }
    *(char *)(param_1 + 0x2f2) = cVar5;
    if (cVar38 == '\x01') {
      *(uint *)(param_1 + 0x2c8) = *(uint *)(param_1 + 0x2c8) ^ 1;
    }
  }
  cVar38 = *(char *)(param_1 + 0x2f3);
  if (cVar38 != '\0') {
    cVar5 = '\0';
    if (cVar38 != '\x01') {
      cVar5 = cVar38;
    }
    *(char *)(param_1 + 0x2f3) = cVar5;
    if (cVar38 == '\x01') {
      *puVar23 = *puVar23 ^ 1;
    }
  }
  *(undefined1 *)(param_1 + 0x2f7) = 0;
  *(undefined4 *)(param_1 + 0x3c4e4) = *(undefined4 *)(param_1 + 0x3c4e8);
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  uVar67 = _UNK_0022d5b8;
  uVar20 = _DAT_0022d5b0;
  local_d0 = 0x50;
  uStack_cc = 0;
  iStack_dc = (int)DAT_0c7b1c30;
  local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
  uStack_c0 = _UNK_0022d5b8;
  local_c8 = _DAT_0022d5b0;
  local_e8 = DAT_02abf970;
  local_e0 = DAT_02abf978;
  iStack_d4 = DAT_0c7b1c38;
  if (DAT_02b50718 == 1) {
    uVar28 = 0xc0400000;
    if (DAT_02b50710._4_4_ != 0x40) {
      uVar28 = 0x80400000;
    }
  }
  else {
    uVar26 = DAT_02b50710._4_4_ - 8U >> 3 | DAT_02b50710._4_4_ << 0x1d;
    if (uVar26 < 8) {
      uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
    }
    else {
      uVar28 = 0x4c00000;
    }
  }
  FUN_00981440(*puVar46,&DAT_02b50710,&local_e8,uVar28);
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  FUN_0097b280(*puVar46,&DAT_02b50730,*(undefined4 *)(param_1 + 0x3c4dc));
  if ((CONCAT12(DAT_02704f2a,DAT_02704f28) & 0x44000) == 0) {
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar21 = *puVar46;
    iStack_d4 = -1;
    local_e8 = (int *)0x1;
    local_e0 = (undefined4)DAT_0c7b1c30;
    iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
    local_d8 = DAT_0c7b1c38;
  }
  else {
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar21 = *puVar46;
    iStack_d4 = 0;
    local_e0 = (undefined4)DAT_02b50730;
    iStack_dc = DAT_02b50730._4_4_;
    local_d8 = DAT_02b50738;
  }
  local_d0 = 0xffffffff;
  uStack_cc = 0;
  FUN_00980300(uVar21,&DAT_02b50710,&local_e8);
  local_e8 = (int *)((ulong)local_e8 & 0xffffffffffffff00);
  local_d0 = CONCAT31(local_d0._1_3_,1);
  local_c8 = 0;
  local_a0 = (undefined8 *)0x0;
  local_90 = 0xffffffffffffffff;
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 0084e190 to 0084e19b has its CatchHandler @ 00851fec */
  FUN_0097cdd0(*puVar46,&local_e8,10);
  if ((CONCAT12(DAT_02704f2a,DAT_02704f28) & 0x44000) != 0) {
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_178 = DAT_02abf980;
    local_170 = DAT_02abf988;
    iStack_16c = (int)DAT_0c7b1c30;
    iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
    local_164 = DAT_0c7b1c38;
    uStack_150 = uVar67;
    local_158 = uVar20;
    uStack_160._0_4_ = 0x4ac;
    uStack_160._4_4_ = 0;
    if (DAT_02b50738 == 1) {
      uVar28 = 0xc0000000;
      if (DAT_02b50730._4_4_ != 0x40) {
        uVar28 = 0x80000000;
      }
    }
    else {
      uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
      if (uVar26 < 8) {
        uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
      }
      else {
        uVar28 = 0x4800000;
      }
    }
                    /* try { // try from 0084e2a0 to 0084e2af has its CatchHandler @ 00851fb8 */
    FUN_00981440(*puVar46,&DAT_02b50730,&local_178,uVar28);
  }
                    /* try { // try from 0084e2b0 to 0084e2c7 has its CatchHandler @ 00851fec */
  FUN_00855270(param_1);
  FUN_00848340(param_1,&local_1b0,0);
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
  lVar29 = *plVar19;
                    /* try { // try from 0084e2ec to 0084e30b has its CatchHandler @ 00851fec */
  FUN_0097a6f0(lVar29 + 0xe0,&local_e8);
  FUN_00974d50(lVar29,&local_e8,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_170 = (undefined4)DAT_02b50730;
  iStack_16c = DAT_02b50730._4_4_;
  iStack_168 = DAT_02b50738;
  local_164 = 0;
  uStack_160._0_4_ = 0xffffffff;
  uStack_160._4_4_ = 0;
                    /* try { // try from 0084e348 to 0084e35f has its CatchHandler @ 00851fc8 */
  FUN_0097fe20(*puVar46,&DAT_02b50710,&DAT_02b50710,&local_178,0,0x40000000);
  if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
    armAsm::__tls_init();
  }
  puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
  local_178 = DAT_02abf970;
  local_170 = DAT_02abf978;
  iStack_16c = (int)DAT_0c7b1c30;
  iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
  local_164 = DAT_0c7b1c38;
  uStack_150 = uVar67;
  local_158 = uVar20;
  uStack_160._0_4_ = 0x50;
  uStack_160._4_4_ = 0;
  if (DAT_02b50718 == 1) {
    uVar28 = 0xc0000000;
    if (DAT_02b50710._4_4_ != 0x40) {
      uVar28 = 0x80000000;
    }
  }
  else {
    uVar26 = DAT_02b50710._4_4_ - 8U >> 3 | DAT_02b50710._4_4_ << 0x1d;
    if (uVar26 < 8) {
      uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
    }
    else {
      uVar28 = 0x4800000;
    }
  }
                    /* try { // try from 0084e404 to 0084e413 has its CatchHandler @ 00851fc4 */
  FUN_00981440(*puVar46,&DAT_02b50710,&local_178,uVar28);
  puVar46 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    pvVar22 = (void *)*local_a0;
    if (pvVar22 != (void *)0x0) {
      local_a0[1] = pvVar22;
      operator_delete(pvVar22);
    }
    operator_delete(puVar46);
  }
  uVar30 = (ulong)*(uint *)(param_1 + 0x3c4e8);
  *(uint *)(param_1 + 0x3c4e4) = *(uint *)(param_1 + 0x3c4e8);
  *(undefined4 *)(param_1 + 0x2c0) =
       *(undefined4 *)((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + uVar30 * 4);
  *(undefined1 *)(param_1 + 0x3c4d8) = 0;
  puVar51 = PTR___tls_init_00c93cd0;
  if (uVar6 == 0) {
    uVar26 = 0;
  }
  else {
    uVar31 = 0;
    do {
      lVar29 = param_1 + (uVar30 >> 1) * 0x78;
      cVar38 = *(char *)(lVar29 + 0x45a);
      if (*(char *)(lVar29 + 0x489) != '\0') {
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_e8 = DAT_02abf980;
        uStack_c0 = uVar67;
        local_c8 = uVar20;
        local_e0 = DAT_02abf988;
        iStack_dc = (int)DAT_0c7b1c30;
        local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
        iStack_d4 = DAT_0c7b1c38;
        local_d0 = 0x438;
        uStack_cc = 0;
        uVar21 = *puVar46;
        if (DAT_02b50918 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b50910._4_4_ != 0x40) {
            uVar28 = 0x80400000;
          }
          FUN_00981440(uVar21,&DAT_02b50910,&local_e8,uVar28);
joined_r0x0084e64c:
          if (puVar51 != (undefined *)0x0) goto LAB_0084e650;
LAB_0084e5f0:
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)0x2;
          iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
          local_e0 = (undefined4)DAT_0c7b1c30;
          local_d8 = DAT_0c7b1c38;
          iStack_d4 = 0xffffffff;
          local_d0 = 0xffffffff;
          uStack_cc = 0;
          FUN_0097d130(*puVar46,&DAT_02b50910,&DAT_02b50910,&local_e8,0x20000000);
        }
        else {
          uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
          if (7 < uVar26) {
            FUN_00981440(uVar21,&DAT_02b50910,&local_e8,&DAT_04c00000);
            goto joined_r0x0084e64c;
          }
          FUN_00981440(uVar21,&DAT_02b50910,&local_e8,
                       *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4));
          if (puVar51 == (undefined *)0x0) goto LAB_0084e5f0;
LAB_0084e650:
          armAsm::__tls_init();
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)0x2;
          iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
          local_e0 = (undefined4)DAT_0c7b1c30;
          local_d8 = DAT_0c7b1c38;
          iStack_d4 = 0xffffffff;
          local_d0 = 0xffffffff;
          uStack_cc = 0;
          FUN_0097d130(*puVar46,&DAT_02b50910,&DAT_02b50910,&local_e8,0x20000000);
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_e8 = DAT_02abf980;
        uStack_c0 = uVar67;
        local_c8 = uVar20;
        local_e0 = DAT_02abf988;
        iStack_dc = (int)DAT_0c7b1c30;
        local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
        iStack_d4 = DAT_0c7b1c38;
        local_d0 = 0x438;
        uStack_cc = 0;
        if (DAT_02b50918 == 1) {
          uVar28 = 0xc0000000;
          if (DAT_02b50910._4_4_ != 0x40) {
            uVar28 = 0x80000000;
          }
        }
        else {
          uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4800000;
          }
        }
        FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
      }
      if (((*puVar1 != 0) && (*(int *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x4c0) != 0)) &&
         ((DAT_02704f2a & 1) != 0)) {
        FUN_0084b100(*(undefined8 *)(param_1 + 0x485d8),1);
        local_e8 = (int *)((ulong)local_e8 & 0xffffffffffffff00);
        local_d0 = CONCAT31(local_d0._1_3_,1);
        local_c8 = 0;
        local_a0 = (undefined8 *)0x0;
        local_90 = 0xffffffffffffffff;
        local_178 = (int *)((ulong)local_178 & 0xffffffffffffff00);
        uStack_160._0_4_ = CONCAT31(uStack_160._1_3_,1);
        local_158 = 0;
        local_130 = (undefined8 *)0x0;
        local_120 = 0xffffffffffffffff;
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02abf980;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02abf988);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x4d4;
        uStack_fc = 0;
        if (DAT_02b50718 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b50710._4_4_ != 0x40) {
            uVar28 = 0x80400000;
          }
        }
        else {
          uVar26 = DAT_02b50710._4_4_ - 8U >> 3 | DAT_02b50710._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4c00000;
          }
        }
                    /* try { // try from 0084e850 to 0084e85f has its CatchHandler @ 00851fb4 */
        FUN_00981440(*puVar46,&DAT_02b50710,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 0084e874 to 0084e887 has its CatchHandler @ 00851ff4 */
        FUN_0097c650(*puVar46,&DAT_02b50710,0,&local_e8);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02abf980;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02abf988);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x4d0;
        uStack_fc = 0;
        if (DAT_02b50738 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b50730._4_4_ != 0x40) {
            uVar28 = 0x80400000;
          }
        }
        else {
          uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4c00000;
          }
        }
                    /* try { // try from 0084e92c to 0084e937 has its CatchHandler @ 00851fb0 */
        FUN_00981440(*puVar46,&DAT_02b50730,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = (int *)(ulong)(*(int *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x4c0) - 1);
        local_104 = 0xffffffff;
        uStack_100 = 0xffffffff;
        uStack_fc = 0;
                    /* try { // try from 0084e988 to 0084e99f has its CatchHandler @ 00851fac */
        FUN_0097fe20(*puVar46,&DAT_02b50730,&DAT_02b50730,&local_118,0,0);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02abf980;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02abf988);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x4d0;
        uStack_fc = 0;
        if (DAT_02b50738 == 1) {
          uVar28 = 0xc0000000;
          if (DAT_02b50730._4_4_ != 0x40) {
            uVar28 = 0x80000000;
          }
        }
        else {
          uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4800000;
          }
        }
                    /* try { // try from 0084ea40 to 0084ea4b has its CatchHandler @ 00851fa8 */
        FUN_00981440(*puVar46,&DAT_02b50730,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = (int *)0x2;
        local_104 = 0xffffffff;
        uStack_100 = 0xffffffff;
        uStack_fc = 0;
                    /* try { // try from 0084ea88 to 0084ea93 has its CatchHandler @ 00851fa4 */
        FUN_00980300(*puVar46,&DAT_02b50730,&local_118);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 0084eaa8 to 0084eacb has its CatchHandler @ 00851ff4 */
        FUN_0097cdd0(*puVar46,&local_178,0xb);
        FUN_0084b100(*(undefined8 *)(param_1 + 0x485d8),1);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02b50af0;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02b50af8);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x10;
        uStack_fc = 0;
        if (DAT_02b51678 == 1) {
          uVar28 = 0xc0000000;
          if (DAT_02b51674 != 0x40) {
            uVar28 = 0x80000000;
          }
        }
        else {
          uVar26 = DAT_02b51674 - 8U >> 3 | DAT_02b51674 << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4800000;
          }
        }
                    /* try { // try from 0084eb5c to 0084eb6b has its CatchHandler @ 00851ff4 */
        FUN_00981440(*puVar46,&DAT_02b51670,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                    /* try { // try from 0084eb80 to 0084eba7 has its CatchHandler @ 00851ff4 */
        FUN_0097b280(*puVar46,&DAT_02b50710,0);
        FUN_007b82f0(FUN_008416f0,0);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02b50af0;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02b50af8);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x10;
        uStack_fc = 0;
        if (DAT_02b51678 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b51674 != 0x40) {
            uVar28 = 0x80400000;
          }
        }
        else {
          uVar26 = DAT_02b51674 - 8U >> 3 | DAT_02b51674 << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4c00000;
          }
        }
                    /* try { // try from 0084ec38 to 0084ec47 has its CatchHandler @ 00851ff4 */
        FUN_00981440(*puVar46,&DAT_02b51670,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar29 = *plVar19;
                    /* try { // try from 0084ec60 to 0084ec7f has its CatchHandler @ 00851ff4 */
        FUN_0097a6f0(lVar29 + 0xe0,&local_178);
        FUN_00974d50(lVar29,&local_178,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02abf980;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02abf988);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x4d0;
        uStack_fc = 0;
        if (DAT_02b50738 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b50730._4_4_ != 0x40) {
            uVar28 = 0x80400000;
          }
        }
        else {
          uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4c00000;
          }
        }
                    /* try { // try from 0084ed24 to 0084ed2f has its CatchHandler @ 00851fa0 */
        FUN_00981440(*puVar46,&DAT_02b50730,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = (int *)0x1;
        local_104 = 0xffffffff;
        uStack_100 = 0xffffffff;
        uStack_fc = 0;
                    /* try { // try from 0084ed70 to 0084ed87 has its CatchHandler @ 00851f9c */
        FUN_0097fe20(*puVar46,&DAT_02b50730,&DAT_02b50730,&local_118,0,0);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_118 = DAT_02abf980;
        uStack_f0 = uVar67;
        local_f8 = uVar20;
        local_110 = CONCAT44(local_110._4_4_,DAT_02abf988);
        local_104 = DAT_0c7b1c38;
        uStack_100 = 0x4d0;
        uStack_fc = 0;
        if (DAT_02b50738 == 1) {
          uVar28 = 0xc0000000;
          if (DAT_02b50730._4_4_ != 0x40) {
            uVar28 = 0x80000000;
          }
        }
        else {
          uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4800000;
          }
        }
                    /* try { // try from 0084ee28 to 0084ee33 has its CatchHandler @ 00851f98 */
        FUN_00981440(*puVar46,&DAT_02b50730,&local_118,uVar28);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
        lVar29 = *plVar19;
                    /* try { // try from 0084ee4c to 0084ee6b has its CatchHandler @ 00851ff4 */
        FUN_0097a6f0(lVar29 + 0xe0,&local_e8);
        FUN_00974d50(lVar29,&local_e8,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
        puVar46 = local_130;
        if (local_130 != (undefined8 *)0x0) {
          pvVar22 = (void *)*local_130;
          if (pvVar22 != (void *)0x0) {
            local_130[1] = pvVar22;
            operator_delete(pvVar22);
          }
          operator_delete(puVar46);
        }
        puVar46 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          pvVar22 = (void *)*local_a0;
          if (pvVar22 != (void *)0x0) {
            local_a0[1] = pvVar22;
            operator_delete(pvVar22);
          }
          operator_delete(puVar46);
        }
      }
      uVar26 = *puVar56;
      uVar30 = (ulong)(uVar26 >> 1);
      if (*(char *)(param_1 + uVar30 * 0x78 + 0x4c6) == '\0') {
        if (*(char *)(param_1 + uVar30 * 0x78 + 0x45c) == '\0') {
          uVar26 = *(uint *)(param_1 + 0x2e0) & uVar26 + 1;
          *puVar56 = uVar26;
          uVar26 = *(uint *)((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] +
                            (ulong)uVar26 * 4);
          *(uint *)(param_1 + 0x2c0) = uVar26;
          (*(code *)(&PTR_FUN_00c7abc8)[(ulong)uVar26 & 0x3f])(param_1,1);
          uVar26 = *puVar56;
          uVar30 = (ulong)(uVar26 >> 1);
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x464) != '\0') {
            if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0') {
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
                uVar30 = (ulong)(*puVar56 >> 1);
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              lVar29 = param_1 + uVar30 * 0x78;
              FUN_007aa530(*puVar46,(&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47a)],
                           (&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47b)],0);
            }
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e8 = (int *)0xfff3ffff;
            iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            local_e0 = (undefined4)DAT_0c7b1c30;
            local_d8 = DAT_0c7b1c38;
            iStack_d4 = 0xffffffff;
            local_d0 = 0xffffffff;
            uStack_cc = 0;
            FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                  [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                         (&PTR_DAT_00c7bbc8)
                         [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,0);
            if (puVar51 == (undefined *)0x0) {
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_e8 = DAT_02abf970;
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              local_e0 = DAT_02abf978;
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              iStack_d4 = DAT_0c7b1c38;
              local_d0 = 0x30;
              uStack_cc = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar26 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
              FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
            }
            else {
              armAsm::__tls_init();
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_e8 = DAT_02abf970;
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              local_e0 = DAT_02abf978;
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              iStack_d4 = DAT_0c7b1c38;
              local_d0 = 0x30;
              uStack_cc = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar26 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
              FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e0 = (undefined4)DAT_02b50910;
            iStack_dc = DAT_02b50910._4_4_;
            iStack_d4 = 0;
            local_d0 = 0xffffffff;
            local_d8 = DAT_02b50918;
            uStack_cc = 0;
            FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                  [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                         (&PTR_DAT_00c7bbc8)
                         [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,
                         0x20000000);
            uVar26 = *puVar56;
          }
          uVar26 = uVar26 - 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar26;
          uVar26 = *(uint *)((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] +
                            (ulong)uVar26 * 4);
          *(uint *)(param_1 + 0x2c0) = uVar26;
          (**(code **)((long)&PTR_FUN_00c7b1c8 + ((ulong)(uVar26 >> 0x16) & 0x3f8)))(param_1,1);
          uVar45 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar45;
          uVar26 = *(uint *)(param_1 + 0x2cc);
          goto LAB_0084fffc;
        }
        if ((*(char *)(param_1 + uVar30 * 0x78 + 0x45d) == '\0') ||
           (*(char *)(param_1 + uVar30 * 0x78 + 0x4c8) != '\0')) {
          (**(code **)((long)&PTR_FUN_00c7b1c8 +
                      ((ulong)(*(uint *)(param_1 + 0x2c0) >> 0x16) & 0x3f8)))(param_1,1);
          uVar26 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar26;
          uVar26 = *(uint *)((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] +
                            (ulong)uVar26 * 4);
          *(uint *)(param_1 + 0x2c0) = uVar26;
          (*(code *)(&PTR_FUN_00c7abc8)[(ulong)uVar26 & 0x3f])(param_1,1);
          uVar30 = (ulong)(*puVar56 >> 1);
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x464) == '\0') goto LAB_00850008;
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0') {
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
              uVar30 = (ulong)(*puVar56 >> 1);
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            lVar29 = param_1 + uVar30 * 0x78;
            FUN_007aa530(*puVar46,(&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47a)],
                         (&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47b)],0);
          }
          if (puVar51 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)0xfff3ffff;
          iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
          local_e0 = (undefined4)DAT_0c7b1c30;
          local_d8 = DAT_0c7b1c38;
          iStack_d4 = 0xffffffff;
          local_d0 = 0xffffffff;
          uStack_cc = 0;
          FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                       (&PTR_DAT_00c7bbc8)
                       [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,0);
          if (puVar51 == (undefined *)0x0) {
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e8 = DAT_02abf970;
            uStack_c0 = uVar67;
            local_c8 = uVar20;
            local_e0 = DAT_02abf978;
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            iStack_d4 = DAT_0c7b1c38;
            local_d0 = 0x30;
            uStack_cc = 0;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
            FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
          }
          else {
            armAsm::__tls_init();
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e8 = DAT_02abf970;
            uStack_c0 = uVar67;
            local_c8 = uVar20;
            local_e0 = DAT_02abf978;
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            iStack_d4 = DAT_0c7b1c38;
            local_d0 = 0x30;
            uStack_cc = 0;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
            FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e0 = (undefined4)DAT_02b50910;
          iStack_dc = DAT_02b50910._4_4_;
          iStack_d4 = 0;
          local_d0 = 0xffffffff;
          local_d8 = DAT_02b50918;
          uStack_cc = 0;
          FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                       (&PTR_DAT_00c7bbc8)
                       [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,
                       0x20000000);
          uVar26 = *puVar56;
          uVar30 = (ulong)(uVar26 >> 1);
          cVar5 = *(char *)(param_1 + uVar30 * 0x78 + 0x45b);
        }
        else {
          uVar21 = FUN_0087c450(*(undefined8 *)(param_1 + 0x485d8),
                                *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x49c),0xf,0);
          puVar23 = (uint *)FUN_0087c450(*(undefined8 *)(param_1 + 0x485d8),0xffffffff,0xf,0);
          if (puVar51 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          FUN_007abe30(*puVar46,puVar23,uVar21);
          FUN_0087d660(*(undefined8 *)(param_1 + 0x485d8),uVar21,0);
          (**(code **)((long)&PTR_FUN_00c7b1c8 +
                      ((ulong)(*(uint *)(param_1 + 0x2c0) >> 0x16) & 0x3f8)))(param_1,1);
          puVar24 = (uint *)FUN_0087c450(*(undefined8 *)(param_1 + 0x485d8),
                                         *(undefined1 *)
                                          (param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x49c),0xf,0xf)
          ;
          if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)((ulong)*puVar23 | 0x8000000000);
          local_e0 = 2;
          iStack_dc = 0x10;
          local_178 = (int *)((ulong)*puVar23 | 0x8000000000);
          local_170 = 2;
          iStack_16c = 0x10;
          local_118 = (int *)((ulong)*puVar24 | 0x8000000000);
          local_110 = 0x1000000002;
          FUN_007c5740(*puVar46,&local_e8,&local_178,&local_118);
          if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)((ulong)*puVar24 | 0x8000000000);
          local_e0 = 2;
          iStack_dc = 0x10;
          local_178 = (int *)((ulong)*puVar24 | 0x8000000000);
          local_170 = 2;
          iStack_16c = 0x10;
          local_118 = (int *)((ulong)*puVar23 | 0x8000000000);
          local_110 = 0x1000000002;
          FUN_007c5740(*puVar46,&local_e8,&local_178,&local_118);
          if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)((ulong)*puVar23 | 0x8000000000);
          local_e0 = 2;
          iStack_dc = 0x10;
          local_178 = (int *)((ulong)*puVar23 | 0x8000000000);
          local_170 = 2;
          iStack_16c = 0x10;
          local_118 = (int *)((ulong)*puVar24 | 0x8000000000);
          local_110 = 0x1000000002;
          FUN_007c5740(*puVar46,&local_e8,&local_178,&local_118);
          FUN_0087d660(*(undefined8 *)(param_1 + 0x485d8),puVar24,0);
          uVar26 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar26;
          uVar26 = *(uint *)((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] +
                            (ulong)uVar26 * 4);
          *(uint *)(param_1 + 0x2c0) = uVar26;
          (*(code *)(&PTR_FUN_00c7abc8)[(ulong)uVar26 & 0x3f])(param_1,1);
          uVar30 = (ulong)(*puVar56 >> 1);
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x464) != '\0') {
            if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0') {
              if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
                armAsm::__tls_init();
                uVar30 = (ulong)(*puVar56 >> 1);
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              lVar29 = param_1 + uVar30 * 0x78;
              FUN_007aa530(*puVar46,(&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47a)],
                           (&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47b)],0);
            }
            if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e8 = (int *)0xfff3ffff;
            iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            local_e0 = (undefined4)DAT_0c7b1c30;
            local_d8 = DAT_0c7b1c38;
            iStack_d4 = 0xffffffff;
            local_d0 = 0xffffffff;
            uStack_cc = 0;
            FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                  [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                         (&PTR_DAT_00c7bbc8)
                         [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,0);
            if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_e8 = DAT_02abf970;
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              local_e0 = DAT_02abf978;
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              iStack_d4 = DAT_0c7b1c38;
              local_d0 = 0x30;
              uStack_cc = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar26 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
              FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
            }
            else {
              armAsm::__tls_init();
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_e8 = DAT_02abf970;
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              local_e0 = DAT_02abf978;
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              iStack_d4 = DAT_0c7b1c38;
              local_d0 = 0x30;
              uStack_cc = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar26 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
              FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e0 = (undefined4)DAT_02b50910;
            iStack_dc = DAT_02b50910._4_4_;
            iStack_d4 = 0;
            local_d0 = 0xffffffff;
            local_d8 = DAT_02b50918;
            uStack_cc = 0;
            FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                  [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                         (&PTR_DAT_00c7bbc8)
                         [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,
                         0x20000000);
            uVar30 = (ulong)(*puVar56 >> 1);
          }
          uVar21 = FUN_0087c450(*(undefined8 *)(param_1 + 0x485d8),
                                *(undefined1 *)(param_1 + uVar30 * 0x78 + 0x49c),0,0xf);
          if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          FUN_007abe30(*puVar46,uVar21,puVar23);
          FUN_0087d660(*(undefined8 *)(param_1 + 0x485d8),uVar21,0);
          FUN_0087d660(*(undefined8 *)(param_1 + 0x485d8),puVar23,0);
          uVar26 = *puVar56;
          uVar30 = (ulong)(uVar26 >> 1);
          cVar5 = *(char *)(param_1 + uVar30 * 0x78 + 0x45b);
          puVar51 = PTR___tls_init_00c93cd0;
        }
      }
      else {
        uVar26 = *(uint *)(param_1 + 0x2e0) & uVar26 + 1;
        *puVar56 = uVar26;
        uVar26 = *(uint *)((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] +
                          (ulong)uVar26 * 4);
        *(uint *)(param_1 + 0x2c0) = uVar26;
        (*(code *)(&PTR_FUN_00c7abc8)[(ulong)uVar26 & 0x3f])(param_1,1);
        uVar26 = *puVar56;
        uVar30 = (ulong)(uVar26 >> 1);
        if (*(char *)(param_1 + uVar30 * 0x78 + 0x464) == '\0') {
          cVar5 = *(char *)(param_1 + uVar30 * 0x78 + 0x488);
        }
        else {
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x478) == '\0') {
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
              uVar30 = (ulong)(*puVar56 >> 1);
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            lVar29 = param_1 + uVar30 * 0x78;
            FUN_007aa530(*puVar46,(&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47a)],
                         (&PTR_DAT_00c7bbc8)[*(byte *)(lVar29 + 0x47b)],0);
          }
          if (puVar51 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = (int *)0xfff3ffff;
          iStack_dc = (int)((ulong)DAT_0c7b1c30 >> 0x20);
          local_e0 = (undefined4)DAT_0c7b1c30;
          local_d8 = DAT_0c7b1c38;
          iStack_d4 = 0xffffffff;
          local_d0 = 0xffffffff;
          uStack_cc = 0;
          FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                       (&PTR_DAT_00c7bbc8)
                       [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,0);
          if (puVar51 == (undefined *)0x0) {
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e8 = DAT_02abf970;
            uStack_c0 = uVar67;
            local_c8 = uVar20;
            local_e0 = DAT_02abf978;
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            iStack_d4 = DAT_0c7b1c38;
            local_d0 = 0x30;
            uStack_cc = 0;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
            FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
          }
          else {
            armAsm::__tls_init();
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_e8 = DAT_02abf970;
            uStack_c0 = uVar67;
            local_c8 = uVar20;
            local_e0 = DAT_02abf978;
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            iStack_d4 = DAT_0c7b1c38;
            local_d0 = 0x30;
            uStack_cc = 0;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
            FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e0 = (undefined4)DAT_02b50910;
          iStack_dc = DAT_02b50910._4_4_;
          iStack_d4 = 0;
          local_d0 = 0xffffffff;
          local_d8 = DAT_02b50918;
          uStack_cc = 0;
          FUN_0097d130(*puVar46,(&PTR_DAT_00c7bbc8)
                                [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],
                       (&PTR_DAT_00c7bbc8)
                       [*(byte *)(param_1 + (ulong)(*puVar56 >> 1) * 0x78 + 0x47a)],&local_e8,
                       0x20000000);
          uVar26 = *puVar56;
          cVar5 = *(char *)(param_1 + (ulong)(uVar26 >> 1) * 0x78 + 0x488);
        }
        if (cVar5 != '\0') {
          uVar30 = 0;
          uVar26 = *(uint *)(param_1 + 0x2e0) & uVar26 - 1;
          *puVar56 = uVar26;
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)
                ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
          piVar33 = *(int **)(param_1 + 0x485d8);
          puVar47 = &DAT_02829163;
          piVar50 = piVar33;
          do {
            if (*piVar50 == 0x21) {
              *piVar50 = -1;
              piVar50[1] = 0;
              piVar50[2] = 0;
              *(undefined2 *)(piVar50 + 3) = 0;
              if ((char)piVar33[0xc9] != '\0') {
                *puVar47 = 0;
                FUN_007bae70(uVar30 & 0xffffffff);
              }
            }
            puVar51 = PTR___tls_init_00c93cd0;
            uVar30 = uVar30 + 1;
            puVar47 = puVar47 + 0xc;
            piVar50 = piVar50 + 4;
          } while (uVar30 != 0x1b);
          uVar26 = *puVar1;
          if ((DAT_02704f28 >> 0xd & 1) == 0) {
            uVar36 = 0x10;
            if (uVar26 != 0) {
              uVar36 = 0x100;
            }
            uVar45 = *(uint *)((&DAT_02819158)[(ulong)uVar26 * 0xc2] + (ulong)*puVar56 * 4);
            uVar26 = uVar45 & 0x80000000 | 0x7f7fffff;
            if (((uVar45 ^ 0xffffffff) & 0x7f800000) != 0 || (DAT_02704e14 & uVar36) == 0) {
              uVar26 = uVar45;
            }
            if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              FUN_0097b280(*puVar46,&DAT_02b50910,uVar26);
            }
            else {
              armAsm::__tls_init();
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              FUN_0097b280(*puVar46,&DAT_02b50910,uVar26);
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            uVar21 = *puVar46;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0000000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80000000;
              }
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4800000;
              }
            }
          }
          else {
            FUN_007b8e30(&DAT_02828cb0,(&DAT_02819158)[(ulong)uVar26 * 0xc2] + (ulong)*puVar56 * 4);
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            puVar51 = PTR___tls_init_00c93cd0;
            local_e8 = _DAT_02828cb0;
            uStack_c0 = uVar67;
            local_c8 = uVar20;
            local_e0 = DAT_02828cb8;
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            iStack_d4 = DAT_0c7b1c38;
            local_d0 = 0;
            uStack_cc = 0;
            uVar21 = *puVar46;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
              FUN_00981440(uVar21,&DAT_02b50910,&local_e8,uVar28);
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                FUN_00981440(uVar21,&DAT_02b50910,&local_e8,
                             *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4));
              }
              else {
                FUN_00981440(uVar21,&DAT_02b50910,&local_e8,&DAT_04c00000);
              }
            }
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            uVar21 = *puVar46;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0000000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80000000;
              }
            }
            else {
              uVar26 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4800000;
              }
            }
          }
          uStack_c0 = uVar67;
          local_c8 = uVar20;
          uStack_cc = 0;
          local_d0 = 0x350;
          local_e8 = DAT_02abf980;
          local_e0 = DAT_02abf988;
          iStack_d4 = DAT_0c7b1c38;
          FUN_00981440(uVar21,&DAT_02b50910,&local_e8,uVar28);
          uVar45 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar45;
          uVar26 = *(uint *)(param_1 + 0x2cc);
LAB_0084fffc:
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)((&DAT_02819158)[(ulong)uVar26 * 0xc2] + (ulong)uVar45 * 4);
        }
LAB_00850008:
        uVar26 = *puVar56;
        uVar30 = (ulong)(uVar26 >> 1);
        cVar5 = *(char *)(param_1 + uVar30 * 0x78 + 0x45b);
      }
      uVar34 = (ulong)uVar26;
      if ((cVar5 == '\0') && (*(int *)(param_1 + uVar30 * 0x78 + 0x4bc) == 0)) {
        if (*(char *)(param_1 + uVar30 * 0x78 + 0x48a) == '\0') {
          if (((*(char *)(param_1 + uVar30 * 0x78 + 0x489) != '\0') &&
              (*(char *)(param_1 + uVar30 * 0x78 + 0x487) == '\0')) &&
             (*(char *)(param_1 + uVar30 * 0x78 + 0x45a) == '\0')) {
            FUN_0084b900(param_1,&local_1b0);
            if ((CONCAT12(DAT_02704f2a,DAT_02704f28) & 0x44000) != 0) {
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_d0 = 0x4ac;
              uStack_cc = 0;
              local_e8 = DAT_02abf980;
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_e0 = DAT_02abf988;
              iStack_d4 = DAT_0c7b1c38;
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              FUN_009813f0(*puVar46,&DAT_02b50b00,&local_e8);
            }
            FUN_00855270(param_1);
            uVar6 = *puVar56 + 2 & *(uint *)(param_1 + 0x2e0);
            *puVar56 = uVar6;
            *(undefined4 *)(param_1 + 0x2c0) =
                 *(undefined4 *)
                  ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar6 * 4);
            FUN_00857520(param_1,(uVar6 & 0x3ffffffe) << 2,0);
            FUN_00848340(param_1,&local_1b0,0);
            FUN_0084c580(param_1,(*puVar56 & 0x3ffffffe) << 2);
            uVar6 = *puVar56 - 2 & *(uint *)(param_1 + 0x2e0);
            *puVar56 = uVar6;
            *(undefined4 *)(param_1 + 0x2c0) =
                 *(undefined4 *)
                  ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar6 * 4);
            puVar16 = PTR___tls_init_00c93d88;
            goto joined_r0x00851dc8;
          }
        }
        else {
          local_e8 = (int *)((ulong)local_e8 & 0xffffffffffffff00);
          local_d0._1_3_ = (undefined3)((uint)local_d0 >> 8);
          local_d0 = CONCAT31(local_d0._1_3_,1);
          local_c8 = 0;
          local_a0 = (undefined8 *)0x0;
          local_90 = 0xffffffffffffffff;
          if (((*puVar1 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0))
          {
                    /* try { // try from 00850088 to 0085009b has its CatchHandler @ 00851fe8 */
            FUN_007b8e30(&DAT_02828cb0,&DAT_02819060);
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_178 = _DAT_02828cb0;
            uStack_150 = uVar67;
            local_158 = uVar20;
            local_170 = DAT_02828cb8;
            local_164 = DAT_0c7b1c38;
            uStack_160._0_4_ = 0;
            uStack_160._4_4_ = 0;
            if (DAT_02b50718 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50710._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50710._4_4_ - 8U >> 3 | DAT_02b50710._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
                    /* try { // try from 00850154 to 00850163 has its CatchHandler @ 00851fe8 */
            FUN_00981440(*puVar46,&DAT_02b50710,&local_178,uVar28);
          }
          else {
            FUN_007b8e30(&DAT_02828cb0,&DAT_02701d00);
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_178 = _DAT_02828cb0;
            uStack_150 = uVar67;
            local_158 = uVar20;
            local_170 = DAT_02828cb8;
            local_164 = DAT_0c7b1c38;
            uStack_160._0_4_ = 0;
            uStack_160._4_4_ = 0;
            if (DAT_02b50718 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50710._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50710._4_4_ - 8U >> 3 | DAT_02b50710._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
                    /* try { // try from 00850c28 to 00850c37 has its CatchHandler @ 00851fe8 */
            FUN_00981440(*puVar46,&DAT_02b50710,&local_178,uVar28);
          }
          if (puVar51 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          uVar28 = 3;
          if (*puVar1 != 0) {
            uVar28 = 0xb;
          }
                    /* try { // try from 00850190 to 008501e3 has its CatchHandler @ 00851fe8 */
          FUN_0097c650(*puVar46,&DAT_02b50710,uVar28,&local_e8);
          uVar26 = *puVar1;
          if (((uVar26 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)) {
            FUN_007b8e30(&DAT_02b50940,&DAT_02819070);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            uStack_150 = uVar67;
            local_158 = uVar20;
            local_170 = DAT_02b50948;
            local_164 = DAT_0c7b1c38;
            local_178 = DAT_02b50940;
            uStack_160._0_4_ = 0;
            uStack_160._4_4_ = 0;
            if (DAT_02b50738 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50730._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
                    /* try { // try from 00850278 to 00850287 has its CatchHandler @ 00851f90 */
            FUN_00981440(*puVar46,&DAT_02b50730,&local_178,uVar28);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_178 = DAT_02abf970;
            local_170 = DAT_02abf978;
            uStack_150 = uVar67;
            local_158 = uVar20;
            local_164 = DAT_0c7b1c38;
            uStack_160 = (long)&DAT_028190d8 + ((ulong)*(uint *)(param_1 + 0x2cc) * 0x610 - param_1)
            ;
            if (DAT_02b50758 == 1) {
              uVar28 = 0xc0400000;
              if (DAT_02b50750._4_4_ != 0x40) {
                uVar28 = 0x80400000;
              }
            }
            else {
              uVar26 = DAT_02b50750._4_4_ - 8U >> 3 | DAT_02b50750._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4c00000;
              }
            }
                    /* try { // try from 0085033c to 0085034b has its CatchHandler @ 00851f8c */
            FUN_00981440(*puVar46,&DAT_02b50750,&local_178,uVar28);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            iStack_168 = DAT_0c7b1c38;
            local_178 = (int *)0x4;
            if (*puVar1 != 0) {
              local_178 = (int *)0x400;
            }
            local_164 = 0xffffffff;
            uStack_160._0_4_ = 0xffffffff;
            uStack_160._4_4_ = 0;
                    /* try { // try from 008503a0 to 008503b7 has its CatchHandler @ 00851f88 */
            FUN_0097d130(*puVar46,&DAT_02b50730,&DAT_02b50730,&local_178,0x20000000);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_178 = (int *)0x4;
            iStack_168 = DAT_0c7b1c38;
            local_164 = 0xffffffff;
            uStack_160._0_4_ = 0xffffffff;
            uStack_160._4_4_ = 0;
                    /* try { // try from 008503f8 to 0085040f has its CatchHandler @ 00851f84 */
            FUN_0097d130(*puVar46,&DAT_02b50750,&DAT_02b50750,&local_178,0x20000000);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            uStack_150 = uVar67;
            local_158 = uVar20;
            local_170 = DAT_02b50948;
            local_164 = DAT_0c7b1c38;
            local_178 = DAT_02b50940;
            uStack_160._0_4_ = 0;
            uStack_160._4_4_ = 0;
            if (DAT_02b50738 == 1) {
              uVar28 = 0xc0000000;
              if (DAT_02b50730._4_4_ != 0x40) {
                uVar28 = 0x80000000;
              }
            }
            else {
              uVar26 = DAT_02b50730._4_4_ - 8U >> 3 | DAT_02b50730._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4800000;
              }
            }
                    /* try { // try from 008504a4 to 008504b3 has its CatchHandler @ 00851f80 */
            FUN_00981440(*puVar46,&DAT_02b50730,&local_178,uVar28);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            local_178 = DAT_02abf970;
            local_170 = DAT_02abf978;
            uStack_150 = uVar67;
            local_158 = uVar20;
            local_164 = DAT_0c7b1c38;
            uStack_160 = (long)&DAT_028190d8 + ((ulong)*(uint *)(param_1 + 0x2cc) * 0x610 - param_1)
            ;
            if (DAT_02b50758 == 1) {
              uVar28 = 0xc0000000;
              if (DAT_02b50750._4_4_ != 0x40) {
                uVar28 = 0x80000000;
              }
            }
            else {
              uVar26 = DAT_02b50750._4_4_ - 8U >> 3 | DAT_02b50750._4_4_ << 0x1d;
              if (uVar26 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
              }
              else {
                uVar28 = 0x4800000;
              }
            }
                    /* try { // try from 00850564 to 00850573 has its CatchHandler @ 00851f7c */
            FUN_00981440(*puVar46,&DAT_02b50750,&local_178,uVar28);
            uVar26 = *puVar1;
          }
          uVar45 = *puVar56 + 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar45;
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)((&DAT_02819158)[(ulong)uVar26 * 0xc2] + (ulong)uVar45 * 4);
                    /* try { // try from 008505ac to 008505bb has its CatchHandler @ 00851fe8 */
          FUN_00845740(param_1,&local_1b0,1);
          uVar26 = *puVar56 - 1 & *(uint *)(param_1 + 0x2e0);
          *puVar56 = uVar26;
          *(undefined4 *)(param_1 + 0x2c0) =
               *(undefined4 *)
                ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
          if (puVar51 != (undefined *)0x0) {
            armAsm::__tls_init();
          }
          plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
          lVar29 = *plVar19;
                    /* try { // try from 00850608 to 00850663 has its CatchHandler @ 00851fe8 */
          FUN_0097a6f0(lVar29 + 0xe0,&local_e8);
          FUN_00974d50(lVar29,&local_e8,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
          puVar46 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            pvVar22 = (void *)*local_a0;
            if (pvVar22 != (void *)0x0) {
              local_a0[1] = pvVar22;
              operator_delete(pvVar22);
            }
            operator_delete(puVar46);
          }
          uVar34 = (ulong)*puVar56;
          uVar30 = (ulong)(*puVar56 >> 1);
        }
      }
      if (*(char *)(param_1 + uVar30 * 0x78 + 0x45e) != '\0') {
        FUN_0084b100(*(undefined8 *)(param_1 + 0x485d8),1);
        FUN_0084b100(*(undefined8 *)(param_1 + 0x485d8),1);
        if (puVar51 == (undefined *)0x0) {
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = DAT_02b50af0;
          uStack_c0 = uVar67;
          local_c8 = uVar20;
          local_e0 = DAT_02b50af8;
          iStack_dc = (int)DAT_0c7b1c30;
          local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
          iStack_d4 = DAT_0c7b1c38;
          local_d0 = 0x10;
          uStack_cc = 0;
          if (DAT_02b51678 == 1) {
            uVar28 = 0xc0000000;
            if (DAT_02b51674 != 0x40) {
              uVar28 = 0x80000000;
            }
          }
          else {
            uVar26 = DAT_02b51674 - 8U >> 3 | DAT_02b51674 << 0x1d;
            if (uVar26 < 8) {
              uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
            }
            else {
              uVar28 = 0x4800000;
            }
          }
          FUN_00981440(*puVar46,&DAT_02b51670,&local_e8,uVar28);
        }
        else {
          armAsm::__tls_init();
          puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
          local_e8 = DAT_02b50af0;
          uStack_c0 = uVar67;
          local_c8 = uVar20;
          local_e0 = DAT_02b50af8;
          iStack_dc = (int)DAT_0c7b1c30;
          local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
          iStack_d4 = DAT_0c7b1c38;
          local_d0 = 0x10;
          uStack_cc = 0;
          if (DAT_02b51678 == 1) {
            uVar28 = 0xc0000000;
            if (DAT_02b51674 != 0x40) {
              uVar28 = 0x80000000;
            }
          }
          else {
            uVar26 = DAT_02b51674 - 8U >> 3 | DAT_02b51674 << 0x1d;
            if (uVar26 < 8) {
              uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar26 * 4);
            }
            else {
              uVar28 = 0x4800000;
            }
          }
          FUN_00981440(*puVar46,&DAT_02b51670,&local_e8,uVar28);
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_e8 = DAT_02abf970;
        uStack_c0 = uVar67;
        local_c8 = uVar20;
        local_e0 = DAT_02abf978;
        iStack_dc = (int)DAT_0c7b1c30;
        local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
        iStack_d4 = DAT_0c7b1c38;
        local_d0 = 0x38;
        uStack_cc = 0;
        if (DAT_02b50718 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b50710._4_4_ != 0x40) {
            uVar28 = 0x80400000;
          }
        }
        else {
          uVar26 = DAT_02b50710._4_4_ - 8U >> 3 | DAT_02b50710._4_4_ << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4c00000;
          }
        }
        FUN_00981440(*puVar46,&DAT_02b50710,&local_e8,uVar28);
        FUN_007b82f0(FUN_00841630,0);
        if (puVar51 != (undefined *)0x0) {
          armAsm::__tls_init();
        }
        puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        local_e8 = DAT_02b50af0;
        uStack_c0 = uVar67;
        local_c8 = uVar20;
        local_e0 = DAT_02b50af8;
        iStack_dc = (int)DAT_0c7b1c30;
        local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
        iStack_d4 = DAT_0c7b1c38;
        local_d0 = 0x10;
        uStack_cc = 0;
        if (DAT_02b51678 == 1) {
          uVar28 = 0xc0400000;
          if (DAT_02b51674 != 0x40) {
            uVar28 = 0x80400000;
          }
        }
        else {
          uVar26 = DAT_02b51674 - 8U >> 3 | DAT_02b51674 << 0x1d;
          if (uVar26 < 8) {
            uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar26 * 4);
          }
          else {
            uVar28 = 0x4c00000;
          }
        }
        FUN_00981440(*puVar46,&DAT_02b51670,&local_e8,uVar28);
        uVar34 = (ulong)*puVar56;
      }
      uVar26 = (uint)uVar34;
      if (*(char *)(*(long *)(param_1 + 0x440) + 6) == '\x02') {
        FUN_00857520(param_1,uVar26 * 4 + 8 & 0xfffffff8,0);
        FUN_00852010(param_1,&local_1b0,1);
        puVar16 = PTR___tls_init_00c93d88;
        goto joined_r0x00851dc8;
      }
      if (*(char *)(param_1 + (uVar34 >> 1) * 0x78 + 0x45b) != '\0') {
        uVar26 = *(uint *)(param_1 + 0x2e0) & uVar26 + 1;
        *puVar56 = uVar26;
        *(undefined4 *)(param_1 + 0x2c0) =
             *(undefined4 *)
              ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
        FUN_00857520(param_1,(uVar26 & 0x3ffffffe) << 2,0);
        uVar26 = *puVar56 - 4 & *(uint *)(param_1 + 0x2e0);
        *puVar56 = uVar26;
        uVar30 = (ulong)(uVar26 >> 1);
        *(undefined4 *)(param_1 + 0x2c0) =
             *(undefined4 *)
              ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
        puVar51 = PTR___tls_init_00c93cd0;
        switch(*(undefined4 *)(param_1 + uVar30 * 0x78 + 0x4bc)) {
        case 1:
        case 2:
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x48a) != '\0') {
            FUN_0084b100(*(undefined8 *)(param_1 + 0x485d8),0);
            uVar26 = *puVar56;
            local_e8 = (int *)((ulong)local_e8 & 0xffffffffffffff00);
            local_d0 = CONCAT31(local_d0._1_3_,1);
            local_c8 = 0;
            local_a0 = (undefined8 *)0x0;
            local_90 = 0xffffffffffffffff;
            if (((*puVar1 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)
               ) {
                    /* try { // try from 00850ccc to 00850ce3 has its CatchHandler @ 00851f94 */
              FUN_007b8e30(&DAT_02828cb0,&DAT_02819060);
              puVar51 = PTR___tls_init_00c93cd0;
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = _DAT_02828cb0;
              uStack_150 = uVar67;
              local_158 = uVar20;
              local_170 = DAT_02828cb8;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_160._0_4_ = 0;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
                    /* try { // try from 008512f4 to 00851303 has its CatchHandler @ 00851f94 */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
            }
            else {
                    /* try { // try from 00851a58 to 00851a63 has its CatchHandler @ 00851f94 */
              FUN_007b9050(&DAT_02b50910,&DAT_02701d00);
              puVar51 = PTR___tls_init_00c93cd0;
            }
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            uVar28 = 3;
            if (*puVar1 != 0) {
              uVar28 = 0xb;
            }
                    /* try { // try from 00851334 to 00851387 has its CatchHandler @ 00851f94 */
            FUN_0097c650(*puVar46,&DAT_02b50910,uVar28,&local_e8);
            if (((*puVar1 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)
               ) {
              FUN_007b8e30(&DAT_02b50940,&DAT_02819070);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = DAT_02b50940;
              uStack_150 = uVar67;
              local_158 = uVar20;
              local_170 = DAT_02b50948;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_160._0_4_ = 0;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
                    /* try { // try from 00851410 to 0085141f has its CatchHandler @ 00851f74 */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              iStack_168 = DAT_0c7b1c38;
              local_178 = (int *)0x4;
              if (*puVar1 != 0) {
                local_178 = (int *)0x400;
              }
              local_170 = (undefined4)DAT_0c7b1c30;
              iStack_16c = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = 0xffffffff;
              uStack_160._0_4_ = 0xffffffff;
              uStack_160._4_4_ = 0;
                    /* try { // try from 0085146c to 00851483 has its CatchHandler @ 00851f70 */
              FUN_0097d130(*puVar46,&DAT_02b50910,&DAT_02b50910,&local_178,0x20000000);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = DAT_02b50940;
              uStack_150 = uVar67;
              local_158 = uVar20;
              local_170 = DAT_02b50948;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_160._0_4_ = 0;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0000000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80000000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4800000;
                }
              }
                    /* try { // try from 00851514 to 00851523 has its CatchHandler @ 00851f6c */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = DAT_02abf980;
              local_170 = DAT_02abf988;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_150 = uVar67;
              local_158 = uVar20;
              uStack_160._0_4_ = 0x438;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
                    /* try { // try from 008515b8 to 008515c7 has its CatchHandler @ 00851f68 */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = (int *)0x4;
              local_170 = (undefined4)DAT_0c7b1c30;
              iStack_16c = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              iStack_168 = DAT_0c7b1c38;
              local_164 = 0xffffffff;
              uStack_160._0_4_ = 0xffffffff;
              uStack_160._4_4_ = 0;
                    /* try { // try from 00851600 to 00851617 has its CatchHandler @ 00851f64 */
              FUN_0097d130(*puVar46,&DAT_02b50910,&DAT_02b50910,&local_178,0x20000000);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = DAT_02abf980;
              local_170 = DAT_02abf988;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_150 = uVar67;
              local_158 = uVar20;
              uStack_160._0_4_ = 0x438;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0000000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80000000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4800000;
                }
              }
                    /* try { // try from 008516b4 to 008516c3 has its CatchHandler @ 00851f60 */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
            }
            *puVar56 = *(uint *)(param_1 + 0x2e0) &
                       *puVar56 +
                       ((int)(*(uint *)(param_1 + 0x2c0) << 0x15) >> 0x1f & 0xdffffc00U |
                       *(uint *)(param_1 + 0x2c0) & 0x3ff) * 2 + 2 & 0x3ffffffe;
                    /* try { // try from 008516f4 to 00851703 has its CatchHandler @ 00851f94 */
            FUN_00845740(param_1,&local_1b0,1);
            if (puVar51 != (undefined *)0x0) {
              armAsm::__tls_init();
            }
            plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
            lVar29 = *plVar19;
                    /* try { // try from 00851720 to 0085173f has its CatchHandler @ 00851f94 */
            FUN_0097a6f0(lVar29 + 0xe0,&local_e8);
            FUN_00974d50(lVar29,&local_e8,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
            puVar46 = local_a0;
            *puVar56 = uVar26;
            if (local_a0 != (undefined8 *)0x0) {
              pvVar22 = (void *)*local_a0;
              if (pvVar22 != (void *)0x0) {
                local_a0[1] = pvVar22;
                operator_delete(pvVar22);
              }
              operator_delete(puVar46);
              uVar26 = *puVar56;
            }
            uVar30 = (ulong)(uVar26 >> 1);
          }
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x489) != '\0') {
            FUN_00855270(param_1);
            FUN_0084b900(param_1,&local_1b0);
            FUN_00848340(param_1,&local_1b0,3);
            uVar6 = *(uint *)(param_1 + 0x2e0) & 0x3ffffffe &
                    *puVar56 +
                    ((int)(*(uint *)(param_1 + 0x2c0) << 0x15) >> 0x1f & 0xdffffc00U |
                    *(uint *)(param_1 + 0x2c0) & 0x3ff) * 2 + 2;
            *puVar56 = uVar6;
            if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              FUN_0097b280(*puVar46,&DAT_02b50910,(ulong)uVar6 << 2);
            }
            else {
              armAsm::__tls_init();
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              FUN_0097b280(*puVar46,&DAT_02b50910,(*puVar56 & 0x3ffffffe) << 2);
              armAsm::__tls_init();
            }
            puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
            iStack_dc = (int)DAT_0c7b1c30;
            local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
            uStack_c0 = uVar67;
            local_c8 = uVar20;
            local_e8 = DAT_02abf980;
            local_e0 = DAT_02abf988;
            iStack_d4 = DAT_0c7b1c38;
            local_d0 = 0x3a0;
            uStack_cc = 0;
            if (DAT_02b50918 == 1) {
              uVar28 = 0xc0000000;
              if (DAT_02b50910._4_4_ != 0x40) {
                uVar28 = 0x80000000;
              }
            }
            else {
              uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
              if (uVar6 < 8) {
                uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar6 * 4);
              }
              else {
                uVar28 = 0x4800000;
              }
            }
            FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
            if (((*puVar1 != 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0)
               ) {
              FUN_0088ad60(8);
            }
            FUN_007b79a0(*(undefined8 *)(param_1 + 0x48660),0);
            *puVar56 = uVar26;
          }
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x487) == '\0') {
            FUN_0084b900(param_1,&local_1b0);
            uVar6 = (*puVar56 +
                     ((int)(*(uint *)(param_1 + 0x2c0) << 0x15) >> 0x1f & 0xdffffc00U |
                     *(uint *)(param_1 + 0x2c0) & 0x3ff) * 2 + 2 & *(uint *)(param_1 + 0x2e0)) << 2;
LAB_008519b0:
            FUN_0084c580(param_1,uVar6);
            puVar51 = PTR___tls_init_00c93cd0;
            puVar16 = PTR___tls_init_00c93d88;
            goto joined_r0x00851dc8;
          }
          uVar6 = *(uint *)(param_1 + 0x2e0) &
                  uVar26 + ((int)(*(uint *)(param_1 + 0x2c0) << 0x15) >> 0x1f & 0xdffffc00U |
                           *(uint *)(param_1 + 0x2c0) & 0x3ff) * 2 + 2 & 0x3ffffffe;
          break;
        case 3:
          FUN_00855610(param_1,&local_1b0,0);
          puVar51 = PTR___tls_init_00c93cd0;
          puVar16 = PTR___tls_init_00c93d88;
          goto joined_r0x00851dc8;
        case 4:
          FUN_00855610(param_1,&local_1b0,10);
          puVar51 = PTR___tls_init_00c93cd0;
          puVar16 = PTR___tls_init_00c93d88;
          goto joined_r0x00851dc8;
        case 5:
          FUN_00855610(param_1,&local_1b0,0xc);
          puVar51 = PTR___tls_init_00c93cd0;
          puVar16 = PTR___tls_init_00c93d88;
          goto joined_r0x00851dc8;
        case 6:
          FUN_00855610(param_1,&local_1b0,0xd);
          puVar51 = PTR___tls_init_00c93cd0;
          puVar16 = PTR___tls_init_00c93d88;
          goto joined_r0x00851dc8;
        case 7:
          FUN_00855610(param_1,&local_1b0,0xb);
          puVar51 = PTR___tls_init_00c93cd0;
          puVar16 = PTR___tls_init_00c93d88;
          goto joined_r0x00851dc8;
        case 8:
          FUN_00855610(param_1,&local_1b0,1);
          puVar51 = PTR___tls_init_00c93cd0;
          puVar16 = PTR___tls_init_00c93d88;
          goto joined_r0x00851dc8;
        case 9:
        case 10:
          if (*(char *)(param_1 + uVar30 * 0x78 + 0x4b4) == '\0') {
            if (*(char *)(param_1 + uVar30 * 0x78 + 0x48a) != '\0') {
              FUN_0084b100(*(undefined8 *)(param_1 + 0x485d8),0);
              local_e8 = (int *)((ulong)local_e8 & 0xffffffffffffff00);
              local_d0 = CONCAT31(local_d0._1_3_,1);
              local_c8 = 0;
              local_a0 = (undefined8 *)0x0;
              local_90 = 0xffffffffffffffff;
              if (((*puVar1 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
                 ((DAT_02704f20 >> 4 & 1) == 0)) {
                    /* try { // try from 00850f54 to 00850f67 has its CatchHandler @ 00851f78 */
                FUN_007b9050(&DAT_02b50910,&DAT_02819060);
              }
              else {
                    /* try { // try from 00851de4 to 00851def has its CatchHandler @ 00851f78 */
                FUN_007b9050(&DAT_02b50910,&DAT_02701d00);
              }
              puVar51 = PTR___tls_init_00c93cd0;
              if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              uVar28 = 3;
              if (*puVar1 != 0) {
                uVar28 = 0xb;
              }
                    /* try { // try from 00850fa0 to 00850ff7 has its CatchHandler @ 00851f78 */
              FUN_0097c650(*puVar46,&DAT_02b50910,uVar28,&local_e8);
              if (((*puVar1 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
                 ((DAT_02704f20 >> 4 & 1) == 0)) {
                FUN_007b8e30(&DAT_02b50940,&DAT_02819070);
                if (puVar51 != (undefined *)0x0) {
                  armAsm::__tls_init();
                }
                puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                uStack_160._0_4_ = 0;
                uStack_160._4_4_ = 0;
                local_178 = DAT_02b50940;
                local_170 = DAT_02b50948;
                iStack_16c = (int)DAT_0c7b1c30;
                iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
                local_164 = DAT_0c7b1c38;
                uStack_150 = uVar67;
                local_158 = uVar20;
                    /* try { // try from 0085103c to 00851047 has its CatchHandler @ 00851f54 */
                FUN_009813a0(*puVar46,&DAT_02b50910,&local_178);
                if (puVar51 != (undefined *)0x0) {
                  armAsm::__tls_init();
                }
                puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                iStack_168 = DAT_0c7b1c38;
                local_178 = (int *)0x4;
                if (*puVar1 != 0) {
                  local_178 = (int *)0x400;
                }
                local_170 = (undefined4)DAT_0c7b1c30;
                iStack_16c = (int)((ulong)DAT_0c7b1c30 >> 0x20);
                local_164 = 0xffffffff;
                uStack_160._0_4_ = 0xffffffff;
                uStack_160._4_4_ = 0;
                    /* try { // try from 00851094 to 008510af has its CatchHandler @ 00851f50 */
                FUN_0097d130(*puVar46,&DAT_02b50910,&DAT_02b50910,&local_178,0x20000000);
                if (puVar51 != (undefined *)0x0) {
                  armAsm::__tls_init();
                }
                puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                uStack_160._0_4_ = 0;
                uStack_160._4_4_ = 0;
                local_178 = DAT_02b50940;
                local_170 = DAT_02b50948;
                iStack_16c = (int)DAT_0c7b1c30;
                iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
                local_164 = DAT_0c7b1c38;
                uStack_150 = uVar67;
                local_158 = uVar20;
                    /* try { // try from 008510f4 to 008510ff has its CatchHandler @ 00851f4c */
                FUN_009813f0(*puVar46,&DAT_02b50910,&local_178);
                if (puVar51 != (undefined *)0x0) {
                  armAsm::__tls_init();
                }
                puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                uStack_160._0_4_ = 0x438;
                uStack_160._4_4_ = 0;
                local_178 = DAT_02abf980;
                local_170 = DAT_02abf988;
                iStack_16c = (int)DAT_0c7b1c30;
                iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
                local_164 = DAT_0c7b1c38;
                uStack_150 = uVar67;
                local_158 = uVar20;
                    /* try { // try from 00851150 to 0085115f has its CatchHandler @ 00851f48 */
                FUN_009813a0(*puVar46,&DAT_02b50910,&local_178);
                if (puVar51 != (undefined *)0x0) {
                  armAsm::__tls_init();
                }
                puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                local_178 = (int *)0x4;
                local_170 = (undefined4)DAT_0c7b1c30;
                iStack_16c = (int)((ulong)DAT_0c7b1c30 >> 0x20);
                iStack_168 = DAT_0c7b1c38;
                local_164 = 0xffffffff;
                uStack_160._0_4_ = 0xffffffff;
                uStack_160._4_4_ = 0;
                    /* try { // try from 00851198 to 008511af has its CatchHandler @ 00851f44 */
                FUN_0097d130(*puVar46,&DAT_02b50910,&DAT_02b50910,&local_178,0x20000000);
                if (puVar51 != (undefined *)0x0) {
                  armAsm::__tls_init();
                }
                puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
                uStack_160._0_4_ = 0x438;
                uStack_160._4_4_ = 0;
                local_178 = DAT_02abf980;
                local_170 = DAT_02abf988;
                iStack_16c = (int)DAT_0c7b1c30;
                iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
                local_164 = DAT_0c7b1c38;
                uStack_150 = uVar67;
                local_158 = uVar20;
                    /* try { // try from 00851200 to 0085120f has its CatchHandler @ 00851f40 */
                FUN_009813f0(*puVar46,&DAT_02b50910,&local_178);
              }
                    /* try { // try from 00851210 to 0085121f has its CatchHandler @ 00851f78 */
              FUN_00845740(param_1,&local_1b0,2);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = DAT_02abf970;
              local_170 = DAT_02abf978;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_150 = uVar67;
              local_158 = uVar20;
              uStack_160._0_4_ = 0x3c;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
                    /* try { // try from 00851a7c to 00851a8b has its CatchHandler @ 00851f5c */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              local_178 = DAT_02abf980;
              local_170 = DAT_02abf988;
              iStack_16c = (int)DAT_0c7b1c30;
              iStack_168 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_164 = DAT_0c7b1c38;
              uStack_150 = uVar67;
              local_158 = uVar20;
              uStack_160._0_4_ = 0x3a0;
              uStack_160._4_4_ = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0000000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80000000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4800000;
                }
              }
                    /* try { // try from 00851b28 to 00851b37 has its CatchHandler @ 00851f58 */
              FUN_00981440(*puVar46,&DAT_02b50910,&local_178,uVar28);
              if (((*puVar1 != 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                    /* try { // try from 00851b68 to 00851b7f has its CatchHandler @ 00851f78 */
                FUN_0088ad60(0x10);
              }
              FUN_007b79a0(*(undefined8 *)(param_1 + 0x48660),0);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              plVar19 = (long *)__emutls_get_address(&DAT_00c99bd0);
              lVar29 = *plVar19;
                    /* try { // try from 00851b9c to 00851bbb has its CatchHandler @ 00851f78 */
              FUN_0097a6f0(lVar29 + 0xe0,&local_e8);
              FUN_00974d50(lVar29,&local_e8,*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 8));
              puVar46 = local_a0;
              if (local_a0 != (undefined8 *)0x0) {
                pvVar22 = (void *)*local_a0;
                if (pvVar22 != (void *)0x0) {
                  local_a0[1] = pvVar22;
                  operator_delete(pvVar22);
                }
                operator_delete(puVar46);
              }
              uVar30 = (ulong)(*puVar56 >> 1);
            }
            if (*(char *)(param_1 + uVar30 * 0x78 + 0x487) == '\0') {
              FUN_00852010(param_1,&local_1b0,0);
              puVar51 = PTR___tls_init_00c93cd0;
              puVar16 = PTR___tls_init_00c93d88;
            }
            else {
              FUN_00848340(param_1,&local_1b0,2);
              puVar51 = PTR___tls_init_00c93cd0;
              if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              puVar16 = PTR___tls_init_00c93d88;
              local_e8 = DAT_02abf970;
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              local_e0 = DAT_02abf978;
              iStack_d4 = DAT_0c7b1c38;
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              local_d0 = 0x3c;
              uStack_cc = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0400000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80400000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231540 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4c00000;
                }
              }
              FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
              if (puVar51 != (undefined *)0x0) {
                armAsm::__tls_init();
              }
              puVar46 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
              iStack_dc = (int)DAT_0c7b1c30;
              local_d8 = (int)((ulong)DAT_0c7b1c30 >> 0x20);
              uStack_c0 = uVar67;
              local_c8 = uVar20;
              local_e8 = DAT_02abf980;
              local_e0 = DAT_02abf988;
              iStack_d4 = DAT_0c7b1c38;
              local_d0 = 0x3a0;
              uStack_cc = 0;
              if (DAT_02b50918 == 1) {
                uVar28 = 0xc0000000;
                if (DAT_02b50910._4_4_ != 0x40) {
                  uVar28 = 0x80000000;
                }
              }
              else {
                uVar6 = DAT_02b50910._4_4_ - 8U >> 3 | DAT_02b50910._4_4_ << 0x1d;
                if (uVar6 < 8) {
                  uVar28 = *(undefined4 *)(&DAT_00231840 + (long)(int)uVar6 * 4);
                }
                else {
                  uVar28 = 0x4800000;
                }
              }
              FUN_00981440(*puVar46,&DAT_02b50910,&local_e8,uVar28);
              if (((*puVar1 != 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                FUN_0088ad60(8);
              }
              FUN_007b79a0(*(undefined8 *)(param_1 + 0x48660),0);
            }
            goto joined_r0x00851dc8;
          }
          lVar29 = param_1 + uVar30 * 0x78;
          iVar27 = *(int *)(lVar29 + 0x4b8);
          if (*(char *)(lVar29 + 0x487) == '\0') {
            uVar6 = *(int *)(param_1 + 0x2d8) - 8U & iVar27 << 3;
            FUN_0084b900(param_1,&local_1b0);
            goto LAB_008519b0;
          }
          uVar6 = *(uint *)(param_1 + 0x2e0) & iVar27 << 1;
          break;
        default:
          goto switchD_00850c50_default;
        }
        *puVar56 = uVar6;
        FUN_00848340(param_1,&local_1b0,1);
        puVar51 = PTR___tls_init_00c93cd0;
        puVar16 = PTR___tls_init_00c93d88;
        goto joined_r0x00851dc8;
      }
      iVar27 = (int)(uVar34 >> 1) * 8 + 8;
      if (iVar27 == *(int *)(param_1 + 0x2d8)) {
        FUN_00857520(param_1,iVar27,0);
        FUN_00857520(param_1,0,1);
        uVar26 = *puVar56;
      }
      uVar26 = uVar26 + 1 & *(uint *)(param_1 + 0x2e0);
      *puVar56 = uVar26;
      *(undefined4 *)(param_1 + 0x2c0) =
           *(undefined4 *)
            ((&DAT_02819158)[(ulong)*(uint *)(param_1 + 0x2cc) * 0xc2] + (ulong)uVar26 * 4);
switchD_00850c50_default:
      uVar30 = (ulong)uVar26;
      uVar26 = 0x10000;
      if (cVar38 == '\0') {
        uVar26 = uVar31 + 1;
      }
      uVar31 = uVar26;
    } while (uVar26 < uVar6);
  }
  if ((uVar26 == uVar6) && (uVar26 != 1)) {
    FUN_009887f0(&PTR_FUN_00c9aa28,"microVU%d: Possible infinite compiling loop!",*puVar1);
  }
  FUN_00857520(param_1,(*puVar56 & 0x3ffffffe) << 2,0);
  FUN_00848340(param_1,&local_1b0,1);
  puVar16 = PTR___tls_init_00c93d88;
joined_r0x00851dc8:
  if (puVar16 != (undefined *)0x0) {
    armAsmPtr::__tls_init();
  }
  if (puVar51 == (undefined *)0x0) {
    if (*(long *)(lVar8 + 0x28) != local_88) {
LAB_00851a20:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    armAsm::__tls_init();
    if (*(long *)(lVar8 + 0x28) != local_88) goto LAB_00851a20;
  }
  return lVar52;
LAB_0084cb8c:
  if (piVar50 == (int *)0x0) {
LAB_0084ca64:
    if (uVar26 != 0) goto LAB_0084ca68;
    *(int *)(puVar46 + 7) = *(int *)(puVar46 + 7) + 1;
    plVar53 = puVar46 + 1;
    bVar18 = true;
    goto LAB_0084ca7c;
  }
  goto LAB_0084cb90;
}

