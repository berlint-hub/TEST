// vaddr 0x7026D0  ghidra 0x8026D0  name=FUN_008026d0  size=48872 instr-addr
// duvod: data 0xB9AA28 (33 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008026d0(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  char cVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  int *piVar25;
  int *piVar26;
  uint *puVar27;
  undefined *puVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  int *unaff_x20;
  uint uVar32;
  undefined **unaff_x22;
  uint uVar33;
  uint uVar34;
  undefined4 *puVar35;
  undefined4 uVar36;
  timespec local_88;
  long local_78;
  
  iVar13 = DAT_027033c8;
  uVar30 = DAT_02703250;
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  DAT_027026e8 = '\x01';
  DAT_027033dc = DAT_027033c0 + 0xc00;
  DAT_027033e0 = DAT_027033c0;
  uVar20 = DAT_00cca000;
  if (DAT_00cca000 != 0) {
    if ((DAT_00cca010 & DAT_00cca000) == 0) {
      uVar20 = 0;
    }
    else {
      if ((DAT_00cca000 >> 1 & 1) != 0) {
        DAT_00ca1164 = DAT_00ca1158;
        if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
          uVar20 = 0;
          if (DAT_00ca1168 != 0) {
            uVar20 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
          }
          DAT_00ca1164 = uVar20 + DAT_00ca1158;
        }
        DAT_00ca1180 = DAT_00ca1174;
        if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
          uVar20 = 0;
          if (DAT_00ca1184 != 0) {
            uVar20 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
          }
          DAT_00ca1180 = uVar20 + DAT_00ca1174;
        }
      }
      uVar20 = 0x400;
    }
  }
  if (((ushort)DAT_00cc9010 & (DAT_00cc9010._2_2_ | 0x8000)) != 0) {
    uVar22 = 0;
    if (DAT_00cca520._2_1_ != 1 && (_DAT_00cc9000 & 1) != 0) {
      uVar22 = 0x800;
    }
    uVar20 = uVar22 | uVar20;
  }
  if (((((DAT_02703250 & uVar20) != 0) && ((DAT_02703250 >> 0x10 & 1) != 0)) &&
      ((DAT_02703250 & 1) != 0)) &&
     (((DAT_02703250 >> 1 & 1) == 0 && ((DAT_02703250 >> 2 & 1) == 0)))) {
    DAT_027033c8 = 0;
    DAT_02703250 = DAT_02703250 | 2;
    if (iVar13 == 0) {
      DAT_02703258 = DAT_027032a8;
    }
    else {
      DAT_02703254 = uVar20;
      FUN_00988960(&PTR_FUN_00c9aa28,"branch delay!!");
      DAT_02703258 = DAT_027032a8 - 4;
      uVar20 = DAT_02703254 | 0x80000000;
    }
    DAT_02703254 = uVar20;
    DAT_027032a8 = 0x80000200;
    if ((uVar30 & 0x400000) != 0) {
      DAT_027032a8 = 0xbfc00400;
    }
  }
  uVar20 = DAT_00ca1104;
  uVar30 = DAT_027033c0;
  if (DAT_00ca11cc <= (int)(DAT_027033c0 - DAT_00ca11c8)) {
    if (DAT_00ca1108 <= (int)(DAT_027033c0 - DAT_00ca1104)) {
      if (DAT_00ca1100 == 2) {
        uVar20 = DAT_00ca2710 ^ 0x2000;
        DAT_00ca2710 = DAT_00ca2710 | 0x2000;
        if ((DAT_00ca1720 & 0x6000) != 0 && (DAT_00ca1770 & 1) != 0) {
          DAT_00ca2710 = uVar20;
        }
        if ((((DAT_00ca2710 >> 3 & 1) == 0) &&
            (DAT_00ca2710 = DAT_00ca2710 | 8, (DAT_00ca2720._1_1_ >> 3 & 1) == 0)) &&
           ((DAT_00cca000 = DAT_00cca000 | 1, (DAT_00cca010 & 1) != 0 &&
            (((DAT_02703250 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)))))) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
        DAT_00ca1100 = 3;
        DAT_00ca1108 = DAT_00ca1120;
      }
      else if (DAT_00ca1100 == 3) {
        if ((DAT_02705050 != '\0') && ((DAT_02705054 & 1) != 0)) {
          FUN_003d1a10(&DAT_02704b28,
                       "    ================  EE COUNTER VSYNC END (frame: %d)  ================",
                       DAT_00ca11dc);
        }
        DAT_00ca11dc = DAT_00ca11dc + 1;
        DAT_00cca000 = DAT_00cca000 | 8;
        if ((((DAT_00cca010 >> 3 & 1) != 0) && ((DAT_02703250 & 0x10407) == 0x10401)) &&
           ((DAT_00cca010 & DAT_00cca000) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
        FUN_00584580();
        if (DAT_00ca1148 != 0) {
          if (((DAT_00ca1148 & 1) != 0) && ((DAT_00ca115c >> 3 & 1) != 0)) {
            if ((DAT_00ca115c >> 4 & 3) - 2 < 2) {
              DAT_00ca1158 = 0;
              DAT_00ca1160 = DAT_00ca1160 & 0xffff;
              uVar30 = uVar20;
            }
            else {
              uVar30 = DAT_027033c0;
              if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_00803034;
            }
            DAT_00ca115c = DAT_00ca115c | 0x80;
            DAT_00ca1170 = uVar30;
          }
LAB_00803034:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
              uVar30 = uVar20;
            }
            else {
              uVar30 = DAT_027033c0;
              if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_00803100;
            }
            DAT_00ca1178 = DAT_00ca1178 | 0x80;
            DAT_00ca118c = uVar30;
          }
LAB_00803100:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
              uVar30 = uVar20;
            }
            else {
              uVar30 = DAT_027033c0;
              if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_00803158;
            }
            DAT_00ca1194 = DAT_00ca1194 | 0x80;
            DAT_00ca11a8 = uVar30;
          }
LAB_00803158:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            else {
              uVar20 = DAT_027033c0;
              if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_008031ac;
            }
            DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
            DAT_00ca11c4 = uVar20;
          }
        }
LAB_008031ac:
        if (((uint)(DAT_00ca11dc * -0x11111111) >> 2 | DAT_00ca11dc * -0x40000000) < 0x4444445) {
          FUN_005d2150();
        }
        DAT_00ca1104 = DAT_00ca1104 + DAT_00ca1120;
        DAT_00ca1108 = DAT_00ca111c;
        DAT_00ca1100 = 0;
      }
      else {
        if (DAT_0281a575 == '\0') {
          bVar12 = DAT_00ca1150 != '\0';
          if (DAT_0281a574 != '\0') {
            cVar19 = DAT_00ca1150;
            if (60000000 < (int)(DAT_027033c0 - DAT_0281a570)) {
              cVar19 = '\0';
              DAT_0281a574 = '\0';
            }
            bVar12 = cVar19 != '\0';
          }
        }
        else {
          DAT_0281a575 = '\0';
          bVar12 = true;
        }
        if ((bool)DAT_00ca1150 != bVar12) {
          if ((DAT_02704e49 - 1 < 3) && (DAT_027051e0 = DAT_02704e49, bVar12 == false)) {
            DAT_027051e0 = DAT_02704e48;
          }
          DAT_00ca1150 = bVar12;
          if ((DAT_02704f28 >> 3 & 1) != 0) {
            if (((DAT_0281ce7c != '\r') && (DAT_0281ce7c != '\v')) ||
               ((DAT_00ca1154 != '\0' && (DAT_0281ce7c == '\r')))) {
              DAT_00ca1154 = DAT_0281ce7c != '\v' && DAT_0281ce7c != '\r';
              uVar2 = 0xd;
              if (bVar12 == false) {
                uVar2 = DAT_02704e64;
              }
              FUN_005b0140(&DAT_0c7adff0,uVar2,0);
              goto LAB_00802c48;
            }
          }
          DAT_00ca1154 = '\0';
        }
LAB_00802c48:
        FUN_00916070();
        FUN_008cd720();
        uVar17 = 0;
        do {
          lVar24 = 0;
          do {
            if (((&DAT_0c728f8d)[uVar17 * 0x280 + lVar24 * 0x28] != '\0') &&
               (iVar13 = (&DAT_0c728f84)[lVar24 * 10 + uVar17 * 0xa0], iVar13 != 0)) {
              piVar26 = &DAT_0c728f88 + lVar24 * 10 + uVar17 * 0xa0;
              iVar23 = *piVar26;
              *piVar26 = iVar23 + -1;
              if (iVar23 + -1 == 0) {
                *piVar26 = iVar13;
                puVar15 = &DAT_0c728f68 + uVar17 * 0x50 + lVar24 * 5;
                bVar21 = *(byte *)((long)puVar15 + 0x24);
                *(byte *)((long)puVar15 + 0x24) = bVar21 ^ 1;
                uVar36 = 0;
                if (bVar21 == 0) {
                  uVar36 = *(undefined4 *)(puVar15 + 3);
                }
                puVar3 = (undefined4 *)puVar15[1];
                for (puVar35 = (undefined4 *)*puVar15; puVar35 != puVar3; puVar35 = puVar35 + 1) {
                  FUN_008ca230(uVar36,&DAT_0c72a368,uVar17 & 0xffffffff,*puVar35);
                }
              }
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x10);
          uVar17 = uVar17 + 1;
        } while (uVar17 != 8);
        uVar17 = DAT_00ca1140;
        if ((DAT_02704e3c != 0.0) && (DAT_00ca114c == '\0')) {
          uVar17 = DAT_00ca1138 + DAT_00ca1140;
          clock_gettime(1,&local_88);
          lVar24 = (local_88.tv_nsec - uVar17) + local_88.tv_sec * 1000000000;
          if (lVar24 < DAT_00ca1138) {
            if (1 < (int)(SUB168(SEXT816(lVar24) * SEXT816(-0x431bde82d7b634db),8) >> 0x12) -
                    (SUB164(SEXT816(lVar24) * SEXT816(-0x431bde82d7b634db),0xc) >> 0x1f)) {
              local_88.tv_sec = uVar17 / 1000000000;
              local_88.tv_nsec = uVar17 % 1000000000;
              clock_nanosleep(1,1,&local_88,(timespec *)0x0);
            }
          }
          else {
            lVar7 = 0;
            if (DAT_00ca1138 != 0) {
              lVar7 = lVar24 / DAT_00ca1138;
            }
            uVar17 = DAT_00ca1140 + lVar7 * DAT_00ca1138;
          }
        }
        DAT_00ca1140 = uVar17;
        uVar2 = DAT_00ca1700;
        DAT_00ca1700 = 0;
        FUN_005aeda0(&DAT_0c7adff0,uVar2);
        if ((DAT_0c72d6d8 != 2) || (DAT_0c72d6a8 != '\0')) {
          (**(code **)(DAT_027026f8 + 0x28))();
        }
        if ((DAT_02705050 != '\0') && ((DAT_02705054 & 1) != 0)) {
          FUN_003d1a10(&DAT_02704b28,
                       "    ================  EE COUNTER VSYNC START (frame: %d)  ================",
                       DAT_00ca11dc);
        }
        DAT_00cca000 = DAT_00cca000 | 4;
        if ((((DAT_00cca010 >> 2 & 1) != 0) && ((DAT_02703250 & 0x10407) == 0x10401)) &&
           ((DAT_00cca010 & DAT_00cca000) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
        FUN_00584250();
        if (DAT_00ca1148 != 0) {
          if (((DAT_00ca1148 & 1) != 0) && ((DAT_00ca115c >> 3 & 1) != 0)) {
            uVar4 = DAT_00ca115c >> 4 & 3;
            if ((uVar4 == 3) || (uVar4 == 1)) {
              DAT_00ca115c = DAT_00ca115c | 0x80;
              DAT_00ca1158 = 0;
              DAT_00ca1160 = DAT_00ca1160 & 0xffff;
            }
            else {
              if (uVar4 != 0) goto LAB_0080309c;
              if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
                uVar30 = 0;
                if (DAT_00ca1168 != 0) {
                  uVar30 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
                }
                DAT_00ca1158 = uVar30 + DAT_00ca1158;
              }
              DAT_00ca115c = DAT_00ca115c & 0xff7f;
            }
            DAT_00ca1170 = uVar20;
          }
LAB_0080309c:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            uVar4 = DAT_00ca1178 >> 4 & 3;
            if (uVar4 == 0) {
              if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
                uVar30 = 0;
                if (DAT_00ca1184 != 0) {
                  uVar30 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
                }
                DAT_00ca1174 = uVar30 + DAT_00ca1174;
              }
              DAT_00ca1178 = DAT_00ca1178 & 0xff7f;
            }
            else {
              if ((uVar4 != 3) && (uVar4 != 1)) goto LAB_00803240;
              DAT_00ca1178 = DAT_00ca1178 | 0x80;
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
            }
            DAT_00ca118c = uVar20;
          }
LAB_00803240:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            uVar4 = DAT_00ca1194 >> 4 & 3;
            if (uVar4 == 0) {
              if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
                uVar30 = 0;
                if (DAT_00ca11a0 != 0) {
                  uVar30 = (DAT_027033c0 - DAT_00ca11a8) / DAT_00ca11a0;
                }
                DAT_00ca1190 = uVar30 + DAT_00ca1190;
              }
              DAT_00ca1194 = DAT_00ca1194 & 0xff7f;
            }
            else {
              if ((uVar4 != 3) && (uVar4 != 1)) goto LAB_008032d4;
              DAT_00ca1194 = DAT_00ca1194 | 0x80;
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            }
            DAT_00ca11a8 = uVar20;
          }
LAB_008032d4:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            uVar4 = DAT_00ca11b0 >> 4 & 3;
            if (uVar4 == 0) {
              if (((DAT_00ca11b0 >> 7 & 1) != 0) && ((DAT_00ca11b0 & 3) != 3)) {
                uVar30 = 0;
                if (DAT_00ca11bc != 0) {
                  uVar30 = (DAT_027033c0 - DAT_00ca11c4) / DAT_00ca11bc;
                }
                DAT_00ca11ac = uVar30 + DAT_00ca11ac;
              }
              DAT_00ca11b0 = DAT_00ca11b0 & 0xff7f;
            }
            else {
              if ((uVar4 != 3) && (uVar4 != 1)) goto LAB_00803368;
              DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            DAT_00ca11c4 = uVar20;
          }
        }
LAB_00803368:
        DAT_00ca1104 = DAT_00ca1104 + DAT_00ca111c;
        DAT_00ca1108 = DAT_00ca1124;
        DAT_00ca1100 = 2;
        DAT_00ca11d4 = DAT_00ca11d4 + DAT_00ca1128;
      }
    }
    DAT_00ca11c8 = DAT_027033c0;
    uVar16 = DAT_02703250;
    cVar19 = DAT_027026e8;
    uVar1 = DAT_00cca010;
    iVar18 = DAT_00ca1108;
    uVar6 = DAT_00ca1104;
    lVar24 = 0;
    uVar20 = DAT_02703250 & 0x10407;
    iVar13 = DAT_027033c0 + 4;
    uVar30 = DAT_00cca000;
    iVar29 = DAT_027033dc;
    iVar23 = DAT_02702540;
    uVar22 = DAT_02702544;
    do {
      unaff_x20 = (int *)((long)&DAT_00ca1158 + lVar24);
      uVar4 = *(ushort *)((long)&DAT_00ca115c + lVar24);
      unaff_x22 = (undefined **)(ulong)uVar4;
      if ((uVar4 >> 7 & 1) != 0) {
        if ((~uVar4 & 3) == 0) {
          *(uint *)((long)&DAT_00ca1170 + lVar24) = DAT_00ca11c8;
        }
        else {
          uVar32 = DAT_00ca11c8 - *(int *)((long)&DAT_00ca1170 + lVar24);
          uVar32 = uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU);
          uVar34 = *(uint *)((long)&DAT_00ca1168 + lVar24);
          uVar33 = 0;
          if (uVar34 != 0) {
            uVar33 = uVar32 / uVar34;
          }
          uVar8 = *(uint *)((long)&DAT_00ca1158 + lVar24) + uVar33;
          *(uint *)((long)&DAT_00ca1158 + lVar24) = uVar8;
          *(uint *)((long)&DAT_00ca1170 + lVar24) = DAT_00ca11c8 + (uVar33 * uVar34 - uVar32);
          uVar32 = *(uint *)((long)&DAT_00ca1160 + lVar24);
          if (uVar32 <= uVar8) {
            if ((uVar4 & 0x500) == 0x100) {
              uVar34 = uVar4 | 0x400;
              unaff_x22 = (undefined **)(ulong)uVar34;
              *(short *)((long)&DAT_00ca115c + lVar24) = (short)uVar34;
              uVar34 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar24) & 0x1f);
              uVar30 = uVar34 | uVar30;
              DAT_00cca000 = uVar30;
              if ((((uVar34 & uVar1) != 0) && (uVar20 == 0x10401)) && ((uVar30 & uVar1) != 0)) {
                if (4 < (int)(iVar29 - DAT_00ca11c8)) {
                  iVar29 = iVar13;
                  DAT_027033dc = iVar13;
                }
                if ((cVar19 != '\0') && (0 < (int)uVar22)) {
                  iVar23 = uVar22 + iVar23;
                  DAT_02702544 = 0;
                  uVar22 = 0;
                  DAT_02702540 = iVar23;
                }
              }
            }
            if (((uint)unaff_x22 >> 6 & 1) == 0) {
              uVar32 = uVar32 | 0x10000000;
              *(uint *)((long)&DAT_00ca1160 + lVar24) = uVar32;
            }
            else {
              *(uint *)((long)&DAT_00ca1158 + lVar24) = uVar8 - uVar32;
              uVar8 = uVar8 - uVar32;
            }
          }
          if (0xffff < uVar8) {
            if (((uint)unaff_x22 & 0xa00) == 0x200) {
              uVar34 = (uint)unaff_x22 | 0x800;
              unaff_x22 = (undefined **)(ulong)uVar34;
              *(short *)((long)&DAT_00ca115c + lVar24) = (short)uVar34;
              uVar34 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar24) & 0x1f);
              unaff_x20 = (int *)(ulong)uVar34;
              uVar30 = uVar34 | uVar30;
              DAT_00cca000 = uVar30;
              if ((((uVar34 & uVar1) != 0) && (uVar20 == 0x10401)) &&
                 (unaff_x20 = (int *)(ulong)(uVar30 & uVar1), (uVar30 & uVar1) != 0)) {
                unaff_x20 = (int *)(ulong)(iVar29 - DAT_00ca11c8);
                if (4 < (int)(iVar29 - DAT_00ca11c8)) {
                  iVar29 = iVar13;
                  DAT_027033dc = iVar13;
                }
                if ((cVar19 != '\0') && (0 < (int)uVar22)) {
                  iVar23 = uVar22 + iVar23;
                  DAT_02702544 = 0;
                  uVar22 = 0;
                  DAT_02702540 = iVar23;
                }
              }
            }
            *(uint *)((long)&DAT_00ca1158 + lVar24) = uVar8 - 0x10000;
            *(uint *)((long)&DAT_00ca1160 + lVar24) = uVar32 & 0xffff;
          }
        }
      }
      lVar24 = lVar24 + 0x1c;
    } while (lVar24 != 0x70);
    iVar18 = (uVar6 - DAT_00ca11c8) + iVar18;
    DAT_00ca11cc = (DAT_00ca11d4 - DAT_00ca11c8) + DAT_00ca11d8;
    if (iVar18 <= DAT_00ca11cc) {
      DAT_00ca11cc = iVar18;
    }
    if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
      if ((DAT_00ca1158 < 0x10001) && (DAT_00ca1158 <= DAT_00ca1160)) {
        iVar23 = DAT_00ca1168 * (0x10000 - DAT_00ca1158);
        iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca1170;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
          iVar29 = iVar23 + DAT_00ca1170;
          DAT_027033dc = iVar29;
        }
        if ((DAT_00ca1160 >> 0x1c & 1) == 0) {
          iVar23 = DAT_00ca1168 * (DAT_00ca1160 - DAT_00ca1158);
          iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca1170;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
            iVar29 = iVar23 + DAT_00ca1170;
            DAT_027033dc = iVar29;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
      if ((DAT_00ca1174 < 0x10001) && (DAT_00ca1174 <= DAT_00ca117c)) {
        iVar23 = DAT_00ca1184 * (0x10000 - DAT_00ca1174);
        iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca118c;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
          iVar29 = iVar23 + DAT_00ca118c;
          DAT_027033dc = iVar29;
        }
        if ((DAT_00ca117c >> 0x1c & 1) == 0) {
          iVar23 = DAT_00ca1184 * (DAT_00ca117c - DAT_00ca1174);
          iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca118c;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
            iVar29 = iVar23 + DAT_00ca118c;
            DAT_027033dc = iVar29;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
      if ((DAT_00ca1190 < 0x10001) && (DAT_00ca1190 <= DAT_00ca1198)) {
        iVar23 = DAT_00ca11a0 * (0x10000 - DAT_00ca1190);
        iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca11a8;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
          iVar29 = iVar23 + DAT_00ca11a8;
          DAT_027033dc = iVar29;
        }
        if ((DAT_00ca1198 >> 0x1c & 1) == 0) {
          iVar23 = DAT_00ca11a0 * (DAT_00ca1198 - DAT_00ca1190);
          iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca11a8;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
            iVar29 = iVar23 + DAT_00ca11a8;
            DAT_027033dc = iVar29;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    uVar30 = DAT_00ca11c8;
    if (((DAT_00ca11b0 >> 7 & 1) == 0) || ((DAT_00ca11b0 & 3) == 3)) {
joined_r0x00804274:
      if (DAT_00ca11cc < 0) {
        DAT_00ca11cc = 0;
        if ((int)(iVar29 - DAT_00ca11c8) < 1) goto LAB_0080376c;
        goto LAB_00803934;
      }
      if (DAT_00ca11cc < (int)(iVar29 - DAT_00ca11c8)) goto LAB_00803934;
LAB_0080376c:
      if ((uVar16 >> 2 & 1) == 0) goto LAB_00803940;
LAB_0080394c:
      DAT_027033e8 = DAT_00ca11c8;
    }
    else {
      if ((DAT_00ca11ac < 0x10001) && (DAT_00ca11ac <= DAT_00ca11b4)) {
        iVar23 = DAT_00ca11bc * (0x10000 - DAT_00ca11ac);
        iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca11c4;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
          iVar29 = iVar23 + DAT_00ca11c4;
          DAT_027033dc = iVar29;
        }
        if ((DAT_00ca11b4 >> 0x1c & 1) == 0) {
          iVar23 = DAT_00ca11bc * (DAT_00ca11b4 - DAT_00ca11ac);
          iVar13 = (iVar23 - DAT_00ca11c8) + DAT_00ca11c4;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(iVar29 - DAT_00ca11c8))) {
            iVar29 = iVar23 + DAT_00ca11c4;
            DAT_027033dc = iVar29;
          }
        }
        goto joined_r0x00804274;
      }
      DAT_00ca11cc = 4;
      if ((int)(iVar29 - DAT_00ca11c8) < 5) goto LAB_0080376c;
LAB_00803934:
      DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8;
      if ((uVar16 >> 2 & 1) != 0) goto LAB_0080394c;
LAB_00803940:
      if (-1 < (int)DAT_027032b0) goto LAB_0080394c;
      uVar20 = uVar16 >> 3 & 3;
      if ((((DAT_027032b0 & (4 << (ulong)uVar20 | uVar16 & 2)) != 0) &&
          (uVar22 = DAT_027032b0 >> 5 & 0x1f, uVar22 < 0x10)) &&
         ((1 << (ulong)uVar22 & 0xf00eU) != 0)) {
        iVar13 = DAT_00ca11c8 - DAT_027033e8;
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        DAT_027032b4 = iVar13 + DAT_027032b4;
        DAT_027033e8 = DAT_00ca11c8;
      }
      uVar20 = 1 << (ulong)(uVar20 | 0xc);
      if ((((DAT_027032b0 & (uVar20 & 0xfffff000 | uVar20 & 0x7ff | (uVar16 >> 1 & 1) << 0xb)) == 0)
          || (uVar20 = DAT_027032b0 >> 0xf & 0x1f, 0xf < uVar20)) ||
         ((1 << (ulong)uVar20 & 0xf00eU) == 0)) goto LAB_0080395c;
      iVar13 = DAT_00ca11c8 - DAT_027033ec;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      DAT_027032b8 = iVar13 + DAT_027032b8;
    }
    DAT_027033ec = DAT_00ca11c8;
  }
