// vaddr 0xAE1BD0  ghidra 0xBE1BD0  name=FUN_00be1bd0  size=11260 instr-addr
// duvod: isolated yield x27
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Removing unreachable block (ram,0x00be444c) */

void FUN_00be1bd0(long param_1,long *param_2,int *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  ushort *puVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  long lVar19;
  bool bVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  uint *puVar27;
  long lVar28;
  ushort *puVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int *piVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined4 uVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  int iVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  byte *pbVar56;
  uint uVar57;
  ulong uVar58;
  ulong uVar59;
  byte *pbVar60;
  undefined4 *puVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  byte *pbVar65;
  uint uVar66;
  uint uVar67;
  byte *pbVar68;
  int iVar69;
  undefined8 uVar70;
  int local_f8;
  uint local_f4;
  int local_ac;
  ulong local_88;
  uint local_80 [4];
  long local_70;
  
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  uVar21 = *(uint *)(param_1 + 0x10ee0);
  if (*(uint *)(param_1 + 0x10edc) != uVar21) {
    lVar28 = param_1 + (ulong)uVar21 * 0x2c;
    iVar25 = *(int *)(lVar28 + 0x10ef8);
    iVar34 = *(int *)(lVar28 + 0x10efc);
    *param_4 = iVar25 - uVar21;
    *param_3 = iVar34;
    *(int *)(param_1 + 0x10ee0) = iVar25;
    goto LAB_00be4798;
  }
  if (*(int *)((long)param_2 + 0x1c) == 0) {
    if (0x7f < *(uint *)(param_1 + 0x10e94)) {
      if (*(int *)(param_1 + 0x10e90) == 0) {
        uVar21 = 0;
      }
      else {
        uVar54 = 0;
        do {
          iVar25 = 0;
          uVar21 = (int)uVar54 + 0x40;
          do {
            uVar66 = uVar21 & 1;
            uVar21 = uVar21 >> 1;
            iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                          [(-uVar66 & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar21 << 1) + 0x6efc)) >> 4];
          } while (uVar21 != 1);
          *(int *)(param_1 + uVar54 * 4 + 0x10290) = iVar25;
          uVar54 = uVar54 + 1;
          uVar21 = *(uint *)(param_1 + 0x10e90);
        } while (uVar54 < uVar21);
        if (0xe < uVar21) {
          lVar28 = 0;
          uVar66 = 0x20;
          do {
            *(uint *)(param_1 + 0x102c8 + lVar28 * 4) =
                 (uVar66 & 0xfffffff0) + *(int *)(param_1 + 0x102c8 + lVar28 * 4);
            uVar54 = lVar28 + 0xf;
            uVar21 = *(uint *)(param_1 + 0x10e90);
            lVar28 = lVar28 + 1;
            uVar66 = uVar66 + 8;
          } while (uVar54 < uVar21);
        }
      }
      *(undefined8 *)(param_1 + 0x10698) = *(undefined8 *)(param_1 + 0x10298);
      *(undefined8 *)(param_1 + 0x10690) = *(undefined8 *)(param_1 + 0x10290);
      if (uVar21 != 0) {
        uVar54 = 0;
        do {
          iVar25 = 0;
          uVar21 = (int)uVar54 + 0x40;
          do {
            uVar66 = uVar21 & 1;
            uVar21 = uVar21 >> 1;
            iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                          [(-uVar66 & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar21 << 1) + 0x6f7c)) >> 4];
          } while (uVar21 != 1);
          *(int *)(param_1 + uVar54 * 4 + 0x10390) = iVar25;
          uVar54 = uVar54 + 1;
          uVar21 = *(uint *)(param_1 + 0x10e90);
        } while (uVar54 < uVar21);
        if (0xe < uVar21) {
          lVar28 = 0;
          uVar66 = 0x20;
          do {
            *(uint *)(param_1 + 0x103c8 + lVar28 * 4) =
                 (uVar66 & 0xfffffff0) + *(int *)(param_1 + 0x103c8 + lVar28 * 4);
            uVar54 = lVar28 + 0xf;
            uVar21 = *(uint *)(param_1 + 0x10e90);
            lVar28 = lVar28 + 1;
            uVar66 = uVar66 + 8;
          } while (uVar54 < uVar21);
        }
      }
      *(undefined8 *)(param_1 + 0x10898) = *(undefined8 *)(param_1 + 0x10398);
      *(undefined8 *)(param_1 + 0x10890) = *(undefined8 *)(param_1 + 0x10390);
      if (uVar21 != 0) {
        uVar54 = 0;
        do {
          iVar25 = 0;
          uVar21 = (int)uVar54 + 0x40;
          do {
            uVar66 = uVar21 & 1;
            uVar21 = uVar21 >> 1;
            iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                          [(-uVar66 & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar21 << 1) + 0x6ffc)) >> 4];
          } while (uVar21 != 1);
          *(int *)(param_1 + uVar54 * 4 + 0x10490) = iVar25;
          uVar54 = uVar54 + 1;
          uVar21 = *(uint *)(param_1 + 0x10e90);
        } while (uVar54 < uVar21);
        if (0xe < uVar21) {
          lVar28 = 0;
          uVar66 = 0x20;
          do {
            *(uint *)(param_1 + 0x104c8 + lVar28 * 4) =
                 (uVar66 & 0xfffffff0) + *(int *)(param_1 + 0x104c8 + lVar28 * 4);
            uVar54 = lVar28 + 0xf;
            uVar21 = *(uint *)(param_1 + 0x10e90);
            lVar28 = lVar28 + 1;
            uVar66 = uVar66 + 8;
          } while (uVar54 < uVar21);
        }
      }
      *(undefined8 *)(param_1 + 0x10a98) = *(undefined8 *)(param_1 + 0x10498);
      *(undefined8 *)(param_1 + 0x10a90) = *(undefined8 *)(param_1 + 0x10490);
      if (uVar21 != 0) {
        uVar54 = 0;
        do {
          iVar25 = 0;
          uVar21 = (int)uVar54 + 0x40;
          do {
            uVar66 = uVar21 & 1;
            uVar21 = uVar21 >> 1;
            iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                          [(-uVar66 & 0x7f0 ^
                                           (uint)*(ushort *)
                                                  (param_1 + (ulong)(uVar21 << 1) + 0x707c)) >> 4];
          } while (uVar21 != 1);
          *(int *)(param_1 + uVar54 * 4 + 0x10590) = iVar25;
          uVar54 = uVar54 + 1;
        } while (uVar54 < *(uint *)(param_1 + 0x10e90));
        if (0xe < *(uint *)(param_1 + 0x10e90)) {
          lVar28 = 0;
          uVar21 = 0x20;
          do {
            *(uint *)(param_1 + 0x105c8 + lVar28 * 4) =
                 (uVar21 & 0xfffffff0) + *(int *)(param_1 + 0x105c8 + lVar28 * 4);
            uVar54 = lVar28 + 0xf;
            lVar28 = lVar28 + 1;
            uVar21 = uVar21 + 8;
          } while (uVar54 < *(uint *)(param_1 + 0x10e90));
        }
      }
      lVar28 = 4;
      *(undefined8 *)(param_1 + 0x10c98) = *(undefined8 *)(param_1 + 0x10598);
      *(undefined8 *)(param_1 + 0x10c90) = *(undefined8 *)(param_1 + 0x10590);
      do {
        bVar11 = (&DAT_0029dfb8)[lVar28];
        uVar66 = (bVar11 >> 1) - 1;
        uVar21 = (bVar11 & 1 | 2) << (ulong)(uVar66 & 0x1f);
        lVar45 = param_1 + (ulong)uVar21 * 2 + (ulong)bVar11 * -2 + 0x70fa;
        uVar21 = (int)lVar28 - uVar21;
        if (bVar11 >> 1 == 2) {
          iVar25 = 0;
          uVar54 = 1;
        }
        else {
          iVar25 = 0;
          uVar33 = uVar66 & 0xfffffffe;
          uVar54 = 1;
          do {
            uVar6 = uVar21 & 1 | (int)uVar54 << 1;
            uVar30 = uVar21 & 1;
            uVar40 = uVar21 >> 1;
            uVar62 = uVar21 >> 1;
            uVar21 = uVar21 >> 2;
            iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                          [(-uVar30 & 0x7f0 ^ (uint)*(ushort *)(lVar45 + uVar54 * 2)
                                           ) >> 4] +
                     (uint)(byte)(&DAT_002a00a1)
                                 [(-(uVar40 & 1) & 0x7f0 ^
                                  (uint)*(ushort *)(lVar45 + (ulong)uVar6 * 2)) >> 4];
            uVar54 = (ulong)(uVar62 & 1 | uVar6 << 1);
            uVar33 = uVar33 - 2;
          } while (uVar33 != 0);
        }
        if ((uVar66 & 1) != 0) {
          iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                        [(-(uVar21 & 1) & 0x7f0 ^
                                         (uint)*(ushort *)(lVar45 + uVar54 * 2)) >> 4];
        }
        lVar45 = param_1 + (ulong)bVar11 * 4;
        lVar3 = param_1 + lVar28 * 4;
        *(int *)(lVar3 + 0x10690) = *(int *)(lVar45 + 0x10290) + iVar25;
        *(int *)(lVar3 + 0x10890) = *(int *)(lVar45 + 0x10390) + iVar25;
        *(int *)(lVar3 + 0x10a90) = *(int *)(lVar45 + 0x10490) + iVar25;
        *(int *)(lVar3 + 0x10c90) = *(int *)(lVar45 + 0x10590) + iVar25;
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x80);
      *(undefined4 *)(param_1 + 0x10e94) = 0;
    }
    if (0xf < *(uint *)(param_1 + 0x10ed8)) {
      lVar28 = 0;
      uVar16 = *(ushort *)(param_1 + 0x71e2);
      lVar45 = param_1 + 0x71e0;
      do {
        uVar30 = (uint)lVar28;
        uVar66 = uVar30 >> 1 & 1;
        uVar21 = uVar66 | (uVar30 & 1 | 2) << 1;
        uVar33 = uVar30 >> 2 & 1;
        *(uint *)(param_1 + 0x10e98 + lVar28 * 4) =
             (uint)(byte)(&DAT_002a00a1)
                         [(-uVar66 & 0x7f0 ^ (uint)*(ushort *)(lVar45 + (ulong)(uVar30 & 1 | 2) * 2)
                          ) >> 4] +
             (uint)(byte)(&DAT_002a00a1)[(-(uVar30 & 1) & 0x7f0 ^ (uint)uVar16) >> 4] +
             (uint)(byte)(&DAT_002a00a1)
                         [(-uVar33 & 0x7f0 ^ (uint)*(ushort *)(lVar45 + (ulong)uVar21 * 2)) >> 4] +
             (uint)(byte)(&DAT_002a00a1)
                         [((ulong)-(uVar30 >> 3 & 1) & 0x7f0 ^
                          (ulong)*(ushort *)(lVar45 + (ulong)(uVar33 | uVar21 << 1) * 2)) >> 4];
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x10);
      *(undefined4 *)(param_1 + 0x10ed8) = 0;
    }
    uVar66 = *(uint *)(param_2 + 0xc);
    uVar21 = (*(code *)param_2[6])(param_2,param_1 + 0x2f4);
    if (uVar21 == 0) {
      uVar33 = 0;
    }
    else {
      uVar30 = *(uint *)(param_1 + (ulong)(uVar21 - 1) * 8 + 0x2f4);
      uVar33 = uVar30;
      if (uVar30 == *(uint *)(param_2 + 0xc)) {
        iVar25 = *(int *)((long)param_2 + 0x24) - *(uint *)(param_2 + 3);
        uVar6 = *(uint *)((long)param_2 + 100);
        if (iVar25 + 1U <= uVar6) {
          uVar6 = iVar25 + 1;
        }
        uVar33 = uVar6;
        if (uVar30 < uVar6) {
          lVar28 = *param_2 + (ulong)*(uint *)(param_2 + 3) + -1;
          do {
            uVar62 = *(int *)(lVar28 + (ulong)uVar30) -
                     *(int *)(~(ulong)*(uint *)(param_1 + (ulong)(uVar21 - 1) * 8 + 0x2f8) + lVar28
                             + (ulong)uVar30);
            if (uVar62 != 0) {
              uVar40 = uVar62 >> 0x10;
              uVar33 = uVar30 + 2;
              if ((uVar62 & 0xffff) != 0) {
                uVar40 = uVar62;
                uVar33 = uVar30;
              }
              if ((uVar40 & 0xff) == 0) {
                uVar33 = uVar33 + 1;
              }
              if (uVar6 <= uVar33) {
                uVar33 = uVar6;
              }
              break;
            }
            uVar30 = uVar30 + 4;
          } while (uVar30 < uVar6);
        }
      }
    }
    uVar54 = (ulong)*(uint *)(param_2 + 3);
    *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
    uVar30 = (*(int *)((long)param_2 + 0x24) - *(uint *)(param_2 + 3)) + 1;
    if (uVar30 < 0x111) goto LAB_00be1c74;