LAB_0080395c:
  cVar19 = DAT_027026e8;
  uVar6 = DAT_00cca010;
  uVar22 = DAT_00ca11d4;
  uVar20 = DAT_00ca1148;
  if (DAT_00ca11d8 <= (int)(uVar30 - DAT_00ca11d4)) {
    piVar26 = &DAT_00ca112c;
    if ((_DAT_00ca11d0 & 1) == 0) {
      if (((((DAT_00ca2710 >> 2 & 1) == 0) &&
           (DAT_00ca2710 = DAT_00ca2710 | 4, (DAT_00ca2720._1_1_ >> 2 & 1) == 0)) &&
          (DAT_00cca000 = DAT_00cca000 | 1, (DAT_00cca010 & 1) != 0)) &&
         (((DAT_02703250 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)))) {
        if (4 < (int)(DAT_027033dc - uVar30)) {
          DAT_027033dc = uVar30 + 4;
        }
        if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
      }
      if (DAT_00ca1148 != 0) {
        if (((DAT_00ca1148 & 1) != 0) && ((DAT_00ca115c >> 3 & 1) == 0)) {
          if ((DAT_00ca115c >> 4 & 3) - 2 < 2) {
            DAT_00ca1158 = 0;
            DAT_00ca1160 = DAT_00ca1160 & 0xffff;
            uVar20 = DAT_00ca11d4;
          }
          else {
            uVar20 = uVar30;
            if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_00803d94;
          }
          DAT_00ca1170 = uVar20;
          DAT_00ca115c = DAT_00ca115c | 0x80;
        }
LAB_00803d94:
        if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) == 0)) {
          if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
            DAT_00ca1174 = 0;
            DAT_00ca117c = DAT_00ca117c & 0xffff;
            uVar20 = DAT_00ca11d4;
          }
          else {
            uVar20 = uVar30;
            if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_00803df0;
          }
          DAT_00ca118c = uVar20;
          DAT_00ca1178 = DAT_00ca1178 | 0x80;
        }
LAB_00803df0:
        if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) == 0)) {
          if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
            DAT_00ca1190 = 0;
            DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            uVar20 = DAT_00ca11d4;
          }
          else {
            uVar20 = uVar30;
            if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_00803e4c;
          }
          DAT_00ca11a8 = uVar20;
          DAT_00ca1194 = DAT_00ca1194 | 0x80;
        }
LAB_00803e4c:
        if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) == 0)) {
          if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
            DAT_00ca11ac = 0;
            DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            uVar30 = DAT_00ca11d4;
          }
          else if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_00803ea4;
          DAT_00ca11c4 = uVar30;
          DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
        }
      }
LAB_00803ea4:
      unaff_x20 = &DAT_00ca1130;
      if (DAT_00ca9904 != '\0') {
        FUN_00584140(0);
      }
      _DAT_00ca11d0 = 1;
      piVar25 = piVar26;
      piVar26 = unaff_x20;
    }
    else {
      lVar24 = 0;
      iVar13 = uVar30 + 4;
      uVar1 = DAT_02703250 & 0x10407;
      unaff_x20 = (int *)(ulong)DAT_02702544;
      puVar31 = &DAT_00ca1158;
      uVar16 = DAT_00cca000;
      iVar23 = DAT_027033dc;
      iVar18 = DAT_02702540;
      do {
        uVar4 = (ushort)puVar31[1];
        unaff_x22 = (undefined **)(ulong)uVar4;
        if (((uVar4 ^ 0xffff) & 0x83) == 0) {
          uVar34 = *puVar31;
          uVar32 = uVar34 + 1;
          *puVar31 = uVar32;
          uVar33 = puVar31[2];
          uVar8 = uVar32 - uVar33;
          if (uVar32 < uVar33) {
LAB_00803bb4:
            uVar34 = uVar34 - 0xffff;
            uVar8 = uVar32;
          }
          else {
            if ((uVar4 & 0x500) == 0x100) {
              unaff_x22 = (undefined **)(ulong)(uVar4 | 0x400);
              *(short *)(puVar31 + 1) = (short)(uVar4 | 0x400);
              uVar5 = 1 << (ulong)(puVar31[5] & 0x1f);
              DAT_00cca000 = uVar5 | uVar16;
              uVar16 = DAT_00cca000;
              if ((((uVar5 & uVar6) != 0) && (uVar1 == 0x10401)) && ((DAT_00cca000 & uVar6) != 0)) {
                if (4 < (int)(iVar23 - uVar30)) {
                  DAT_027033dc = iVar13;
                  iVar23 = iVar13;
                }
                if ((cVar19 != '\0') && (0 < (int)unaff_x20)) {
                  DAT_02702540 = (int)unaff_x20 + iVar18;
                  DAT_02702544 = 0;
                  unaff_x20 = (int *)0x0;
                  iVar18 = DAT_02702540;
                }
              }
            }
            if (((uint)unaff_x22 >> 6 & 1) == 0) {
              uVar33 = uVar33 | 0x10000000;
              puVar31[2] = uVar33;
              goto LAB_00803bb4;
            }
            *puVar31 = uVar8;
            uVar34 = uVar8 - 0x10000;
          }
          if (0xffff < uVar8) {
            if (((uint)unaff_x22 & 0xa00) == 0x200) {
              uVar32 = (uint)unaff_x22 | 0x800;
              unaff_x22 = (undefined **)(ulong)uVar32;
              *(short *)(puVar31 + 1) = (short)uVar32;
              uVar32 = 1 << (ulong)(puVar31[5] & 0x1f);
              DAT_00cca000 = uVar32 | uVar16;
              uVar16 = DAT_00cca000;
              if ((((uVar32 & uVar6) != 0) && (uVar1 == 0x10401)) && ((DAT_00cca000 & uVar6) != 0))
              {
                if (4 < (int)(iVar23 - uVar30)) {
                  DAT_027033dc = iVar13;
                  iVar23 = iVar13;
                }
                if ((cVar19 != '\0') && (0 < (int)unaff_x20)) {
                  DAT_02702540 = (int)unaff_x20 + iVar18;
                  DAT_02702544 = 0;
                  unaff_x20 = (int *)0x0;
                  iVar18 = DAT_02702540;
                }
              }
            }
            *puVar31 = uVar34;
            puVar31[2] = uVar33 & 0xffff;
          }
        }
        if (((uVar20 >> (ulong)((uint)lVar24 & 0x1f) & 1) != 0) &&
           (uVar32 = (uint)unaff_x22, (uVar32 >> 3 & 1) == 0)) {
          uVar34 = uVar32 >> 4 & 3;
          if ((uVar34 == 3) || (uVar34 == 1)) {
            *(ushort *)(puVar31 + 1) = (ushort)unaff_x22 | 0x80;
            *puVar31 = 0;
            unaff_x22 = (undefined **)(ulong)(ushort)puVar31[2];
            puVar31[2] = (uint)(ushort)puVar31[2];
          }
          else {
            if (uVar34 != 0) goto LAB_00803b0c;
            uVar34 = *puVar31;
            if (((uVar32 >> 7 & 1) != 0) && ((uVar32 & 3) != 3)) {
              uVar33 = 0;
              if (puVar31[4] != 0) {
                uVar33 = (uVar30 - puVar31[6]) / puVar31[4];
              }
              uVar34 = uVar33 + uVar34;
            }
            *puVar31 = uVar34;
            unaff_x22 = (undefined **)(ulong)(uVar32 & 0xffffff7f);
            *(short *)(puVar31 + 1) = (short)(uVar32 & 0xffffff7f);
          }
          puVar31[6] = uVar22;
        }
LAB_00803b0c:
        lVar24 = lVar24 + 1;
        puVar31 = puVar31 + 7;
      } while (lVar24 != 4);
      FUN_00583a20(0);
      _DAT_00ca11d0 = 0;
      piVar25 = &DAT_00ca1130;
    }
    DAT_00ca11d4 = *piVar25 + DAT_00ca11d4;
    DAT_00ca11d8 = *piVar26;
    uVar30 = DAT_027033c0;
  }
  DAT_02703244 = DAT_02703244 + (uVar30 - DAT_027033e4);
  DAT_027033e4 = uVar30;
  if (((DAT_02703250._1_1_ < '\0') && (DAT_0270324c <= DAT_02703244)) &&
     (DAT_02703244 < DAT_0270324c + 1000)) {
    unaff_x20 = (int *)0xbfc00000;
    FUN_00988670(&PTR_FUN_00c9aa28,5,"timr intr: %x, %x");
    iVar13 = DAT_027033c8;
    uVar20 = DAT_02703250;
    DAT_027033c8 = 0;
    DAT_02703254 = 0x8000;
    if ((DAT_02703250 >> 2 & 1) == 0) {
      if ((DAT_02703250 >> 1 & 1) == 0) {
        DAT_02703250 = DAT_02703250 | 2;
        if (iVar13 == 0) {
          DAT_02703258 = DAT_027032a8;
          DAT_02703254 = 0x8000;
        }
        else {
          FUN_00988960(&PTR_FUN_00c9aa28,"branch delay!!");
          DAT_02703258 = DAT_027032a8 - 4;
          DAT_02703254 = DAT_02703254 | 0x80000000;
        }
        uVar30 = 0x200;
      }
      else {
        uVar30 = 0x180;
      }
      DAT_027032a8 = uVar30 | 0x80000000;
      if ((uVar20 & 0x400000) != 0) {
        DAT_027032a8 = uVar30 + 0xbfc00200;
      }
    }
    else {
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2* FIX ME: Level 2 cpuException");
      DAT_027032a8 = 0xbfc00000;
      FUN_00988960(&PTR_FUN_00c9aa28,"Reset request");
    }
  }
  uVar20 = DAT_00cbec00;
  if ((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) {
    if ((_DAT_00cc9000 & 1) == 0) goto LAB_008063b0;
    if (((DAT_00cca520._2_1_ & 1) == 0) && (uVar30 = DAT_027033c4, (DAT_027033c4 & 0x1ffff) != 0)) {
      do {
        unaff_x20 = (int *)&DAT_027033c4;
        unaff_x22 = &PTR_FUN_00c9aa28;
        uVar20 = DAT_00cbec00;
        if (((uVar30 & 0x1ffff) == 0) ||
           (((_DAT_00cc9000 & 1) == 0 || ((DAT_00cca520._2_1_ & 1) != 0)))) break;
        if ((uVar30 >> 0x14 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_02703310 <= (int)(DAT_027033c0 - DAT_02703390))) {
            DAT_027033c4 = uVar30 & 0xffefffff;
            DAT_027033d4 = DAT_027033d4 & 0xffefffff;
            _DAT_02819070 = _DAT_02819070 & 0xffff00ff;
            uVar30 = DAT_027033c4;
          }
          else if (DAT_02703310 < DAT_027033dc - DAT_02703390) {
            DAT_027033dc = DAT_02703310 + DAT_02703390;
          }
        }
        if ((uVar30 >> 1 & 1) == 0) goto LAB_00808434;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
          if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
            DAT_027033dc = DAT_027032c4 + DAT_02703344;
          }
          goto LAB_00808434;
        }
        DAT_027033c4 = uVar30 & 0xfffffffd;
        DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
        DAT_02706280 = 0;
        if ((DAT_00cbe020 & 0xc00) == 0x800) {
          if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
             (uVar20 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
            if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_00808088;
            uVar20 = DAT_00ca1510 & 0xfffffffb;
          }
          if (uVar20 == 0) {
            DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
            DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
            if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00808014:
              bVar12 = uVar20 == 0;
            }
            else {
              if (DAT_00ca1398 <= DAT_00ca139c) {
                uVar20 = DAT_00ca13f0 & 0xfffffffb;
                goto LAB_00808014;
              }
              bVar12 = false;
            }
            if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               ((DAT_02704f20 >> 4 & 1) != 0)) {
              if (DAT_00ca1638 == 0) goto LAB_00808bc0;
LAB_00808044:
              if ((byte)(bVar12 ^ 1U | 4) == 0) goto LAB_00808088;
            }
            else {
              if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0))
              goto LAB_00808044;
LAB_00808bc0:
              if (bVar12 == true) goto LAB_00808088;
            }
            FUN_003ecbd0(&DAT_00ca1380,0,1);
          }
        }
LAB_00808088:
        if ((_DAT_00cc9000 & 0xc) == 8) {
          if ((DAT_00cc4000 & 0xc) == 0) {
            FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
          }
          uVar20 = DAT_00cc4020;
          if (0xf < DAT_00cc4020) {
            uVar20 = 0x10;
          }
          DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                         DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          FUN_005d9ad0();
          uVar30 = DAT_027033c4;
          goto LAB_00808434;
        }
        if ((DAT_00cc4000 & 1) != 0) {
          if ((DAT_02706360 & 0x7f) == 0x51) {
            uVar20 = *DAT_00ca16f0;
            if ((uVar20 >> 10 & 3 | 2) == 2) {
LAB_0080816c:
              if (((uVar20 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_00808184;
            }
          }
          else {
            if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_00808184:
              uVar20 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar20 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xfffff7 | (uVar20 & 0x1f) << 0x18;
              goto LAB_008081b0;
            }
            uVar20 = *DAT_00ca16f0;
            uVar30 = uVar20 >> 10 & 3;
            if (((uVar30 == 0) || (uVar30 == 2)) ||
               ((uVar30 == 3 && (((uVar20 >> 2 & 1) != 0 && (DAT_00ca1630 == 3))))))
            goto LAB_0080816c;
          }
          DAT_02703344 = DAT_027033c0;
          DAT_027033c4 = DAT_027033c4 | 2;
          DAT_027032c4 = 8;
          if ((DAT_02704f28 & 0x40) == 0) {
            DAT_027032c4 = 0x80;
          }
          if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_027032c4;
          }
          uVar30 = DAT_027033c4;
          if ((~DAT_00cbe020 & 0xc00) == 0) {
            DAT_00cbec00 = DAT_00cbec00 | 8;
          }
          goto LAB_00808434;
        }
LAB_008081b0:
        if (DAT_02706381 != '\0') {
          if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
            DAT_02703308 = 0x10;
          }
          else {
            DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
            if ((int)DAT_02703308 < 0x11) {
              DAT_02703308 = 0x10;
            }
          }
          DAT_027033c4 = DAT_027033c4 | 0x40000;
          DAT_02703388 = DAT_027033c0;
          if ((DAT_02703308 < 0x1d) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_02703308;
          }
LAB_00808420:
          DAT_027033d4 = DAT_027033d4 | 2;
          uVar30 = DAT_027033c4;
          goto LAB_00808434;
        }
        if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_00808420;
        if ((DAT_00cc4000 >> 8 & 1) == 0) {
          FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
        }
        uVar20 = DAT_00cbec00;
        if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
          if ((DAT_00cbec00 >> 0xd & 1) == 0) {
            DAT_00cbec00 = DAT_00cbec00 | 0x800;
          }
          if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
            DAT_00cbec00 = DAT_00cbec00 | 0x400;
          }
          DAT_00cca000 = DAT_00cca000 | 0x20;
          if ((((DAT_00cca010 >> 5 & 1) != 0) && ((DAT_02703250 & 0x10407) == 0x10401)) &&
             ((DAT_00cca010 & DAT_00cca000) != 0)) {
            if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 4;
            }
            if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
          }
          DAT_02706370 = DAT_02706370 + -1;
          uVar20 = DAT_00cbec00;
          if ((DAT_00cbec00 & 0x700) != 0) {
            uVar20 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar20 = 0x10;
            }
            uVar30 = (uVar20 & 0x1f) << 0x18;
            uVar20 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar30;
            if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar30 | 2;
              goto LAB_00808420;
            }
          }
        }
        DAT_00cbec00 = uVar20;
        DAT_02706378 = '\0';
        if (DAT_02706360 == 0) {
          DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc;
        }
        else if ((DAT_02706374 != 0) && (DAT_00cc4020 == 0)) {
          DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc | 1;
        }
        if ((DAT_027063b0 & 1) != 0) {
          FUN_005d9740();
          if ((DAT_00cc4000 & 1) != 0) {
            uVar20 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar20 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          }
          uVar22 = DAT_027033c0;
          uVar20 = DAT_027033c4;
          if (((DAT_00cbec00 >> 3 & 1) != 0) &&
             (uVar22 = DAT_027033c0, uVar30 = DAT_027033c4, DAT_00ca1630 != 0)) goto LAB_00808434;
          goto joined_r0x0080a788;
        }
        if (DAT_02706374 != 0) {
          if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
            DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
          }
          if ((DAT_00cc4000 & 1) != 0) {
            uVar20 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar20 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          }
          DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
          DAT_02706378 = '\0';
          DAT_027063a4 = '\0';
          if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
            if ((DAT_027063b8 & 1) != 0) {
              if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080b204:
                bVar12 = uVar20 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar20 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_0080b204;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_0080b25c;
LAB_0080b230:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_0080b230;
LAB_0080b25c:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_0080b298;
            }
            DAT_027063b2 = '\0';
            FUN_00605e90(DAT_027063b4);
          }
LAB_0080b298:
          DAT_02706280 = 0;
          if ((((DAT_00cc9010 >> 0x11 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
             (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 2)) != 0)) {
            if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 4;
            }
            if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
          }
          DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
          DAT_00cc9010 = DAT_00cc9010 | 2;
          uVar30 = DAT_027033c4;
          goto LAB_00808434;
        }
        uVar30 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_00808434;
        if ((int)DAT_00cc4030 < 0) {
          uVar17 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_0080b358:
          puVar31 = (uint *)(DAT_00ccb000 + uVar17 + 0x2000000);
        }
        else {
          uVar17 = (ulong)DAT_00cc4030 & 0x1ffffff0;
          if (uVar17 >> 0x19 == 0) {
            puVar31 = (uint *)(DAT_00ccb000 + uVar17);
          }
          else if (uVar17 >> 0x1c == 0) {
            puVar31 = (uint *)(&DAT_02884000 + DAT_00ccb000);
          }
          else {
            if ((uint)uVar17 < 0x10004000) {
              uVar17 = (ulong)(DAT_00cc4030 & 0x3ff0);
              goto LAB_0080b358;
            }
            FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            puVar31 = (uint *)0x0;
          }
        }
        uVar17 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar31);
        if ((uVar17 & 1) == 0) goto LAB_0080c420;
        DAT_00cc4010 = puVar31[1];
        DAT_02706280 = DAT_02706280 + 1;
        DAT_027063b0 = DAT_027063b0 & 0xfe;
        if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
            ((*puVar31 & 0x70000000) == 0x40000000)) &&
           ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
          FUN_003f75f0(0xd);
          goto LAB_0080c420;
        }
        if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
          DAT_02706278 = *(undefined8 *)(puVar31 + 2);
          DAT_02706270 = 0;
          if (DAT_027063a4 == '\0') {
            DAT_027063a8 = 2;
            DAT_027063a4 = '\x01';
            puVar15 = &DAT_02706278;
            iVar13 = 2;
          }
          else {
            puVar15 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
            iVar13 = 4 - DAT_027063a8;
          }
          uVar17 = FUN_005e3030(puVar15,iVar13,1);
          if (((uVar17 & 1) == 0) && (DAT_027063a4 != '\0')) {
            DAT_027063b0 = DAT_027063b0 & 0xfe;
            DAT_00cc4020 = 0;
            goto LAB_0080c420;
          }
        }
        DAT_027063a8 = 0;
        DAT_027063a4 = '\0';
        switch(*puVar31 >> 0x1c & 7) {
        case 0:
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          goto code_r0x0080bf14;
        case 1:
          bVar21 = 0;
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          DAT_00cc4010 = DAT_00cc4030;
          break;
        case 2:
          bVar21 = 0;
          uVar20 = DAT_00cc4030 + 0x10;
          DAT_00cc4030 = DAT_00cc4010;
          DAT_00cc4010 = uVar20;
          break;
        default:
          bVar21 = 0;
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          break;
        case 5:
          uVar20 = DAT_00cc4030 + 0x10;
          uVar30 = DAT_00cc4000 >> 4 & 3;
          if (uVar30 == 1) {
            DAT_00cc4050 = uVar20 + DAT_00cc4020 * 0x10;
          }
          else {
            if (uVar30 != 0) {
              DAT_00cc4010 = uVar20;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              bVar21 = 1;
              break;
            }
            DAT_00cc4040 = uVar20 + DAT_00cc4020 * 0x10;
          }
          bVar21 = 0;
          DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                         DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
          DAT_00cc4030 = DAT_00cc4010;
          DAT_00cc4010 = uVar20;
          break;
        case 6:
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
          uVar20 = DAT_00cc4000 >> 4 & 3;
          if (uVar20 == 2) {
            puVar27 = (uint *)&DAT_00cc4050;
          }
          else {
            if (uVar20 != 1) {
              bVar21 = 1;
              break;
            }
            puVar27 = (uint *)&DAT_00cc4040;
          }
          bVar21 = 0;
          DAT_00cc4030 = *puVar27;
          *puVar27 = 0;
          DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                         DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x0080bf14:
          bVar21 = 1;
        }
        DAT_02706374 = DAT_02706374 | bVar21;
        if (DAT_00cc4020 != 0) {
          DAT_027063b0 = DAT_027063b0 | 1;
        }
        if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar31 < 0)) {
          DAT_02706374 = 1;
        }
LAB_0080c420:
        if ((DAT_00cc4000 & 1) != 0) {
          uVar20 = DAT_00cc4020;
          if (0xf < DAT_00cc4020) {
            uVar20 = 0x10;
          }
          DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                         DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
        }
        uVar22 = DAT_027033c0;
        uVar20 = DAT_027033c4;
        if (((DAT_00cbec00 >> 3 & 1) == 0) ||
           (uVar22 = DAT_027033c0, uVar30 = DAT_027033c4, DAT_00ca1630 == 0)) {
joined_r0x0080a788:
          DAT_02703344 = uVar22;
          DAT_027033c0 = DAT_02703344;
          if (DAT_02706381 == '\0') {
            DAT_027033c4 = uVar20 | 2;
            DAT_027032c4 = DAT_02706280;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c4 = 8;
            }
            if (((int)DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            uVar30 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
LAB_0080c504:
              DAT_027033c4 = uVar20 | 2;
              DAT_027033dc = DAT_02703344 + DAT_027032c4;
              uVar30 = DAT_027033c4;
            }
          }
          else {
            if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
              DAT_027032c4 = 1;
            }
            else {
              DAT_027032c4 = (DAT_02703310 + DAT_02703390) - DAT_02703344;
              if ((int)DAT_027032c4 < 2) {
                DAT_027032c4 = 1;
              }
            }
            if ((int)DAT_027032c4 <= (int)DAT_02706280) {
              DAT_027032c4 = DAT_02706280;
            }
            DAT_027033c4 = uVar20 | 2;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c4 = 8;
            }
            if ((DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            uVar30 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) goto LAB_0080c504;
          }
        }
LAB_00808434:
        if ((uVar30 >> 2 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             ((int)DAT_027032c8 <= (int)(DAT_027033c0 - DAT_02703348))) {
            DAT_027033c4 = uVar30 & 0xfffffffb;
            DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
            if (DAT_00ca1630 == 4) {
              DAT_00ca1630 = 0;
            }
            if (((~DAT_00cbe020 & 0xc00) == 0) &&
               (DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff, (DAT_00ca1630 & 0xfffffffb) == 0)) {
              if ((DAT_00ca13ec == 0) &&
                 (((DAT_02704e14 >> 3 & 1) != 0 &&
                  (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)))) {
LAB_008085e0:
                bVar12 = uVar20 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar20 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_008085e0;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_00808954;
LAB_0080860c:
                if ((byte)(bVar12 ^ 1U | 2) == 0) goto LAB_00808694;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_0080860c;
LAB_00808954:
                if (bVar12 == true) goto LAB_00808694;
              }
              FUN_003ecbd0(&DAT_00ca1380,0,1);
            }
LAB_00808694:
            uVar20 = DAT_027033c0;
            puVar31 = DAT_00ca16f0;
            if ((DAT_00ca1630 == 0) && (((byte)DAT_00cbec00 >> 3 & 1) != 0)) {
              if ((DAT_027033c4 >> 1 & 1) == 0) {
                DAT_027033c4 = DAT_027033c4 | 2;
                DAT_027032c4 = 8;
                if ((DAT_02704f28 & 0x40) == 0) {
                  DAT_027032c4 = 1;
                }
                DAT_02703344 = DAT_027033c0;
                if (0 < (int)DAT_02702544) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027032c4 + DAT_027033c0;
                }
              }
              uVar22 = *DAT_00ca16f0;
              uVar30 = uVar22 & 3;
              if ((uVar30 != 0) && (DAT_00cc5020 != 0)) goto LAB_00808b90;
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                  DAT_027033c4 = DAT_027033c4 | 0x800;
                  iVar13 = 0x10;
                  if ((DAT_02704f28 & 0x40) != 0) {
                    iVar13 = 8;
                  }
                  piVar26 = (int *)&DAT_027032ec;
LAB_00808b38:
                  piVar26[0x20] = DAT_027033c0;
                  *piVar26 = iVar13;
                  if (0 < (int)DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar13 < (int)(DAT_027033dc - uVar20)) {
                    DAT_027033dc = iVar13 + uVar20;
                  }
                  uVar22 = *puVar31;
                  uVar30 = uVar22 & 3;
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                DAT_027033c4 = DAT_027033c4 | 4;
                iVar13 = 0x10;
                if ((DAT_02704f28 & 0x40) != 0) {
                  iVar13 = 8;
                }
                piVar26 = (int *)&DAT_027032c8;
                goto LAB_00808b38;
              }
              if ((uVar30 == 0) &&
                 (((((uVar22 & 0xc00) == 0xc00 || ((uVar22 & 0xc00) == 0)) &&
                   ((uVar22 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)))) {
                DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                uVar30 = DAT_027033c4;
              }
              else {
LAB_00808b90:
                DAT_027033d4 = DAT_027033d4 | 4;
                uVar30 = DAT_027033c4;
              }
            }
            else if ((~_DAT_00cc9000 & 0xc) == 0) {
              FUN_003ef840();
              uVar30 = DAT_027033c4;
            }
            else if (DAT_00ca16e8 == 0) {
              if (DAT_00ca1350 != 0) goto LAB_008087a8;
LAB_00808928:
              uVar20 = 0;
LAB_00808cbc:
              uVar22 = DAT_027033c0;
              uVar30 = DAT_027033c4;
              if ((DAT_00cc5000 >> 8 & 1) != 0) {
                if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
                  DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
                  DAT_00ca1368 = 0;
                  DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                                 DAT_00cbe020 & 0xffffff | (uVar20 & 0x1f) << 0x18;
                  if ((uVar20 & 0x1f) < 0xf) {
                    uVar6 = DAT_00ca2710 & 0xffff3fff;
                    DAT_00ca2710 = uVar6 | 0x4000;
                    if ((uVar20 & 0x1f) != 0) {
                      DAT_00ca2710 = uVar6;
                    }
                  }
                  else {
                    DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
                  }
                  uVar6 = DAT_00cc9010 | 4;
                  if ((((DAT_00cc9010 >> 0x12 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801))
                     && (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 4)) != 0)) {
                    if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                      DAT_027033dc = DAT_027033c0 + 4;
                    }
                    if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                      DAT_02702540 = DAT_02702540 + DAT_02702544;
                      DAT_02702544 = 0;
                    }
                  }
                  DAT_00cc9010 = uVar6;
                  if (uVar20 != 0) {
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        iVar13 = 0x10;
                        if ((DAT_02704f28 & 0x40) != 0) {
                          iVar13 = 8;
                        }
                        piVar26 = (int *)&DAT_027032ec;
LAB_0080a81c:
                        piVar26[0x20] = DAT_027033c0;
                        *piVar26 = iVar13;
                        if (0 < (int)DAT_02702544) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        uVar30 = DAT_027033c4;
                        if (iVar13 < (int)(DAT_027033dc - uVar22)) {
                          DAT_027033dc = iVar13 + uVar22;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      iVar13 = 0x10;
                      if ((DAT_02704f28 & 0x40) != 0) {
                        iVar13 = 8;
                      }
                      piVar26 = (int *)&DAT_027032c8;
                      goto LAB_0080a81c;
                    }
                  }
                }
                else {
                  if ((_DAT_00cc9000 & 1) == 0) {
                    FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
                    uVar4 = DAT_02704f28;
                    uVar20 = DAT_027033c0;
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        piVar26 = (int *)&DAT_027032ec;
LAB_0080a90c:
                        uVar10 = DAT_02704f28 & 0x40;
                        piVar26[0x20] = DAT_027033c0;
                        iVar13 = 8;
                        if (uVar10 == 0) {
                          iVar13 = 0x40;
                        }
                        *piVar26 = iVar13;
                        if (((uVar4 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if (iVar13 < (int)(DAT_027033dc - uVar20)) {
                          DAT_027033dc = iVar13 + uVar20;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      piVar26 = (int *)&DAT_027032c8;
                      goto LAB_0080a90c;
                    }
                    goto LAB_00808b90;
                  }
                  FUN_003f0da0();
                  uVar30 = DAT_027033c4;
                }
              }
            }
            else {
              if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                DAT_027033c4 = DAT_027033c4 | 4;
                DAT_02703348 = DAT_027033c0;
                DAT_027032c8 = 8;
                if ((DAT_02704f28 & 0x40) == 0) {
                  DAT_027032c8 = 0x80;
                }
                if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027032c8 + DAT_027033c0;
                }
              }
              DAT_027033d4 = DAT_027033d4 | 4;
              uVar30 = DAT_027033c4;
              if (DAT_00ca1350 != 0x10) {
                if (DAT_00ca1350 == 0) goto LAB_00808928;
LAB_008087a8:
                iVar13 = FUN_003ef270(&DAT_00ca1250);
                uVar20 = DAT_027033c0;
                if (iVar13 != 0) {
                  uVar30 = iVar13 << 1;
                  if ((~_DAT_00cc9000 & 0xc) == 0) {
                    if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar30)) {
                      if ((DAT_02704f28 & 0x40) != 0) {
                        uVar30 = 8;
                      }
                      DAT_027033c4 = DAT_027033c4 | 0x800;
                      puVar31 = &DAT_027032ec;
LAB_008089e8:
                      puVar31[0x20] = DAT_027033c0;
                      *puVar31 = uVar30;
                      if ((uVar30 < 0x1d) && (0 < (int)DAT_02702544)) {
                        DAT_02702540 = DAT_02702540 + DAT_02702544;
                        DAT_02702544 = 0;
                      }
                      if ((int)uVar30 < (int)(DAT_027033dc - uVar20)) {
                        DAT_027033dc = uVar30 + uVar20;
                      }
                    }
                  }
                  else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar30)) {
                    if ((DAT_02704f28 & 0x40) != 0) {
                      uVar30 = 8;
                    }
                    DAT_027033c4 = DAT_027033c4 | 4;
                    puVar31 = &DAT_027032c8;
                    goto LAB_008089e8;
                  }
                }
                uVar4 = DAT_02704f28;
                uVar30 = DAT_027033c0;
                puVar31 = DAT_00ca16f0;
                uVar20 = *DAT_00ca16f0;
                if (((((uVar20 & 0xc00) != 0xc00) &&
                     (((uVar20 & 0xc00) != 0 ||
                      (((uVar20 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
                    ((uVar20 & 0x1008) != 0)) || (bVar21 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
                  if (((uVar20 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        piVar26 = (int *)&DAT_027032ec;
LAB_00808c40:
                        uVar10 = DAT_02704f28 & 0x40;
                        piVar26[0x20] = DAT_027033c0;
                        iVar23 = 8;
                        if (uVar10 == 0) {
                          iVar23 = 0x80;
                        }
                        *piVar26 = iVar23;
                        if (((uVar4 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if (iVar23 < (int)(DAT_027033dc - uVar30)) {
                          DAT_027033dc = iVar23 + uVar30;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      piVar26 = (int *)&DAT_027032c8;
                      goto LAB_00808c40;
                    }
                  }
                  bVar21 = 1;
                }
                if ((iVar13 == 0) && (uVar20 = DAT_00ca1350, (bVar21 & DAT_00ca1350 == 0x10) == 0))
                goto LAB_00808cbc;
                uVar20 = *puVar31;
                uVar30 = DAT_027033c4;
                if (((((uVar20 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) &&
                    (((uVar20 & 0xc00) == 0xc00 || ((uVar20 & 0xc00) == 0)))) &&
                   (((uVar20 & 0x1008) == 0 && (DAT_00ca16e8 == 0)))) {
                  DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                }
                else {
                  DAT_027033d4 = DAT_027033d4 | 4;
                }
              }
            }
          }
          else if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_02703348)) {
            DAT_027033dc = DAT_027032c8 + DAT_02703348;
          }
        }
        if ((uVar30 >> 5 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032d4 <= (int)(DAT_027033c0 - DAT_02703354))) {
            DAT_027033c4 = uVar30 & 0xffffffdf;
            DAT_027033d4 = DAT_027033d4 & 0xffffffdf;
            if ((((DAT_00cc9010 >> 0x15 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
               (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x20)) != 0)) {
              if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 4;
              }
              if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_00cc7000 = DAT_00cc7000 & 0xfffffeff;
            DAT_00cc9010 = DAT_00cc9010 | 0x20;
            uVar30 = DAT_027033c4;
          }
          else if (DAT_027032d4 < DAT_027033dc - DAT_02703354) {
            DAT_027033dc = DAT_027032d4 + DAT_02703354;
          }
        }
        if ((uVar30 >> 6 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032d8 <= (int)(DAT_027033c0 - DAT_02703358))) {
            DAT_027033c4 = uVar30 & 0xffffffbf;
            DAT_027033d4 = DAT_027033d4 & 0xffffffbf;
            if ((((DAT_00cc9010 >> 0x16 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
               (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x40)) != 0)) {
              if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 4;
              }
              if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_00cc7400 = DAT_00cc7400 & 0xfffffeff;
            DAT_00cc9010 = DAT_00cc9010 | 0x40;
            uVar30 = DAT_027033c4;
          }
          else if (DAT_027032d8 < DAT_027033dc - DAT_02703358) {
            DAT_027033dc = DAT_027032d8 + DAT_02703358;
          }
        }
        uVar20 = DAT_00cbec00;
        if ((uVar30 & 0xe0f19) == 0) goto LAB_00807e10;
        if ((uVar30 & 1) == 0) goto LAB_00809150;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
          if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
            DAT_027033dc = DAT_027032c0 + DAT_02703340;
          }
          goto LAB_00809150;
        }
        DAT_027033c4 = uVar30 & 0xfffffffe;
        DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
        DAT_02706260 = 0;
        uVar20 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar20 = 8;
        }
        DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18
        ;
        if ((DAT_00cc3000 >> 8 & 1) == 0) {
          FUN_009885d0(&PTR_FUN_00c9aa28,"vif0 running when CHCR == %x");
        }
        uVar20 = DAT_00cc3000;
        if (DAT_027062f1 != '\0') {
          DAT_027033c4 = DAT_027033c4 | 0x20000;
          DAT_02703384 = DAT_027033c0;
          DAT_02703304 = 0x10;
          if (0 < (int)DAT_02702544) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 0x10;
          }
LAB_0080913c:
          DAT_027033d4 = DAT_027033d4 | 1;
          uVar30 = DAT_027033c4;
          goto LAB_00809150;
        }
        if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
          if ((DAT_00cbe800 >> 0xd & 1) == 0) {
            DAT_00cbe800 = DAT_00cbe800 | 0x800;
          }
          if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
            DAT_00cbe800 = DAT_00cbe800 | 0x400;
          }
          DAT_00cca000 = DAT_00cca000 | 0x10;
          if ((((DAT_00cca010 >> 4 & 1) != 0) && ((DAT_02703250 & 0x10407) == 0x10401)) &&
             ((DAT_00cca010 & DAT_00cca000) != 0)) {
            if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 4;
            }
            if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
          }
          DAT_027062e0 = DAT_027062e0 + -1;
          if ((DAT_00cbe800 & 0x700) != 0) {
            uVar30 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar30 = 8;
            }
            uVar22 = DAT_00cbe800 & 0xe0000000;
            uVar30 = DAT_00cbe800 & 0xffffff | (uVar30 & 0x1f) << 0x18;
            DAT_00cbe800 = uVar22 | uVar30;
            if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
              DAT_00cbe800 = uVar22 | uVar30 & 0xeffffffc | 2;
              goto LAB_0080913c;
            }
          }
        }
        DAT_027062e8 = '\0';
        if (DAT_027062d0 == 0) {
          DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc;
        }
        else if ((DAT_027062e4 != 0) && (DAT_00cc3020 == 0)) {
          DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc | 1;
        }
        if ((DAT_02706320 & 1) != 0) {
          if (DAT_00cc3020 == 0) {
            DAT_02706320 = 0;
          }
          else if ((int)DAT_00cc3010 < 0) {
            uVar17 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_0080a49c:
            lVar24 = DAT_00ccb000 + uVar17;
            puVar28 = (undefined *)0x2000000;
LAB_0080a644:
            puVar28 = puVar28 + lVar24;
LAB_0080a648:
            iVar13 = DAT_00cc3020 * 4;
            if (DAT_02706314 != '\0') {
              puVar28 = puVar28 + (ulong)DAT_02706318 * 4;
              iVar13 = iVar13 - DAT_02706318;
            }
            FUN_005e2c60(puVar28,iVar13,0);
          }
          else {
            uVar17 = (ulong)DAT_00cc3010 & 0x1ffffff0;
            if (uVar17 >> 0x19 == 0) {
              if (DAT_00ccb000 != 0) {
                puVar28 = (undefined *)(DAT_00ccb000 + uVar17);
                goto LAB_0080a648;
              }
            }
            else {
              if (uVar17 >> 0x1c == 0) {
                puVar28 = &DAT_02884000;
                lVar24 = DAT_00ccb000;
                goto LAB_0080a644;
              }
              if ((uint)uVar17 < 0x10004000) {
                uVar17 = (ulong)(DAT_00cc3010 & 0x3ff0);
                goto LAB_0080a49c;
              }
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            }
            DAT_027062d0 = 0;
            DAT_027062c4 = 0;
            DAT_00cc3020 = 0;
          }
          uVar20 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar20 = 8;
          }
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          DAT_027032c0 = DAT_02706260;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c0 = 8;
          }
          goto LAB_0080a6d4;
        }
        if (DAT_027062e4 != 0) {
          DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
          uVar20 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar20 = 8;
          }
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          DAT_027062e8 = '\0';
          DAT_02706314 = '\0';
          if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
            if ((DAT_02706328 & 1) != 0) {
              if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080ab78:
                bVar12 = uVar20 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar20 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_0080ab78;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_0080abd0;
LAB_0080aba4:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_0080aba4;
LAB_0080abd0:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_0080ac0c;
            }
            DAT_02706322 = '\0';
            FUN_00604740(DAT_02706324);
          }
LAB_0080ac0c:
          DAT_02706260 = 0;
          if ((((DAT_00cc9010 >> 0x10 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
             (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 1)) != 0)) {
            if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 4;
            }
            if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
          }
          DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
          DAT_00cbe800 = DAT_00cbe800 & 0xe0ffffff;
          DAT_00cc9010 = DAT_00cc9010 | 1;
          uVar30 = DAT_027033c4;
          goto LAB_00809150;
        }
        uVar30 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_00809150;
        if (-1 < (int)DAT_00cc3030) {
          uVar17 = (ulong)DAT_00cc3030 & 0x1ffffff0;
          if (uVar17 >> 0x19 != 0) {
            if (uVar17 >> 0x1c != 0) {
              if (0x10003fff < (uint)uVar17) {
                FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
                goto LAB_0080b020;
              }
              uVar17 = (ulong)(DAT_00cc3030 & 0x3ff0);
              goto LAB_0080aa20;
            }
            puVar28 = &DAT_02884000;
            lVar24 = DAT_00ccb000;
            goto LAB_0080aa44;
          }
          if (DAT_00ccb000 != 0) {
            puVar31 = (uint *)(DAT_00ccb000 + uVar17);
            goto LAB_0080aa48;
          }
LAB_0080b020:
          FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
          DAT_00cc9010 = DAT_00cc9010 | 0x8000;
          goto LAB_0080b4a4;
        }
        uVar17 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_0080aa20:
        lVar24 = DAT_00ccb000 + uVar17;
        puVar28 = (undefined *)0x2000000;
LAB_0080aa44:
        puVar31 = (uint *)(puVar28 + lVar24);
LAB_0080aa48:
        DAT_00cc3000 = CONCAT22(*(undefined2 *)((long)puVar31 + 2),(undefined2)DAT_00cc3000);
        DAT_00cc3020 = (uint)(ushort)*puVar31;
        DAT_00cc3010 = puVar31[1];
        DAT_02706260 = DAT_02706260 + 1;
        DAT_02706320 = 0;
        if ((uVar20 >> 6 & 1) != 0) {
          DAT_02706258 = *(undefined8 *)(puVar31 + 2);
          DAT_02706250 = 0;
          if (DAT_02706314 == '\0') {
            DAT_02706318 = 2;
            DAT_02706314 = '\x01';
            puVar15 = &DAT_02706258;
            iVar13 = 2;
          }
          else {
            puVar15 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
            iVar13 = 4 - DAT_02706318;
          }
          uVar17 = FUN_005e2c60(puVar15,iVar13,1);
          if (((uVar17 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0080aa88;
          DAT_02706320 = 0;
          DAT_00cc3020 = 0;
          uVar20 = 0;
          goto LAB_0080b4b0;
        }
LAB_0080aa88:
        DAT_02706318 = 0;
        DAT_02706314 = '\0';
        switch(*puVar31 >> 0x1c & 7) {
        case 0:
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          goto code_r0x0080b43c;
        case 1:
          bVar21 = 0;
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
          DAT_00cc3030 = DAT_00cc3010;
          break;
        case 2:
          bVar21 = 0;
          uVar20 = DAT_00cc3030 + 0x10;
          DAT_00cc3030 = DAT_00cc3010;
          DAT_00cc3010 = uVar20;
          break;
        default:
          bVar21 = 0;
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          break;
        case 5:
          uVar20 = DAT_00cc3030 + 0x10;
          uVar30 = DAT_00cc3000 >> 4 & 3;
          if (uVar30 == 1) {
            DAT_00cc3050 = uVar20 + DAT_00cc3020 * 0x10;
          }
          else {
            if (uVar30 != 0) {
              DAT_00cc3010 = uVar20;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              goto code_r0x0080b43c;
            }
            DAT_00cc3040 = uVar20 + DAT_00cc3020 * 0x10;
          }
          bVar21 = 0;
          DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                         DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
          DAT_00cc3030 = DAT_00cc3010;
          DAT_00cc3010 = uVar20;
          break;
        case 6:
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
          uVar20 = DAT_00cc3000 >> 4 & 3;
          if (uVar20 == 2) {
            puVar27 = (uint *)&DAT_00cc3050;
          }
          else {
            if (uVar20 != 1) {
              bVar21 = 1;
              break;
            }
            puVar27 = (uint *)&DAT_00cc3040;
          }
          bVar21 = 0;
          DAT_00cc3030 = *puVar27;
          *puVar27 = 0;
          DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                         DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x0080b43c:
          bVar21 = 1;
        }
        DAT_027062e4 = DAT_027062e4 | bVar21;
        if (DAT_00cc3020 != 0) {
          DAT_02706320 = 1;
        }
        if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar31 < 0)) {
          DAT_027062e4 = 1;
        }
LAB_0080b4a4:
        uVar20 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar20 = 8;
        }
LAB_0080b4b0:
        DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18
        ;
        DAT_027032c0 = DAT_02706260;
        if ((DAT_02704f28 & 0x40) != 0) {
          DAT_027032c0 = 8;
        }