LAB_00be2294:
    uVar30 = 0x111;
LAB_00be2298:
    lVar28 = *param_2;
    puVar29 = (ushort *)(lVar28 + uVar54 + -1);
    uVar16 = *puVar29;
    uVar23 = (ulong)uVar30;
    uVar6 = *(uint *)(param_1 + 0x2e4);
    uVar17 = *(ushort *)(~(ulong)uVar6 + (long)puVar29);
    uVar62 = (uint)uVar16;
    if (uVar16 == uVar17) {
      if (uVar30 < 3) {
        local_80[0] = 2;
        uVar59 = (ulong)*(uint *)(param_1 + 0x2e8);
        if (uVar62 == *(ushort *)(~uVar59 + (long)puVar29)) goto LAB_00be23b0;
        goto LAB_00be233c;
      }
      lVar45 = 0;
      do {
        uVar40 = *(int *)(uVar54 + lVar28 + 1 + lVar45) -
                 *(int *)(lVar28 + (uVar54 - uVar6) + lVar45);
        if (uVar40 != 0) {
          uVar24 = uVar40 >> 0x10;
          local_80[0] = (int)lVar45 + 4;
          if ((uVar40 & 0xffff) != 0) {
            uVar24 = uVar40;
            local_80[0] = (int)lVar45 + 2;
          }
          local_80[0] = local_80[0] | (uVar24 & 0xff) == 0;
          if (uVar30 <= local_80[0]) {
            local_80[0] = uVar30;
          }
          uVar59 = (ulong)*(uint *)(param_1 + 0x2e8);
          if (uVar62 != *(ushort *)(~uVar59 + (long)puVar29)) goto LAB_00be233c;
          goto LAB_00be23b0;
        }
        uVar59 = lVar45 + 6;
        lVar45 = lVar45 + 4;
      } while (uVar59 < uVar23);
      local_80[0] = uVar30;
      uVar59 = (ulong)*(uint *)(param_1 + 0x2e8);
      if (uVar16 != *(ushort *)(~uVar59 + (long)puVar29)) goto LAB_00be233c;
LAB_00be23b0:
      if (uVar30 < 3) {
        local_80[1] = 2;
      }
      else {
        lVar45 = 0;
        do {
          uVar40 = *(int *)(uVar54 + lVar28 + 1 + lVar45) -
                   *(int *)(lVar28 + (uVar54 - uVar59) + lVar45);
          if (uVar40 != 0) {
            uVar24 = uVar40 >> 0x10;
            local_80[1] = (int)lVar45 + 4;
            if ((uVar40 & 0xffff) != 0) {
              uVar24 = uVar40;
              local_80[1] = (int)lVar45 + 2;
            }
            local_80[1] = local_80[1] | (uVar24 & 0xff) == 0;
            if (uVar30 <= local_80[1]) {
              local_80[1] = uVar30;
            }
            break;
          }
          uVar32 = lVar45 + 6;
          lVar45 = lVar45 + 4;
          local_80[1] = uVar30;
        } while (uVar32 < uVar23);
      }
      uVar32 = (ulong)(local_80[0] < local_80[1]);
    }
    else {
      local_80[0] = 0;
      uVar59 = (ulong)*(uint *)(param_1 + 0x2e8);
      if (uVar16 == *(ushort *)(~uVar59 + (long)puVar29)) goto LAB_00be23b0;
LAB_00be233c:
      uVar32 = 0;
      local_80[1] = 0;
    }
    uVar40 = *(uint *)(param_1 + 0x2ec);
    if (uVar16 == *(ushort *)(~(ulong)uVar40 + (long)puVar29)) {
      local_80[2] = 2;
      if (2 < uVar30) {
        lVar45 = 0;
        do {
          uVar24 = *(int *)(uVar54 + lVar28 + 1 + lVar45) -
                   *(int *)(lVar28 + (uVar54 - uVar40) + lVar45);
          if (uVar24 != 0) {
            uVar67 = uVar24 >> 0x10;
            local_80[2] = (int)lVar45 + 4;
            if ((uVar24 & 0xffff) != 0) {
              uVar67 = uVar24;
              local_80[2] = (int)lVar45 + 2;
            }
            local_80[2] = local_80[2] | (uVar67 & 0xff) == 0;
            if (uVar30 <= local_80[2]) {
              local_80[2] = uVar30;
            }
            break;
          }
          uVar26 = lVar45 + 6;
          lVar45 = lVar45 + 4;
          local_80[2] = uVar30;
        } while (uVar26 < uVar23);
      }
      uVar24 = 2;
      if (local_80[2] <= local_80[uVar32]) {
        uVar24 = (uint)uVar32;
      }
      uVar32 = (ulong)uVar24;
      uVar26 = (ulong)*(uint *)(param_1 + 0x2f0);
      if (uVar16 != *(ushort *)(~uVar26 + (long)puVar29)) goto LAB_00be24c8;
LAB_00be257c:
      if (uVar30 < 3) {
        local_80[3] = 2;
      }
      else {
        lVar45 = 0;
        do {
          uVar24 = *(int *)(uVar54 + lVar28 + 1 + lVar45) -
                   *(int *)(lVar28 + (uVar54 - uVar26) + lVar45);
          if (uVar24 != 0) {
            uVar67 = uVar24 >> 0x10;
            local_80[3] = (int)lVar45 + 4;
            if ((uVar24 & 0xffff) != 0) {
              uVar67 = uVar24;
              local_80[3] = (int)lVar45 + 2;
            }
            local_80[3] = local_80[3] | (uVar67 & 0xff) == 0;
            if (uVar30 <= local_80[3]) {
              local_80[3] = uVar30;
            }
            break;
          }
          uVar55 = lVar45 + 6;
          lVar45 = lVar45 + 4;
          local_80[3] = uVar30;
        } while (uVar55 < uVar23);
      }
      uVar30 = 3;
      if (local_80[3] <= local_80[uVar32]) {
        uVar30 = (uint)uVar32;
      }
      uVar32 = (ulong)uVar30;
      uVar30 = local_80[uVar32];
    }
    else {
      local_80[2] = 0;
      uVar26 = (ulong)*(uint *)(param_1 + 0x2f0);
      if (uVar16 == *(ushort *)(~uVar26 + (long)puVar29)) goto LAB_00be257c;
LAB_00be24c8:
      local_80[3] = 0;
      uVar30 = local_80[uVar32];
    }
    if (uVar66 <= uVar30) {
      *param_3 = (int)uVar32;
      iVar25 = uVar30 - 1;
      *param_4 = uVar30;
      if (iVar25 != 0) {
        (*(code *)param_2[7])(param_2,iVar25);
        *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + iVar25;
      }
      goto LAB_00be4798;
    }
    if (uVar66 <= uVar33) {
      *param_3 = *(int *)(param_1 + (ulong)(uVar21 - 1) * 8 + 0x2f8) + 4;
      *param_4 = uVar33;
      iVar25 = uVar33 - 1;
      if (iVar25 != 0) {
        (*(code *)param_2[7])(param_2,iVar25);
        *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + iVar25;
      }
      goto LAB_00be4798;
    }
    if (((1 < uVar33) || ((uVar62 & 0xff) == (uint)(byte)uVar17)) || (1 < uVar30)) {
      uVar24 = *(uint *)(param_1 + 0x2e0);
      uVar32 = (ulong)uVar24;
      uVar55 = (ulong)(*(uint *)(param_1 + 0xb90) & param_5);
      uVar16 = *(ushort *)(param_1 + uVar32 * 0x20 + uVar55 * 2 + 0x6b9c);
      *(uint *)(param_1 + 0x10ee4) = uVar24;
      uVar23 = (ulong)(uVar16 >> 4);
      bVar11 = (&DAT_002a00a1)[uVar23];
      uVar54 = (ulong)((uint)(*(byte *)(lVar28 + uVar54 + -2) >>
                             (ulong)(8 - *(uint *)(param_1 + 0xb94) & 0x1f)) +
                      ((*(uint *)(param_1 + 0xb98) & param_5) <<
                      (ulong)(*(uint *)(param_1 + 0xb94) & 0x1f)));
      uVar66 = uVar62 & 0xff | 0x100;
      if (uVar24 < 7) {
        iVar25 = 0;
        do {
          uVar24 = uVar66 & 1;
          uVar66 = uVar66 >> 1;
          iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                        [(-uVar24 & 0x7f0 ^
                                         (uint)*(ushort *)
                                                (param_1 + uVar54 * 0x600 + (ulong)(uVar66 << 1) +
                                                0xb9c)) >> 4];
        } while (uVar66 != 1);
      }
      else {
        iVar25 = 0;
        uVar24 = 0x100;
        uVar67 = uVar17 & 0xff;
        do {
          bVar20 = uVar66 < 0x8000;
          iVar25 = iVar25 + (uint)(byte)(&DAT_002a00a1)
                                        [(-(uVar66 >> 7 & 1) & 0x7f0 ^
                                         (uint)*(ushort *)
                                                (param_1 + uVar54 * 0x600 +
                                                 (ulong)(uVar24 + (uVar66 >> 8) +
                                                        (uVar67 << 1 & uVar24)) * 2 + 0xb9c)) >> 4];
          uVar24 = uVar24 & ((uVar66 ^ uVar67) << 1 ^ 0xffffffff);
          uVar66 = uVar66 << 1;
          uVar67 = uVar67 << 1;
        } while (bVar20);
      }
      *(uint *)(param_1 + 0x10f20) = iVar25 + (uint)bVar11;
      iVar31 = -1;
      bVar12 = (&DAT_002a00a1)[uVar23 ^ 0x7f];
      *(undefined4 *)(param_1 + 0x10f28) = 0xffffffff;
      lVar28 = param_1 + uVar32 * 2;
      uVar54 = (ulong)(*(ushort *)(lVar28 + 0x6d1c) >> 4);
      bVar13 = (&DAT_002a00a1)[uVar54 ^ 0x7f];
      *(undefined1 *)(param_1 + 0x10f14) = 0;
      iVar34 = (uint)bVar13 + (uint)bVar12;
      if ((uVar62 & 0xff) == (uint)(byte)uVar17) {
        uVar66 = iVar34 + (uint)(byte)(&DAT_002a00a1)[*(ushort *)(lVar28 + 0x6d34) >> 4] +
                 (uint)(byte)(&DAT_002a00a1)
                             [*(ushort *)(param_1 + uVar32 * 0x20 + uVar55 * 2 + 0x6d7c) >> 4];
        if (uVar66 < iVar25 + (uint)bVar11) {
          iVar31 = 0;
          *(uint *)(param_1 + 0x10f20) = uVar66;
          *(undefined4 *)(param_1 + 0x10f28) = 0;
        }
        else {
          iVar31 = -1;
        }
      }
      uVar66 = uVar33;
      if (uVar33 <= uVar30) {
        uVar66 = uVar30;
      }
      local_88 = (ulong)uVar66;
      if (uVar66 < 2) {
        *param_3 = iVar31;
        *param_4 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x10f24) = 0;
        *(uint *)(param_1 + 0x10f00) = uVar6;
        *(int *)(param_1 + 0x10f04) = (int)uVar59;
        *(uint *)(param_1 + 0x10f08) = uVar40;
        *(int *)(param_1 + 0x10f0c) = (int)uVar26;
        puVar61 = (undefined4 *)(param_1 + local_88 * 0x2c + 0x10ef4);
        uVar23 = local_88;
        do {
          uVar23 = uVar23 - 1;
          *puVar61 = 0x40000000;
          puVar61 = puVar61 + -0xb;
        } while ((uVar23 & 0xfffffffe) != 0);
        lVar28 = param_1 + uVar32 * 2;
        puVar29 = (ushort *)(lVar28 + 0x6d34);
        puVar2 = (ushort *)(lVar28 + 0x6d4c);
        if (1 < local_80[0]) {
          bVar11 = (&DAT_002a00a1)[*puVar29 >> 4];
          puVar27 = (uint *)(param_1 + (ulong)local_80[0] * 0x2c + 0x10ef4);
          bVar13 = (&DAT_002a00a1)
                   [(ulong)(*(ushort *)(param_1 + uVar32 * 0x20 + uVar55 * 2 + 0x6d7c) >> 4) ^ 0x7f]
          ;
          uVar30 = local_80[0];
          do {
            uVar6 = iVar34 + (uint)bVar11 + (uint)bVar13 +
                    *(int *)(param_1 + uVar55 * 0x440 + (ulong)(uVar30 - 2) * 4 + 0xbe4c);
            if (uVar6 < *puVar27) {
              puVar27[1] = 0;
              puVar27[2] = 0;
              *puVar27 = uVar6;
              *(undefined1 *)(puVar27 + -3) = 0;
            }
            uVar30 = uVar30 - 1;
            puVar27 = puVar27 + -0xb;
          } while ((uVar30 & 0xfffffffe) != 0);
        }
        uVar70 = DAT_00230878;
        if (1 < local_80[1]) {
          bVar11 = (&DAT_002a00a1)[*puVar2 >> 4];
          bVar13 = (&DAT_002a00a1)[(ulong)(*puVar29 >> 4) ^ 0x7f];
          puVar27 = (uint *)(param_1 + (ulong)local_80[1] * 0x2c + 0x10ef4);
          uVar30 = local_80[1];
          do {
            uVar6 = iVar34 + (uint)bVar13 + (uint)bVar11 +
                    *(int *)(param_1 + uVar55 * 0x440 + (ulong)(uVar30 - 2) * 4 + 0xbe4c);
            if (uVar6 < *puVar27) {
              *puVar27 = uVar6;
              *(undefined8 *)(puVar27 + 1) = uVar70;
              *(undefined1 *)(puVar27 + -3) = 0;
            }
            uVar30 = uVar30 - 1;
            puVar27 = puVar27 + -0xb;
          } while ((uVar30 & 0xfffffffe) != 0);
        }
        uVar70 = DAT_00230900;
        if (1 < local_80[2]) {
          bVar11 = (&DAT_002a00a1)[(ulong)(*puVar29 >> 4) ^ 0x7f];
          bVar13 = (&DAT_002a00a1)[*(ushort *)(lVar28 + 0x6d64) >> 4];
          puVar27 = (uint *)(param_1 + (ulong)local_80[2] * 0x2c + 0x10ef4);
          bVar14 = (&DAT_002a00a1)[(ulong)(*puVar2 >> 4) ^ 0x7f];
          uVar30 = local_80[2];
          do {
            uVar6 = iVar34 + (uint)bVar11 + (uint)bVar14 + (uint)bVar13 +
                    *(int *)(param_1 + uVar55 * 0x440 + (ulong)(uVar30 - 2) * 4 + 0xbe4c);
            if (uVar6 < *puVar27) {
              *puVar27 = uVar6;
              *(undefined8 *)(puVar27 + 1) = uVar70;
              *(undefined1 *)(puVar27 + -3) = 0;
            }
            uVar30 = uVar30 - 1;
            puVar27 = puVar27 + -0xb;
          } while ((uVar30 & 0xfffffffe) != 0);
        }
        uVar70 = DAT_00230bd0;
        if (1 < local_80[3]) {
          bVar11 = (&DAT_002a00a1)[(ulong)(*puVar29 >> 4) ^ 0x7f];
          bVar13 = (&DAT_002a00a1)[(ulong)(*puVar2 >> 4) ^ 0x7f];
          bVar14 = (&DAT_002a00a1)[(ulong)(*(ushort *)(lVar28 + 0x6d64) >> 4) ^ 0x7f];
          puVar27 = (uint *)(param_1 + (ulong)local_80[3] * 0x2c + 0x10ef4);
          uVar30 = local_80[3];
          do {
            uVar6 = iVar34 + (uint)bVar11 + (uint)bVar13 + (uint)bVar14 +
                    *(int *)(param_1 + uVar55 * 0x440 + (ulong)(uVar30 - 2) * 4 + 0xbe4c);
            if (uVar6 < *puVar27) {
              *puVar27 = uVar6;
              *(undefined8 *)(puVar27 + 1) = uVar70;
              *(undefined1 *)(puVar27 + -3) = 0;
            }
            uVar30 = uVar30 - 1;
            puVar27 = puVar27 + -0xb;
          } while ((uVar30 & 0xfffffffe) != 0);
        }
        uVar30 = 2;
        if (1 < local_80[0]) {
          uVar30 = local_80[0] + 1;
        }
        if (uVar30 <= uVar33) {
          bVar11 = (&DAT_002a00a1)[uVar54];
          uVar33 = 0xffffffff;
          do {
            uVar33 = uVar33 + 1;
          } while (*(uint *)(param_1 + (ulong)uVar33 * 8 + 0x2f4) < uVar30);
          while( true ) {
            uVar62 = *(uint *)(param_1 + (ulong)uVar33 * 8 + 0x2f8);
            uVar6 = uVar30 - 2;
            if (5 < uVar30) {
              uVar6 = 3;
            }
            if (uVar62 < 0x80) {
              iVar25 = *(int *)(param_1 + (ulong)uVar6 * 0x200 + (ulong)uVar62 * 4 + 0x10690);
            }
            else {
              iVar25 = 0x12;
              if ((int)uVar62 < 0) {
                iVar25 = 0x1e;
              }
              lVar28 = 0x24;
              if ((int)uVar62 < 0) {
                lVar28 = 0x3c;
              }
              iVar34 = 6;
              if (0x7ffff < uVar62) {
                iVar34 = iVar25;
              }
              lVar45 = 0xc;
              if (0x7ffff < uVar62) {
                lVar45 = lVar28;
              }
              iVar25 = *(int *)(param_1 + ((ulong)uVar62 & 0xf) * 4 + 0x10e98) +
                       *(int *)(param_1 + (ulong)uVar6 * 0x100 +
                                (lVar45 + (ulong)(byte)(&DAT_0029dfb8)[uVar62 >> iVar34]) * 4 +
                               0x10290);
            }
            uVar6 = (uint)bVar11 + (uint)bVar12 + iVar25 +
                    *(int *)(param_1 + uVar55 * 0x440 + (ulong)(uVar30 - 2) * 4 + 0x7604);
            puVar27 = (uint *)(param_1 + (ulong)uVar30 * 0x2c + 0x10ef4);
            if (uVar6 < *puVar27) {
              lVar28 = param_1 + (ulong)uVar30 * 0x2c;
              *(undefined4 *)(lVar28 + 0x10ef8) = 0;
              *(uint *)(lVar28 + 0x10efc) = uVar62 + 4;
              *puVar27 = uVar6;
              *(undefined1 *)(lVar28 + 0x10ee8) = 0;
              uVar6 = *(uint *)(param_1 + (ulong)uVar33 * 8 + 0x2f4);
            }
            else {
              uVar6 = *(uint *)(param_1 + (ulong)uVar33 * 8 + 0x2f4);
            }
            if ((uVar30 == uVar6) && (uVar33 = uVar33 + 1, uVar33 == uVar21)) break;
            uVar30 = uVar30 + 1;
          }
        }
        if (uVar66 != 0xffffffff) {
          local_ac = 0;
          local_f8 = param_5 + 1;
          lVar28 = param_1 + 0x10f78;
          lVar3 = param_1 + 0x10f20;
          local_80[2] = (uint)*(undefined8 *)(param_1 + 0x2ec);
          local_80[3] = (uint)((ulong)*(undefined8 *)(param_1 + 0x2ec) >> 0x20);
          local_80[0] = (uint)*(undefined8 *)(param_1 + 0x2e4);
          local_80[1] = (uint)((ulong)*(undefined8 *)(param_1 + 0x2e4) >> 0x20);
          lVar45 = param_1 + 0x10fd0;
          local_f4 = 0xffe;
          iVar25 = 1;
          uVar54 = 1;
          do {
            uVar21 = (*(code *)param_2[6])(param_2,param_1 + 0x2f4);
            if (uVar21 == 0) {
              uVar33 = *(uint *)(param_2 + 0xc);
              uVar66 = 0;
            }
            else {
              uVar30 = *(uint *)(param_1 + (ulong)(uVar21 - 1) * 8 + 0x2f4);
              uVar33 = *(uint *)(param_2 + 0xc);
              uVar66 = uVar30;
              if (uVar30 == *(uint *)(param_2 + 0xc)) {
                iVar34 = *(int *)((long)param_2 + 0x24) - *(uint *)(param_2 + 3);
                uVar6 = *(uint *)((long)param_2 + 100);
                if (iVar34 + 1U <= uVar6) {
                  uVar6 = iVar34 + 1;
                }
                uVar33 = uVar30;
                uVar66 = uVar6;
                if (uVar30 < uVar6) {
                  lVar46 = *param_2 + (ulong)*(uint *)(param_2 + 3) + -1;
                  do {
                    uVar62 = *(int *)(lVar46 + (ulong)uVar30) -
                             *(int *)(~(ulong)*(uint *)(param_1 + (ulong)(uVar21 - 1) * 8 + 0x2f8) +
                                      lVar46 + (ulong)uVar30);
                    if (uVar62 != 0) {
                      uVar40 = uVar62 >> 0x10;
                      uVar66 = uVar30 + 2;
                      if ((uVar62 & 0xffff) != 0) {
                        uVar40 = uVar62;
                        uVar66 = uVar30;
                      }
                      if ((uVar40 & 0xff) == 0) {
                        uVar66 = uVar66 + 1;
                      }
                      if (uVar6 <= uVar66) {
                        uVar66 = uVar6;
                      }
                      break;
                    }
                    uVar30 = uVar30 + 4;
                  } while (uVar30 < uVar6);
                }
              }
            }
            *(uint *)(param_1 + 0xb84) = uVar21;
            *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
            *(uint *)(param_1 + 0xb88) = uVar66;
            if (uVar33 <= uVar66) break;
            lVar38 = *param_2;
            uVar62 = *(uint *)(param_2 + 3);
            lVar46 = lVar38 + (ulong)uVar62;
            pbVar68 = (byte *)(lVar46 + -1);
            iVar34 = *(int *)((long)param_2 + 0x24) - uVar62;
            uVar30 = iVar34 + 1;
            uVar24 = (uint)uVar54;
            uVar6 = 0xfff - uVar24;
            lVar49 = param_1 + uVar54 * 0x2c;
            uVar40 = *(uint *)(lVar49 + 0x10ef8);
            uVar23 = (ulong)uVar40;
            if (uVar30 < uVar6) {
              uVar6 = iVar34 + 1;
            }
            if (*(char *)(lVar49 + 0x10ee8) == '\0') {
              uVar67 = *(uint *)(param_1 + uVar23 * 0x2c + 0x10ee4);
              uVar59 = uVar23;
              if (uVar54 - 1 == uVar23) goto LAB_00be2d8c;
LAB_00be2dfc:
              uVar40 = *(uint *)(param_1 + uVar54 * 0x2c + 0x10efc);
              if (3 < uVar40) {
                uVar35 = 7;
                if (6 < uVar67) {
                  uVar35 = 10;
                }
                goto LAB_00be2ee8;
              }
              uVar35 = 8;
              if (6 < uVar67) {
                uVar35 = 0xb;
              }
LAB_00be2e28:
              local_80[0] = *(uint *)(param_1 + uVar59 * 0x2c + (ulong)uVar40 * 4 + 0x10f00);
              uVar67 = 1;
              if (uVar40 != 0) {
                do {
                  local_80[uVar67] =
                       *(uint *)(param_1 + uVar59 * 0x2c + (ulong)(uVar67 - 1) * 4 + 0x10f00);
                  uVar67 = uVar67 + 1;
                } while (uVar67 <= uVar40);
                if (3 < uVar67) goto LAB_00be2f10;
              }
              memcpy(local_80 + uVar67,
                     (void *)(param_1 + ((ulong)uVar67 + uVar59 * 0xb) * 4 + 0x10f00),
                     (ulong)(3 - uVar67) * 4 + 4);
            }
            else {
              if (*(char *)(param_1 + uVar54 * 0x2c + 0x10ee9) == '\0') {
                uVar40 = uVar40 - 1;
                uVar35 = *(uint *)(param_1 + (ulong)uVar40 * 0x2c + 0x10ee4);
                iVar34 = -3;
                if (9 < uVar35) {
                  iVar34 = -6;
                }
                uVar67 = 0;
                if (3 < uVar35) {
                  uVar67 = iVar34 + uVar35;
                }
                uVar59 = (ulong)uVar40;
                if (uVar54 != uVar23) goto LAB_00be2dfc;
              }
              else {
                lVar49 = param_1 + 0x10ee4 + uVar54 * 0x2c;
                uVar59 = (ulong)*(uint *)(lVar49 + 8);
                uVar40 = *(uint *)(lVar49 + 0xc);
                bVar20 = 6 < *(uint *)(param_1 + 0x10ee4 + uVar59 * 0x2c);
                iVar34 = 8;
                if (bVar20) {
                  iVar34 = 0xb;
                }
                iVar31 = 7;
                if (bVar20) {
                  iVar31 = 10;
                }
                iVar37 = -3;
                if (bVar20) {
                  iVar37 = -6;
                }
                if (3 < uVar40) {
                  iVar34 = iVar31;
                }
                uVar67 = iVar34 + iVar37;
                if (uVar54 != uVar23) {
                  uVar35 = 8;
                  if (6 < uVar67) {
                    uVar35 = 0xb;
                  }
                  if (uVar40 < 4) goto LAB_00be2e28;
LAB_00be2ee8:
                  lVar49 = param_1 + uVar59 * 0x2c;
                  uVar70 = *(undefined8 *)(lVar49 + 0x10f00);
                  local_80[0] = uVar40 - 4;
                  local_80[1] = (uint)uVar70;
                  local_80[2] = (uint)((ulong)uVar70 >> 0x20);
                  local_80[3] = *(uint *)(lVar49 + 0x10f08);
                  goto LAB_00be2f10;
                }
              }
LAB_00be2d8c:
              if (*(int *)(param_1 + uVar54 * 0x2c + 0x10efc) == 0) {
                uVar35 = 9;
                if (6 < uVar67) {
                  uVar35 = 0xb;
                }
              }
              else {
                iVar34 = -3;
                if (9 < uVar67) {
                  iVar34 = -6;
                }
                uVar35 = 0;
                if (3 < uVar67) {
                  uVar35 = iVar34 + uVar67;
                }
              }
            }
LAB_00be2f10:
            lVar49 = param_1 + uVar54 * 0x2c;
            uVar67 = *(uint *)(param_1 + 0xb90);
            uVar40 = uVar24 + param_5;
            uVar59 = (ulong)(uVar67 & uVar40);
            *(uint *)(lVar49 + 0x10ee4) = uVar35;
            *(ulong *)(lVar49 + 0x10f08) = CONCAT44(local_80[3],local_80[2]);
            *(ulong *)(lVar49 + 0x10f00) = CONCAT44(local_80[1],local_80[0]);
            iVar34 = *(int *)(lVar49 + 0x10ef4);
            bVar11 = *pbVar68;
            pbVar56 = (byte *)(lVar46 + -2);
            uVar23 = (ulong)uVar35;
            uVar7 = *(uint *)(param_1 + 0xb98);
            uVar8 = *(uint *)(param_1 + 0xb94);
            uVar18 = 8 - uVar8;
            uVar53 = (uint)pbVar56[-(ulong)local_80[0]];
            uVar32 = (ulong)((uint)(*pbVar56 >> (ulong)(uVar18 & 0x1f)) +
                            ((uVar7 & uVar40) << (ulong)(uVar8 & 0x1f)));
            uVar43 = bVar11 | 0x100;
            if (uVar35 < 7) {
              iVar31 = 0;
              do {
                uVar63 = uVar43 & 1;
                uVar43 = uVar43 >> 1;
                iVar31 = iVar31 + (uint)(byte)(&DAT_002a00a1)
                                              [(-uVar63 & 0x7f0 ^
                                               (uint)*(ushort *)
                                                      (param_1 + uVar32 * 0x600 +
                                                       (ulong)(uVar43 << 1) + 0xb9c)) >> 4];
              } while (uVar43 != 1);
            }
            else {
              iVar31 = 0;
              uVar63 = 0x100;
              uVar42 = uVar53;
              do {
                bVar20 = uVar43 < 0x8000;
                iVar31 = iVar31 + (uint)(byte)(&DAT_002a00a1)
                                              [(-(uVar43 >> 7 & 1) & 0x7f0 ^
                                               (uint)*(ushort *)
                                                      (param_1 + uVar32 * 0x600 +
                                                       (ulong)(uVar63 + (uVar43 >> 8) +
                                                              (uVar42 << 1 & uVar63)) * 2 + 0xb9c))
                                               >> 4];
                uVar63 = uVar63 & ((uVar43 ^ uVar42) << 1 ^ 0xffffffff);
                uVar43 = uVar43 << 1;
                uVar42 = uVar42 << 1;
              } while (bVar20);
            }
            uVar26 = (ulong)(*(ushort *)(param_1 + uVar23 * 0x20 + uVar59 * 2 + 0x6b9c) >> 4);
            uVar43 = iVar34 + (uint)(byte)(&DAT_002a00a1)[uVar26] + iVar31;
            uVar32 = uVar54 + 1;
            puVar27 = (uint *)(param_1 + uVar32 * 0x2c + 0x10ef4);
            bVar20 = uVar43 < *puVar27;
            uVar63 = *puVar27;
            if (bVar20) {
              lVar46 = param_1 + uVar32 * 0x2c;
              *(uint *)(lVar46 + 0x10ef8) = uVar24;
              *puVar27 = uVar43;
              *(undefined4 *)(lVar46 + 0x10efc) = 0xffffffff;
              *(undefined1 *)(lVar46 + 0x10ee8) = 0;
              uVar63 = uVar43;
            }
            uVar55 = (ulong)(*(ushort *)(param_1 + uVar23 * 2 + 0x6d1c) >> 4);
            iVar34 = iVar34 + (uint)(byte)(&DAT_002a00a1)[uVar26 ^ 0x7f];
            iVar31 = iVar34 + (uint)(byte)(&DAT_002a00a1)[uVar55 ^ 0x7f];
            if (((uVar53 == bVar11) &&
                ((puVar4 = (uint *)(param_1 + uVar32 * 0x2c + 0x10ef8), uVar54 <= *puVar4 ||
                 (*(int *)(param_1 + uVar32 * 0x2c + 0x10efc) != 0)))) &&
               (uVar42 = iVar31 + (uint)(byte)(&DAT_002a00a1)
                                              [*(ushort *)(param_1 + uVar23 * 2 + 0x6d34) >> 4] +
                         (uint)(byte)(&DAT_002a00a1)
                                     [*(ushort *)(param_1 + uVar23 * 0x20 + uVar59 * 2 + 0x6d7c) >>
                                      4], uVar42 <= uVar63)) {
              *puVar27 = uVar42;
              lVar46 = param_1 + uVar32 * 0x2c;
              *puVar4 = uVar24;
              *(undefined4 *)(lVar46 + 0x10efc) = 0;
              *(undefined1 *)(lVar46 + 0x10ee8) = 0;
              bVar20 = true;
            }
            if (1 < uVar6) {
              uVar63 = uVar6;
              if (uVar33 <= uVar6) {
                uVar63 = uVar33;
              }
              if (!bVar20 && uVar53 != bVar11) {
                uVar53 = uVar6;
                if (uVar33 + 1 <= uVar6) {
                  uVar53 = uVar33 + 1;
                }
                uVar42 = uVar53;
                if (1 < uVar53) {
                  uVar54 = 1;
                  do {
                    uVar36 = *(int *)(pbVar68 + uVar54) -
                             *(int *)(pbVar56 + -(ulong)local_80[0] + uVar54);
                    uVar41 = (uint)uVar54;
                    if (uVar36 != 0) {
                      uVar64 = uVar36 >> 0x10;
                      uVar42 = uVar41 + 2;
                      if ((uVar36 & 0xffff) != 0) {
                        uVar64 = uVar36;
                        uVar42 = uVar41;
                      }
                      if ((uVar64 & 0xff) == 0) {
                        uVar42 = uVar42 + 1;
                      }
                      if (uVar53 <= uVar42) {
                        uVar42 = uVar53;
                      }
                      break;
                    }
                    uVar54 = (ulong)(uVar41 + 4);
                  } while (uVar41 + 4 < uVar53);
                }
                if (uVar42 - 3 < 0xfffffffe) {
                  iVar37 = -3;
                  if (9 < uVar35) {
                    iVar37 = -6;
                  }
                  uVar53 = 0;
                  if (3 < uVar35) {
                    uVar53 = iVar37 + uVar35;
                  }
                  uVar26 = (ulong)uVar53;
                  uVar47 = (ulong)(uVar67 & uVar40 + 1);
                  uVar16 = *(ushort *)(param_1 + uVar26 * 0x20 + uVar47 * 2 + 0x6b9c);
                  uVar17 = *(ushort *)(param_1 + uVar26 * 2 + 0x6d1c);
                  uVar53 = uVar42 + uVar24;
                  uVar54 = (ulong)uVar53;
                  if ((uint)local_88 < uVar53) {
                    uVar51 = uVar54 - local_88;
                    if (uVar51 < 2) {
LAB_00be3380:
                      uVar51 = local_88;
                      if ((uVar53 - (int)local_88 & 7) != 0) {
                        uVar58 = (ulong)((iVar25 + uVar42) - (int)local_88) & 7;
                        puVar61 = (undefined4 *)(lVar3 + local_88 * 0x2c);
                        do {
                          uVar51 = uVar51 + 1;
                          uVar58 = uVar58 - 1;
                          *puVar61 = 0x40000000;
                          puVar61 = puVar61 + 0xb;
                        } while (uVar58 != 0);
                      }
                      if (6 < ~local_88 + uVar54) {
                        lVar46 = (uVar42 + iVar25) - uVar51;
                        puVar61 = (undefined4 *)(lVar45 + uVar51 * 0x2c);
                        do {
                          puVar61[-0x2c] = 0x40000000;
                          puVar61[-0x21] = 0x40000000;
                          puVar61[-0x16] = 0x40000000;
                          puVar61[-0xb] = 0x40000000;
                          *puVar61 = 0x40000000;
                          puVar61[0xb] = 0x40000000;
                          puVar61[0x16] = 0x40000000;
                          lVar46 = lVar46 + -8;
                          puVar61[0x21] = 0x40000000;
                          puVar61 = puVar61 + 0x58;
                        } while (lVar46 != 0);
                      }
                    }
                    else {
                      uVar58 = uVar51 & 0xfffffffffffffffe;
                      lVar46 = 0;
                      if (uVar58 - 2 != 0) {
                        uVar39 = (((uVar42 + iVar25) - local_88 & 0xfffffffffffffffe) - 2 >> 1) + 1
                                 & 0xfffffffffffffffe;
                        puVar61 = (undefined4 *)(lVar28 + local_88 * 0x2c);
                        do {
                          puVar61[-0x16] = 0x40000000;
                          puVar61[-0xb] = 0x40000000;
                          *puVar61 = 0x40000000;
                          lVar46 = lVar46 + 4;
                          uVar39 = uVar39 - 2;
                          puVar61[0xb] = 0x40000000;
                          puVar61 = puVar61 + 0x2c;
                        } while (uVar39 != 0);
                      }
                      if (((uVar58 - 2 >> 1) + 1 & 1) != 0) {
                        lVar46 = param_1 + (lVar46 + local_88) * 0x2c;
                        *(undefined4 *)(lVar46 + 0x10f20) = 0x40000000;
                        *(undefined4 *)(lVar46 + 0x10f4c) = 0x40000000;
                      }
                      if (uVar51 != uVar58) {
                        local_88 = uVar58 + local_88;
                        goto LAB_00be3380;
                      }
                    }
                    local_88 = (ulong)uVar53;
                  }
                  uVar43 = uVar43 + (byte)(&DAT_002a00a1)[(ulong)(uVar16 >> 4) ^ 0x7f] +
                           (uint)(byte)(&DAT_002a00a1)[(ulong)(uVar17 >> 4) ^ 0x7f] +
                           *(int *)(param_1 + uVar47 * 0x440 + (ulong)(uVar42 - 3) * 4 + 0xbe4c) +
                           (uint)(byte)(&DAT_002a00a1)
                                       [*(ushort *)(param_1 + uVar26 * 2 + 0x6d34) >> 4] +
                           (uint)(byte)(&DAT_002a00a1)
                                       [(ulong)(*(ushort *)
                                                 (param_1 + uVar26 * 0x20 + uVar47 * 2 + 0x6d7c) >>
                                               4) ^ 0x7f];
                  puVar27 = (uint *)(param_1 + uVar54 * 0x2c + 0x10ef4);
                  if (uVar43 < *puVar27) {
                    lVar46 = param_1 + uVar54 * 0x2c;
                    *(int *)(lVar46 + 0x10ef8) = (int)uVar32;
                    *(undefined4 *)(lVar46 + 0x10efc) = 0;
                    *puVar27 = uVar43;
                    *(undefined2 *)(lVar46 + 0x10ee8) = 1;
                  }
                }
              }
              lVar46 = 0;
              sVar15 = *(short *)pbVar68;
              lVar49 = param_1 + uVar23 * 2;
              lVar5 = 8;
              if (6 < uVar35) {
                lVar5 = 0xb;
              }
              uVar54 = 2;
              uVar43 = 2;
              pbVar65 = pbVar56 + -(ulong)local_80[0];
              if (sVar15 == *(short *)pbVar65) goto LAB_00be3568;
              while (lVar46 = lVar46 + 1, lVar46 != 4) {
                while( true ) {
                  uVar43 = (uint)uVar54;
                  pbVar65 = pbVar56 + -(ulong)local_80[lVar46];
                  if (sVar15 != *(short *)pbVar65) break;
LAB_00be3568:
                  iVar37 = (int)lVar46;
                  uVar53 = uVar63;
                  if (uVar63 < 3) {
joined_r0x00be35bc:
                    uVar54 = (ulong)(uVar53 + uVar24);
                    if (uVar53 + uVar24 <= (uint)local_88) goto LAB_00be3754;
LAB_00be35c0:
                    uVar26 = uVar54 - local_88;
                    if (uVar26 < 2) {
LAB_00be3660:
                      uVar26 = local_88;
                      if (((int)uVar54 - (int)local_88 & 7U) != 0) {
                        uVar47 = (ulong)((iVar25 + uVar53) - (int)local_88) & 7;
                        puVar61 = (undefined4 *)(lVar3 + local_88 * 0x2c);
                        do {
                          uVar26 = uVar26 + 1;
                          uVar47 = uVar47 - 1;
                          *puVar61 = 0x40000000;
                          puVar61 = puVar61 + 0xb;
                        } while (uVar47 != 0);
                      }
                      if (6 < ~local_88 + uVar54) {
                        lVar50 = (iVar25 + uVar53) - uVar26;
                        puVar61 = (undefined4 *)(lVar45 + uVar26 * 0x2c);
                        do {
                          puVar61[-0x2c] = 0x40000000;
                          puVar61[-0x21] = 0x40000000;
                          puVar61[-0x16] = 0x40000000;
                          puVar61[-0xb] = 0x40000000;
                          *puVar61 = 0x40000000;
                          puVar61[0xb] = 0x40000000;
                          puVar61[0x16] = 0x40000000;
                          lVar50 = lVar50 + -8;
                          puVar61[0x21] = 0x40000000;
                          puVar61 = puVar61 + 0x58;
                        } while (lVar50 != 0);
                      }
                    }
                    else {
                      uVar47 = uVar26 & 0xfffffffffffffffe;
                      lVar50 = 0;
                      if (uVar47 - 2 != 0) {
                        uVar51 = (((iVar25 + uVar53) - local_88 & 0xfffffffffffffffe) - 2 >> 1) + 1
                                 & 0xfffffffffffffffe;
                        puVar61 = (undefined4 *)(lVar28 + local_88 * 0x2c);
                        do {
                          puVar61[-0x16] = 0x40000000;
                          puVar61[-0xb] = 0x40000000;
                          *puVar61 = 0x40000000;
                          lVar50 = lVar50 + 4;
                          uVar51 = uVar51 - 2;
                          puVar61[0xb] = 0x40000000;
                          puVar61 = puVar61 + 0x2c;
                        } while (uVar51 != 0);
                      }
                      if (((uVar47 - 2 >> 1) + 1 & 1) != 0) {
                        lVar50 = param_1 + (lVar50 + local_88) * 0x2c;
                        *(undefined4 *)(lVar50 + 0x10f20) = 0x40000000;
                        *(undefined4 *)(lVar50 + 0x10f4c) = 0x40000000;
                      }
                      if (uVar26 != uVar47) {
                        local_88 = uVar47 + local_88;
                        goto LAB_00be3660;
                      }
                    }
                    uVar26 = (ulong)(*(ushort *)(lVar49 + 0x6d34) >> 4);
                    local_88 = uVar54;
                    if (lVar46 != 0) goto LAB_00be3764;
LAB_00be3704:
                    iVar69 = (int)uVar54;
                    bVar11 = (&DAT_002a00a1)[uVar26];
                    uVar54 = (ulong)(*(ushort *)(param_1 + uVar23 * 0x20 + uVar59 * 2 + 0x6d7c) >> 4
                                    ) ^ 0x7f;
LAB_00be3784:
                    uVar42 = (uint)(byte)(&DAT_002a00a1)[uVar54];
                  }
                  else {
                    uVar54 = 2;
                    do {
                      uVar42 = *(int *)(pbVar68 + uVar54) - *(int *)(pbVar65 + uVar54);
                      uVar36 = (uint)uVar54;
                      if (uVar42 != 0) {
                        uVar41 = uVar42 >> 0x10;
                        uVar53 = uVar36 + 2;
                        if ((uVar42 & 0xffff) != 0) {
                          uVar41 = uVar42;
                          uVar53 = uVar36;
                        }
                        uVar53 = uVar53 | (uVar41 & 0xff) == 0;
                        if (uVar63 <= uVar53) {
                          uVar53 = uVar63;
                        }
                        goto joined_r0x00be35bc;
                      }
                      uVar54 = (ulong)(uVar36 + 4);
                    } while (uVar36 + 4 < uVar63);
                    uVar54 = (ulong)(uVar63 + uVar24);
                    if ((uint)local_88 < uVar63 + uVar24) goto LAB_00be35c0;
LAB_00be3754:
                    uVar26 = (ulong)(*(ushort *)(lVar49 + 0x6d34) >> 4);
                    if (lVar46 == 0) goto LAB_00be3704;
LAB_00be3764:
                    iVar69 = (int)uVar54;
                    bVar11 = (&DAT_002a00a1)[uVar26 ^ 0x7f];
                    uVar54 = (ulong)(*(ushort *)(lVar49 + 0x6d4c) >> 4);
                    if (lVar46 == 1) goto LAB_00be3784;
                    uVar42 = (uint)(byte)(&DAT_002a00a1)[uVar54 ^ 0x7f] + (uint)bVar11;
                    bVar11 = (&DAT_002a00a1)
                             [((ulong)(2 - iVar37) & 0x7f0 ^ (ulong)*(ushort *)(lVar49 + 0x6d64)) >>
                              4];
                  }
                  iVar1 = (uint)bVar11 + iVar31 + uVar42;
                  piVar44 = (int *)(param_1 + 0xbe4c + uVar59 * 0x440 + (ulong)(uVar53 - 2) * 4);
                  uVar42 = uVar53;
                  do {
                    uVar36 = *piVar44 + iVar1;
                    puVar27 = (uint *)(param_1 + (ulong)(iVar25 + uVar42) * 0x2c + 0x10ef4);
                    if (uVar36 < *puVar27) {
                      lVar50 = param_1 + (ulong)(iVar25 + uVar42) * 0x2c;
                      *(uint *)(lVar50 + 0x10ef8) = uVar24;
                      *(int *)(lVar50 + 0x10efc) = iVar37;
                      *puVar27 = uVar36;
                      *(undefined1 *)(lVar50 + 0x10ee8) = 0;
                    }
                    uVar42 = uVar42 - 1;
                    piVar44 = piVar44 + -1;
                  } while (1 < uVar42);
                  uVar42 = uVar53 + 1;
                  if (lVar46 == 0) {
                    uVar43 = uVar53 + 1;
                  }
                  uVar54 = (ulong)uVar43;
                  uVar43 = uVar42 + uVar33;
                  uVar36 = uVar6;
                  if (uVar43 <= uVar6) {
                    uVar36 = uVar43;
                  }
                  uVar41 = uVar42;
                  if (uVar42 < uVar36) {
                    iVar52 = 0;
                    uVar64 = local_f4;
                    if (uVar43 <= local_f4) {
                      uVar64 = uVar43;
                    }
                    if (uVar30 <= uVar64) {
                      uVar64 = uVar30;
                    }
                    pbVar22 = pbVar65;
                    pbVar60 = pbVar68;
                    do {
                      if (pbVar60[uVar42] != pbVar22[uVar42]) {
                        uVar41 = uVar42 + iVar52;
                        break;
                      }
                      iVar52 = iVar52 + 1;
                      pbVar22 = pbVar22 + 1;
                      pbVar60 = pbVar60 + 1;
                      uVar41 = uVar36;
                    } while ((uVar42 - uVar64) + iVar52 != 0);
                  }
                  uVar42 = uVar41 - uVar42;
                  if (1 < uVar42) {
                    iVar52 = 0;
                    uVar43 = uVar53 + uVar40;
                    iVar10 = *(int *)(param_1 + uVar59 * 0x440 + (ulong)(uVar53 - 2) * 4 + 0xbe4c);
                    bVar11 = (&DAT_002a00a1)
                             [*(ushort *)
                               (param_1 + lVar5 * 0x20 + (ulong)(uVar43 & uVar67) * 2 + 0x6b9c) >> 4
                             ];
                    uVar36 = 0x100;
                    uVar64 = pbVar68[uVar53] | 0x100;
                    uVar57 = (uint)pbVar65[uVar53];
                    do {
                      bVar20 = uVar64 < 0x8000;
                      iVar52 = iVar52 + (uint)(byte)(&DAT_002a00a1)
                                                    [(-(uVar64 >> 7 & 1) & 0x7f0 ^
                                                     (uint)*(ushort *)
                                                            (param_1 + (ulong)((uint)(pbVar68[uVar53
                                                                                              - 1]
                                                                                     >> (ulong)(
                                                  uVar18 & 0x1f)) +
                                                  ((uVar43 & uVar7) << (ulong)(uVar8 & 0x1f))) *
                                                  0x600 + (ulong)(uVar36 + (uVar64 >> 8) +
                                                                 (uVar57 << 1 & uVar36)) * 2 + 0xb9c
                                                  )) >> 4];
                      uVar36 = uVar36 & ((uVar64 ^ uVar57) << 1 ^ 0xffffffff);
                      uVar64 = uVar64 << 1;
                      uVar57 = uVar57 << 1;
                    } while (bVar20);
                    uVar26 = (ulong)(uVar43 + 1 & uVar67);
                    uVar17 = *(ushort *)(param_1 + uVar26 * 2 + 0x6c3c);
                    uVar16 = *(ushort *)(param_1 + 0x6d26);
                    uVar43 = uVar42 + iVar69 + 1;
                    uVar47 = (ulong)uVar43;
                    if ((uint)local_88 < uVar43) {
                      uVar51 = uVar47 - local_88;
                      if (1 < uVar51) {
                        uVar58 = uVar51 & 0xfffffffffffffffe;
                        lVar50 = 0;
                        if (uVar58 - 2 != 0) {
                          uVar39 = (((iVar25 + uVar41) - local_88 & 0xfffffffffffffffe) - 2 >> 1) +
                                   1 & 0xfffffffffffffffe;
                          puVar61 = (undefined4 *)(lVar28 + local_88 * 0x2c);
                          do {
                            puVar61[-0x16] = 0x40000000;
                            puVar61[-0xb] = 0x40000000;
                            *puVar61 = 0x40000000;
                            lVar50 = lVar50 + 4;
                            uVar39 = uVar39 - 2;
                            puVar61[0xb] = 0x40000000;
                            puVar61 = puVar61 + 0x2c;
                          } while (uVar39 != 0);
                        }
                        if (((uVar58 - 2 >> 1) + 1 & 1) != 0) {
                          lVar50 = param_1 + (lVar50 + local_88) * 0x2c;
                          *(undefined4 *)(lVar50 + 0x10f20) = 0x40000000;
                          *(undefined4 *)(lVar50 + 0x10f4c) = 0x40000000;
                        }
                        if (uVar51 == uVar58) {
                          local_88 = (ulong)uVar43;
                          goto LAB_00be3b70;
                        }
                        local_88 = uVar58 + local_88;
                      }
                      uVar51 = local_88;
                      if ((uVar43 - (int)local_88 & 7) != 0) {
                        uVar58 = (ulong)((iVar25 + uVar41) - (int)local_88) & 7;
                        puVar61 = (undefined4 *)(lVar3 + local_88 * 0x2c);
                        do {
                          uVar51 = uVar51 + 1;
                          uVar58 = uVar58 - 1;
                          *puVar61 = 0x40000000;
                          puVar61 = puVar61 + 0xb;
                        } while (uVar58 != 0);
                      }
                      if (~local_88 + uVar47 < 7) {
                        local_88 = (ulong)uVar43;
                      }
                      else {
                        lVar50 = (iVar25 + uVar41) - uVar51;
                        puVar61 = (undefined4 *)(lVar45 + uVar51 * 0x2c);
                        do {
                          puVar61[-0x2c] = 0x40000000;
                          puVar61[-0x21] = 0x40000000;
                          puVar61[-0x16] = 0x40000000;
                          puVar61[-0xb] = 0x40000000;
                          *puVar61 = 0x40000000;
                          puVar61[0xb] = 0x40000000;
                          puVar61[0x16] = 0x40000000;
                          lVar50 = lVar50 + -8;
                          puVar61[0x21] = 0x40000000;
                          puVar61 = puVar61 + 0x58;
                        } while (lVar50 != 0);
                        local_88 = (ulong)uVar43;
                      }
                    }
LAB_00be3b70:
                    uVar43 = iVar10 + iVar1 + (uint)bVar11 + iVar52 +
                             (uint)(byte)(&DAT_002a00a1)[(ulong)(uVar17 >> 4) ^ 0x7f] +
                             (uint)(byte)(&DAT_002a00a1)[(ulong)(uVar16 >> 4) ^ 0x7f] +
                             *(int *)(param_1 + uVar26 * 0x440 + (ulong)(uVar42 - 2) * 4 + 0xbe4c) +
                             (uint)(byte)(&DAT_002a00a1)[*(ushort *)(param_1 + 0x6d3e) >> 4] +
                             (uint)(byte)(&DAT_002a00a1)
                                         [(ulong)(*(ushort *)(param_1 + uVar26 * 2 + 0x6e1c) >> 4) ^
                                          0x7f];
                    puVar27 = (uint *)(param_1 + uVar47 * 0x2c + 0x10ef4);
                    if (uVar43 < *puVar27) {
                      lVar50 = param_1 + uVar47 * 0x2c;
                      *(int *)(lVar50 + 0x10ef8) = iVar69 + 1;
                      *(undefined4 *)(lVar50 + 0x10efc) = 0;
                      *(undefined2 *)(lVar50 + 0x10ee8) = 0x101;
                      *(uint *)(lVar50 + 0x10eec) = uVar24;
                      *puVar27 = uVar43;
                      *(int *)(lVar50 + 0x10ef0) = iVar37;
                    }
                  }
                  lVar46 = lVar46 + 1;
                  if (lVar46 == 4) goto LAB_00be3c78;
                }
              }
LAB_00be3c78:
              uVar40 = uVar66;
              if (uVar63 < uVar66) {
                uVar21 = 0;
                do {
                  lVar46 = param_1 + (ulong)uVar21 * 8;
                  uVar21 = uVar21 + 1;
                } while (*(uint *)(lVar46 + 0x2f4) < uVar63);
                *(uint *)(lVar46 + 0x2f4) = uVar63;
                uVar40 = uVar63;
              }
              if ((uint)uVar54 <= uVar40) {
                uVar40 = uVar40 + uVar24;
                uVar26 = (ulong)uVar40;
                uVar23 = local_88;
                if ((uint)local_88 < uVar40) {
                  uVar47 = uVar26 - local_88;
                  uVar23 = uVar26;
                  if (1 < uVar47) {
                    uVar51 = uVar47 & 0xfffffffffffffffe;
                    lVar46 = 0;
                    if (uVar51 - 2 != 0) {
                      uVar43 = uVar33;
                      if (uVar66 <= uVar33) {
                        uVar43 = uVar66;
                      }
                      if (local_f4 <= uVar43) {
                        uVar43 = local_f4;
                      }
                      if (uVar30 <= uVar43) {
                        uVar43 = uVar30;
                      }
                      uVar58 = (((uVar43 + iVar25) - local_88 & 0xfffffffffffffffe) - 2 >> 1) + 1 &
                               0xfffffffffffffffe;
                      puVar61 = (undefined4 *)(lVar28 + local_88 * 0x2c);
                      do {
                        puVar61[-0x16] = 0x40000000;
                        puVar61[-0xb] = 0x40000000;
                        *puVar61 = 0x40000000;
                        lVar46 = lVar46 + 4;
                        uVar58 = uVar58 - 2;
                        puVar61[0xb] = 0x40000000;
                        puVar61 = puVar61 + 0x2c;
                      } while (uVar58 != 0);
                    }
                    if (((uVar51 - 2 >> 1) + 1 & 1) != 0) {
                      lVar46 = param_1 + (lVar46 + local_88) * 0x2c;
                      *(undefined4 *)(lVar46 + 0x10f20) = 0x40000000;
                      *(undefined4 *)(lVar46 + 0x10f4c) = 0x40000000;
                    }
                    if (uVar47 == uVar51) goto LAB_00be3e74;
                    local_88 = uVar51 + local_88;
                  }
                  uVar47 = local_88;
                  if ((uVar40 - (int)local_88 & 7) != 0) {
                    uVar40 = uVar33;
                    if (uVar66 <= uVar33) {
                      uVar40 = uVar66;
                    }
                    if (local_f4 <= uVar40) {
                      uVar40 = local_f4;
                    }
                    if (uVar30 <= uVar40) {
                      uVar40 = uVar30;
                    }
                    lVar46 = ((ulong)((iVar25 + uVar40) - (int)local_88) & 7) * 0x2c;
                    puVar61 = (undefined4 *)(lVar3 + local_88 * 0x2c);
                    do {
                      uVar47 = uVar47 + 1;
                      lVar46 = lVar46 + -0x2c;
                      *puVar61 = 0x40000000;
                      puVar61 = puVar61 + 0xb;
                    } while (lVar46 != 0);
                  }
                  if (6 < ~local_88 + uVar26) {
                    uVar40 = uVar33;
                    if (uVar66 <= uVar33) {
                      uVar40 = uVar66;
                    }
                    if (local_f4 <= uVar40) {
                      uVar40 = local_f4;
                    }
                    if (uVar30 <= uVar40) {
                      uVar40 = uVar30;
                    }
                    lVar46 = uVar47 - (uVar40 + iVar25);
                    puVar61 = (undefined4 *)(lVar45 + uVar47 * 0x2c);
                    do {
                      puVar61[-0x2c] = 0x40000000;
                      puVar61[-0x21] = 0x40000000;
                      puVar61[-0x16] = 0x40000000;
                      puVar61[-0xb] = 0x40000000;
                      *puVar61 = 0x40000000;
                      puVar61[0xb] = 0x40000000;
                      puVar61[0x16] = 0x40000000;
                      lVar46 = lVar46 + 8;
                      puVar61[0x21] = 0x40000000;
                      puVar61 = puVar61 + 0x58;
                    } while (lVar46 != 0);
                  }
                }
LAB_00be3e74:
                local_88 = uVar23;
                bVar11 = (&DAT_002a00a1)[uVar55];
                uVar66 = 0xffffffff;
                do {
                  uVar66 = uVar66 + 1;
                } while (*(uint *)(param_1 + (ulong)uVar66 * 8 + 0x2f4) < (uint)uVar54);
                lVar46 = 7;
                if (6 < uVar35) {
                  lVar46 = 10;
                }
                uVar23 = uVar54;
                do {
                  uVar30 = 0;
                  lVar49 = param_1 + (ulong)uVar66 * 8;
                  uVar40 = *(uint *)(lVar49 + 0x2f8);
                  uVar26 = (ulong)uVar40;
                  iVar31 = 0x12;
                  if ((int)uVar40 < 0) {
                    iVar31 = 0x1e;
                  }
                  lVar5 = 0x24;
                  if ((int)uVar40 < 0) {
                    lVar5 = 0x3c;
                  }
                  iVar37 = 6;
                  if (0x7ffff < uVar40) {
                    iVar37 = iVar31;
                  }
                  lVar50 = 0xc;
                  if (0x7ffff < uVar40) {
                    lVar50 = lVar5;
                  }
                  uVar35 = *(uint *)(lVar49 + 0x2f4);
                  iVar31 = (int)uVar23;
                  while( true ) {
                    uVar43 = iVar31 + uVar30;
                    uVar53 = uVar43 - 2;
                    if (5 < uVar43) {
                      uVar53 = 3;
                    }
                    if (uVar40 < 0x80) {
                      iVar69 = *(int *)(param_1 + (ulong)uVar53 * 0x200 + uVar26 * 4 + 0x10690);
                    }
                    else {
                      iVar69 = *(int *)(param_1 + (uVar26 & 0xf) * 4 + 0x10e98) +
                               *(int *)(param_1 + (ulong)uVar53 * 0x100 +
                                        (lVar50 + (ulong)(byte)(&DAT_0029dfb8)[uVar40 >> iVar37]) *
                                        4 + 0x10290);
                    }
                    uVar53 = iVar34 + (uint)bVar11 + iVar69 +
                             *(int *)(param_1 + uVar59 * 0x440 + (ulong)(iVar31 + -2 + uVar30) * 4 +
                                     0x7604);
                    uVar23 = (ulong)(local_ac + iVar31 + uVar30 + 1);
                    puVar27 = (uint *)(param_1 + uVar23 * 0x2c + 0x10ef4);
                    if (uVar53 < *puVar27) {
                      lVar49 = param_1 + uVar23 * 0x2c;
                      *(uint *)(lVar49 + 0x10ef8) = uVar24;
                      *(uint *)(lVar49 + 0x10efc) = uVar40 + 4;
                      *puVar27 = uVar53;
                      *(undefined1 *)(lVar49 + 0x10ee8) = 0;
                    }
                    if (uVar43 == uVar35) break;
                    uVar30 = uVar30 + 1;
                  }
                  uVar54 = (ulong)((int)uVar54 + uVar30 + 1);
                  uVar43 = iVar31 + uVar30;
                  uVar35 = uVar43 + 1;
                  uVar23 = (ulong)uVar35;
                  uVar63 = uVar33 + 1 + iVar31 + uVar30;
                  uVar42 = uVar6;
                  if (uVar63 <= uVar6) {
                    uVar42 = uVar63;
                  }
                  uVar55 = (ulong)uVar35;
                  if (uVar35 < uVar42) {
                    uVar55 = uVar54;
                    do {
                      if (pbVar68[uVar55] !=
                          *(byte *)(((lVar38 + (ulong)uVar62) - uVar26) + uVar55 + -2)) break;
                      uVar55 = uVar55 + 1;
                    } while (uVar55 < uVar42);
                  }
                  iVar37 = (int)uVar55;
                  uVar35 = ~uVar30 + (iVar37 - iVar31);
                  if (1 < uVar35) {
                    iVar69 = 0;
                    uVar63 = local_f8 + iVar31 + uVar30;
                    uVar42 = uVar63 & uVar67;
                    bVar12 = (&DAT_002a00a1)
                             [*(ushort *)(param_1 + lVar46 * 0x20 + (ulong)uVar42 * 2 + 0x6b9c) >> 4
                             ];
                    uVar36 = 0x100;
                    uVar41 = pbVar68[uVar43] | 0x100;
                    uVar43 = (uint)pbVar56[uVar43 - uVar26];
                    do {
                      bVar20 = uVar41 < 0x8000;
                      iVar69 = iVar69 + (uint)(byte)(&DAT_002a00a1)
                                                    [(-(uVar41 >> 7 & 1) & 0x7f0 ^
                                                     (uint)*(ushort *)
                                                            (param_1 + (ulong)((uint)(pbVar68[(
                                                  iVar31 + uVar30) - 1] >> (ulong)(uVar18 & 0x1f)) +
                                                  ((uVar63 & uVar7) << (ulong)(uVar8 & 0x1f))) *
                                                  0x600 + (ulong)(uVar36 + (uVar41 >> 8) +
                                                                 (uVar43 << 1 & uVar36)) * 2 + 0xb9c
                                                  )) >> 4];
                      uVar36 = uVar36 & ((uVar41 ^ uVar43) << 1 ^ 0xffffffff);
                      uVar41 = uVar41 << 1;
                      uVar43 = uVar43 << 1;
                    } while (bVar20);
                    uVar26 = (ulong)(uVar42 + 1 & uVar67);
                    uVar17 = *(ushort *)(param_1 + uVar26 * 2 + 0x6c1c);
                    uVar16 = *(ushort *)(param_1 + 0x6d24);
                    iVar1 = local_ac + iVar31 + uVar30 + 2;
                    uVar35 = uVar35 + iVar1;
                    uVar55 = (ulong)uVar35;
                    uVar43 = (uint)local_88;
                    if (uVar43 < uVar35) {
                      uVar47 = uVar55 - local_88;
                      if (1 < uVar47) {
                        uVar51 = uVar47 & 0xfffffffffffffffe;
                        lVar49 = 0;
                        if (uVar51 - 2 == 0) {
LAB_00be4264:
                          lVar49 = param_1 + (lVar49 + local_88) * 0x2c;
                          *(undefined4 *)(lVar49 + 0x10f20) = 0x40000000;
                          *(undefined4 *)(lVar49 + 0x10f4c) = 0x40000000;
                        }
                        else {
                          uVar58 = (((uint)(iVar25 + iVar37) - local_88 & 0xfffffffffffffffe) - 2 >>
                                   1) + 1 & 0xfffffffffffffffe;
                          puVar61 = (undefined4 *)(lVar28 + local_88 * 0x2c);
                          do {
                            puVar61[-0x16] = 0x40000000;
                            puVar61[-0xb] = 0x40000000;
                            *puVar61 = 0x40000000;
                            lVar49 = lVar49 + 4;
                            uVar58 = uVar58 - 2;
                            puVar61[0xb] = 0x40000000;
                            puVar61 = puVar61 + 0x2c;
                          } while (uVar58 != 0);
                          if (((uVar51 - 2 >> 1) + 1 & 1) != 0) goto LAB_00be4264;
                        }
                        if (uVar47 == uVar51) {
                          local_88 = (ulong)uVar35;
                          goto LAB_00be4358;
                        }
                        local_88 = uVar51 + local_88;
                        uVar43 = (uint)local_88;
                      }
                      uVar47 = local_88;
                      if ((uVar35 - uVar43 & 7) != 0) {
                        uVar51 = (ulong)(uint)((iVar25 + iVar37) - (int)local_88) & 7;
                        puVar61 = (undefined4 *)(lVar3 + local_88 * 0x2c);
                        do {
                          uVar47 = uVar47 + 1;
                          uVar51 = uVar51 - 1;
                          *puVar61 = 0x40000000;
                          puVar61 = puVar61 + 0xb;
                        } while (uVar51 != 0);
                      }
                      if (~local_88 + uVar55 < 7) {
                        local_88 = (ulong)uVar35;
                      }
                      else {
                        lVar49 = (uint)(iVar25 + iVar37) - uVar47;
                        puVar61 = (undefined4 *)(lVar45 + uVar47 * 0x2c);
                        do {
                          puVar61[-0x2c] = 0x40000000;
                          puVar61[-0x21] = 0x40000000;
                          puVar61[-0x16] = 0x40000000;
                          puVar61[-0xb] = 0x40000000;
                          *puVar61 = 0x40000000;
                          puVar61[0xb] = 0x40000000;
                          puVar61[0x16] = 0x40000000;
                          lVar49 = lVar49 + -8;
                          puVar61[0x21] = 0x40000000;
                          puVar61 = puVar61 + 0x58;
                        } while (lVar49 != 0);
                        local_88 = (ulong)uVar35;
                      }
                    }
LAB_00be4358:
                    uVar30 = uVar53 + bVar12 + iVar69 +
                             (uint)(byte)(&DAT_002a00a1)[(ulong)(uVar17 >> 4) ^ 0x7f] +
                             (uint)(byte)(&DAT_002a00a1)[(ulong)(uVar16 >> 4) ^ 0x7f] +
                             *(int *)(param_1 + uVar26 * 0x440 +
                                      (ulong)(((iVar37 - iVar31) - uVar30) - 3) * 4 + 0xbe4c) +
                             (uint)(byte)(&DAT_002a00a1)[*(ushort *)(param_1 + 0x6d3c) >> 4] +
                             (uint)(byte)(&DAT_002a00a1)
                                         [(ulong)(*(ushort *)(param_1 + uVar26 * 2 + 0x6dfc) >> 4) ^
                                          0x7f];
                    puVar27 = (uint *)(param_1 + uVar55 * 0x2c + 0x10ef4);
                    if (uVar30 < *puVar27) {
                      lVar49 = param_1 + uVar55 * 0x2c;
                      *(int *)(lVar49 + 0x10ef8) = iVar1;
                      *(undefined4 *)(lVar49 + 0x10efc) = 0;
                      *(undefined2 *)(lVar49 + 0x10ee8) = 0x101;
                      *puVar27 = uVar30;
                      *(uint *)(lVar49 + 0x10eec) = uVar24;
                      *(uint *)(lVar49 + 0x10ef0) = uVar40 + 4;
                    }
                  }
                  uVar66 = uVar66 + 1;
                } while (uVar66 != uVar21);
              }
            }
            iVar25 = iVar25 + 1;
            local_f4 = local_f4 - 1;
            local_f8 = local_f8 + 1;
            local_ac = local_ac + 1;
            uVar54 = uVar32;
          } while (uVar32 < local_88);
          lVar28 = param_1 + (uVar54 & 0xffffffff) * 0x2c;
          uVar21 = *(uint *)(lVar28 + 0x10ef8);
          uVar48 = *(undefined4 *)(lVar28 + 0x10efc);
          *(int *)(param_1 + 0x10edc) = (int)uVar54;
          do {
            while( true ) {
              uVar23 = (ulong)uVar21;
              puVar61 = (undefined4 *)(param_1 + 0x10ee4 + uVar23 * 0x2c + 0x18);
              if (*(char *)(param_1 + 0x10ee4 + (uVar54 & 0xffffffff) * 0x2c + 4) == '\0') break;
              *(undefined1 *)(param_1 + 0x10ee4 + uVar23 * 0x2c + 4) = 0;
              if (*(char *)(param_1 + 0x10ee4 + (uVar54 & 0xffffffff) * 0x2c + 5) != '\0') {
                lVar28 = param_1 + 0x10ee4 + (ulong)(uVar21 - 1) * 0x2c;
                *(undefined1 *)(lVar28 + 4) = 0;
                *(undefined8 *)(lVar28 + 0x14) =
                     *(undefined8 *)(param_1 + 0x10ee4 + (uVar54 & 0xffffffff) * 0x2c + 8);
              }
              *puVar61 = uVar48;
              *(int *)(param_1 + uVar23 * 0x2c + 0x10ef8) = (int)uVar54;
              bVar20 = uVar21 == 0;
              uVar54 = uVar23;
              uVar21 = uVar21 - 1;
              uVar48 = 0xffffffff;
              if (bVar20) goto LAB_00be4784;
            }
            uVar9 = *puVar61;
            uVar66 = *(uint *)(param_1 + uVar23 * 0x2c + 0x10ef8);
            *puVar61 = uVar48;
            *(int *)(param_1 + uVar23 * 0x2c + 0x10ef8) = (int)uVar54;
            bVar20 = uVar21 != 0;
            uVar54 = uVar23;
            uVar21 = uVar66;
            uVar48 = uVar9;
          } while (bVar20);
LAB_00be4784:
          *(uint *)(param_1 + 0x10ee0) = *(uint *)(param_1 + 0x10ef8);
          *param_4 = *(uint *)(param_1 + 0x10ef8);
          *param_3 = *(int *)(param_1 + 0x10efc);
        }
      }
      goto LAB_00be4798;
    }
  }
  else {
    uVar66 = *(uint *)(param_2 + 0xc);
    uVar33 = *(uint *)(param_1 + 0xb88);
    uVar21 = *(uint *)(param_1 + 0xb84);
    uVar54 = (ulong)*(uint *)(param_2 + 3);
    uVar30 = (*(int *)((long)param_2 + 0x24) - *(uint *)(param_2 + 3)) + 1;
    if (0x110 < uVar30) goto LAB_00be2294;
LAB_00be1c74:
    if (1 < uVar30) goto LAB_00be2298;
  }
  *param_3 = -1;
  *param_4 = 1;
LAB_00be4798:
  if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