LAB_0080a6d4:
        DAT_027033c4 = DAT_027033c4 | 1;
        DAT_02703340 = DAT_027033c0;
        if ((DAT_027032c0 < 0x1d) && (0 < (int)DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
        uVar30 = DAT_027033c4;
        if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
          DAT_027033dc = DAT_027033c0 + DAT_027032c0;
        }
LAB_00809150:
        uVar22 = uVar30;
        uVar20 = DAT_00cc9010;
        if ((uVar30 >> 3 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
            DAT_027033c4 = uVar30 & 0xfffffff7;
            DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
            if (DAT_00cc6020 == 0) {
              DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
              uVar20 = DAT_00cc9010 | 8;
              uVar22 = DAT_027033c4;
              if ((((DAT_00cc9010 >> 0x13 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                 (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 8)) != 0)) {
                if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 4;
                }
                if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
              }
            }
            else {
              FUN_006709a0();
              uVar22 = DAT_027033c4;
              uVar20 = DAT_00cc9010;
              uVar30 = DAT_027033c4;
            }
          }
          else if (DAT_027032cc < DAT_027033dc - DAT_0270334c) {
            DAT_027033dc = DAT_027032cc + DAT_0270334c;
          }
        }
        DAT_00cc9010 = uVar20;
        uVar20 = DAT_00cc9010;
        if ((uVar30 >> 4 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032d0 <= (int)(DAT_027033c0 - DAT_02703350))) {
            DAT_027033c4 = uVar22 & 0xffffffef;
            DAT_027033d4 = DAT_027033d4 & 0xffffffef;
            if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
              FUN_006704a0();
              uVar20 = DAT_00cc9010;
              uVar22 = DAT_027033c4;
            }
            else {
              DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
              uVar20 = DAT_00cc9010 | 0x10;
              uVar22 = DAT_027033c4;
              if ((((DAT_00cc9010 >> 0x14 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                 (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x10)) != 0)) {
                if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 4;
                }
                if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
              }
            }
          }
          else if (DAT_027032d0 < DAT_027033dc - DAT_02703350) {
            DAT_027033dc = DAT_027032d0 + DAT_02703350;
          }
        }
        DAT_00cc9010 = uVar20;
        if ((uVar22 >> 0x13 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_0270330c <= (int)(DAT_027033c0 - DAT_0270338c))) {
            DAT_027033c4 = uVar22 & 0xfff7ffff;
            DAT_027033d4 = DAT_027033d4 & 0xfff7ffff;
            DAT_0281a6d4 = 0;
            uVar22 = DAT_027033c4;
            if (DAT_00cbd010 < 0) {
              FUN_00670c70();
              uVar22 = DAT_027033c4;
            }
          }
          else if (DAT_0270330c < DAT_027033dc - DAT_0270338c) {
            DAT_027033dc = DAT_0270330c + DAT_0270338c;
          }
        }
        if ((uVar22 >> 8 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032e0 <= (int)(DAT_027033c0 - DAT_02703360))) {
            DAT_027033c4 = uVar22 & 0xfffffeff;
            DAT_027033d4 = DAT_027033d4 & 0xfffffeff;
            FUN_005d4d40();
            uVar22 = DAT_027033c4;
          }
          else if (DAT_027032e0 < DAT_027033dc - DAT_02703360) {
            DAT_027033dc = DAT_027032e0 + DAT_02703360;
          }
        }
        uVar20 = DAT_00cc9010;
        if ((uVar22 >> 9 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
            DAT_027033c4 = uVar22 & 0xfffffdff;
            DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
            if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
              FUN_005d5b90();
              uVar20 = DAT_00cc9010;
              uVar22 = DAT_027033c4;
            }
            else {
              DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
              uVar20 = DAT_00cc9010 | 0x200;
              uVar22 = DAT_027033c4;
              if ((((DAT_00cc9010 >> 0x19 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                 (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x200)) != 0)) {
                if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 4;
                }
                if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
              }
            }
          }
          else if (DAT_027032e4 < DAT_027033dc - DAT_02703364) {
            DAT_027033dc = DAT_027032e4 + DAT_02703364;
          }
        }
        DAT_00cc9010 = uVar20;
        if ((uVar22 >> 10 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032e8 <= (int)(DAT_027033c0 - DAT_02703368))) {
            DAT_027033c4 = uVar22 & 0xfffffbff;
            DAT_027033d4 = DAT_027033d4 & 0xfffffbff;
            FUN_005d9ad0();
            uVar22 = DAT_027033c4;
          }
          else if (DAT_027032e8 < DAT_027033dc - DAT_02703368) {
            DAT_027033dc = DAT_027032e8 + DAT_02703368;
          }
        }
        if ((uVar22 >> 0xb & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             ((int)DAT_027032ec <= (int)(DAT_027033c0 - DAT_0270336c))) {
            DAT_027033c4 = uVar22 & 0xfffff7ff;
            DAT_027033d4 = DAT_027033d4 & 0xfffff7ff;
            FUN_003ef840();
            uVar22 = DAT_027033c4;
          }
          else if ((int)DAT_027032ec < DAT_027033dc - DAT_0270336c) {
            DAT_027033dc = DAT_027032ec + DAT_0270336c;
          }
        }
        uVar20 = DAT_00cbe800;
        if ((uVar22 >> 0x11 & 1) == 0) goto LAB_00809b78;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
          if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
            DAT_027033dc = DAT_02703304 + DAT_02703384;
          }
          goto LAB_00809b78;
        }
        DAT_027033c4 = uVar22 & 0xfffdffff;
        DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
        uVar20 = _DAT_02819070 & 1;
        if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar20 != 0)) {
          do {
            uVar20 = 0x100;
            if ((int)DAT_02704e08[1] == 0) {
              uVar20 = 1;
LAB_00809a0c:
              if ((uVar20 & _DAT_02819070) != 0) {
                uVar20 = DAT_028190d4;
                if ((int)DAT_02704e08[1] != 0) {
                  uVar20 = DAT_028196e4;
                }
                uVar20 = DAT_027033c0 - uVar20;
                if (0 < (int)uVar20) {
                  if (uVar20 < 0x11) {
                    uVar20 = 0x10;
                  }
                  (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar20);
                }
              }
            }
            else {
              if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0))
              goto LAB_00809a0c;
              FUN_005b1f50(&DAT_01701a00);
            }
            uVar20 = _DAT_02819070 & 1;
          } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar20 != 0);
          if ((_DAT_02819070 & 5) == 0) goto LAB_00809a68;
LAB_00809950:
          DAT_02703304 = 0x80;
          if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 0x80;
          }
LAB_00809b68:
          DAT_027033d4 = DAT_027033d4 | 0x20000;
          DAT_027033c4 = DAT_027033c4 | 0x20000;
          uVar20 = DAT_00cbe800;
          DAT_02703384 = DAT_027033c0;
          uVar22 = DAT_027033c4;
          goto LAB_00809b78;
        }
        if ((_DAT_02819070 & 5) != 0) goto LAB_00809950;
LAB_00809a68:
        uVar30 = DAT_028190d4;
        if (uVar20 != 0) {
          while ((_DAT_02819070 & 1) != 0) {
            (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
          }
          DAT_02703304 = (DAT_028190d4 - uVar30) * 2;
          if ((DAT_02703304 < 0x1d) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          iVar13 = DAT_027033dc - DAT_027033c0;
          if (iVar13 != DAT_02703304 &&
              (int)(iVar13 + (DAT_028190d4 - uVar30) * -2) < 0 == SBORROW4(iVar13,DAT_02703304)) {
            DAT_027033dc = DAT_027033c0 + DAT_02703304;
          }
          goto LAB_00809b68;
        }
        uVar20 = DAT_00cbe800 & 0xfffffffb;
        uVar22 = DAT_027033c4;
        if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
            ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_00809b78;
        DAT_02706260 = 0;
        uVar20 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar20 = 8;
        }
        uVar20 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xfffffb | (uVar20 & 0x1f) << 0x18;
        if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
          if ((DAT_00cbe800 >> 0xd & 1) == 0) {
            uVar20 = uVar20 | 0x800;
          }
          DAT_00cbe800 = uVar20;
          if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
            DAT_00cbe800 = uVar20 | 0x400;
          }
          FUN_003f7540(4);
          DAT_027062e0 = DAT_027062e0 + -1;
          uVar20 = DAT_00cbe800;
          if ((DAT_00cbe800 & 0x700) != 0) {
            uVar20 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar20 = 8;
            }
            uVar30 = DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
            if ((DAT_00cc3020 != 0) ||
               (uVar20 = DAT_00cbe800 & 0xe0000000 | uVar30, DAT_027062e4 == 0)) {
              DAT_027033d4 = DAT_027033d4 | 1;
              uVar20 = DAT_00cbe800 & 0xe0000000 | uVar30 & 0xeffffffc | 2;
              uVar22 = DAT_027033c4;
              goto LAB_00809b78;
            }
          }
        }
        DAT_00cbe800 = uVar20;
        DAT_027062e8 = '\0';
        if (DAT_027062d0 == 0) {
          DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc;
        }
        else if ((DAT_027062e4 != 0) && (DAT_00cc3020 == 0)) {
          DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc | 1;
        }
        if ((DAT_02706320 & 1) != 0) {
          if (DAT_00cc3020 == 0) {
            DAT_02706320 = 0;
          }
          else if ((int)DAT_00cc3010 < 0) {
            uVar17 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_0080aeec:
            lVar24 = DAT_00ccb000 + uVar17;
            puVar28 = (undefined *)0x2000000;
LAB_0080af14:
            puVar28 = puVar28 + lVar24;
LAB_0080af18:
            iVar13 = DAT_00cc3020 * 4;
            if (DAT_02706314 != '\0') {
              puVar28 = puVar28 + (ulong)DAT_02706318 * 4;
              iVar13 = iVar13 - DAT_02706318;
            }
            FUN_005e2c60(puVar28,iVar13,0);
          }
          else {
            uVar17 = (ulong)DAT_00cc3010 & 0x1ffffff0;
            if (uVar17 >> 0x19 == 0) {
              if (DAT_00ccb000 != 0) {
                puVar28 = (undefined *)(DAT_00ccb000 + uVar17);
                goto LAB_0080af18;
              }
            }
            else {
              if (uVar17 >> 0x1c == 0) {
                puVar28 = &DAT_02884000;
                lVar24 = DAT_00ccb000;
                goto LAB_0080af14;
              }
              if ((uint)uVar17 < 0x10004000) {
                uVar17 = (ulong)(DAT_00cc3010 & 0x3ff0);
                goto LAB_0080aeec;
              }
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            }
            DAT_027062d0 = 0;
            DAT_027062c4 = 0;
            DAT_00cc3020 = 0;
          }
          uVar20 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar20 = 8;
          }
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          DAT_027032c0 = DAT_02706260;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c0 = 8;
          }
          goto LAB_0080afa4;
        }
        if (DAT_027062e4 != 0) {
          DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
          uVar20 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar20 = 8;
          }
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          DAT_027062e8 = '\0';
          DAT_02706314 = '\0';
          if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
            if ((DAT_02706328 & 1) != 0) {
              if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080b5dc:
                bVar12 = uVar20 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar20 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_0080b5dc;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_0080b634;
LAB_0080b608:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_0080b608;
LAB_0080b634:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_0080b658;
            }
            DAT_02706322 = '\0';
            FUN_00604740(DAT_02706324);
          }
LAB_0080b658:
          DAT_02706260 = 0;
          FUN_003f75f0(0);
          DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
          uVar20 = DAT_00cbe800 & 0xe0ffffff;
          uVar22 = DAT_027033c4;
          goto LAB_00809b78;
        }
        uVar20 = DAT_00cbe800;
        uVar22 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_00809b78;
        if ((int)DAT_00cc3030 < 0) {
          uVar17 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_0080b3b4:
          puVar31 = (uint *)(DAT_00ccb000 + uVar17 + 0x2000000);
        }
        else {
          uVar17 = (ulong)DAT_00cc3030 & 0x1ffffff0;
          if (uVar17 >> 0x19 == 0) {
            puVar31 = (uint *)(DAT_00ccb000 + uVar17);
          }
          else if (uVar17 >> 0x1c == 0) {
            puVar31 = (uint *)(&DAT_02884000 + DAT_00ccb000);
          }
          else {
            if ((uint)uVar17 < 0x10004000) {
              uVar17 = (ulong)(DAT_00cc3030 & 0x3ff0);
              goto LAB_0080b3b4;
            }
            FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            puVar31 = (uint *)0x0;
          }
        }
        uVar17 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar31);
        if ((uVar17 & 1) == 0) goto LAB_0080c6ac;
        DAT_00cc3010 = puVar31[1];
        DAT_02706260 = DAT_02706260 + 1;
        DAT_02706320 = 0;
        if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
          DAT_02706258 = *(undefined8 *)(puVar31 + 2);
          DAT_02706250 = 0;
          if (DAT_02706314 == '\0') {
            DAT_02706318 = 2;
            DAT_02706314 = '\x01';
            puVar15 = &DAT_02706258;
            iVar13 = 2;
          }
          else {
            puVar15 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
            iVar13 = 4 - DAT_02706318;
          }
          uVar17 = FUN_005e2c60(puVar15,iVar13,1);
          if (((uVar17 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0080bf7c;
          DAT_02706320 = 0;
          DAT_00cc3020 = 0;
          uVar20 = 0;
          goto LAB_0080c6cc;
        }
LAB_0080bf7c:
        DAT_02706318 = 0;
        DAT_02706314 = '\0';
        switch(*puVar31 >> 0x1c & 7) {
        case 0:
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          goto code_r0x0080c274;
        case 1:
          bVar21 = 0;
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          DAT_00cc3010 = DAT_00cc3030;
          break;
        case 2:
          bVar21 = 0;
          uVar20 = DAT_00cc3030 + 0x10;
          DAT_00cc3030 = DAT_00cc3010;
          DAT_00cc3010 = uVar20;
          break;
        default:
          bVar21 = 0;
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          break;
        case 5:
          uVar20 = DAT_00cc3030 + 0x10;
          uVar30 = DAT_00cc3000 >> 4 & 3;
          if (uVar30 == 1) {
            DAT_00cc3050 = uVar20 + DAT_00cc3020 * 0x10;
          }
          else {
            if (uVar30 != 0) {
              DAT_00cc3010 = uVar20;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              bVar21 = 1;
              break;
            }
            DAT_00cc3040 = uVar20 + DAT_00cc3020 * 0x10;
          }
          bVar21 = 0;
          DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                         DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
          DAT_00cc3030 = DAT_00cc3010;
          DAT_00cc3010 = uVar20;
          break;
        case 6:
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
          uVar20 = DAT_00cc3000 >> 4 & 3;
          if (uVar20 == 2) {
            puVar27 = (uint *)&DAT_00cc3050;
          }
          else {
            if (uVar20 != 1) {
              bVar21 = 1;
              break;
            }
            puVar27 = (uint *)&DAT_00cc3040;
          }
          bVar21 = 0;
          DAT_00cc3030 = *puVar27;
          *puVar27 = 0;
          DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                         DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x0080c274:
          bVar21 = 1;
        }
        DAT_027062e4 = DAT_027062e4 | bVar21;
        if (DAT_00cc3020 != 0) {
          DAT_02706320 = 1;
        }
        if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar31 < 0)) {
          DAT_027062e4 = 1;
        }
LAB_0080c6ac:
        uVar20 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar20 = 8;
        }
LAB_0080c6cc:
        DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18
        ;
        DAT_027032c0 = DAT_02706260;
        if ((DAT_02704f28 & 0x40) != 0) {
          DAT_027032c0 = 8;
        }
LAB_0080afa4:
        DAT_027033c4 = DAT_027033c4 | 1;
        DAT_02703340 = DAT_027033c0;
        if ((DAT_027032c0 < 0x1d) && (0 < (int)DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
        uVar20 = DAT_00cbe800;
        uVar22 = DAT_027033c4;
        if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
          DAT_027033dc = DAT_027033c0 + DAT_027032c0;
        }
LAB_00809b78:
        DAT_00cbe800 = uVar20;
        uVar20 = DAT_00cbec00;
        uVar30 = uVar22;
        if ((uVar22 >> 0x12 & 1) == 0) goto LAB_00807e10;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703388) < (int)DAT_02703308)) {
          if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
            DAT_027033dc = DAT_02703308 + DAT_02703388;
          }
          goto LAB_00807e10;
        }
        DAT_027033c4 = uVar22 & 0xfffbffff;
        DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
        while (((uVar20 = DAT_028196e4, (DAT_02704e14 >> 3 & 1) == 0 ||
                ((DAT_02704f20 >> 4 & 1) == 0)) &&
               ((0 < (int)(DAT_027033c0 - DAT_028196e4) && ((_DAT_02819070 >> 8 & 1) != 0))))) {
          uVar20 = 0x100;
          if ((int)DAT_02704e00[1] == 0) {
            uVar20 = 1;
LAB_00809c70:
            if ((uVar20 & _DAT_02819070) != 0) {
              uVar20 = DAT_028190d4;
              if ((int)DAT_02704e00[1] != 0) {
                uVar20 = DAT_028196e4;
              }
              uVar20 = DAT_027033c0 - uVar20;
              if (0 < (int)uVar20) {
                if (uVar20 < 0x11) {
                  uVar20 = 0x10;
                }
                (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar20);
              }
            }
          }
          else {
            if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_00809c70;
            FUN_005b1f50(&DAT_01701a00);
          }
        }
        if ((_DAT_02819070 & 0x500) != 0) {
          FUN_005b1f50(&DAT_01701a00);
          if ((DAT_02704e14 >> 3 & 1) == 0) {
            uVar30 = 0x80;
          }
          else if (((DAT_02704f20 & 0x30) == 0x10) && ((_DAT_02819070 & 0x100) != 0)) {
            uVar30 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
            if ((int)uVar30 < 2) {
              uVar30 = 1;
            }
          }
          else {
            uVar30 = 0x80;
          }
          DAT_027033c4 = DAT_027033c4 | 0x40000;
          if ((uVar30 < 0x1d) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar20 = DAT_027033c0;
          DAT_02703308 = uVar30;
          if ((int)uVar30 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0080a120:
            DAT_027033dc = uVar20 + uVar30;
          }
LAB_0080a12c:
          DAT_027033d4 = DAT_027033d4 | 0x40000;
          uVar20 = DAT_00cbec00;
          DAT_02703388 = DAT_027033c0;
          uVar30 = DAT_027033c4;
          goto LAB_00807e10;
        }
        if ((_DAT_02819070 >> 8 & 1) != 0) {
          if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) {
            (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,&fde_table_entry_002dc6c0);
            if ((_DAT_02819070 >> 8 & 1) != 0) {
              _DAT_02819070 = _DAT_02819070 & 0xfffffeff;
            }
          }
          else {
            if ((DAT_02704f20 >> 5 & 1) != 0) {
              FUN_009a4a80(&DAT_02701a88);
            }
            FUN_005b1f50(&DAT_01701a00);
          }
          if ((((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) ||
             ((_DAT_02819070 & 0x100) == 0)) {
            uVar20 = DAT_028196e4 - uVar20;
          }
          else {
            uVar20 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
            if ((int)uVar20 < 2) {
              uVar20 = 1;
            }
          }
          DAT_027033c4 = DAT_027033c4 | 0x40000;
          if (((int)uVar20 < 0x1d) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar30 = DAT_027033c0;
          DAT_02703308 = uVar20;
          if ((int)uVar20 < (int)(DAT_027033dc - DAT_027033c0)) goto LAB_0080a120;
          goto LAB_0080a12c;
        }
        uVar20 = DAT_00cbec00 & 0xfffffffb;
        uVar30 = DAT_027033c4;
        if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
           (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_00807e10;
        if ((_DAT_00cc9000 & 0xc) == 8) {
          DAT_00cbec00 = uVar20;
          FUN_005d9ad0();
          uVar20 = DAT_00cbec00;
          uVar30 = DAT_027033c4;
          goto LAB_00807e10;
        }
        DAT_02706280 = 0;
        if ((DAT_00cbe020 & 0xc00) == 0x800) {
          if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
             (uVar30 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
            if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_0080b754;
            uVar30 = DAT_00ca1510 & 0xfffffffb;
          }
          if (uVar30 == 0) {
            DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
            DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
            if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080b6b8:
              bVar12 = uVar20 == 0;
            }
            else {
              if (DAT_00ca1398 <= DAT_00ca139c) {
                uVar20 = DAT_00ca13f0 & 0xfffffffb;
                goto LAB_0080b6b8;
              }
              bVar12 = false;
            }
            if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               ((DAT_02704f20 >> 4 & 1) != 0)) {
              if (DAT_00ca1638 == 0) goto LAB_0080b70c;
LAB_0080b6e8:
              bVar11 = true;
            }
            else {
              if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0))
              goto LAB_0080b6e8;
LAB_0080b70c:
              bVar11 = false;
            }
            uVar20 = DAT_00cbec00;
            if (bVar11 || !bVar12) {
              FUN_003ecbd0(&DAT_00ca1380,0,1);
              uVar20 = DAT_00cbec00;
            }
          }
        }
LAB_0080b754:
        DAT_00cbec00 = uVar20;
        if ((_DAT_00cc9000 & 0xc) == 8) {
          if ((DAT_00cc4000 & 0xc) == 0) {
            FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
          }
          uVar20 = DAT_00cc4020;
          if (0xf < DAT_00cc4020) {
            uVar20 = 0x10;
          }
          DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                         DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          FUN_005d9ad0();
          uVar20 = DAT_00cbec00;
          uVar30 = DAT_027033c4;
          goto LAB_00807e10;
        }
        if ((DAT_00cc4000 & 1) != 0) {
          if ((DAT_02706360 & 0x7f) == 0x51) {
            uVar20 = *DAT_00ca16f0;
            if ((uVar20 >> 10 & 3 | 2) == 2) {
LAB_0080b82c:
              if (((uVar20 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_0080b844;
            }
          }
          else {
            if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_0080b844:
              uVar20 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar20 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xfffff7 | (uVar20 & 0x1f) << 0x18;
              goto LAB_0080b870;
            }
            uVar20 = *DAT_00ca16f0;
            uVar30 = uVar20 >> 10 & 3;
            if (((uVar30 == 0) || (uVar30 == 2)) ||
               ((uVar30 == 3 && (((uVar20 >> 2 & 1) != 0 && (DAT_00ca1630 == 3))))))
            goto LAB_0080b82c;
          }
          DAT_02703344 = DAT_027033c0;
          DAT_027033c4 = DAT_027033c4 | 2;
          DAT_027032c4 = 8;
          if ((DAT_02704f28 & 0x40) == 0) {
            DAT_027032c4 = 0x80;
          }
          if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_027032c4;
          }
          uVar20 = DAT_00cbec00;
          uVar30 = DAT_027033c4;
          if ((~DAT_00cbe020 & 0xc00) == 0) {
            uVar20 = DAT_00cbec00 | 8;
          }
          goto LAB_00807e10;
        }
LAB_0080b870:
        if (DAT_02706381 != '\0') {
          if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
            DAT_02703308 = 0x10;
          }
          else {
            DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
            if ((int)DAT_02703308 < 0x11) {
              DAT_02703308 = 0x10;
            }
          }
          DAT_027033c4 = DAT_027033c4 | 0x40000;
          DAT_02703388 = DAT_027033c0;
          if ((DAT_02703308 < 0x1d) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_02703308;
          }
LAB_0080ba74:
          DAT_027033d4 = DAT_027033d4 | 2;
          uVar20 = DAT_00cbec00;
          uVar30 = DAT_027033c4;
          goto LAB_00807e10;
        }
        if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_0080ba74;
        if ((DAT_00cc4000 >> 8 & 1) == 0) {
          FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
        }
        uVar20 = DAT_00cbec00;
        if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
          if ((DAT_00cbec00 >> 0xd & 1) == 0) {
            DAT_00cbec00 = DAT_00cbec00 | 0x800;
          }
          if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
            DAT_00cbec00 = DAT_00cbec00 | 0x400;
          }
          FUN_003f7540(5);
          DAT_02706370 = DAT_02706370 + -1;
          uVar20 = DAT_00cbec00;
          if ((DAT_00cbec00 & 0x700) != 0) {
            uVar20 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar20 = 0x10;
            }
            uVar30 = (uVar20 & 0x1f) << 0x18;
            uVar20 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar30;
            if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
              DAT_027033d4 = DAT_027033d4 | 2;
              uVar20 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar30 | 2;
              uVar30 = DAT_027033c4;
              goto LAB_00807e10;
            }
          }
        }
        DAT_00cbec00 = uVar20;
        DAT_02706378 = '\0';
        if (DAT_02706360 == 0) {
          DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc;
        }
        else if ((DAT_02706374 != 0) && (DAT_00cc4020 == 0)) {
          DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc | 1;
        }
        if ((DAT_027063b0 & 1) != 0) {
          FUN_005d9740();
          if ((DAT_00cc4000 & 1) != 0) {
            uVar20 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar20 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          }
          uVar20 = DAT_00cbec00;
          if (((DAT_00cbec00 >> 3 & 1) != 0) && (uVar30 = DAT_027033c4, DAT_00ca1630 != 0))
          goto LAB_00807e10;
          if (DAT_02706381 == '\0') {
            DAT_027033c4 = DAT_027033c4 | 2;
            DAT_027032c4 = DAT_02706280;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c4 = 8;
            }
            DAT_02703344 = DAT_027033c0;
            if (((int)DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            uVar30 = DAT_027033c4;
            if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_00807e10;
            goto LAB_0080c5ac;
          }
          if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
            DAT_027032c4 = 1;
          }
          else {
            DAT_027032c4 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
            if ((int)DAT_027032c4 < 2) {
              DAT_027032c4 = 1;
            }
          }
          if ((int)DAT_027032c4 <= (int)DAT_02706280) {
            DAT_027032c4 = DAT_02706280;
          }
          DAT_027033c4 = DAT_027033c4 | 2;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c4 = 8;
          }
          DAT_02703344 = DAT_027033c0;
          if ((DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar30 = DAT_027033c4;
          if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_00807e10;
          goto LAB_0080c324;
        }
        if (DAT_02706374 != 0) {
          if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
            DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
          }
          if ((DAT_00cc4000 & 1) != 0) {
            uVar20 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar20 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
          }
          DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
          DAT_02706378 = '\0';
          DAT_027063a4 = '\0';
          if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
            if ((DAT_027063b8 & 1) != 0) {
              if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080c744:
                bVar12 = uVar20 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar20 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_0080c744;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_0080c7a8;
LAB_0080c778:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_0080c778;
LAB_0080c7a8:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_0080c7cc;
            }
            DAT_027063b2 = '\0';
            FUN_00605e90(DAT_027063b4);
          }
LAB_0080c7cc:
          DAT_02706280 = 0;
          FUN_003f75f0(1);
          DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
          uVar20 = DAT_00cbec00;
          uVar30 = DAT_027033c4;
          goto LAB_00807e10;
        }
        uVar20 = DAT_00cbec00;
        uVar30 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_00807e10;
        if ((int)DAT_00cc4030 < 0) {
          uVar17 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_0080c80c:
          puVar31 = (uint *)(DAT_00ccb000 + uVar17 + 0x2000000);
        }
        else {
          uVar17 = (ulong)DAT_00cc4030 & 0x1ffffff0;
          if (uVar17 >> 0x19 == 0) {
            puVar31 = (uint *)(DAT_00ccb000 + uVar17);
          }
          else if (uVar17 >> 0x1c == 0) {
            puVar31 = (uint *)(&DAT_02884000 + DAT_00ccb000);
          }
          else {
            if ((uint)uVar17 < 0x10004000) {
              uVar17 = (ulong)(DAT_00cc4030 & 0x3ff0);
              goto LAB_0080c80c;
            }
            FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            puVar31 = (uint *)0x0;
          }
        }
        uVar17 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar31);
        if ((uVar17 & 1) == 0) goto LAB_0080cbc8;
        DAT_00cc4010 = puVar31[1];
        DAT_02706280 = DAT_02706280 + 1;
        DAT_027063b0 = DAT_027063b0 & 0xfe;
        if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
            ((*puVar31 & 0x70000000) == 0x40000000)) &&
           ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
          FUN_003f75f0(0xd);
          goto LAB_0080cbc8;
        }
        if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
          DAT_02706278 = *(undefined8 *)(puVar31 + 2);
          DAT_02706270 = 0;
          if (DAT_027063a4 == '\0') {
            DAT_027063a8 = 2;
            DAT_027063a4 = '\x01';
            puVar15 = &DAT_02706278;
            iVar13 = 2;
          }
          else {
            puVar15 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
            iVar13 = 4 - DAT_027063a8;
          }
          uVar17 = FUN_005e3030(puVar15,iVar13,1);
          if (((uVar17 & 1) == 0) && (DAT_027063a4 != '\0')) {
            DAT_027063b0 = DAT_027063b0 & 0xfe;
            DAT_00cc4020 = 0;
            goto LAB_0080cbc8;
          }
        }
        DAT_027063a8 = 0;
        DAT_027063a4 = '\0';
        switch(*puVar31 >> 0x1c & 7) {
        case 0:
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          goto code_r0x0080cb40;
        case 1:
          bVar21 = 0;
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
          DAT_00cc4030 = DAT_00cc4010;
          break;
        case 2:
          bVar21 = 0;
          uVar20 = DAT_00cc4030 + 0x10;
          DAT_00cc4030 = DAT_00cc4010;
          DAT_00cc4010 = uVar20;
          break;
        default:
          bVar21 = 0;
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          break;
        case 5:
          uVar20 = DAT_00cc4030 + 0x10;
          uVar30 = DAT_00cc4000 >> 4 & 3;
          if (uVar30 == 1) {
            DAT_00cc4050 = uVar20 + DAT_00cc4020 * 0x10;
          }
          else {
            if (uVar30 != 0) {
              DAT_00cc4010 = uVar20;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              goto code_r0x0080cb40;
            }
            DAT_00cc4040 = uVar20 + DAT_00cc4020 * 0x10;
          }
          bVar21 = 0;
          DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                         DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
          DAT_00cc4030 = DAT_00cc4010;
          DAT_00cc4010 = uVar20;
          break;
        case 6:
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
          uVar20 = DAT_00cc4000 >> 4 & 3;
          if (uVar20 == 2) {
            puVar27 = (uint *)&DAT_00cc4050;
          }
          else {
            if (uVar20 != 1) goto code_r0x0080cb40;
            puVar27 = (uint *)&DAT_00cc4040;
          }
          bVar21 = 0;
          DAT_00cc4030 = *puVar27;
          *puVar27 = 0;
          DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                         DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x0080cb40:
          bVar21 = 1;
        }
        DAT_02706374 = DAT_02706374 | bVar21;
        if (DAT_00cc4020 != 0) {
          DAT_027063b0 = DAT_027063b0 | 1;
        }
        if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar31 < 0)) {
          DAT_02706374 = 1;
        }
LAB_0080cbc8:
        if ((DAT_00cc4000 & 1) != 0) {
          uVar20 = DAT_00cc4020;
          if (0xf < DAT_00cc4020) {
            uVar20 = 0x10;
          }
          DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                         DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
        }
        uVar20 = DAT_00cbec00;
        if (((DAT_00cbec00 >> 3 & 1) == 0) || (uVar30 = DAT_027033c4, DAT_00ca1630 == 0)) {
          if (DAT_02706381 == '\0') {
            DAT_027033c4 = DAT_027033c4 | 2;
            DAT_027032c4 = DAT_02706280;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c4 = 8;
            }
            DAT_02703344 = DAT_027033c0;
            if (((int)DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            uVar30 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0080c5ac:
              DAT_027033dc = DAT_027033c0 + DAT_027032c4;
              uVar20 = DAT_00cbec00;
              DAT_02703344 = DAT_027033c0;
              uVar30 = DAT_027033c4;
            }
          }
          else {
            if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
              DAT_027032c4 = 1;
            }
            else {
              DAT_027032c4 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
              if ((int)DAT_027032c4 < 2) {
                DAT_027032c4 = 1;
              }
            }
            if ((int)DAT_027032c4 <= (int)DAT_02706280) {
              DAT_027032c4 = DAT_02706280;
            }
            DAT_027033c4 = DAT_027033c4 | 2;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c4 = 8;
            }
            DAT_02703344 = DAT_027033c0;
            if ((DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            uVar30 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0080c324:
              DAT_027033dc = DAT_027033c0 + DAT_027032c4;
              uVar20 = DAT_00cbec00;
              DAT_02703344 = DAT_027033c0;
              uVar30 = DAT_027033c4;
            }
          }
        }
LAB_00807e10:
        DAT_00cbec00 = uVar20;
        unaff_x20 = (int *)&DAT_027033c4;
        unaff_x22 = &PTR_FUN_00c9aa28;
        uVar20 = DAT_00cbec00;
      } while ((uVar30 & (DAT_027033d4 ^ 0xffffffff) & 0x1ffff) != 0);
      goto LAB_008063b0;
    }
  }
  else if ((_DAT_00cc9000 & 1) == 0) goto LAB_008063b0;
  if ((DAT_00cca520._2_1_ & 1) != 0) goto LAB_008063b0;
  unaff_x20 = (int *)&DAT_02703000;
  if ((DAT_027033c4 >> 0x14 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_02703310 <= (int)(DAT_027033c0 - DAT_02703390))) {
      DAT_027033c4 = DAT_027033c4 & 0xffefffff;
      DAT_027033d4 = DAT_027033d4 & 0xffefffff;
      _DAT_02819070 = _DAT_02819070 & 0xffff00ff;
    }
    else if (DAT_02703310 < DAT_027033dc - DAT_02703390) {
      DAT_027033dc = DAT_02703310 + DAT_02703390;
    }
  }
  if ((DAT_027033c4 >> 1 & 1) == 0) goto LAB_008046e4;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
      DAT_027033dc = DAT_027032c4 + DAT_02703344;
    }
    goto LAB_008046e4;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffd;
  unaff_x22 = (undefined **)&DAT_02706000;
  DAT_02706280 = 0;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar20 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_008043d4;
      uVar20 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar20 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00804340:
        bVar12 = uVar20 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar20 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_00804340;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 == 0) goto LAB_008043ac;
LAB_00804378:
        bVar11 = true;
      }
      else {
        if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto LAB_00804378;
LAB_008043ac:
        bVar11 = false;
      }
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
      }
    }
  }
LAB_008043d4:
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar20 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar20 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    FUN_005d9ad0();
    goto LAB_008046e4;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar20 = *DAT_00ca16f0;
      if ((uVar20 >> 10 & 3 | 2) == 2) {
LAB_008044b0:
        if (((uVar20 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_008044c8;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_008044c8:
        uVar20 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar20 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar20 & 0x1f) << 0x18
        ;
        goto LAB_008044fc;
      }
      uVar20 = *DAT_00ca16f0;
      uVar30 = uVar20 >> 10 & 3;
      if (((uVar30 == 0) || (uVar30 == 2)) ||
         ((uVar30 == 3 && (((uVar20 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_008044b0;
    }
    DAT_02703344 = DAT_027033c0;
    DAT_027033c4 = DAT_027033c4 | 2;
    DAT_027032c4 = 8;
    if ((DAT_02704f28 & 0x40) == 0) {
      DAT_027032c4 = 0x80;
    }
    if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c4;
    }
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 8;
    }
    goto LAB_008046e4;
  }
LAB_008044fc:
  if (DAT_02706381 != '\0') {
    if ((DAT_02704e14 >> 3 & 1) == 0) {
      DAT_02703308 = 0x10;
    }
    else {
      DAT_02703308 = 0x10;
      if (((DAT_02704f20 & 0x30) == 0x10) &&
         (DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0, (int)DAT_02703308 < 0x11)) {
        DAT_02703308 = 0x10;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    DAT_02703388 = DAT_027033c0;
    if ((DAT_02703308 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_008046cc:
    DAT_027033d4 = DAT_027033d4 | 2;
    goto LAB_008046e4;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_008046cc;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar20 = DAT_00cbec00;
  if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
    if ((DAT_00cbec00 >> 0xd & 1) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 0x800;
    }
    if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
      DAT_00cbec00 = DAT_00cbec00 | 0x400;
    }
    DAT_00cca000 = DAT_00cca000 | 0x20;
    if ((((DAT_00cca010 >> 5 & 1) != 0) && ((DAT_02703250 & 0x10407) == 0x10401)) &&
       ((DAT_00cca010 & DAT_00cca000) != 0)) {
      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + 4;
      }
      if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_02706370 = DAT_02706370 + -1;
    uVar20 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar20 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar20 = 0x10;
      }
      uVar30 = (uVar20 & 0x1f) << 0x18;
      uVar20 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar30;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar30 | 2;
        goto LAB_008046cc;
      }
    }
  }
  DAT_00cbec00 = uVar20;
  DAT_02706378 = '\0';
  if (DAT_02706360 == 0) {
    DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc;
  }
  else if ((DAT_02706374 != 0) && (DAT_00cc4020 == 0)) {
    DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc | 1;
  }
  if ((DAT_027063b0 & 1) != 0) {
    FUN_005d9740();
    if ((DAT_00cc4000 & 1) != 0) {
      uVar20 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar20 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    }
    if (((DAT_00cbec00 >> 3 & 1) != 0) && (DAT_00ca1630 != 0)) goto LAB_008046e4;
    if (DAT_02706381 == '\0') goto LAB_0080ef90;
    if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
      DAT_027032c4 = 1;
    }
    else {
      DAT_027032c4 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)DAT_027032c4 < 2) {
        DAT_027032c4 = 1;
      }
    }
    if ((int)DAT_027032c4 <= (int)DAT_02706280) {
      DAT_027032c4 = DAT_02706280;
    }
    DAT_027033c4 = DAT_027033c4 | 2;
    if ((DAT_02704f28 & 0x40) != 0) {
      DAT_027032c4 = 8;
    }
    DAT_02703344 = DAT_027033c0;
    if ((DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_008046e4;
    goto LAB_0080d528;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar20 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar20 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080de68:
          bVar12 = uVar20 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar20 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_0080de68;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_0080ded4;
LAB_0080dea0:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_0080dea0;
LAB_0080ded4:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_0080def4;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_0080def4:
    DAT_02706280 = 0;
    if ((((DAT_00cc9010 >> 0x11 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
       (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 2)) != 0)) {
      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + 4;
      }
      if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    DAT_00cc9010 = DAT_00cc9010 | 2;
    goto LAB_008046e4;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_008046e4;
  if ((int)DAT_00cc4030 < 0) {
    uVar17 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_0080dfb4:
    puVar31 = (uint *)(DAT_00ccb000 + uVar17 + 0x2000000);
  }
  else {
    uVar17 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar17 >> 0x19 == 0) {
      puVar31 = (uint *)(DAT_00ccb000 + uVar17);
    }
    else if (uVar17 >> 0x1c == 0) {
      puVar31 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar17 < 0x10004000) {
        uVar17 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_0080dfb4;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar31 = (uint *)0x0;
    }
  }
  uVar17 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar31);
  if ((uVar17 & 1) == 0) goto LAB_0080eee8;
  DAT_00cc4010 = puVar31[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar31 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_0080eee8;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar31 + 2);
    DAT_02706270 = 0;
    if (DAT_027063a4 == '\0') {
      DAT_027063a8 = 2;
      DAT_027063a4 = '\x01';
      puVar15 = &DAT_02706278;
      iVar13 = 2;
    }
    else {
      puVar15 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
      iVar13 = 4 - DAT_027063a8;
    }
    uVar17 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar17 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_0080eee8;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar31 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x0080eea8;
  case 1:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar20 = DAT_00cc4030;
    break;
  case 2:
    uVar20 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  default:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar20 = DAT_00cc4010;
    break;
  case 5:
    uVar20 = DAT_00cc4030 + 0x10;
    uVar30 = DAT_00cc4000 >> 4 & 3;
    if (uVar30 == 1) {
      DAT_00cc4050 = uVar20 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar30 != 0) {
        DAT_00cc4010 = uVar20;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x0080eea8;
      }
      DAT_00cc4040 = uVar20 + DAT_00cc4020 * 0x10;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar20 = DAT_00cc4000 >> 4 & 3;
    if (uVar20 == 2) {
      puVar27 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar20 != 1) goto code_r0x0080eea8;
      puVar27 = (uint *)&DAT_00cc4040;
    }
    DAT_00cc4030 = *puVar27;
    *puVar27 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    uVar20 = DAT_00cc4010;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x0080eea8:
    DAT_02706374 = DAT_02706374 | 1;
    uVar20 = DAT_00cc4010;
  }
  DAT_00cc4010 = uVar20;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar31 < 0)) {
    DAT_02706374 = 1;
  }
LAB_0080eee8:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar20 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar20 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
  }
  if (((DAT_00cbec00 >> 3 & 1) == 0) || (DAT_00ca1630 == 0)) {
    if (DAT_02706381 == '\0') {
LAB_0080ef90:
      DAT_027033c4 = DAT_027033c4 | 2;
      DAT_027032c4 = DAT_02706280;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      DAT_02703344 = DAT_027033c0;
      if (((int)DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + DAT_027032c4;
      }
    }
    else {
      if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
        DAT_027032c4 = 1;
      }
      else {
        DAT_027032c4 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
        if ((int)DAT_027032c4 < 2) {
          DAT_027032c4 = 1;
        }
      }
      if ((int)DAT_027032c4 <= (int)DAT_02706280) {
        DAT_027032c4 = DAT_02706280;
      }
      DAT_027033c4 = DAT_027033c4 | 2;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      DAT_02703344 = DAT_027033c0;
      if ((DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0080d528:
        DAT_027033dc = DAT_027033c0 + DAT_027032c4;
        DAT_02703344 = DAT_027033c0;
      }
    }
  }
LAB_008046e4:
  if ((DAT_027033c4 >> 2 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       ((int)DAT_027032c8 <= (int)(DAT_027033c0 - DAT_02703348))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffffb;
      DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
      unaff_x22 = (undefined **)0xca1000;
      if (DAT_00ca1630 == 4) {
        DAT_00ca1630 = 0;
      }
      if (((~DAT_00cbe020 & 0xc00) == 0) &&
         (DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff, (DAT_00ca1630 & 0xfffffffb) == 0)) {
        if ((DAT_00ca13ec == 0) &&
           (((DAT_02704e14 >> 3 & 1) != 0 && (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)))
           ) {
LAB_008048a4:
          bVar12 = uVar20 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar20 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_008048a4;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_00804910;
LAB_008048dc:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_008048dc;
LAB_00804910:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) {
          FUN_003ecbd0(&DAT_00ca1380,0,1);
        }
      }
      uVar20 = DAT_027033c0;
      puVar31 = DAT_00ca16f0;
      if ((DAT_00ca1630 == 0) && (((byte)DAT_00cbec00 >> 3 & 1) != 0)) {
        if ((DAT_027033c4 >> 1 & 1) == 0) {
          DAT_027033c4 = DAT_027033c4 | 2;
          DAT_02703344 = DAT_027033c0;
          DAT_027032c4 = 8;
          if ((DAT_02704f28 & 0x40) == 0) {
            DAT_027032c4 = 1;
          }
          if (0 < (int)DAT_02702544) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027032c4 + DAT_027033c0;
          }
        }
        uVar30 = *DAT_00ca16f0;
        uVar22 = uVar30 & 3;
        if ((uVar22 == 0) || (DAT_00cc5020 == 0)) {
          if ((~_DAT_00cc9000 & 0xc) == 0) {
            if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
              piVar26 = (int *)&DAT_027032ec;
              DAT_027033c4 = DAT_027033c4 | 0x800;
              iVar13 = 0x10;
              if ((DAT_02704f28 & 0x40) != 0) {
                iVar13 = 8;
              }
LAB_00804d8c:
              piVar26[0x20] = DAT_027033c0;
              *piVar26 = iVar13;
              if (0 < (int)DAT_02702544) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              if (iVar13 < (int)(DAT_027033dc - uVar20)) {
                DAT_027033dc = iVar13 + uVar20;
              }
              uVar30 = *puVar31;
              uVar22 = uVar30 & 3;
            }
          }
          else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
            piVar26 = (int *)&DAT_027032c8;
            DAT_027033c4 = DAT_027033c4 | 4;
            iVar13 = 0x10;
            if ((DAT_02704f28 & 0x40) != 0) {
              iVar13 = 8;
            }
            goto LAB_00804d8c;
          }
          if (uVar22 == 0) {
joined_r0x00804f44:
            if (((((uVar30 & 0xc00) == 0xc00) || ((uVar30 & 0xc00) == 0)) &&
                ((uVar30 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)) {
              DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
              goto LAB_00804f88;
            }
          }
        }
LAB_00804f70:
        DAT_027033d4 = DAT_027033d4 | 4;
      }
      else if ((~_DAT_00cc9000 & 0xc) == 0) {
        FUN_003ef840();
      }
      else {
        if (DAT_00ca16e8 != 0) {
          if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
            DAT_027033c4 = DAT_027033c4 | 4;
            DAT_02703348 = DAT_027033c0;
            DAT_027032c8 = 8;
            if ((DAT_02704f28 & 0x40) == 0) {
              DAT_027032c8 = 0x80;
            }
            if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027032c8 + DAT_027033c0;
            }
          }
          DAT_027033d4 = DAT_027033d4 | 4;
          if (DAT_00ca1350 == 0x10) goto LAB_00804f88;
        }
        if (DAT_00ca1350 == 0) {
          uVar20 = 0;
        }
        else {
          iVar13 = FUN_003ef270(&DAT_00ca1250);
          uVar20 = DAT_027033c0;
          if (iVar13 != 0) {
            uVar30 = iVar13 << 1;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar30)) {
                if ((DAT_02704f28 & 0x40) != 0) {
                  uVar30 = 8;
                }
                puVar31 = &DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_00804c38:
                puVar31[0x20] = DAT_027033c0;
                *puVar31 = uVar30;
                if ((uVar30 < 0x1d) && (0 < (int)DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if ((int)uVar30 < (int)(DAT_027033dc - uVar20)) {
                  DAT_027033dc = uVar30 + uVar20;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar30)) {
              if ((DAT_02704f28 & 0x40) != 0) {
                uVar30 = 8;
              }
              puVar31 = &DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_00804c38;
            }
          }
          uVar4 = DAT_02704f28;
          uVar30 = DAT_027033c0;
          puVar31 = DAT_00ca16f0;
          uVar20 = *DAT_00ca16f0;
          if (((((uVar20 & 0xc00) != 0xc00) &&
               (((uVar20 & 0xc00) != 0 ||
                (((uVar20 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
              ((uVar20 & 0x1008) != 0)) || (bVar21 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
            if (((uVar20 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                  piVar26 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_00804e50:
                  uVar10 = DAT_02704f28 & 0x40;
                  piVar26[0x20] = DAT_027033c0;
                  iVar23 = 8;
                  if (uVar10 == 0) {
                    iVar23 = 0x80;
                  }
                  *piVar26 = iVar23;
                  if (((uVar4 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar23 < (int)(DAT_027033dc - uVar30)) {
                    DAT_027033dc = iVar23 + uVar30;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                piVar26 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                goto LAB_00804e50;
              }
            }
            bVar21 = 1;
          }
          if ((iVar13 != 0) || (uVar20 = DAT_00ca1350, (bVar21 & DAT_00ca1350 == 0x10) != 0)) {
            uVar30 = *puVar31;
            if (((uVar30 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto joined_r0x00804f44;
            goto LAB_00804f70;
          }
        }
        uVar30 = DAT_027033c0;
        if ((DAT_00cc5000 >> 8 & 1) != 0) {
          if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
            DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
            DAT_00ca1368 = 0;
            DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                           DAT_00cbe020 & 0xffffff | (uVar20 & 0x1f) << 0x18;
            if ((uVar20 & 0x1f) < 0xf) {
              uVar22 = DAT_00ca2710 & 0xffff3fff;
              DAT_00ca2710 = uVar22 | 0x4000;
              if ((uVar20 & 0x1f) != 0) {
                DAT_00ca2710 = uVar22;
              }
            }
            else {
              DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
            }
            uVar22 = DAT_00cc9010 | 4;
            if ((((DAT_00cc9010 >> 0x12 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
               (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 4)) != 0)) {
              if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 4;
              }
              if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_00cc9010 = uVar22;
            if (uVar20 != 0) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                  piVar26 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
                  iVar13 = 0x10;
                  if ((DAT_02704f28 & 0x40) != 0) {
                    iVar13 = 8;
                  }
LAB_0080d298:
                  piVar26[0x20] = DAT_027033c0;
                  *piVar26 = iVar13;
                  if (0 < (int)DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar13 < (int)(DAT_027033dc - uVar30)) {
                    DAT_027033dc = iVar13 + uVar30;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                piVar26 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                iVar13 = 0x10;
                if ((DAT_02704f28 & 0x40) != 0) {
                  iVar13 = 8;
                }
                goto LAB_0080d298;
              }
            }
          }
          else if ((_DAT_00cc9000 & 1) == 0) {
            FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
            uVar4 = DAT_02704f28;
            uVar20 = DAT_027033c0;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                piVar26 = (int *)&DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_0080d398:
                uVar10 = DAT_02704f28 & 0x40;
                piVar26[0x20] = DAT_027033c0;
                iVar13 = 8;
                if (uVar10 == 0) {
                  iVar13 = 0x40;
                }
                *piVar26 = iVar13;
                if (((uVar4 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if (iVar13 < (int)(DAT_027033dc - uVar20)) {
                  DAT_027033dc = iVar13 + uVar20;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
              piVar26 = (int *)&DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_0080d398;
            }
            DAT_027033d4 = DAT_027033d4 | 4;
          }
          else {
            FUN_003f0da0();
          }
        }
      }
    }
    else if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_02703348)) {
      DAT_027033dc = DAT_027032c8 + DAT_02703348;
    }
  }
LAB_00804f88:
  if ((DAT_027033c4 >> 5 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032d4 <= (int)(DAT_027033c0 - DAT_02703354))) {
      DAT_027033c4 = DAT_027033c4 & 0xffffffdf;
      DAT_027033d4 = DAT_027033d4 & 0xffffffdf;
      if ((((DAT_00cc9010 >> 0x15 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
         (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x20)) != 0)) {
        if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
          DAT_027033dc = DAT_027033c0 + 4;
        }
        if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
      }
      DAT_00cc7000 = DAT_00cc7000 & 0xfffffeff;
      DAT_00cc9010 = DAT_00cc9010 | 0x20;
    }
    else if (DAT_027032d4 < DAT_027033dc - DAT_02703354) {
      DAT_027033dc = DAT_027032d4 + DAT_02703354;
    }
  }
  if ((DAT_027033c4 >> 6 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032d8 <= (int)(DAT_027033c0 - DAT_02703358))) {
      DAT_027033c4 = DAT_027033c4 & 0xffffffbf;
      DAT_027033d4 = DAT_027033d4 & 0xffffffbf;
      if ((((DAT_00cc9010 >> 0x16 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
         (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x40)) != 0)) {
        if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
          DAT_027033dc = DAT_027033c0 + 4;
        }
        if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
      }
      DAT_00cc7400 = DAT_00cc7400 & 0xfffffeff;
      DAT_00cc9010 = DAT_00cc9010 | 0x40;
    }
    else if (DAT_027032d8 < DAT_027033dc - DAT_02703358) {
      DAT_027033dc = DAT_027032d8 + DAT_02703358;
    }
  }
  uVar20 = DAT_00cbec00;
  if ((DAT_027033c4 & 0xe0f19) == 0) goto LAB_008063b0;
  if ((DAT_027033c4 & 1) == 0) goto LAB_0080533c;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
    if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
      DAT_027033dc = DAT_027032c0 + DAT_02703340;
    }
    goto LAB_0080533c;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffe;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
  uVar20 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar20 = 8;
  }
  DAT_02706260 = 0;
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
  if ((DAT_00cc3000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"vif0 running when CHCR == %x");
  }
  uVar20 = DAT_00cc3000;
  if (DAT_027062f1 != '\0') {
    DAT_02703304 = 0x10;
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703384 = DAT_027033c0;
    if (0 < (int)DAT_02702544) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + 0x10;
    }
LAB_00805328:
    DAT_027033d4 = DAT_027033d4 | 1;
    goto LAB_0080533c;
  }
  unaff_x22 = (undefined **)&DAT_00cbe000;
  if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
    if ((DAT_00cbe800 >> 0xd & 1) == 0) {
      DAT_00cbe800 = DAT_00cbe800 | 0x800;
    }
    if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
      DAT_00cbe800 = DAT_00cbe800 | 0x400;
    }
    DAT_00cca000 = DAT_00cca000 | 0x10;
    if ((((DAT_00cca010 >> 4 & 1) != 0) && ((DAT_02703250 & 0x10407) == 0x10401)) &&
       ((DAT_00cca010 & DAT_00cca000) != 0)) {
      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + 4;
      }
      if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_027062e0 = DAT_027062e0 + -1;
    if ((DAT_00cbe800 & 0x700) != 0) {
      uVar30 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar30 = 8;
      }
      uVar22 = DAT_00cbe800 & 0xe0000000;
      uVar30 = DAT_00cbe800 & 0xffffff | (uVar30 & 0x1f) << 0x18;
      DAT_00cbe800 = uVar22 | uVar30;
      if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
        DAT_00cbe800 = uVar22 | uVar30 & 0xeffffffc | 2;
        goto LAB_00805328;
      }
    }
  }
  DAT_027062e8 = '\0';
  if (DAT_027062d0 == 0) {
    DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc;
  }
  else if ((DAT_027062e4 != 0) && (DAT_00cc3020 == 0)) {
    DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc | 1;
  }
  if ((DAT_02706320 & 1) != 0) {
    if (DAT_00cc3020 == 0) {
      DAT_02706320 = 0;
    }
    else if ((int)DAT_00cc3010 < 0) {
      uVar17 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_0080cf38:
      lVar24 = DAT_00ccb000 + uVar17;
      puVar28 = (undefined *)0x2000000;
LAB_0080d0a0:
      puVar28 = puVar28 + lVar24;
LAB_0080d0a4:
      if (DAT_02706314 == '\0') {
        iVar13 = DAT_00cc3020 << 2;
      }
      else {
        puVar28 = puVar28 + (ulong)DAT_02706318 * 4;
        iVar13 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar28,iVar13,0);
    }
    else {
      uVar17 = (ulong)DAT_00cc3010 & 0x1ffffff0;
      if (uVar17 >> 0x19 == 0) {
        if (DAT_00ccb000 != 0) {
          puVar28 = (undefined *)(DAT_00ccb000 + uVar17);
          goto LAB_0080d0a4;
        }
      }
      else {
        if (uVar17 >> 0x1c == 0) {
          puVar28 = &DAT_02884000;
          lVar24 = DAT_00ccb000;
          goto LAB_0080d0a0;
        }
        if ((uint)uVar17 < 0x10004000) {
          uVar17 = (ulong)(DAT_00cc3010 & 0x3ff0);
          goto LAB_0080cf38;
        }
        FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      }
      DAT_027062d0 = 0;
      DAT_027062c4 = 0;
      DAT_00cc3020 = 0;
    }
    uVar20 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar20 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    DAT_027032c0 = DAT_02706260;
    if ((DAT_02704f28 & 0x40) != 0) {
      DAT_027032c0 = 8;
    }
    goto LAB_0080d114;
  }
  if (DAT_027062e4 != 0) {
    DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
    uVar20 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar20 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    DAT_027062e8 = '\0';
    DAT_02706314 = '\0';
    if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
      if ((DAT_02706328 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080d8f8:
          bVar12 = uVar20 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar20 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_0080d8f8;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_0080d964;
LAB_0080d930:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_0080d930;
LAB_0080d964:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_0080d984;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_0080d984:
    DAT_02706260 = 0;
    if ((((DAT_00cc9010 >> 0x10 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
       (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 1)) != 0)) {
      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + 4;
      }
      if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
    DAT_00cbe800 = DAT_00cbe800 & 0xe0ffffff;
    DAT_00cc9010 = DAT_00cc9010 | 1;
    goto LAB_0080533c;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_0080533c;
  if (-1 < (int)DAT_00cc3030) {
    uVar17 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar17 >> 0x19 != 0) {
      if (uVar17 >> 0x1c != 0) {
        if (0x10003fff < (uint)uVar17) {
          FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
          goto LAB_0080dc90;
        }
        uVar17 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_0080d624;
      }
      puVar28 = &DAT_02884000;
      lVar24 = DAT_00ccb000;
      goto LAB_0080d820;
    }
    if (DAT_00ccb000 != 0) {
      puVar31 = (uint *)(DAT_00ccb000 + uVar17);
      goto LAB_0080d824;
    }
LAB_0080dc90:
    FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
    DAT_00cc9010 = DAT_00cc9010 | 0x8000;
    goto LAB_0080e0dc;
  }
  uVar17 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_0080d624:
  lVar24 = DAT_00ccb000 + uVar17;
  puVar28 = (undefined *)0x2000000;
LAB_0080d820:
  puVar31 = (uint *)(puVar28 + lVar24);
LAB_0080d824:
  DAT_00cc3000 = CONCAT22(*(undefined2 *)((long)puVar31 + 2),(undefined2)DAT_00cc3000);
  DAT_00cc3020 = (uint)(ushort)*puVar31;
  DAT_00cc3010 = puVar31[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if ((uVar20 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar31 + 2);
    DAT_02706250 = 0;
    if (DAT_02706314 == '\0') {
      DAT_02706318 = 2;
      DAT_02706314 = '\x01';
      puVar15 = &DAT_02706258;
      iVar13 = 2;
    }
    else {
      puVar15 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
      iVar13 = 4 - DAT_02706318;
    }
    uVar17 = FUN_005e2c60(puVar15,iVar13,1);
    if (((uVar17 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0080daf4;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar20 = 0;
    goto LAB_0080e0e8;
  }
LAB_0080daf4:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar31 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto code_r0x0080e09c;
  case 1:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    uVar20 = DAT_00cc3030;
    break;
  case 2:
    uVar20 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  default:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    uVar20 = DAT_00cc3010;
    break;
  case 5:
    uVar20 = DAT_00cc3030 + 0x10;
    uVar30 = DAT_00cc3000 >> 4 & 3;
    if (uVar30 == 1) {
      DAT_00cc3050 = uVar20 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar30 != 0) {
        DAT_00cc3010 = uVar20;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x0080e09c;
      }
      DAT_00cc3040 = uVar20 + DAT_00cc3020 * 0x10;
    }
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar20 = DAT_00cc3000 >> 4 & 3;
    if (uVar20 == 2) {
      puVar27 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar20 != 1) goto code_r0x0080e09c;
      puVar27 = (uint *)&DAT_00cc3040;
    }
    DAT_00cc3030 = *puVar27;
    *puVar27 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    uVar20 = DAT_00cc3010;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x0080e09c:
    DAT_027062e4 = DAT_027062e4 | 1;
    uVar20 = DAT_00cc3010;
  }
  DAT_00cc3010 = uVar20;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar31 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_0080e0dc:
  uVar20 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar20 = 8;
  }
LAB_0080e0e8:
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
  DAT_027032c0 = DAT_02706260;
  if ((DAT_02704f28 & 0x40) != 0) {
    DAT_027032c0 = 8;
  }
LAB_0080d114:
  DAT_027033c4 = DAT_027033c4 | 1;
  DAT_02703340 = DAT_027033c0;
  if ((DAT_027032c0 < 0x1d) && (0 < (int)DAT_02702544)) {
    DAT_02702540 = DAT_02702540 + DAT_02702544;
    DAT_02702544 = 0;
  }
  if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
    DAT_027033dc = DAT_027033c0 + DAT_027032c0;
  }
LAB_0080533c:
  uVar30 = DAT_00cc9010;
  uVar20 = DAT_027033c4;
  uVar22 = DAT_027033c4;
  if ((DAT_027033c4 >> 3 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
      uVar20 = DAT_027033c4 & 0xfffffff7;
      DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
      if (DAT_00cc6020 == 0) {
        DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
        uVar30 = DAT_00cc9010 | 8;
        if ((((DAT_00cc9010 >> 0x13 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
           (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 8)) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
      }
      else {
        DAT_027033c4 = uVar20;
        FUN_006709a0();
        uVar30 = DAT_00cc9010;
        uVar20 = DAT_027033c4;
        uVar22 = DAT_027033c4;
      }
    }
    else if (DAT_027032cc < DAT_027033dc - DAT_0270334c) {
      DAT_027033dc = DAT_027032cc + DAT_0270334c;
    }
  }
  DAT_027033c4 = uVar20;
  DAT_00cc9010 = uVar30;
  uVar20 = DAT_00cc9010;
  if ((uVar22 >> 4 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032d0 <= (int)(DAT_027033c0 - DAT_02703350))) {
      DAT_027033c4 = DAT_027033c4 & 0xffffffef;
      DAT_027033d4 = DAT_027033d4 & 0xffffffef;
      if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
        FUN_006704a0();
        uVar20 = DAT_00cc9010;
      }
      else {
        DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
        uVar20 = DAT_00cc9010 | 0x10;
        if ((((DAT_00cc9010 >> 0x14 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
           (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x10)) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
      }
    }
    else if (DAT_027032d0 < DAT_027033dc - DAT_02703350) {
      DAT_027033dc = DAT_027032d0 + DAT_02703350;
    }
  }
  DAT_00cc9010 = uVar20;
  if ((DAT_027033c4 >> 0x13 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_0270330c <= (int)(DAT_027033c0 - DAT_0270338c))) {
      DAT_027033c4 = DAT_027033c4 & 0xfff7ffff;
      DAT_027033d4 = DAT_027033d4 & 0xfff7ffff;
      DAT_0281a6d4 = 0;
      if (DAT_00cbd010 < 0) {
        FUN_00670c70();
      }
    }
    else if (DAT_0270330c < DAT_027033dc - DAT_0270338c) {
      DAT_027033dc = DAT_0270330c + DAT_0270338c;
    }
  }
  if ((DAT_027033c4 >> 8 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032e0 <= (int)(DAT_027033c0 - DAT_02703360))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffeff;
      DAT_027033d4 = DAT_027033d4 & 0xfffffeff;
      FUN_005d4d40();
    }
    else if (DAT_027032e0 < DAT_027033dc - DAT_02703360) {
      DAT_027033dc = DAT_027032e0 + DAT_02703360;
    }
  }
  uVar20 = DAT_00cc9010;
  if ((DAT_027033c4 >> 9 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffdff;
      DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
      if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
        FUN_005d5b90();
        uVar20 = DAT_00cc9010;
      }
      else {
        DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
        uVar20 = DAT_00cc9010 | 0x200;
        if ((((DAT_00cc9010 >> 0x19 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
           (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x200)) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < (int)DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
      }
    }
    else if (DAT_027032e4 < DAT_027033dc - DAT_02703364) {
      DAT_027033dc = DAT_027032e4 + DAT_02703364;
    }
  }
  DAT_00cc9010 = uVar20;
  if ((DAT_027033c4 >> 10 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032e8 <= (int)(DAT_027033c0 - DAT_02703368))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffbff;
      DAT_027033d4 = DAT_027033d4 & 0xfffffbff;
      FUN_005d9ad0();
    }
    else if (DAT_027032e8 < DAT_027033dc - DAT_02703368) {
      DAT_027033dc = DAT_027032e8 + DAT_02703368;
    }
  }
  if ((DAT_027033c4 >> 0xb & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       ((int)DAT_027032ec <= (int)(DAT_027033c0 - DAT_0270336c))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffff7ff;
      DAT_027033d4 = DAT_027033d4 & 0xfffff7ff;
      FUN_003ef840();
    }
    else if ((int)DAT_027032ec < DAT_027033dc - DAT_0270336c) {
      DAT_027033dc = DAT_027032ec + DAT_0270336c;
    }
  }
  uVar20 = DAT_00cbe800;
  if ((DAT_027033c4 >> 0x11 & 1) == 0) goto LAB_00805d2c;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
    if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
      DAT_027033dc = DAT_02703304 + DAT_02703384;
    }
    goto LAB_00805d2c;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffdffff;
  DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
  unaff_x22 = (undefined **)(ulong)DAT_028190d4;
  uVar20 = _DAT_02819070 & 1;
  if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar20 != 0)) {
    do {
      uVar20 = 0x100;
      if ((int)DAT_02704e08[1] == 0) {
        uVar20 = 1;
LAB_00805be0:
        if ((uVar20 & _DAT_02819070) != 0) {
          uVar20 = (uint)unaff_x22;
          if ((int)DAT_02704e08[1] != 0) {
            uVar20 = DAT_028196e4;
          }
          uVar20 = DAT_027033c0 - uVar20;
          if (0 < (int)uVar20) {
            if (uVar20 < 0x11) {
              uVar20 = 0x10;
            }
            (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar20);
          }
        }
      }
      else {
        if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_00805be0;
        FUN_005b1f50(&DAT_01701a00);
      }
      unaff_x22 = (undefined **)(ulong)DAT_028190d4;
      uVar20 = _DAT_02819070 & 1;
    } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar20 != 0);
  }
  if ((_DAT_02819070 & 5) != 0) {
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = 0x80;
    if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + 0x80;
    }
LAB_00805d18:
    DAT_027033d4 = DAT_027033d4 | 0x20000;
    uVar20 = DAT_00cbe800;
    DAT_02703384 = DAT_027033c0;
    goto LAB_00805d2c;
  }
  if (uVar20 != 0) {
    if ((_DAT_02819070 & 1) != 0) {
      (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
      while ((_DAT_02819070 & 1) != 0) {
        (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
      }
    }
    iVar13 = DAT_028190d4 - (int)unaff_x22;
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = iVar13 * 2;
    if ((DAT_02703304 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    iVar23 = DAT_027033dc - DAT_027033c0;
    if (iVar23 != DAT_02703304 && iVar23 + iVar13 * -2 < 0 == SBORROW4(iVar23,DAT_02703304)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703304;
    }
    goto LAB_00805d18;
  }
  uVar20 = DAT_00cbe800 & 0xfffffffb;
  if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
      ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_00805d2c;
  DAT_02706260 = 0;
  uVar20 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar20 = 8;
  }
  uVar20 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xfffffb | (uVar20 & 0x1f) << 0x18;
  unaff_x22 = (undefined **)&DAT_02706000;
  if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
    if ((DAT_00cbe800 >> 0xd & 1) == 0) {
      uVar20 = uVar20 | 0x800;
    }
    DAT_00cbe800 = uVar20;
    if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
      DAT_00cbe800 = uVar20 | 0x400;
    }
    FUN_003f7540(4);
    DAT_027062e0 = DAT_027062e0 + -1;
    uVar20 = DAT_00cbe800;
    if ((DAT_00cbe800 & 0x700) != 0) {
      uVar20 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar20 = 8;
      }
      uVar30 = DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
      if ((DAT_00cc3020 != 0) || (uVar20 = DAT_00cbe800 & 0xe0000000 | uVar30, DAT_027062e4 == 0)) {
        DAT_027033d4 = DAT_027033d4 | 1;
        uVar20 = DAT_00cbe800 & 0xe0000000 | uVar30 & 0xeffffffc | 2;
        goto LAB_00805d2c;
      }
    }
  }
  DAT_00cbe800 = uVar20;
  DAT_027062e8 = '\0';
  if (DAT_027062d0 == 0) {
    DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc;
  }
  else if ((DAT_027062e4 != 0) && (DAT_00cc3020 == 0)) {
    DAT_00cbe800 = DAT_00cbe800 & 0xfffffffc | 1;
  }
  if ((DAT_02706320 & 1) != 0) {
    unaff_x22 = (undefined **)&DAT_00cc3000;
    if (DAT_00cc3020 == 0) {
      DAT_02706320 = 0;
    }
    else if ((int)DAT_00cc3010 < 0) {
      uVar17 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_0080db5c:
      lVar24 = DAT_00ccb000 + uVar17;
      puVar28 = (undefined *)0x2000000;
LAB_0080dba0:
      puVar28 = puVar28 + lVar24;
LAB_0080dba4:
      if (DAT_02706314 == '\0') {
        iVar13 = DAT_00cc3020 << 2;
      }
      else {
        puVar28 = puVar28 + (ulong)DAT_02706318 * 4;
        iVar13 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar28,iVar13,0);
    }
    else {
      uVar17 = (ulong)DAT_00cc3010 & 0x1ffffff0;
      if (uVar17 >> 0x19 == 0) {
        if (DAT_00ccb000 != 0) {
          puVar28 = (undefined *)(DAT_00ccb000 + uVar17);
          goto LAB_0080dba4;
        }
      }
      else {
        if (uVar17 >> 0x1c == 0) {
          puVar28 = &DAT_02884000;
          lVar24 = DAT_00ccb000;
          goto LAB_0080dba0;
        }
        if ((uint)uVar17 < 0x10004000) {
          uVar17 = (ulong)(DAT_00cc3010 & 0x3ff0);
          goto LAB_0080db5c;
        }
        FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      }
      DAT_027062d0 = 0;
      DAT_027062c4 = 0;
      DAT_00cc3020 = 0;
    }
    uVar20 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar20 = 8;
    }
    uVar20 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    DAT_027032c0 = DAT_02706260;
    if ((DAT_02704f28 & 0x40) != 0) {
      DAT_027032c0 = 8;
    }
    DAT_027033c4 = DAT_027033c4 | 1;
    DAT_02703340 = DAT_027033c0;
    if ((DAT_027032c0 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c0;
    }
    goto LAB_00805d2c;
  }
  if (DAT_027062e4 != 0) {
    DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
    uVar20 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar20 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    DAT_027062e8 = '\0';
    DAT_02706314 = '\0';
    if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
      if ((DAT_02706328 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080e1f4:
          bVar12 = uVar20 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar20 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_0080e1f4;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_0080e260;
LAB_0080e22c:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_0080e22c;
LAB_0080e260:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_0080e280;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_0080e280:
    DAT_02706260 = 0;
    FUN_003f75f0(0);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
    uVar20 = DAT_00cbe800 & 0xe0ffffff;
    goto LAB_00805d2c;
  }
  uVar20 = DAT_00cbe800;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_00805d2c;
  if ((int)DAT_00cc3030 < 0) {
    uVar17 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_0080e010:
    puVar31 = (uint *)(DAT_00ccb000 + uVar17 + 0x2000000);
  }
  else {
    uVar17 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar17 >> 0x19 == 0) {
      puVar31 = (uint *)(DAT_00ccb000 + uVar17);
    }
    else if (uVar17 >> 0x1c == 0) {
      puVar31 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar17 < 0x10004000) {
        uVar17 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_0080e010;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar31 = (uint *)0x0;
    }
  }
  unaff_x22 = (undefined **)&DAT_00cc3000;
  uVar17 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar31);
  if ((uVar17 & 1) == 0) goto LAB_0080f1a4;
  DAT_00cc3010 = puVar31[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar31 + 2);
    DAT_02706250 = 0;
    if (DAT_02706314 == '\0') {
      DAT_02706318 = 2;
      DAT_02706314 = '\x01';
      puVar15 = &DAT_02706258;
      iVar13 = 2;
    }
    else {
      puVar15 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
      iVar13 = 4 - DAT_02706318;
    }
    uVar17 = FUN_005e2c60(puVar15,iVar13,1);
    if (((uVar17 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0080eb38;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar20 = 0;
    goto LAB_0080f1b4;
  }
LAB_0080eb38:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar31 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto code_r0x0080f13c;
  case 1:
    bVar21 = 0;
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 2:
    bVar21 = 0;
    uVar20 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar20;
    break;
  default:
    bVar21 = 0;
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    break;
  case 5:
    uVar20 = DAT_00cc3030 + 0x10;
    uVar30 = DAT_00cc3000 >> 4 & 3;
    if (uVar30 == 1) {
      DAT_00cc3050 = uVar20 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar30 != 0) {
        DAT_00cc3010 = uVar20;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x0080f13c;
      }
      DAT_00cc3040 = uVar20 + DAT_00cc3020 * 0x10;
    }
    bVar21 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar20;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar20 = DAT_00cc3000 >> 4 & 3;
    if (uVar20 == 2) {
      puVar27 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar20 != 1) goto code_r0x0080f13c;
      puVar27 = (uint *)&DAT_00cc3040;
    }
    bVar21 = 0;
    DAT_00cc3030 = *puVar27;
    *puVar27 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x0080f13c:
    bVar21 = 1;
  }
  DAT_027062e4 = DAT_027062e4 | bVar21;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar31 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_0080f1a4:
  uVar20 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar20 = 8;
  }
LAB_0080f1b4:
  uVar20 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar20 & 0x1f) << 0x18;
  DAT_027032c0 = DAT_02706260;
  if ((DAT_02704f28 & 0x40) != 0) {
    DAT_027032c0 = 8;
  }
  DAT_027033c4 = DAT_027033c4 | 1;
  DAT_02703340 = DAT_027033c0;
  if ((DAT_027032c0 < 0x1d) && (0 < (int)DAT_02702544)) {
    DAT_02702540 = DAT_02702540 + DAT_02702544;
    DAT_02702544 = 0;
  }
  if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
    DAT_027033dc = DAT_027033c0 + DAT_027032c0;
  }
LAB_00805d2c:
  DAT_00cbe800 = uVar20;
  uVar20 = DAT_00cbec00;
  if ((DAT_027033c4 >> 0x12 & 1) == 0) goto LAB_008063b0;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703388) < (int)DAT_02703308)) {
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
      DAT_027033dc = DAT_02703308 + DAT_02703388;
    }
    goto LAB_008063b0;
  }
  ppuVar14 = (undefined **)&DAT_02704e14;
  DAT_027033c4 = DAT_027033c4 & 0xfffbffff;
  DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
  while (((uVar20 = DAT_028196e4, (DAT_02704e14 >> 3 & 1) == 0 || ((DAT_02704f20 >> 4 & 1) == 0)) &&
         ((0 < (int)(DAT_027033c0 - DAT_028196e4) && ((_DAT_02819070 >> 8 & 1) != 0))))) {
    uVar20 = 0x100;
    if ((int)DAT_02704e00[1] == 0) {
      uVar20 = 1;
LAB_00805e40:
      if ((uVar20 & _DAT_02819070) != 0) {
        uVar20 = DAT_028190d4;
        if ((int)DAT_02704e00[1] != 0) {
          uVar20 = DAT_028196e4;
        }
        uVar20 = DAT_027033c0 - uVar20;
        if (0 < (int)uVar20) {
          if (uVar20 < 0x11) {
            uVar20 = 0x10;
          }
          (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar20);
        }
      }
    }
    else {
      if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_00805e40;
      FUN_005b1f50(&DAT_01701a00);
    }
  }
  unaff_x22 = ppuVar14;
  if ((_DAT_02819070 & 0x500) != 0) {
    FUN_005b1f50(&DAT_01701a00);
    if ((((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) ||
       ((_DAT_02819070 & 0x100) == 0)) {
      DAT_02703308 = 0x80;
    }
    else {
      DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)DAT_02703308 < 2) {
        DAT_02703308 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if ((DAT_02703308 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_008063a0:
    DAT_027033d4 = DAT_027033d4 | 0x40000;
    uVar20 = DAT_00cbec00;
    DAT_02703388 = DAT_027033c0;
    goto LAB_008063b0;
  }
  if ((_DAT_02819070 >> 8 & 1) != 0) {
    unaff_x20 = (int *)(ulong)DAT_028196e4;
    if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) {
      (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,&fde_table_entry_002dc6c0);
      if ((_DAT_02819070 >> 8 & 1) != 0) {
        _DAT_02819070 = _DAT_02819070 & 0xfffffeff;
      }
    }
    else {
      if ((DAT_02704f20 >> 5 & 1) != 0) {
        FUN_009a4a80(&DAT_02701a88);
      }
      FUN_005b1f50(&DAT_01701a00);
    }
    if ((((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) ||
       ((_DAT_02819070 & 0x100) == 0)) {
      DAT_02703308 = DAT_028196e4 - uVar20;
    }
    else {
      DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)DAT_02703308 < 2) {
        DAT_02703308 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if (((int)DAT_02703308 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_02703308 + DAT_027033c0;
    }
    goto LAB_008063a0;
  }
  uVar20 = DAT_00cbec00 & 0xfffffffb;
  if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
     ((unaff_x22 = (undefined **)&DAT_02704e14, (DAT_00cc4000 >> 8 & 1) == 0 ||
      ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_008063b0;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    DAT_00cbec00 = uVar20;
    FUN_005d9ad0();
    uVar20 = DAT_00cbec00;
    goto LAB_008063b0;
  }
  unaff_x20 = (int *)&DAT_02706000;
  DAT_02706280 = 0;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar30 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_0080e350;
      uVar30 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar30 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0080e2c4:
        bVar12 = uVar20 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar20 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_0080e2c4;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 == 0) goto LAB_0080e31c;
LAB_0080e2fc:
        bVar11 = true;
      }
      else {
        if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto LAB_0080e2fc;
LAB_0080e31c:
        bVar11 = false;
      }
      uVar20 = DAT_00cbec00;
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
        uVar20 = DAT_00cbec00;
      }
    }
  }
LAB_0080e350:
  DAT_00cbec00 = uVar20;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar20 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar20 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    FUN_005d9ad0();
    uVar20 = DAT_00cbec00;
    goto LAB_008063b0;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar20 = *DAT_00ca16f0;
      if ((uVar20 >> 10 & 3 | 2) == 2) {
LAB_0080e424:
        if (((uVar20 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_0080e43c;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_0080e43c:
        uVar20 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar20 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar20 & 0x1f) << 0x18
        ;
        goto LAB_0080e470;
      }
      uVar20 = *DAT_00ca16f0;
      uVar30 = uVar20 >> 10 & 3;
      if (((uVar30 == 0) || (uVar30 == 2)) ||
         ((uVar30 == 3 && (((uVar20 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_0080e424;
    }
    DAT_02703344 = DAT_027033c0;
    DAT_027033c4 = DAT_027033c4 | 2;
    DAT_027032c4 = 8;
    if ((DAT_02704f28 & 0x40) == 0) {
      DAT_027032c4 = 0x80;
    }
    if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c4;
    }
    uVar20 = DAT_00cbec00;
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      uVar20 = DAT_00cbec00 | 8;
    }
    goto LAB_008063b0;
  }
LAB_0080e470:
  if (DAT_02706381 != '\0') {
    if ((DAT_02704e14 >> 3 & 1) == 0) {
      DAT_02703308 = 0x10;
    }
    else {
      DAT_02703308 = 0x10;
      if (((DAT_02704f20 & 0x30) == 0x10) &&
         (DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0, (int)DAT_02703308 < 0x11)) {
        DAT_02703308 = 0x10;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    DAT_02703388 = DAT_027033c0;
    if ((DAT_02703308 < 0x1d) && (0 < (int)DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_0080e620:
    DAT_027033d4 = DAT_027033d4 | 2;
    unaff_x22 = ppuVar14;
    uVar20 = DAT_00cbec00;
    goto LAB_008063b0;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_0080e620;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar20 = DAT_00cbec00;
  if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
    if ((DAT_00cbec00 >> 0xd & 1) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 0x800;
    }
    if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
      DAT_00cbec00 = DAT_00cbec00 | 0x400;
    }
    FUN_003f7540(5);
    DAT_02706370 = DAT_02706370 + -1;
    uVar20 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar20 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar20 = 0x10;
      }
      uVar30 = (uVar20 & 0x1f) << 0x18;
      uVar20 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar30;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar30 | 2;
        goto LAB_0080e620;
      }
    }
  }
  DAT_00cbec00 = uVar20;
  DAT_02706378 = '\0';
  if (DAT_02706360 == 0) {
    DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc;
  }
  else if ((DAT_02706374 != 0) && (DAT_00cc4020 == 0)) {
    DAT_00cbec00 = DAT_00cbec00 & 0xfffffffc | 1;
  }
  if ((DAT_027063b0 & 1) != 0) {
    FUN_005d9740();
    if ((DAT_00cc4000 & 1) != 0) {
      uVar20 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar20 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    }
    uVar30 = DAT_027033c0;
    if (((DAT_00cbec00 >> 3 & 1) != 0) &&
       (uVar20 = DAT_00cbec00, uVar30 = DAT_027033c0, DAT_00ca1630 != 0)) goto LAB_008063b0;
    goto joined_r0x0080ec4c;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar20 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar20 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if (DAT_027063b2 == '\0') goto LAB_0080f318;
    if ((_DAT_02819070 & 0x100) != 0) goto LAB_0080f318;
    if ((DAT_027063b8 & 1) == 0) goto LAB_0080f304;
    if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
       (uVar20 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) goto LAB_0080f294;
    if (DAT_00ca1398 <= DAT_00ca139c) goto LAB_0080f260;
    bVar12 = false;
    goto LAB_0080f298;
  }
  uVar20 = DAT_00cbec00;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_008063b0;
  if ((int)DAT_00cc4030 < 0) {
    uVar17 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_0080f340:
    puVar31 = (uint *)(DAT_00ccb000 + uVar17 + 0x2000000);
  }
  else {
    uVar17 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar17 >> 0x19 == 0) {
      puVar31 = (uint *)(DAT_00ccb000 + uVar17);
    }
    else if (uVar17 >> 0x1c == 0) {
      puVar31 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar17 < 0x10004000) {
        uVar17 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_0080f340;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar31 = (uint *)0x0;
    }
  }
  uVar17 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar31);
  if ((uVar17 & 1) == 0) goto LAB_0080f6f8;
  DAT_00cc4010 = puVar31[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if (((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
     (((*puVar31 & 0x70000000) == 0x40000000 &&
      ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)))) {
    FUN_003f75f0(0xd);
    goto LAB_0080f6f8;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar31 + 2);
    DAT_02706270 = 0;
    if (DAT_027063a4 == '\0') {
      DAT_027063a8 = 2;
      DAT_027063a4 = '\x01';
      puVar15 = &DAT_02706278;
      iVar13 = 2;
    }
    else {
      puVar15 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
      iVar13 = 4 - DAT_027063a8;
    }
    uVar17 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar17 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_0080f6f8;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar31 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x0080f6b8;
  case 1:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar20 = DAT_00cc4030;
    break;
  case 2:
    uVar20 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  default:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar20 = DAT_00cc4010;
    break;
  case 5:
    uVar20 = DAT_00cc4030 + 0x10;
    uVar30 = DAT_00cc4000 >> 4 & 3;
    if (uVar30 == 1) {
      DAT_00cc4050 = uVar20 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar30 != 0) {
        DAT_00cc4010 = uVar20;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x0080f6b8;
      }
      DAT_00cc4040 = uVar20 + DAT_00cc4020 * 0x10;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar20 = DAT_00cc4000 >> 4 & 3;
    if (uVar20 == 2) {
      puVar27 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar20 != 1) goto code_r0x0080f6b8;
      puVar27 = (uint *)&DAT_00cc4040;
    }
    DAT_00cc4030 = *puVar27;
    *puVar27 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    uVar20 = DAT_00cc4010;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x0080f6b8:
    DAT_02706374 = DAT_02706374 | 1;
    uVar20 = DAT_00cc4010;
  }
  DAT_00cc4010 = uVar20;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar31 < 0)) {
    DAT_02706374 = 1;
  }
LAB_0080f6f8:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar20 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar20 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar20 & 0x1f) << 0x18;
  }
  uVar30 = DAT_027033c0;
  if (((DAT_00cbec00 >> 3 & 1) == 0) ||
     (uVar20 = DAT_00cbec00, uVar30 = DAT_027033c0, DAT_00ca1630 == 0)) {
joined_r0x0080ec4c:
    DAT_02703344 = uVar30;
    uVar20 = DAT_00cbec00;
    DAT_027033c0 = DAT_02703344;
    if (DAT_02706381 == '\0') {
      DAT_027033c4 = DAT_027033c4 | 2;
      DAT_027032c4 = DAT_02706280;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      if (((int)DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
        DAT_027033dc = DAT_02703344 + DAT_027032c4;
        unaff_x22 = ppuVar14;
      }
    }
    else {
      if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) {
        DAT_027032c4 = 1;
      }
      else {
        DAT_027032c4 = (DAT_02703310 + DAT_02703390) - DAT_02703344;
        if ((int)DAT_027032c4 < 2) {
          DAT_027032c4 = 1;
        }
      }
      if ((int)DAT_027032c4 <= (int)DAT_02706280) {
        DAT_027032c4 = DAT_02706280;
      }
      DAT_027033c4 = DAT_027033c4 | 2;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      if ((DAT_027032c4 < 0x1d) && (0 < (int)DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
        DAT_027033dc = DAT_02703344 + DAT_027032c4;
        unaff_x22 = ppuVar14;
      }
    }
  }
LAB_008063b0:
  do {
    DAT_00cbec00 = uVar20;
    DAT_02702654 = DAT_02702654 + (DAT_027033c0 - DAT_02702658);
    DAT_02702658 = DAT_027033c0;
    if (0 < DAT_02702654) {
      DAT_02702308 = '\x01';
    }
    if (DAT_02702530 - DAT_00ca9a48 < DAT_00ca9a4c) {
      DAT_0270253c = DAT_00ca9a4c + DAT_00ca9a48;
    }
    else {
      FUN_00584950();
      DAT_02702308 = '\x01';
    }
    ppuVar14 = unaff_x22;
    if (DAT_02702534 != 0) {
      DAT_02702304 = '\x01';
      if ((DAT_02702534 >> 2 & 1) != 0) {
        if (DAT_02702530 - DAT_02702550 < DAT_027025d0) {
          if (DAT_027025d0 < DAT_0270253c - DAT_02702550) {
            DAT_0270253c = DAT_027025d0 + DAT_02702550;
          }
        }
        else {
          DAT_02702534 = DAT_02702534 & 0xfffffffb;
          DAT_00cab528 = DAT_00cab528 & 0xfeffffff;
          FUN_0058d270(2);
        }
      }
      if ((DAT_02702534 >> 3 & 1) != 0) {
        if (DAT_02702530 - DAT_02702554 < DAT_027025d4) {
          if (DAT_027025d4 < DAT_0270253c - DAT_02702554) {
            DAT_0270253c = DAT_027025d4 + DAT_02702554;
          }
        }
        else {
          DAT_02702534 = DAT_02702534 & 0xfffffff7;
          DAT_00cab538 = DAT_00cab538 & 0xfeffffff;
          FUN_0058d270(3);
        }
      }
      if ((DAT_02702534 & 1) != 0) {
        if (DAT_02702530 - DAT_02702548 < DAT_027025c8) {
          if (DAT_027025c8 < DAT_0270253c - DAT_02702548) {
            DAT_0270253c = DAT_027025c8 + DAT_02702548;
          }
        }
        else {
          DAT_02702534 = DAT_02702534 & 0xfffffffe;
          if ((DAT_0270465c == '\0') || (0 < (int)DAT_02704668)) {
            DAT_02704658 = 0;
            DAT_02704660 = 0;
            do {
              uVar30 = DAT_00cab0a0;
              uVar20 = DAT_02704648;
              if (DAT_0270465d == '\0') {
                bVar12 = false;
              }
              else {
                if ((int)DAT_02704650 < 0x80) {
                  if ((int)DAT_02704668 < 1) {
                    if (DAT_0270465c != '\0') goto LAB_00806ac8;
                    DAT_02704670 = (int)DAT_0270466c._3_1_;
                    DAT_02704668 = (uint)DAT_00cab0a4 * (uint)DAT_00cab0a6;
                    bVar12 = true;
                    DAT_0270465c = '\x01';
                    goto joined_r0x00806a9c;
                  }
                  uVar20 = 0x80 - DAT_02704650;
                  if (DAT_02704668 <= 0x80 - DAT_02704650) {
                    uVar20 = DAT_02704668;
                  }
                  unaff_x22 = (undefined **)(DAT_00cba000 + ((ulong)DAT_00cab0a0 & 0x1fffff));
                  if ((int)DAT_02704650 < 4) {
                    uVar22 = uVar20;
                    if (4 - DAT_02704650 <= uVar20) {
                      uVar22 = 4 - DAT_02704650;
                    }
                    memcpy((void *)((long)(int)DAT_02704650 * 4 + 0x2704638),unaff_x22,
                           (ulong)(uVar22 << 2));
                  }
                  uVar22 = uVar20;
                  if ((int)(0x80 - DAT_0270464c) <= (int)uVar20) {
                    uVar22 = 0x80 - DAT_0270464c;
                  }
                  memcpy(&DAT_02704438 + (long)(int)DAT_0270464c * 4,unaff_x22,
                         (long)(int)(uVar22 << 2));
                  __memcpy_chk(&DAT_02704438,(ushort *)((long)unaff_x22 + (long)(int)uVar22 * 4),
                               (long)(int)((uVar20 - uVar22) * 4),0x244);
                  DAT_00cab0a0 = uVar30 + uVar20 * 4;
                  DAT_0270464c = DAT_0270464c + uVar20 & 0x7f;
                  DAT_02704650 = DAT_02704650 + uVar20;
                  DAT_02704660 = DAT_02704660 + (uVar20 >> 2);
                  DAT_02704668 = DAT_02704668 - uVar20;
                  if (DAT_02704668 == 0) {
                    DAT_00cab0a0 = DAT_0270466c & 0xffffff;
                  }
                  if (0 < (int)DAT_02704650) {
                    DAT_00cb9300 = DAT_00cb9300 & 0xfbffffff;
                  }
LAB_00806b54:
                  bVar12 = true;
                }
                else {
                  bVar12 = false;
                  if ((DAT_0270465c != '\0') && (DAT_02704668 == 0)) {
LAB_00806ac8:
                    DAT_0270466c = 0;
                    DAT_0270465d = '\0';
                    if (DAT_02704660 == 0) {
                      DAT_02704660 = 1;
                    }
                    DAT_02702534 = DAT_02702534 | 1;
                    DAT_02702548 = DAT_02702530;
                    if (DAT_02704660 < DAT_0270253c - DAT_02702530) {
                      DAT_0270253c = DAT_02702530 + DAT_02704660;
                    }
                    DAT_027025c8 = DAT_02704660;
                    if ((int)DAT_02702544 < 0) {
                      iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                      iVar23 = DAT_027033dc - DAT_027033c0;
                      if (iVar23 != iVar13 &&
                          iVar23 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar23,iVar13)
                         ) {
                        DAT_027033dc = DAT_027033c0 + iVar13;
                      }
                    }
                    goto LAB_00806b54;
                  }
                }
                uVar20 = DAT_02704648;
              }
joined_r0x00806a9c:
              DAT_02704648 = uVar20;
              if (DAT_02704655 != '\0') {
                unaff_x22 = (undefined **)(ulong)DAT_02704650;
                if ((3 < (int)DAT_02704650) || ((DAT_02704654 != '\0' && (DAT_00cc7820 == 0)))) {
                  if ((DAT_00cc7800 >> 8 & 1) == 0) {
                    _DAT_02704654 = 0;
                  }
                  else {
                    if (DAT_00cc7820 != 0) {
joined_r0x00806b9c:
                      bVar12 = true;
                      if ((DAT_00cc7820 != 0) && (bVar12 = true, 0 < (int)unaff_x22)) {
                        uVar20 = (uint)((ulong)unaff_x22 >> 2);
                        if ((int)DAT_00cc7820 <= (int)uVar20) {
                          uVar20 = DAT_00cc7820;
                        }
                        ppuVar14 = (undefined **)FUN_003d1c90(&DAT_00cc7800,DAT_00cc7810,7,1);
                        if (ppuVar14 != (undefined **)0x0) {
                          iVar13 = uVar20 * 4;
                          if (0 < iVar13) {
                            iVar18 = 0x80 - DAT_02704648;
                            iVar23 = iVar13;
                            if (iVar18 == iVar13 ||
                                (int)(iVar18 + uVar20 * -4) < 0 != SBORROW4(iVar18,iVar13)) {
                              iVar23 = iVar18;
                            }
                            memcpy(ppuVar14,&DAT_02704438 + (long)(int)DAT_02704648 * 4,
                                   (long)(iVar23 << 2));
                            memcpy((ushort *)((long)ppuVar14 + (long)iVar23 * 4),&DAT_02704438,
                                   (long)((iVar13 - iVar23) * 4));
                            DAT_02704648 = DAT_02704648 + iVar13 & 0x7f;
                            DAT_02704650 = DAT_02704650 + uVar20 * -4;
                            unaff_x22 = ppuVar14;
                          }
                          DAT_02704658 = DAT_02704658 + uVar20;
                          DAT_00cc7810 = DAT_00cc7810 + uVar20 * 0x10;
                          DAT_00cc7820 = DAT_00cc7820 - uVar20;
                        }
                        bVar12 = true;
                      }
                      goto LAB_0080694c;
                    }
                    uVar30 = DAT_00cc7800 & 0xffff;
                    if (((DAT_00cc7800 & 0xc) == 0) || (DAT_02704654 != '\0')) {
                      _DAT_02704654 = 0;
                      if (DAT_02704658 == 0) {
                        DAT_02704658 = 1;
                      }
                      DAT_027032dc = DAT_02704658 << 1;
                      DAT_027033c4 = DAT_027033c4 | 0x80;
                      if ((DAT_02704f28 & 0x40) != 0) {
                        DAT_027032dc = 8;
                      }
                      if ((DAT_027032dc < 0x1d) && (0 < (int)DAT_02702544)) {
                        DAT_02702540 = DAT_02702540 + DAT_02702544;
                        DAT_02702544 = 0;
                      }
                      DAT_0270335c = DAT_027033c0;
                      if (DAT_027032dc < (int)(DAT_027033dc - DAT_027033c0)) {
                        DAT_027033dc = DAT_027033c0 + DAT_027032dc;
                      }
                    }
                    else {
                      uVar22 = DAT_02704650 - 4;
                      unaff_x22 = (undefined **)(ulong)uVar22;
                      if (3 < (int)DAT_02704650) {
                        iVar13 = 0x80 - uVar20;
                        if (3 < iVar13) {
                          iVar13 = 4;
                        }
                        __memcpy_chk(&DAT_02704680,&DAT_02704438 + (long)(int)uVar20 * 4,
                                     (long)(iVar13 * 4),0x10);
                        memcpy(&DAT_02704680 + iVar13,&DAT_02704438,(long)(iVar13 * -4 + 0x10));
                        DAT_02704648 = uVar20 + 4 & 0x7f;
                        DAT_00cc7800 = DAT_02704680 & 0xffff0000 | uVar30;
                        DAT_00cc7820 = DAT_02704680 & 0xffff;
                        DAT_00cc7810 = DAT_02704684;
                        DAT_02704650 = uVar22;
                        if ((((uint)((int)DAT_02704680 < 0) & uVar30 >> 7) != 0) ||
                           ((DAT_02704680 & 0x70000000) == 0x70000000)) {
                          _DAT_02704654 = CONCAT11(DAT_02704655,1);
                        }
                        goto joined_r0x00806b9c;
                      }
                    }
                  }
                  bVar12 = true;
                }
              }
LAB_0080694c:
              unaff_x20 = (int *)0x2704000;
            } while (bVar12);
            DAT_00cca240 = DAT_00cca240 & 0xffff7f7f;
          }
          else {
            DAT_00cab0a8 = DAT_00cab0a8 & 0xfeffffff;
            FUN_0058d270(2);
          }
        }
      }
      if ((DAT_02702534 >> 6 & 1) != 0) {
        if (DAT_02702530 - DAT_02702560 < DAT_027025e0) {
          if (DAT_027025e0 < DAT_0270253c - DAT_02702560) {
            DAT_0270253c = DAT_027025e0 + DAT_02702560;
          }
        }
        else {
          DAT_02702534 = DAT_02702534 & 0xffffffbf;
          FUN_005d0450(&DAT_02704968,0);
        }
      }
      if ((DAT_02702534 >> 9 & 1) != 0) {
        if (DAT_02702530 - DAT_0270256c < (int)DAT_027025ec) {
          if ((int)DAT_027025ec < DAT_0270253c - DAT_0270256c) {
            DAT_0270253c = DAT_027025ec + DAT_0270256c;
          }
        }
        else {
          DAT_02702534 = DAT_02702534 & 0xfffffdff;
          unaff_x20 = (int *)&DAT_02b5bb59;
          DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x8c);
          DAT_02b5bb5c = 6;
          bVar21 = DAT_02b5bb5d | 6;
          DAT_02b5bbbc = 0;
          uVar17 = DAT_02b5bbb4;
          if ((int)DAT_02b5bbb4 == 0) {
            DAT_02b6bc2c = 1;
            DAT_02b5bbd0 = 0;
            DAT_02b5bbb4 = 0x100000001;
            DAT_02b5bbac = DAT_02b6bc20;
            uVar17 = DAT_02b5bbb4;
          }
          DAT_02b5bbb4 = uVar17;
          if (DAT_02b6bc39 == '\0') {
            if (DAT_02b5bbac < DAT_02b6bc24) {
              unaff_x22 = (undefined **)0x2b5b000;
              DAT_02b5bbb4._4_4_ = (int)(uVar17 >> 0x20);
              bVar12 = DAT_02b5bbb4._4_4_ == 0;
              DAT_02b5bb5d = bVar21;
              if (bVar12) {
LAB_00806f64:
                if ((DAT_02b5bbb0 < 1) || (DAT_02b6bc38 == 0)) {
                  if (0 < DAT_02b5bbb0) {
                    iVar13 = DAT_02b5bbc4 + 3;
                    if (-1 < DAT_02b5bbc4) {
                      iVar13 = DAT_02b5bbc4;
                    }
                    DAT_027025ec = (iVar13 >> 2) * 0xc;
                    if (((DAT_02704f20 & 1) != 0) && (DAT_02b5bbc4 - 4U < 0xfffffff9))
                    goto LAB_00807ba4;
                    goto LAB_00807bc4;
                  }
                  DAT_02b6bc39 = '\0';
                  DAT_02b5bb5b = DAT_02b5bb5b | 1;
                  DAT_00cab070 = DAT_00cab070 | 4;
                  if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
                    if (DAT_027026e8 == '\0') {
                      if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                        DAT_027033dc = DAT_027033c0 + 0x10;
                      }
                      DAT_02702308 = '\x01';
                    }
                    else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                      DAT_0270253c = DAT_02702530 + 2;
                    }
                  }
                  if (0x14 < DAT_0270253c - DAT_02702530) {
                    DAT_0270253c = DAT_02702530 + 0x14;
                  }
                  if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
                    if (DAT_027026e8 == '\0') {
                      if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                        DAT_027033dc = DAT_027033c0 + 0x10;
                      }
                      DAT_02702308 = '\x01';
                    }
                    else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                      DAT_0270253c = DAT_02702530 + 2;
                    }
                  }
                  DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
                  DAT_02b5bb5c = 10;
                  DAT_02b5bb5d = DAT_02b5bb5d | 10;
                  unaff_x20 = (int *)&DAT_02b5bb59;
                }
                else {
                  iVar13 = FUN_00898660();
                  if (iVar13 == -1) {
                    DAT_02b5bb5c = 10;
                    DAT_02b5bb5d = DAT_02b5bb5d | 10;
                    DAT_02b5bbbc = 1;
                    unaff_x20 = (int *)&DAT_02b5bb59;
                  }
                  else {
                    DAT_02b6bc38 = DAT_02b6bc38 - 1;
                    if ((DAT_02702534 >> 10 & 1) == 0) {
                      DAT_027025f0 = DAT_02b6bc28;
                      if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) &&
                         (DAT_02b6bc28 < DAT_02b5bb50)) {
                        DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
                      }
                      DAT_02702534 = DAT_02702534 | 0x400;
                      DAT_02702570 = DAT_02702530;
                      if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
                        DAT_0270253c = DAT_02702530 + DAT_027025f0;
                      }
                      if ((int)DAT_02702544 < 0) {
                        iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                        iVar23 = DAT_027033dc - DAT_027033c0;
                        if (iVar23 != iVar13 &&
                            iVar23 + (DAT_0270253c - DAT_02702530) * -8 < 0 ==
                            SBORROW4(iVar23,iVar13)) {
                          DAT_027033dc = DAT_027033c0 + iVar13;
                        }
                      }
                    }
                    DAT_02b6bc20 = DAT_02b6bc20 + 1;
                    DAT_02b5bbac = DAT_02b5bbac + 1;
                    iVar13 = DAT_02b5bbb0 + -1;
                    if (iVar13 == 0 || DAT_02b5bbb0 < 1) {
                      DAT_02b6bc39 = '\0';
                      DAT_02b5bb5b = DAT_02b5bb5b | 1;
                      DAT_00cab070 = DAT_00cab070 | 4;
                      if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
                        if (DAT_027026e8 == '\0') {
                          if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                            DAT_027033dc = DAT_027033c0 + 0x10;
                          }
                          DAT_02702308 = '\x01';
                        }
                        else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                          DAT_0270253c = DAT_02702530 + 2;
                        }
                      }
                      if (0x14 < DAT_0270253c - DAT_02702530) {
                        DAT_0270253c = DAT_02702530 + 0x14;
                      }
                      DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
                      if (DAT_02b6bc38 < 0x10) {
                        DAT_02b5bb5c = 6;
                        DAT_02b5bb5d = DAT_02b5bb5d | 6;
                        DAT_02b5bbb0 = iVar13;
                      }
                      else {
                        DAT_02b5bb5c = 10;
                        DAT_02b5bb5d = DAT_02b5bb5d | 10;
                        unaff_x20 = (int *)&DAT_02b5bb59;
                        DAT_02b5bbb0 = iVar13;
                      }
                    }
                    else {
                      DAT_02b5bbd0 = 0;
                      DAT_02b5bbb4 = CONCAT44(1,(int)DAT_02b5bbb4);
                      if (DAT_02b5bbc0 < 4) {
                        DAT_02b5b110 = *(undefined4 *)(&DAT_0022b370 + (long)(int)DAT_02b5bbc0 * 4);
                      }
                      DAT_02b5b114 = DAT_02b5bbac;
                      DAT_02b5bbb0 = iVar13;
                      DAT_02b5bbd4 = (**(code **)(DAT_02b5bb48 + 0x10))();
                      if (DAT_02b6bc38 == 0) {
                        iVar13 = DAT_02b5bbc4 + 3;
                        if (-1 < DAT_02b5bbc4) {
                          iVar13 = DAT_02b5bbc4;
                        }
                        iVar13 = (DAT_02702530 - DAT_02702570) + (iVar13 >> 2) * 0xc;
                      }
                      else {
                        iVar13 = DAT_02b5bbc4 + 3;
                        if (-1 < DAT_02b5bbc4) {
                          iVar13 = DAT_02b5bbc4;
                        }
                        iVar13 = (iVar13 >> 2) * 0xc;
                      }
                      FUN_00898ed0(iVar13);
                    }
                  }
                }
              }
              else {
                if ((DAT_02b5bbd4 == 0) &&
                   (DAT_02b5bbd4 = FUN_008963f0(&DAT_02b5175f), DAT_02b5bbd4 == -2)) {
                  DAT_02b5bbd4 = -2;
                  do {
                    usleep(0);
                    InstructionSynchronizationBarrier();
                    DAT_02b5bbd4 = FUN_008963f0(&DAT_02b5175f);
                  } while (DAT_02b5bbd4 == -2);
                }
                if (DAT_02b5bbd4 != -1) {
                  DAT_02b5bbb4 = DAT_02b5bbb4 & 0xffffffff;
                  goto LAB_00806f64;
                }
                if (DAT_02b5bbcc <= DAT_02b5bbd0) {
                  DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
                  FUN_009887f0(&PTR_FUN_00c9aa28,"CDVD READ ERROR, sector = 0x%08x");
                  unaff_x20 = (int *)&DAT_02b5bb59;
                  goto LAB_008065ac;
                }
                if (DAT_02b5bbc0 < 4) {
                  DAT_02b5b110 = *(undefined4 *)(&DAT_0022b370 + (long)(int)DAT_02b5bbc0 * 4);
                }
                DAT_02b5b114 = DAT_02b5bbac;
                DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
                DAT_02b5bbd4 = (**(code **)(DAT_02b5bb48 + 0x10))(DAT_02b5bbac);
                DAT_027025ec = DAT_02b6bc28;
                if (((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) {
LAB_00807ba4:
                  if (DAT_027025ec < DAT_02b5bb50) {
                    DAT_027025ec = (int)((float)DAT_027025ec * 0.5);
                  }
                }
LAB_00807bc4:
                DAT_0270256c = DAT_02702530;
                DAT_02702534 = DAT_02702534 | 0x200;
                if ((int)DAT_027025ec < DAT_0270253c - DAT_02702530) {
                  DAT_0270253c = DAT_02702530 + DAT_027025ec;
                }
                if ((int)DAT_02702544 < 0) {
                  iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                  iVar23 = DAT_027033dc - DAT_027033c0;
                  if (iVar23 != iVar13 &&
                      iVar23 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar23,iVar13)) {
                    DAT_027033dc = DAT_027033c0 + iVar13;
                    unaff_x20 = (int *)&DAT_02b5bb59;
                  }
                }
              }
            }
            else {
              DAT_02b5bb59 = 0x324d;
              DAT_02b5bb5d = DAT_02b5bb5d | 0xe;
              DAT_02b5bbbc = 0;
              DAT_02b5bb5c = 10;
              DAT_02b5bb5b = DAT_02b5bb5b | 1;
              DAT_02b6bc39 = '\0';
              DAT_00cab070 = DAT_00cab070 | 4;
              if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
                if (DAT_027026e8 == '\0') {
                  if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                    DAT_027033dc = DAT_027033c0 + 0x10;
                  }
                  DAT_02702308 = '\x01';
                }
                else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                  DAT_0270253c = DAT_02702530 + 2;
                }
              }
              if (0x14 < DAT_0270253c - DAT_02702530) {
                DAT_0270253c = DAT_02702530 + 0x14;
                unaff_x20 = (int *)&DAT_02b5bb59;
              }
            }
          }
          else {
            DAT_02b5bb5d = bVar21;
            FUN_00988960(&PTR_FUN_00c9aa28,"Read Abort");
            DAT_02b5bb59 = 0x14d;
            DAT_02b5bbbc = 0;
            DAT_02b5bb5c = 10;
            DAT_02b5bb5d = DAT_02b5bb5d | 10;
            DAT_02b5bb5b = DAT_02b5bb5b | 1;
            DAT_02b6bc39 = '\0';
            DAT_00cab070 = DAT_00cab070 | 4;
            if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
              if (DAT_027026e8 == '\0') {
                if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 0x10;
                }
                DAT_02702308 = '\x01';
              }
              else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                DAT_0270253c = DAT_02702530 + 2;
              }
            }
            if (0x14 < DAT_0270253c - DAT_02702530) {
              DAT_0270253c = DAT_02702530 + 0x14;
            }
          }
        }
      }
LAB_008065ac:
      if ((DAT_02702534 >> 10 & 1) != 0) {
        if (DAT_02702530 - DAT_02702570 < (int)DAT_027025f0) {
          if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702570) {
            DAT_0270253c = DAT_027025f0 + DAT_02702570;
          }
        }
        else {
          bVar12 = DAT_02b6bc38 != 0xf;
          if ((DAT_02b6bc38 < 0x10) && (DAT_02b6bc38 = DAT_02b6bc38 + 1, bVar12)) {
            DAT_027025f0 = DAT_02b6bc28;
            if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50))
            {
              DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
            }
            DAT_02702534 = DAT_02702534 | 0x400;
            DAT_02702570 = DAT_02702530;
            if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
              DAT_0270253c = DAT_027025f0 + DAT_02702530;
            }
            if ((int)DAT_02702544 < 0) {
              iVar13 = (DAT_0270253c - DAT_02702530) * 8;
              iVar23 = DAT_027033dc - DAT_027033c0;
              if (iVar23 != iVar13 &&
                  iVar23 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar23,iVar13)) {
                DAT_027033dc = DAT_027033c0 + iVar13;
              }
            }
          }
          else {
            DAT_02b5bb5c = 10;
            DAT_02b5bb5d = DAT_02b5bb5d | 10;
            DAT_02702534 = DAT_02702534 & 0xfffffbff;
          }
        }
      }
      if ((DAT_02702534 & 0x19b2) != 0) {
        if ((DAT_02702534 >> 1 & 1) != 0) {
          if (DAT_02702530 - DAT_0270254c < DAT_027025cc) {
            if (DAT_027025cc < DAT_0270253c - DAT_0270254c) {
              DAT_0270253c = DAT_027025cc + DAT_0270254c;
            }
            goto joined_r0x008074c0;
          }
          uVar20 = DAT_02702534 & 0xfffffffd;
          switch(DAT_02b6bc1d) {
          case 1:
            DAT_02b6bc2c = 1;
            DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
            DAT_02b5bb5c = 10;
            DAT_02b5bbac = DAT_02b6bc20;
            DAT_02b5bb5d = DAT_02b5bb5d | 10;
            DAT_02b6bc38 = 0;
            uVar30 = DAT_02702534 >> 10;
            DAT_02702534 = uVar20;
            if ((uVar30 & 1) == 0) {
              DAT_027025f0 = DAT_02b6bc28;
              if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50)
                 ) {
                DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
              }
              DAT_02702534 = uVar20 | 0x400;
              DAT_02702570 = DAT_02702530;
              if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
                DAT_0270253c = DAT_027025f0 + DAT_02702530;
              }
              if ((int)DAT_02702544 < 0) {
                iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                iVar23 = DAT_027033dc - DAT_027033c0;
                if (iVar23 != iVar13 &&
                    iVar23 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar23,iVar13)) {
                  DAT_027033dc = DAT_027033c0 + iVar13;
                }
              }
            }
            goto code_r0x0080739c;
          case 2:
            DAT_02b6bc2c = 1;
            DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
            DAT_02b5bb5c = 10;
            DAT_02b5bbac = DAT_02b6bc20;
            DAT_02b5bb5d = DAT_02b5bb5d | 10;
            DAT_02b6bc38 = 0;
            if ((DAT_02702534 >> 10 & 1) == 0) {
              DAT_027025f0 = DAT_02b6bc28;
              if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50)
                 ) {
                DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
              }
              uVar20 = uVar20 | 0x400;
              DAT_02702570 = DAT_02702530;
              if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
                DAT_0270253c = DAT_027025f0 + DAT_02702530;
              }
              if ((int)DAT_02702544 < 0) {
                iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                iVar23 = DAT_027033dc - DAT_027033c0;
                if (iVar23 != iVar13 &&
                    iVar23 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar23,iVar13)) {
                  DAT_027033dc = DAT_027033c0 + iVar13;
                }
              }
            }
            break;
          case 3:
            DAT_02b6bc2c = 0;
            DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
            DAT_02b5bbac = 0;
            DAT_02b5bb5c = 0;
            break;
          case 4:
            DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4d);
            DAT_02b5bb5c = 10;
            DAT_02b5bb5d = DAT_02b5bb5d | 10;
          }
          DAT_02702534 = uVar20;
          DAT_02b6bc1d = 0;
code_r0x0080739c:
          DAT_02b6bc39 = '\0';
          DAT_02b5bb5b = DAT_02b5bb5b | 1;
          DAT_00cab070 = DAT_00cab070 | 4;
          if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
            if (DAT_027026e8 == '\0') {
              if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 0x10;
              }
              DAT_02702308 = '\x01';
            }
            else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
              DAT_0270253c = DAT_02702530 + 2;
            }
          }
          if (0x14 < DAT_0270253c - DAT_02702530) {
            DAT_0270253c = DAT_02702530 + 0x14;
          }
        }
joined_r0x008074c0:
        if ((DAT_02702534 >> 4 & 1) != 0) {
          if (DAT_02702530 - DAT_02702558 < DAT_027025d8) {
            if (DAT_027025d8 < DAT_0270253c - DAT_02702558) {
              DAT_0270253c = DAT_027025d8 + DAT_02702558;
            }
          }
          else {
            DAT_02702534 = DAT_02702534 & 0xffffffef;
            if ((DAT_00cab548 >> 0x18 & 1) != 0) {
              DAT_00cab548 = DAT_00cab548 & 0xfeffffff;
              FUN_0058d270(4);
            }
          }
        }
        if ((DAT_02702534 >> 5 & 1) != 0) {
          if (DAT_02702530 - DAT_0270255c < DAT_027025dc) {
            if (DAT_027025dc < DAT_0270253c - DAT_0270255c) {
              DAT_0270253c = DAT_027025dc + DAT_0270255c;
            }
          }
          else {
            DAT_02702534 = DAT_02702534 & 0xffffffdf;
            if ((DAT_00cab558 >> 0x18 & 1) != 0) {
              DAT_00cab558 = DAT_00cab558 & 0xfeffffff;
              FUN_0058d270(5);
            }
          }
        }
        if ((DAT_02702534 >> 7 & 1) != 0) {
          if (DAT_02702530 - DAT_02702564 < DAT_027025e4) {
            if (DAT_027025e4 < DAT_0270253c - DAT_02702564) {
              DAT_0270253c = DAT_027025e4 + DAT_02702564;
            }
          }
          else {
            DAT_02702534 = DAT_02702534 & 0xffffff7f;
            FUN_008935d0();
          }
        }
        if ((DAT_02702534 >> 8 & 1) != 0) {
          if (DAT_02702530 - DAT_02702568 < DAT_027025e8) {
            if (DAT_027025e8 < DAT_0270253c - DAT_02702568) {
              DAT_0270253c = DAT_027025e8 + DAT_02702568;
            }
          }
          else {
            DAT_02702534 = DAT_02702534 & 0xfffffeff;
            FUN_00894040();
          }
        }
        if ((DAT_02702534 >> 0xb & 1) != 0) {
          if (DAT_02702530 - DAT_02702574 < DAT_027025f4) {
            if (DAT_027025f4 < DAT_0270253c - DAT_02702574) {
              DAT_0270253c = DAT_027025f4 + DAT_02702574;
            }
          }
          else {
            DAT_02702534 = DAT_02702534 & 0xfffff7ff;
            if ((((DAT_0bee8cea & DAT_0bee8ce8) != 0) &&
                (DAT_00cab070 = DAT_00cab070 | 0x2000, DAT_00cab078 != 0)) &&
               ((DAT_00cab074 & DAT_00cab070) != 0)) {
              if (DAT_027026e8 == '\0') {
                if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 0x10;
                }
                DAT_02702308 = '\x01';
              }
              else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                DAT_0270253c = DAT_02702530 + 2;
              }
            }
          }
        }
        if ((DAT_02702534 >> 0xc & 1) != 0) {
          if (DAT_02702530 - DAT_02702578 < DAT_027025f8) {
            if (DAT_027025f8 < DAT_0270253c - DAT_02702578) {
              DAT_0270253c = DAT_027025f8 + DAT_02702578;
            }
          }
          else {
            DAT_02702534 = DAT_02702534 & 0xffffefff;
            DAT_00cab070 = DAT_00cab070 | 0x400000;
            if ((DAT_00cab078 != 0) && ((DAT_00cab074 & DAT_00cab070) != 0)) {
              if (DAT_027026e8 == '\0') {
                if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 0x10;
                }
                DAT_02702308 = '\x01';
              }
              else if ((DAT_02702304 == '\0') && (2 < DAT_0270253c - DAT_02702530)) {
                DAT_0270253c = DAT_02702530 + 2;
              }
            }
          }
        }
      }
      DAT_02702304 = 0;
      ppuVar14 = unaff_x22;
    }
    if (((DAT_00cab078 == 0) || ((DAT_00cab074 & DAT_00cab070) == 0)) ||
       ((DAT_027023d8 & 0xfe01) < 0x401)) {
      if (DAT_02702308 != '\0') goto LAB_00807848;
    }
    else {
      uVar36 = 0x80000080;
      if ((DAT_027023d8 & 0x400000) != 0) {
        uVar36 = 0xbfc00180;
      }
      DAT_027023d8 = DAT_027023d8 & 0xffffffc0 | (DAT_027023d8 & 0xf) << 2;
      DAT_027023dc = DAT_027023dc & 0xffffff80;
      DAT_027023e0 = DAT_02702528;
      DAT_02702308 = '\x01';
      DAT_02702528 = uVar36;
LAB_00807848:
      DAT_02702654 = (**(code **)(DAT_02702310 + 0x10))(DAT_02702654);
      DAT_02702308 = '\0';
    }
    iVar13 = (int)DAT_02704e08[1];
    uVar20 = 0x100;
    if (iVar13 == 0) {
      uVar20 = 1;
    }
    if (((iVar13 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)) {
      if ((_DAT_02819070 & uVar20) != 0) {
        piVar26 = (int *)&DAT_028190d4;
        if (iVar13 != 0) {
          piVar26 = (int *)&DAT_028196e4;
        }
        uVar20 = DAT_027033c0 - *piVar26;
        if (0 < (int)uVar20) {
          if (uVar20 < 0x11) {
            uVar20 = 0x10;
          }
          (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar20);
        }
      }
      iVar13 = (int)DAT_02704e00[1];
      if (iVar13 != 0) goto LAB_00807910;
      uVar20 = 1;
LAB_00807968:
      if ((_DAT_02819070 & uVar20) != 0) {
        piVar26 = (int *)&DAT_028190d4;
        if (iVar13 != 0) {
          piVar26 = (int *)&DAT_028196e4;
        }
        uVar20 = DAT_027033c0 - *piVar26;
        if (0 < (int)uVar20) {
          if (uVar20 < 0x11) {
            uVar20 = 0x10;
          }
          (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar20);
        }
      }
    }
    else {
      FUN_005b1f50(&DAT_01701a00);
      iVar13 = (int)DAT_02704e00[1];
      if (iVar13 == 0) {
        uVar20 = 1;
        goto LAB_00807968;
      }
LAB_00807910:
      uVar20 = 0x100;
      if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_00807968;
      FUN_005b1f50(&DAT_01701a00);
    }
    iVar13 = DAT_027033dc - DAT_027033c0;
    if ((0xc0 < DAT_02702654) && (0x30 < iVar13)) {
      DAT_027033dc = DAT_027033c0 + 0x30;
      iVar13 = 0x30;
    }
    iVar23 = (DAT_0270253c - DAT_02702530) * 8 - DAT_02702654;
    if (iVar23 < iVar13) {
      DAT_027033dc = iVar23 + DAT_027033c0;
    }
    if (DAT_00ca11d8 < (int)(DAT_027033dc - DAT_00ca11d4)) {
      DAT_027033dc = DAT_00ca11d8 + DAT_00ca11d4;
    }
    if (DAT_00ca11cc < (int)(DAT_027033dc - DAT_00ca11c8)) {
      DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8;
    }
    DAT_027026e8 = '\0';
    if (DAT_029b4a89 != '\x01') {
      if (*(long *)(lVar9 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    DAT_029b4a89 = '\0';
    fastjmp_jmp(&DAT_029b5bc0,1);
LAB_0080f260:
    uVar20 = DAT_00ca13f0 & 0xfffffffb;
LAB_0080f294:
    bVar12 = uVar20 == 0;
LAB_0080f298:
    if (((DAT_00ca150c == 0) && ((*(ushort *)ppuVar14 >> 3 & 1) != 0)) &&
       ((*(byte *)((long)ppuVar14 + 0x10c) >> 4 & 1) != 0)) {
      if (DAT_00ca1518 == 0) goto LAB_0080f2f8;
LAB_0080f2cc:
      bVar11 = true;
    }
    else {
      if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0)) goto LAB_0080f2cc;
LAB_0080f2f8:
      bVar11 = false;
    }
    if (!bVar11 && bVar12) {
LAB_0080f304:
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_0080f318:
    unaff_x20[0xa0] = 0;
    FUN_003f75f0(1);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    unaff_x22 = ppuVar14;
    uVar20 = DAT_00cbec00;
  } while( true );
}

