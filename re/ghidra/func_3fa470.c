// vaddr 0x3FA470  ghidra 0x4FA470  name=FUN_004fa470  size=48808 instr-addr
// duvod: data 0xB9AA28 (33 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa470(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  void *pvVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  char cVar18;
  long lVar19;
  ulong uVar20;
  ulong extraout_x8;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  int *piVar27;
  int *piVar28;
  uint *puVar29;
  undefined *puVar30;
  long extraout_x14;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 *puVar37;
  undefined4 uVar38;
  timespec local_88;
  long local_78;
  
  iVar13 = DAT_027033c8;
  uVar22 = DAT_02703250;
  lVar19 = tpidr_el0;
  local_78 = *(long *)(lVar19 + 0x28);
  if (*(long *)(&DAT_02703000 + ((ulong)(DAT_027032ac >> 0x15) & 0x1f) * 0x10) ==
      *(long *)(&DAT_02703000 + ((ulong)(DAT_027032ac >> 0x10) & 0x1f) * 0x10)) {
    FUN_004ed550(DAT_027032a8 + ((int)(DAT_027032ac << 0x10) >> 0xe));
    lVar19 = *(long *)(lVar19 + 0x28);
    goto LAB_004ff8a4;
  }
  DAT_027026e8 = '\x01';
  DAT_027033dc = DAT_027033c0 + 0xc00;
  DAT_027033e0 = DAT_027033c0;
  uVar21 = DAT_00cca000;
  if (DAT_00cca000 != 0) {
    if ((DAT_00cca010 & DAT_00cca000) == 0) {
      uVar21 = 0;
    }
    else {
      if ((DAT_00cca000 >> 1 & 1) != 0) {
        DAT_00ca1164 = DAT_00ca1158;
        if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
          uVar21 = 0;
          if (DAT_00ca1168 != 0) {
            uVar21 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
          }
          DAT_00ca1164 = uVar21 + DAT_00ca1158;
        }
        DAT_00ca1180 = DAT_00ca1174;
        if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
          uVar21 = 0;
          if (DAT_00ca1184 != 0) {
            uVar21 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
          }
          DAT_00ca1180 = uVar21 + DAT_00ca1174;
        }
      }
      uVar21 = 0x400;
    }
  }
  if (((ushort)DAT_00cc9010 & (DAT_00cc9010._2_2_ | 0x8000)) != 0) {
    uVar24 = 0;
    if (DAT_00cca520._2_1_ != 1 && (_DAT_00cc9000 & 1) != 0) {
      uVar24 = 0x800;
    }
    uVar21 = uVar24 | uVar21;
  }
  if (((((DAT_02703250 & uVar21) != 0) && ((DAT_02703250 >> 0x10 & 1) != 0)) &&
      ((DAT_02703250 & 1) != 0)) &&
     (((DAT_02703250 >> 1 & 1) == 0 && ((DAT_02703250 >> 2 & 1) == 0)))) {
    DAT_027033c8 = 0;
    DAT_02703250 = DAT_02703250 | 2;
    if (iVar13 == 0) {
      DAT_02703258 = DAT_027032a8;
    }
    else {
      DAT_02703254 = uVar21;
      FUN_00988960(&PTR_FUN_00c9aa28,"branch delay!!");
      DAT_02703258 = DAT_027032a8 - 4;
      uVar21 = DAT_02703254 | 0x80000000;
    }
    DAT_02703254 = uVar21;
    DAT_027032a8 = 0x80000200;
    if ((uVar22 & 0x400000) != 0) {
      DAT_027032a8 = 0xbfc00400;
    }
  }
  uVar22 = DAT_00ca1104;
  uVar21 = DAT_027033c0;
  if (DAT_00ca11cc <= (int)(DAT_027033c0 - DAT_00ca11c8)) {
    if (DAT_00ca1108 <= (int)(DAT_027033c0 - DAT_00ca1104)) {
      if (DAT_00ca1100 == 2) {
        uVar22 = DAT_00ca2710 ^ 0x2000;
        DAT_00ca2710 = DAT_00ca2710 | 0x2000;
        if ((DAT_00ca1720 & 0x6000) != 0 && (DAT_00ca1770 & 1) != 0) {
          DAT_00ca2710 = uVar22;
        }
        if ((((DAT_00ca2710 >> 3 & 1) == 0) &&
            (DAT_00ca2710 = DAT_00ca2710 | 8, (DAT_00ca2720._1_1_ >> 3 & 1) == 0)) &&
           ((DAT_00cca000 = DAT_00cca000 | 1, (DAT_00cca010 & 1) != 0 &&
            (((DAT_02703250 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)))))) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
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
          if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
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
              uVar21 = uVar22;
            }
            else {
              uVar21 = DAT_027033c0;
              if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_004fae08;
            }
            DAT_00ca115c = DAT_00ca115c | 0x80;
            DAT_00ca1170 = uVar21;
          }
LAB_004fae08:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
              uVar21 = uVar22;
            }
            else {
              uVar21 = DAT_027033c0;
              if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_004fae68;
            }
            DAT_00ca1178 = DAT_00ca1178 | 0x80;
            DAT_00ca118c = uVar21;
          }
LAB_004fae68:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
              uVar21 = uVar22;
            }
            else {
              uVar21 = DAT_027033c0;
              if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_004faec8;
            }
            DAT_00ca1194 = DAT_00ca1194 | 0x80;
            DAT_00ca11a8 = uVar21;
          }
LAB_004faec8:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            else {
              uVar22 = DAT_027033c0;
              if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_004faf1c;
            }
            DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
            DAT_00ca11c4 = uVar22;
          }
        }
LAB_004faf1c:
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
            cVar18 = DAT_00ca1150;
            if (60000000 < (int)(DAT_027033c0 - DAT_0281a570)) {
              cVar18 = '\0';
              DAT_0281a574 = '\0';
            }
            bVar12 = cVar18 != '\0';
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
              uVar3 = 0xd;
              if (bVar12 == false) {
                uVar3 = DAT_02704e64;
              }
              FUN_005b0140(&DAT_0c7adff0,uVar3,0);
              goto LAB_004faa98;
            }
          }
          DAT_00ca1154 = '\0';
        }
LAB_004faa98:
        FUN_00916070();
        FUN_008cd720();
        uVar20 = 0;
        do {
          lVar26 = 0;
          do {
            if (((&DAT_0c728f8d)[uVar20 * 0x280 + lVar26 * 0x28] != '\0') &&
               (iVar13 = (&DAT_0c728f84)[lVar26 * 10 + uVar20 * 0xa0], iVar13 != 0)) {
              piVar28 = &DAT_0c728f88 + lVar26 * 10 + uVar20 * 0xa0;
              iVar25 = *piVar28;
              *piVar28 = iVar25 + -1;
              if (iVar25 + -1 == 0) {
                *piVar28 = iVar13;
                puVar15 = &DAT_0c728f68 + uVar20 * 0x50 + lVar26 * 5;
                bVar23 = *(byte *)((long)puVar15 + 0x24);
                *(byte *)((long)puVar15 + 0x24) = bVar23 ^ 1;
                uVar38 = 0;
                if (bVar23 == 0) {
                  uVar38 = *(undefined4 *)(puVar15 + 3);
                }
                puVar4 = (undefined4 *)puVar15[1];
                for (puVar37 = (undefined4 *)*puVar15; puVar37 != puVar4; puVar37 = puVar37 + 1) {
                  FUN_008ca230(uVar38,&DAT_0c72a368,uVar20 & 0xffffffff,*puVar37);
                }
              }
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 != 0x10);
          uVar20 = uVar20 + 1;
        } while (uVar20 != 8);
        uVar20 = DAT_00ca1140;
        if ((DAT_02704e3c != 0.0) && (DAT_00ca114c == '\0')) {
          uVar20 = DAT_00ca1138 + DAT_00ca1140;
          clock_gettime(1,&local_88);
          lVar26 = (local_88.tv_nsec - uVar20) + local_88.tv_sec * 1000000000;
          if (lVar26 < DAT_00ca1138) {
            if (1 < (int)(SUB168(SEXT816(lVar26) * SEXT816(-0x431bde82d7b634db),8) >> 0x12) -
                    (SUB164(SEXT816(lVar26) * SEXT816(-0x431bde82d7b634db),0xc) >> 0x1f)) {
              local_88.tv_sec = uVar20 / 1000000000;
              local_88.tv_nsec = uVar20 % 1000000000;
              clock_nanosleep(1,1,&local_88,(timespec *)0x0);
            }
          }
          else {
            lVar8 = 0;
            if (DAT_00ca1138 != 0) {
              lVar8 = lVar26 / DAT_00ca1138;
            }
            uVar20 = DAT_00ca1140 + lVar8 * DAT_00ca1138;
          }
        }
        DAT_00ca1140 = uVar20;
        uVar3 = DAT_00ca1700;
        DAT_00ca1700 = 0;
        FUN_005aeda0(&DAT_0c7adff0,uVar3);
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
          if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
        FUN_00584250();
        if (DAT_00ca1148 != 0) {
          if (((DAT_00ca1148 & 1) != 0) && ((DAT_00ca115c >> 3 & 1) != 0)) {
            uVar6 = DAT_00ca115c >> 4 & 3;
            if ((uVar6 == 3) || (uVar6 == 1)) {
              DAT_00ca115c = DAT_00ca115c | 0x80;
              DAT_00ca1158 = 0;
              DAT_00ca1160 = DAT_00ca1160 & 0xffff;
            }
            else {
              if (uVar6 != 0) goto LAB_004faf84;
              if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
                uVar21 = 0;
                if (DAT_00ca1168 != 0) {
                  uVar21 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
                }
                DAT_00ca1158 = uVar21 + DAT_00ca1158;
              }
              DAT_00ca115c = DAT_00ca115c & 0xff7f;
            }
            DAT_00ca1170 = uVar22;
          }
LAB_004faf84:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            uVar6 = DAT_00ca1178 >> 4 & 3;
            if (uVar6 == 0) {
              if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
                uVar21 = 0;
                if (DAT_00ca1184 != 0) {
                  uVar21 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
                }
                DAT_00ca1174 = uVar21 + DAT_00ca1174;
              }
              DAT_00ca1178 = DAT_00ca1178 & 0xff7f;
            }
            else {
              if ((uVar6 != 3) && (uVar6 != 1)) goto LAB_004fb01c;
              DAT_00ca1178 = DAT_00ca1178 | 0x80;
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
            }
            DAT_00ca118c = uVar22;
          }
LAB_004fb01c:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            uVar6 = DAT_00ca1194 >> 4 & 3;
            if (uVar6 == 0) {
              if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
                uVar21 = 0;
                if (DAT_00ca11a0 != 0) {
                  uVar21 = (DAT_027033c0 - DAT_00ca11a8) / DAT_00ca11a0;
                }
                DAT_00ca1190 = uVar21 + DAT_00ca1190;
              }
              DAT_00ca1194 = DAT_00ca1194 & 0xff7f;
            }
            else {
              if ((uVar6 != 3) && (uVar6 != 1)) goto LAB_004fb0b4;
              DAT_00ca1194 = DAT_00ca1194 | 0x80;
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            }
            DAT_00ca11a8 = uVar22;
          }
LAB_004fb0b4:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            uVar6 = DAT_00ca11b0 >> 4 & 3;
            if (uVar6 == 0) {
              if (((DAT_00ca11b0 >> 7 & 1) != 0) && ((DAT_00ca11b0 & 3) != 3)) {
                uVar21 = 0;
                if (DAT_00ca11bc != 0) {
                  uVar21 = (DAT_027033c0 - DAT_00ca11c4) / DAT_00ca11bc;
                }
                DAT_00ca11ac = uVar21 + DAT_00ca11ac;
              }
              DAT_00ca11b0 = DAT_00ca11b0 & 0xff7f;
            }
            else {
              if ((uVar6 != 3) && (uVar6 != 1)) goto LAB_004fb148;
              DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            DAT_00ca11c4 = uVar22;
          }
        }
LAB_004fb148:
        DAT_00ca1104 = DAT_00ca1104 + DAT_00ca111c;
        DAT_00ca1108 = DAT_00ca1124;
        DAT_00ca1100 = 2;
        DAT_00ca11d4 = DAT_00ca11d4 + DAT_00ca1128;
      }
    }
    DAT_00ca11c8 = DAT_027033c0;
    uVar16 = DAT_02703250;
    cVar18 = DAT_027026e8;
    uVar2 = DAT_00cca010;
    iVar25 = DAT_00ca1108;
    uVar1 = DAT_00ca1104;
    lVar26 = 0;
    uVar21 = DAT_02703250 & 0x10407;
    uVar22 = DAT_027033c0 + 4;
    uVar31 = DAT_00cca000;
    uVar24 = DAT_027033dc;
    iVar13 = DAT_02702540;
    iVar17 = DAT_02702544;
    do {
      uVar6 = *(ushort *)((long)&DAT_00ca115c + lVar26);
      uVar33 = (uint)uVar6;
      if ((uVar6 >> 7 & 1) != 0) {
        if ((~uVar6 & 3) == 0) {
          *(uint *)((long)&DAT_00ca1170 + lVar26) = DAT_00ca11c8;
        }
        else {
          uVar34 = DAT_00ca11c8 - *(int *)((long)&DAT_00ca1170 + lVar26);
          uVar34 = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
          uVar36 = *(uint *)((long)&DAT_00ca1168 + lVar26);
          uVar5 = 0;
          if (uVar36 != 0) {
            uVar5 = uVar34 / uVar36;
          }
          uVar35 = *(uint *)((long)&DAT_00ca1158 + lVar26) + uVar5;
          *(uint *)((long)&DAT_00ca1158 + lVar26) = uVar35;
          *(uint *)((long)&DAT_00ca1170 + lVar26) = DAT_00ca11c8 + (uVar5 * uVar36 - uVar34);
          uVar34 = *(uint *)((long)&DAT_00ca1160 + lVar26);
          if (uVar34 <= uVar35) {
            if ((uVar6 & 0x500) == 0x100) {
              uVar33 = uVar6 | 0x400;
              *(short *)((long)&DAT_00ca115c + lVar26) = (short)uVar33;
              uVar36 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar26) & 0x1f);
              uVar31 = uVar36 | uVar31;
              DAT_00cca000 = uVar31;
              if ((((uVar36 & uVar2) != 0) && (uVar21 == 0x10401)) && ((uVar31 & uVar2) != 0)) {
                if (4 < (int)(uVar24 - DAT_00ca11c8)) {
                  uVar24 = uVar22;
                  DAT_027033dc = uVar22;
                }
                if ((cVar18 != '\0') && (0 < iVar17)) {
                  iVar13 = iVar17 + iVar13;
                  DAT_02702544 = 0;
                  iVar17 = 0;
                  DAT_02702540 = iVar13;
                }
              }
            }
            if ((uVar33 >> 6 & 1) == 0) {
              uVar34 = uVar34 | 0x10000000;
              *(uint *)((long)&DAT_00ca1160 + lVar26) = uVar34;
            }
            else {
              *(uint *)((long)&DAT_00ca1158 + lVar26) = uVar35 - uVar34;
              uVar35 = uVar35 - uVar34;
            }
          }
          if (0xffff < uVar35) {
            if ((uVar33 & 0xa00) == 0x200) {
              *(ushort *)((long)&DAT_00ca115c + lVar26) = (ushort)uVar33 | 0x800;
              uVar33 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar26) & 0x1f);
              uVar31 = uVar33 | uVar31;
              DAT_00cca000 = uVar31;
              if ((((uVar33 & uVar2) != 0) && (uVar21 == 0x10401)) && ((uVar31 & uVar2) != 0)) {
                if (4 < (int)(uVar24 - DAT_00ca11c8)) {
                  uVar24 = uVar22;
                  DAT_027033dc = uVar22;
                }
                if ((cVar18 != '\0') && (0 < iVar17)) {
                  iVar13 = iVar17 + iVar13;
                  DAT_02702544 = 0;
                  iVar17 = 0;
                  DAT_02702540 = iVar13;
                }
              }
            }
            *(uint *)((long)&DAT_00ca1158 + lVar26) = uVar35 - 0x10000;
            *(uint *)((long)&DAT_00ca1160 + lVar26) = uVar34 & 0xffff;
          }
        }
      }
      lVar26 = lVar26 + 0x1c;
    } while (lVar26 != 0x70);
    iVar25 = (uVar1 - DAT_00ca11c8) + iVar25;
    DAT_00ca11cc = (DAT_00ca11d4 - DAT_00ca11c8) + DAT_00ca11d8;
    if (iVar25 <= DAT_00ca11cc) {
      DAT_00ca11cc = iVar25;
    }
    if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
      if ((DAT_00ca1158 < 0x10001) && (DAT_00ca1158 <= DAT_00ca1160)) {
        iVar25 = DAT_00ca1168 * (0x10000 - DAT_00ca1158);
        iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca1170;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
          uVar24 = iVar25 + DAT_00ca1170;
          DAT_027033dc = uVar24;
        }
        if ((DAT_00ca1160 >> 0x1c & 1) == 0) {
          iVar25 = DAT_00ca1168 * (DAT_00ca1160 - DAT_00ca1158);
          iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca1170;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
            uVar24 = iVar25 + DAT_00ca1170;
            DAT_027033dc = uVar24;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
      if ((DAT_00ca1174 < 0x10001) && (DAT_00ca1174 <= DAT_00ca117c)) {
        iVar25 = DAT_00ca1184 * (0x10000 - DAT_00ca1174);
        iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca118c;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
          uVar24 = iVar25 + DAT_00ca118c;
          DAT_027033dc = uVar24;
        }
        if ((DAT_00ca117c >> 0x1c & 1) == 0) {
          iVar25 = DAT_00ca1184 * (DAT_00ca117c - DAT_00ca1174);
          iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca118c;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
            uVar24 = iVar25 + DAT_00ca118c;
            DAT_027033dc = uVar24;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
      if ((DAT_00ca1190 < 0x10001) && (DAT_00ca1190 <= DAT_00ca1198)) {
        iVar25 = DAT_00ca11a0 * (0x10000 - DAT_00ca1190);
        iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca11a8;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
          uVar24 = iVar25 + DAT_00ca11a8;
          DAT_027033dc = uVar24;
        }
        if ((DAT_00ca1198 >> 0x1c & 1) == 0) {
          iVar25 = DAT_00ca11a0 * (DAT_00ca1198 - DAT_00ca1190);
          iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca11a8;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
            uVar24 = iVar25 + DAT_00ca11a8;
            DAT_027033dc = uVar24;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    uVar21 = DAT_00ca11c8;
    if (((DAT_00ca11b0 >> 7 & 1) == 0) || ((DAT_00ca11b0 & 3) == 3)) {
LAB_004fb6ec:
      if (DAT_00ca11cc < 0) {
        DAT_00ca11cc = 0;
        if (0 < (int)(uVar24 - DAT_00ca11c8)) goto LAB_004fb6fc;
        goto LAB_004fb4a8;
      }
      if ((int)(uVar24 - DAT_00ca11c8) <= DAT_00ca11cc) goto LAB_004fb4a8;
LAB_004fb6fc:
      DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8;
      if ((uVar16 >> 2 & 1) == 0) goto LAB_004fb708;
LAB_004fb714:
      DAT_027033e8 = DAT_00ca11c8;
    }
    else {
      if ((DAT_00ca11ac < 0x10001) && (DAT_00ca11ac <= DAT_00ca11b4)) {
        iVar25 = DAT_00ca11bc * (0x10000 - DAT_00ca11ac);
        iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca11c4;
        if ((iVar13 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
          uVar24 = iVar25 + DAT_00ca11c4;
          DAT_027033dc = uVar24;
        }
        if ((DAT_00ca11b4 >> 0x1c & 1) == 0) {
          iVar25 = DAT_00ca11bc * (DAT_00ca11b4 - DAT_00ca11ac);
          iVar13 = (iVar25 - DAT_00ca11c8) + DAT_00ca11c4;
          if ((iVar13 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar24 - DAT_00ca11c8))) {
            uVar24 = iVar25 + DAT_00ca11c4;
            DAT_027033dc = uVar24;
          }
        }
        goto LAB_004fb6ec;
      }
      DAT_00ca11cc = 4;
      if (4 < (int)(uVar24 - DAT_00ca11c8)) goto LAB_004fb6fc;
LAB_004fb4a8:
      if ((uVar16 >> 2 & 1) != 0) goto LAB_004fb714;
LAB_004fb708:
      if (-1 < (int)DAT_027032b0) goto LAB_004fb714;
      uVar22 = uVar16 >> 3 & 3;
      if ((((DAT_027032b0 & (4 << (ulong)uVar22 | uVar16 & 2)) != 0) &&
          (uVar24 = DAT_027032b0 >> 5 & 0x1f, uVar24 < 0x10)) &&
         ((1 << (ulong)uVar24 & 0xf00eU) != 0)) {
        iVar13 = DAT_00ca11c8 - DAT_027033e8;
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        DAT_027032b4 = iVar13 + DAT_027032b4;
        DAT_027033e8 = DAT_00ca11c8;
      }
      uVar22 = 1 << (ulong)(uVar22 | 0xc);
      if ((((DAT_027032b0 & (uVar22 & 0xfffff000 | uVar22 & 0x7ff | (uVar16 >> 1 & 1) << 0xb)) == 0)
          || (uVar22 = DAT_027032b0 >> 0xf & 0x1f, 0xf < uVar22)) ||
         ((1 << (ulong)uVar22 & 0xf00eU) == 0)) goto LAB_004fb724;
      iVar13 = DAT_00ca11c8 - DAT_027033ec;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      DAT_027032b8 = iVar13 + DAT_027032b8;
    }
    DAT_027033ec = DAT_00ca11c8;
  }
LAB_004fb724:
  cVar18 = DAT_027026e8;
  uVar31 = DAT_00cca010;
  uVar24 = DAT_00ca11d4;
  uVar22 = DAT_00ca1148;
  if (DAT_00ca11d8 <= (int)(uVar21 - DAT_00ca11d4)) {
    piVar28 = &DAT_00ca112c;
    if ((_DAT_00ca11d0 & 1) == 0) {
      if (((((DAT_00ca2710 >> 2 & 1) == 0) &&
           (DAT_00ca2710 = DAT_00ca2710 | 4, (DAT_00ca2720._1_1_ >> 2 & 1) == 0)) &&
          (DAT_00cca000 = DAT_00cca000 | 1, (DAT_00cca010 & 1) != 0)) &&
         (((DAT_02703250 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)))) {
        if (4 < (int)(DAT_027033dc - uVar21)) {
          DAT_027033dc = uVar21 + 4;
        }
        if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
      }
      if (DAT_00ca1148 != 0) {
        if (((DAT_00ca1148 & 1) != 0) && ((DAT_00ca115c >> 3 & 1) == 0)) {
          if ((DAT_00ca115c >> 4 & 3) - 2 < 2) {
            DAT_00ca1158 = 0;
            DAT_00ca1160 = DAT_00ca1160 & 0xffff;
            uVar22 = DAT_00ca11d4;
          }
          else {
            uVar22 = uVar21;
            if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_004fbb78;
          }
          DAT_00ca1170 = uVar22;
          DAT_00ca115c = DAT_00ca115c | 0x80;
        }
LAB_004fbb78:
        if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) == 0)) {
          if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
            DAT_00ca1174 = 0;
            DAT_00ca117c = DAT_00ca117c & 0xffff;
            uVar22 = DAT_00ca11d4;
          }
          else {
            uVar22 = uVar21;
            if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_004fbbd4;
          }
          DAT_00ca118c = uVar22;
          DAT_00ca1178 = DAT_00ca1178 | 0x80;
        }
LAB_004fbbd4:
        if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) == 0)) {
          if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
            DAT_00ca1190 = 0;
            DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            uVar22 = DAT_00ca11d4;
          }
          else {
            uVar22 = uVar21;
            if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_004fbc30;
          }
          DAT_00ca11a8 = uVar22;
          DAT_00ca1194 = DAT_00ca1194 | 0x80;
        }
LAB_004fbc30:
        if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) == 0)) {
          if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
            DAT_00ca11ac = 0;
            DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            uVar21 = DAT_00ca11d4;
          }
          else if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_004fbc88;
          DAT_00ca11c4 = uVar21;
          DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
        }
      }
LAB_004fbc88:
      if (DAT_00ca9904 != '\0') {
        FUN_00584140(0);
      }
      _DAT_00ca11d0 = 1;
      piVar27 = piVar28;
      piVar28 = &DAT_00ca1130;
    }
    else {
      lVar26 = 0;
      uVar1 = uVar21 + 4;
      uVar2 = DAT_02703250 & 0x10407;
      puVar32 = &DAT_00ca1158;
      iVar13 = DAT_02702544;
      uVar16 = DAT_00cca000;
      uVar33 = DAT_027033dc;
      iVar25 = DAT_02702540;
      do {
        uVar6 = (ushort)puVar32[1];
        uVar34 = (uint)uVar6;
        if (((uVar6 ^ 0xffff) & 0x83) == 0) {
          uVar5 = *puVar32;
          uVar36 = uVar5 + 1;
          *puVar32 = uVar36;
          uVar35 = puVar32[2];
          uVar9 = uVar36 - uVar35;
          if (uVar36 < uVar35) {
LAB_004fb97c:
            uVar5 = uVar5 - 0xffff;
            uVar9 = uVar36;
          }
          else {
            if ((uVar6 & 0x500) == 0x100) {
              uVar34 = uVar34 | 0x400;
              *(short *)(puVar32 + 1) = (short)uVar34;
              uVar7 = 1 << (ulong)(puVar32[5] & 0x1f);
              DAT_00cca000 = uVar7 | uVar16;
              uVar16 = DAT_00cca000;
              if ((((uVar7 & uVar31) != 0) && (uVar2 == 0x10401)) && ((DAT_00cca000 & uVar31) != 0))
              {
                if (4 < (int)(uVar33 - uVar21)) {
                  DAT_027033dc = uVar1;
                  uVar33 = uVar1;
                }
                if ((cVar18 != '\0') && (0 < iVar13)) {
                  DAT_02702540 = iVar13 + iVar25;
                  DAT_02702544 = 0;
                  iVar13 = 0;
                  iVar25 = DAT_02702540;
                }
              }
            }
            if ((uVar34 >> 6 & 1) == 0) {
              uVar35 = uVar35 | 0x10000000;
              puVar32[2] = uVar35;
              goto LAB_004fb97c;
            }
            *puVar32 = uVar9;
            uVar5 = uVar9 - 0x10000;
          }
          if (0xffff < uVar9) {
            if ((uVar34 & 0xa00) == 0x200) {
              uVar34 = uVar34 | 0x800;
              *(short *)(puVar32 + 1) = (short)uVar34;
              uVar36 = 1 << (ulong)(puVar32[5] & 0x1f);
              DAT_00cca000 = uVar36 | uVar16;
              uVar16 = DAT_00cca000;
              if ((((uVar36 & uVar31) != 0) && (uVar2 == 0x10401)) && ((DAT_00cca000 & uVar31) != 0)
                 ) {
                if (4 < (int)(uVar33 - uVar21)) {
                  DAT_027033dc = uVar1;
                  uVar33 = uVar1;
                }
                if ((cVar18 != '\0') && (0 < iVar13)) {
                  DAT_02702540 = iVar13 + iVar25;
                  DAT_02702544 = 0;
                  iVar13 = 0;
                  iVar25 = DAT_02702540;
                }
              }
            }
            *puVar32 = uVar5;
            puVar32[2] = uVar35 & 0xffff;
          }
        }
        if (((uVar22 >> (ulong)((uint)lVar26 & 0x1f) & 1) != 0) && ((uVar34 >> 3 & 1) == 0)) {
          uVar36 = uVar34 >> 4 & 3;
          if ((uVar36 == 3) || (uVar36 == 1)) {
            *(ushort *)(puVar32 + 1) = (ushort)uVar34 | 0x80;
            *puVar32 = 0;
            puVar32[2] = (uint)(ushort)puVar32[2];
          }
          else {
            if (uVar36 != 0) goto LAB_004fb8d4;
            uVar36 = *puVar32;
            if (((uVar34 >> 7 & 1) != 0) && ((uVar34 & 3) != 3)) {
              uVar5 = 0;
              if (puVar32[4] != 0) {
                uVar5 = (uVar21 - puVar32[6]) / puVar32[4];
              }
              uVar36 = uVar5 + uVar36;
            }
            *puVar32 = uVar36;
            *(ushort *)(puVar32 + 1) = (ushort)uVar34 & 0xff7f;
          }
          puVar32[6] = uVar24;
        }
LAB_004fb8d4:
        lVar26 = lVar26 + 1;
        puVar32 = puVar32 + 7;
      } while (lVar26 != 4);
      FUN_00583a20(0);
      _DAT_00ca11d0 = 0;
      piVar27 = &DAT_00ca1130;
    }
    DAT_00ca11d4 = *piVar27 + DAT_00ca11d4;
    DAT_00ca11d8 = *piVar28;
    uVar21 = DAT_027033c0;
  }
  DAT_02703244 = DAT_02703244 + (uVar21 - DAT_027033e4);
  DAT_027033e4 = uVar21;
  if (((DAT_02703250._1_1_ < '\0') && (DAT_0270324c <= DAT_02703244)) &&
     (DAT_02703244 < DAT_0270324c + 1000)) {
    FUN_00988670(&PTR_FUN_00c9aa28,5,"timr intr: %x, %x");
    iVar13 = DAT_027033c8;
    uVar22 = DAT_02703250;
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
        uVar21 = 0x200;
      }
      else {
        uVar21 = 0x180;
      }
      DAT_027032a8 = uVar21 | 0x80000000;
      if ((uVar22 & 0x400000) != 0) {
        DAT_027032a8 = uVar21 + 0xbfc00200;
      }
    }
    else {
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2* FIX ME: Level 2 cpuException");
      DAT_027032a8 = 0xbfc00000;
      FUN_00988960(&PTR_FUN_00c9aa28,"Reset request");
    }
  }
  uVar22 = DAT_00cbec00;
  if ((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) {
    if ((_DAT_00cc9000 & 1) != 0) {
      if (((DAT_00cca520._2_1_ & 1) == 0) && (uVar21 = DAT_027033c4, (DAT_027033c4 & 0x1ffff) != 0))
      {
LAB_004ffc60:
        uVar22 = DAT_00cbec00;
        if (((uVar21 & 0x1ffff) != 0) &&
           (((_DAT_00cc9000 & 1) != 0 && ((DAT_00cca520._2_1_ & 1) == 0)))) {
          if ((uVar21 >> 0x14 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_02703310 <= (int)(DAT_027033c0 - DAT_02703390))) {
              DAT_027033c4 = uVar21 & 0xffefffff;
              DAT_027033d4 = DAT_027033d4 & 0xffefffff;
              _DAT_02819070 = _DAT_02819070 & 0xffff00ff;
              uVar21 = DAT_027033c4;
            }
            else if (DAT_02703310 < (int)(DAT_027033dc - DAT_02703390)) {
              DAT_027033dc = DAT_02703310 + DAT_02703390;
            }
          }
          if ((uVar21 >> 1 & 1) == 0) goto LAB_00500294;
          if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
             ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
              DAT_027033dc = DAT_027032c4 + DAT_02703344;
            }
            goto LAB_00500294;
          }
          DAT_027033c4 = uVar21 & 0xfffffffd;
          DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
          DAT_02706280 = 0;
          if ((DAT_00cbe020 & 0xc00) == 0x800) {
            if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
               (uVar22 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
              if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_004ffef4;
              uVar22 = DAT_00ca1510 & 0xfffffffb;
            }
            if (uVar22 == 0) {
              DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
              DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
              if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_004ffe54:
                bVar12 = uVar22 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar22 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_004ffe54;
                }
                bVar12 = false;
              }
              if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1638 != 0) goto LAB_004ffe84;
LAB_004ffeb0:
                bVar11 = false;
              }
              else {
                if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0))
                goto LAB_004ffeb0;
LAB_004ffe84:
                bVar11 = true;
              }
              if (bVar11 || !bVar12) {
                FUN_003ecbd0(&DAT_00ca1380,0,1);
              }
            }
          }
LAB_004ffef4:
          if ((_DAT_00cc9000 & 0xc) == 8) {
            if ((DAT_00cc4000 & 0xc) == 0) {
              FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
            }
            uVar22 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar22 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            FUN_005d9ad0();
            uVar21 = DAT_027033c4;
            goto LAB_00500294;
          }
          if ((DAT_00cc4000 & 1) != 0) {
            if ((DAT_02706360 & 0x7f) == 0x51) {
              uVar22 = *DAT_00ca16f0;
              if ((uVar22 >> 10 & 3 | 2) == 2) {
LAB_004fffd4:
                if (((uVar22 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_004fffec;
              }
            }
            else {
              if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_004fffec:
                uVar22 = DAT_00cc4020;
                if (0xf < DAT_00cc4020) {
                  uVar22 = 0x10;
                }
                DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                               DAT_00cbec00 & 0xfffff7 | (uVar22 & 0x1f) << 0x18;
                goto LAB_00500014;
              }
              uVar22 = *DAT_00ca16f0;
              uVar21 = uVar22 >> 10 & 3;
              if (((uVar21 == 0) || (uVar21 == 2)) ||
                 ((uVar21 == 3 && (((uVar22 >> 2 & 1) != 0 && (DAT_00ca1630 == 3))))))
              goto LAB_004fffd4;
            }
            DAT_02703344 = DAT_027033c0;
            DAT_027033c4 = DAT_027033c4 | 2;
            DAT_027032c4 = 8;
            if ((DAT_02704f28 & 0x40) == 0) {
              DAT_027032c4 = 0x80;
            }
            if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + DAT_027032c4;
            }
            uVar21 = DAT_027033c4;
            if ((~DAT_00cbe020 & 0xc00) == 0) {
              DAT_00cbec00 = DAT_00cbec00 | 8;
            }
            goto LAB_00500294;
          }
LAB_00500014:
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
            if ((DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + DAT_02703308;
            }
LAB_00500280:
            DAT_027033d4 = DAT_027033d4 | 2;
            uVar21 = DAT_027033c4;
            goto LAB_00500294;
          }
          if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_00500280;
          if ((DAT_00cc4000 >> 8 & 1) == 0) {
            FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
          }
          uVar22 = DAT_00cbec00;
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
              if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_02706370 = DAT_02706370 + -1;
            uVar22 = DAT_00cbec00;
            if ((DAT_00cbec00 & 0x700) != 0) {
              uVar22 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar22 = 0x10;
              }
              uVar21 = (uVar22 & 0x1f) << 0x18;
              uVar22 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar21;
              if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0))
              {
                DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar21 | 2;
                goto LAB_00500280;
              }
            }
          }
          DAT_00cbec00 = uVar22;
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
              uVar22 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar22 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            }
            uVar24 = DAT_027033c0;
            uVar22 = DAT_027033c4;
            if (((DAT_00cbec00 >> 3 & 1) != 0) &&
               (uVar24 = DAT_027033c0, uVar21 = DAT_027033c4, DAT_00ca1630 != 0)) goto LAB_00500294;
            goto joined_r0x00502164;
          }
          if (DAT_02706374 != 0) {
            if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
              DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
            }
            if ((DAT_00cc4000 & 1) != 0) {
              uVar22 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar22 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            }
            DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
            DAT_02706378 = '\0';
            DAT_027063a4 = '\0';
            if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
              if ((DAT_027063b8 & 1) != 0) {
                if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00502b58:
                  bVar12 = uVar22 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar22 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_00502b58;
                  }
                  bVar12 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_00502b84;
LAB_00502bb0:
                  bVar11 = false;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_00502bb0;
LAB_00502b84:
                  bVar11 = true;
                }
                if (bVar11 || !bVar12) goto LAB_00502bec;
              }
              DAT_027063b2 = '\0';
              FUN_00605e90(DAT_027063b4);
            }
LAB_00502bec:
            DAT_02706280 = 0;
            if ((((DAT_00cc9010 >> 0x11 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
               (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 2)) != 0)) {
              if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 4;
              }
              if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
            DAT_00cc9010 = DAT_00cc9010 | 2;
            uVar21 = DAT_027033c4;
            goto LAB_00500294;
          }
          uVar21 = DAT_027033c4;
          if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_00500294;
          if ((int)DAT_00cc4030 < 0) {
            uVar20 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00502cac:
            puVar32 = (uint *)(DAT_00ccb000 + uVar20 + 0x2000000);
          }
          else {
            uVar20 = (ulong)DAT_00cc4030 & 0x1ffffff0;
            if (uVar20 >> 0x19 == 0) {
              puVar32 = (uint *)(DAT_00ccb000 + uVar20);
            }
            else if (uVar20 >> 0x1c == 0) {
              puVar32 = (uint *)(&DAT_02884000 + DAT_00ccb000);
            }
            else {
              if ((uint)uVar20 < 0x10004000) {
                uVar20 = (ulong)(DAT_00cc4030 & 0x3ff0);
                goto LAB_00502cac;
              }
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              puVar32 = (uint *)0x0;
            }
          }
          uVar20 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar32);
          if ((uVar20 & 1) == 0) goto LAB_00504300;
          DAT_00cc4010 = puVar32[1];
          DAT_02706280 = DAT_02706280 + 1;
          DAT_027063b0 = DAT_027063b0 & 0xfe;
          if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
              ((*puVar32 & 0x70000000) == 0x40000000)) &&
             ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
            FUN_003f75f0(0xd);
            goto LAB_00504300;
          }
          if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
            DAT_02706278 = *(undefined8 *)(puVar32 + 2);
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
            uVar20 = FUN_005e3030(puVar15,iVar13,1);
            if (((uVar20 & 1) == 0) && (DAT_027063a4 != '\0')) {
              DAT_027063b0 = DAT_027063b0 & 0xfe;
              DAT_00cc4020 = 0;
              goto LAB_00504300;
            }
          }
          DAT_027063a8 = 0;
          DAT_027063a4 = '\0';
          switch(*puVar32 >> 0x1c & 7) {
          case 0:
            DAT_00cc4030 = DAT_00cc4030 + 0x10;
            goto code_r0x00503d54;
          case 1:
            bVar23 = 0;
            DAT_00cc4030 = DAT_00cc4030 + 0x10;
            DAT_00cc4010 = DAT_00cc4030;
            break;
          case 2:
            bVar23 = 0;
            uVar22 = DAT_00cc4030 + 0x10;
            DAT_00cc4030 = DAT_00cc4010;
            DAT_00cc4010 = uVar22;
            break;
          default:
            bVar23 = 0;
            DAT_00cc4030 = DAT_00cc4030 + 0x10;
            break;
          case 5:
            uVar22 = DAT_00cc4030 + 0x10;
            uVar21 = DAT_00cc4000 >> 4 & 3;
            if (uVar21 == 1) {
              DAT_00cc4050 = uVar22 + DAT_00cc4020 * 0x10;
            }
            else {
              if (uVar21 != 0) {
                DAT_00cc4010 = uVar22;
                FUN_00988960(&PTR_FUN_00c9aa28,
                             "Call Stack Overflow (report if it fixes/breaks anything)");
                bVar23 = 1;
                break;
              }
              DAT_00cc4040 = uVar22 + DAT_00cc4020 * 0x10;
            }
            bVar23 = 0;
            DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                           DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
            DAT_00cc4030 = DAT_00cc4010;
            DAT_00cc4010 = uVar22;
            break;
          case 6:
            DAT_00cc4010 = DAT_00cc4030 + 0x10;
            uVar22 = DAT_00cc4000 >> 4 & 3;
            if (uVar22 == 2) {
              puVar29 = (uint *)&DAT_00cc4050;
            }
            else {
              if (uVar22 != 1) {
                bVar23 = 1;
                break;
              }
              puVar29 = (uint *)&DAT_00cc4040;
            }
            bVar23 = 0;
            DAT_00cc4030 = *puVar29;
            *puVar29 = 0;
            DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                           DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
            break;
          case 7:
            DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x00503d54:
            bVar23 = 1;
          }
          DAT_02706374 = DAT_02706374 | bVar23;
          if (DAT_00cc4020 != 0) {
            DAT_027063b0 = DAT_027063b0 | 1;
          }
          if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar32 < 0)) {
            DAT_02706374 = 1;
          }
LAB_00504300:
          if ((DAT_00cc4000 & 1) != 0) {
            uVar22 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar22 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
          }
          uVar24 = DAT_027033c0;
          uVar22 = DAT_027033c4;
          if (((DAT_00cbec00 >> 3 & 1) == 0) ||
             (uVar24 = DAT_027033c0, uVar21 = DAT_027033c4, DAT_00ca1630 == 0)) {
joined_r0x00502164:
            DAT_02703344 = uVar24;
            DAT_027033c0 = DAT_02703344;
            if (DAT_02706381 == '\0') {
              DAT_027033c4 = uVar22 | 2;
              DAT_027032c4 = DAT_02706280;
              if ((DAT_02704f28 & 0x40) != 0) {
                DAT_027032c4 = 8;
              }
              if (((int)DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              uVar21 = DAT_027033c4;
              if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
LAB_005043e0:
                DAT_027033c4 = uVar22 | 2;
                DAT_027033dc = DAT_02703344 + DAT_027032c4;
                uVar21 = DAT_027033c4;
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
              DAT_027033c4 = uVar22 | 2;
              if ((DAT_02704f28 & 0x40) != 0) {
                DAT_027032c4 = 8;
              }
              if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              uVar21 = DAT_027033c4;
              if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) goto LAB_005043e0;
            }
          }
LAB_00500294:
          if ((uVar21 >> 2 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               ((int)DAT_027032c8 <= (int)(DAT_027033c0 - DAT_02703348))) {
              DAT_027033c4 = uVar21 & 0xfffffffb;
              DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
              if (DAT_00ca1630 == 4) {
                DAT_00ca1630 = 0;
              }
              if (((~DAT_00cbe020 & 0xc00) == 0) &&
                 (DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff, (DAT_00ca1630 & 0xfffffffb) == 0)) {
                if ((DAT_00ca13ec == 0) &&
                   (((DAT_02704e14 >> 3 & 1) != 0 &&
                    (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)))) {
LAB_00500440:
                  bVar12 = uVar22 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar22 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_00500440;
                  }
                  bVar12 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_0050046c;
LAB_005007b4:
                  if (bVar12 == true) goto LAB_005004f4;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_005007b4;
LAB_0050046c:
                  if ((byte)(bVar12 ^ 1U | 2) == 0) goto LAB_005004f4;
                }
                FUN_003ecbd0(&DAT_00ca1380,0,1);
              }
LAB_005004f4:
              uVar22 = DAT_027033c0;
              puVar32 = DAT_00ca16f0;
              if ((DAT_00ca1630 == 0) && (((byte)DAT_00cbec00 >> 3 & 1) != 0)) {
                if ((DAT_027033c4 >> 1 & 1) == 0) {
                  DAT_027033c4 = DAT_027033c4 | 2;
                  DAT_027032c4 = 8;
                  if ((DAT_02704f28 & 0x40) == 0) {
                    DAT_027032c4 = 1;
                  }
                  DAT_02703344 = DAT_027033c0;
                  if (0 < DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
                    DAT_027033dc = DAT_027032c4 + DAT_027033c0;
                  }
                }
                uVar24 = *DAT_00ca16f0;
                uVar21 = uVar24 & 3;
                if ((uVar21 == 0) || (DAT_00cc5020 == 0)) {
                  if ((~_DAT_00cc9000 & 0xc) == 0) {
                    if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                      DAT_027033c4 = DAT_027033c4 | 0x800;
                      iVar13 = 0x10;
                      if ((DAT_02704f28 & 0x40) != 0) {
                        iVar13 = 8;
                      }
                      piVar28 = (int *)&DAT_027032ec;
LAB_00500b44:
                      piVar28[0x20] = DAT_027033c0;
                      *piVar28 = iVar13;
                      if (0 < DAT_02702544) {
                        DAT_02702540 = DAT_02702540 + DAT_02702544;
                        DAT_02702544 = 0;
                      }
                      if (iVar13 < (int)(DAT_027033dc - uVar22)) {
                        DAT_027033dc = iVar13 + uVar22;
                      }
                      uVar24 = *puVar32;
                      uVar21 = uVar24 & 3;
                    }
                  }
                  else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                    DAT_027033c4 = DAT_027033c4 | 4;
                    iVar13 = 0x10;
                    if ((DAT_02704f28 & 0x40) != 0) {
                      iVar13 = 8;
                    }
                    piVar28 = (int *)&DAT_027032c8;
                    goto LAB_00500b44;
                  }
                  if ((uVar21 == 0) &&
                     (((((uVar24 & 0xc00) == 0xc00 || ((uVar24 & 0xc00) == 0)) &&
                       ((uVar24 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)))) {
                    DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                    uVar21 = DAT_027033c4;
                    goto LAB_00500bb0;
                  }
                }
                goto LAB_00500b9c;
              }
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                FUN_003ef840();
                uVar21 = DAT_027033c4;
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
                    if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                      DAT_02702540 = DAT_02702540 + DAT_02702544;
                      DAT_02702544 = 0;
                    }
                    if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_027033c0)) {
                      DAT_027033dc = DAT_027032c8 + DAT_027033c0;
                    }
                  }
                  DAT_027033d4 = DAT_027033d4 | 4;
                  uVar21 = DAT_027033c4;
                  if (DAT_00ca1350 == 0x10) goto LAB_00500bb0;
                }
                if (DAT_00ca1350 == 0) {
                  uVar22 = 0;
                }
                else {
                  iVar13 = FUN_003ef270(&DAT_00ca1250);
                  uVar22 = DAT_027033c0;
                  if (iVar13 != 0) {
                    uVar21 = iVar13 << 1;
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar21)) {
                        if ((DAT_02704f28 & 0x40) != 0) {
                          uVar21 = 8;
                        }
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        puVar32 = &DAT_027032ec;
LAB_00500848:
                        puVar32[0x20] = DAT_027033c0;
                        *puVar32 = uVar21;
                        if ((uVar21 < 0x1d) && (0 < DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if ((int)uVar21 < (int)(DAT_027033dc - uVar22)) {
                          DAT_027033dc = uVar21 + uVar22;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar21)) {
                      if ((DAT_02704f28 & 0x40) != 0) {
                        uVar21 = 8;
                      }
                      DAT_027033c4 = DAT_027033c4 | 4;
                      puVar32 = &DAT_027032c8;
                      goto LAB_00500848;
                    }
                  }
                  uVar6 = DAT_02704f28;
                  uVar21 = DAT_027033c0;
                  puVar32 = DAT_00ca16f0;
                  uVar22 = *DAT_00ca16f0;
                  if (((((uVar22 & 0xc00) != 0xc00) &&
                       (((uVar22 & 0xc00) != 0 ||
                        (((uVar22 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
                      ((uVar22 & 0x1008) != 0)) || (bVar23 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
                    if (((uVar22 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
                      if ((~_DAT_00cc9000 & 0xc) == 0) {
                        if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                          DAT_027033c4 = DAT_027033c4 | 0x800;
                          piVar28 = (int *)&DAT_027032ec;
LAB_00501d1c:
                          uVar10 = DAT_02704f28 & 0x40;
                          piVar28[0x20] = DAT_027033c0;
                          iVar25 = 8;
                          if (uVar10 == 0) {
                            iVar25 = 0x80;
                          }
                          *piVar28 = iVar25;
                          if (((uVar6 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                            DAT_02702540 = DAT_02702540 + DAT_02702544;
                            DAT_02702544 = 0;
                          }
                          if (iVar25 < (int)(DAT_027033dc - uVar21)) {
                            DAT_027033dc = iVar25 + uVar21;
                          }
                        }
                      }
                      else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                        DAT_027033c4 = DAT_027033c4 | 4;
                        piVar28 = (int *)&DAT_027032c8;
                        goto LAB_00501d1c;
                      }
                    }
                    bVar23 = 1;
                  }
                  if ((iVar13 != 0) || (uVar22 = DAT_00ca1350, (bVar23 & DAT_00ca1350 == 0x10) != 0)
                     ) {
                    uVar22 = *puVar32;
                    uVar21 = DAT_027033c4;
                    if ((((uVar22 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) &&
                       (((((uVar22 & 0xc00) == 0xc00 || ((uVar22 & 0xc00) == 0)) &&
                         ((uVar22 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)))) {
                      DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                    }
                    else {
                      DAT_027033d4 = DAT_027033d4 | 4;
                    }
                    goto LAB_00500bb0;
                  }
                }
                uVar24 = DAT_027033c0;
                uVar21 = DAT_027033c4;
                if ((DAT_00cc5000 >> 8 & 1) != 0) {
                  if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
                    DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
                    DAT_00ca1368 = 0;
                    DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                                   DAT_00cbe020 & 0xffffff | (uVar22 & 0x1f) << 0x18;
                    if ((uVar22 & 0x1f) < 0xf) {
                      uVar31 = DAT_00ca2710 & 0xffff3fff;
                      DAT_00ca2710 = uVar31 | 0x4000;
                      if ((uVar22 & 0x1f) != 0) {
                        DAT_00ca2710 = uVar31;
                      }
                    }
                    else {
                      DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
                    }
                    uVar31 = DAT_00cc9010 | 4;
                    if ((((DAT_00cc9010 >> 0x12 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801))
                       && (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 4)) != 0)) {
                      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                        DAT_027033dc = DAT_027033c0 + 4;
                      }
                      if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                        DAT_02702540 = DAT_02702540 + DAT_02702544;
                        DAT_02702544 = 0;
                      }
                    }
                    DAT_00cc9010 = uVar31;
                    if (uVar22 != 0) {
                      if ((~_DAT_00cc9000 & 0xc) == 0) {
                        if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                          DAT_027033c4 = DAT_027033c4 | 0x800;
                          iVar13 = 0x10;
                          if ((DAT_02704f28 & 0x40) != 0) {
                            iVar13 = 8;
                          }
                          piVar28 = (int *)&DAT_027032ec;
LAB_005021f8:
                          piVar28[0x20] = DAT_027033c0;
                          *piVar28 = iVar13;
                          if (0 < DAT_02702544) {
                            DAT_02702540 = DAT_02702540 + DAT_02702544;
                            DAT_02702544 = 0;
                          }
                          uVar21 = DAT_027033c4;
                          if (iVar13 < (int)(DAT_027033dc - uVar24)) {
                            DAT_027033dc = iVar13 + uVar24;
                          }
                        }
                      }
                      else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                        DAT_027033c4 = DAT_027033c4 | 4;
                        iVar13 = 0x10;
                        if ((DAT_02704f28 & 0x40) != 0) {
                          iVar13 = 8;
                        }
                        piVar28 = (int *)&DAT_027032c8;
                        goto LAB_005021f8;
                      }
                    }
                  }
                  else if ((_DAT_00cc9000 & 1) == 0) {
                    FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
                    uVar6 = DAT_02704f28;
                    uVar22 = DAT_027033c0;
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        piVar28 = (int *)&DAT_027032ec;
LAB_005022c0:
                        uVar10 = DAT_02704f28 & 0x40;
                        piVar28[0x20] = DAT_027033c0;
                        iVar13 = 8;
                        if (uVar10 == 0) {
                          iVar13 = 0x40;
                        }
                        *piVar28 = iVar13;
                        if (((uVar6 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if (iVar13 < (int)(DAT_027033dc - uVar22)) {
                          DAT_027033dc = iVar13 + uVar22;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      piVar28 = (int *)&DAT_027032c8;
                      goto LAB_005022c0;
                    }
LAB_00500b9c:
                    DAT_027033d4 = DAT_027033d4 | 4;
                    uVar21 = DAT_027033c4;
                  }
                  else {
                    FUN_003f0da0();
                    uVar21 = DAT_027033c4;
                  }
                }
              }
            }
            else if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_02703348)) {
              DAT_027033dc = DAT_027032c8 + DAT_02703348;
            }
          }
LAB_00500bb0:
          if ((uVar21 >> 5 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032d4 <= (int)(DAT_027033c0 - DAT_02703354))) {
              DAT_027033c4 = uVar21 & 0xffffffdf;
              DAT_027033d4 = DAT_027033d4 & 0xffffffdf;
              if ((((DAT_00cc9010 >> 0x15 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                 (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x20)) != 0)) {
                if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 4;
                }
                if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
              }
              DAT_00cc7000 = DAT_00cc7000 & 0xfffffeff;
              DAT_00cc9010 = DAT_00cc9010 | 0x20;
              uVar21 = DAT_027033c4;
            }
            else if (DAT_027032d4 < (int)(DAT_027033dc - DAT_02703354)) {
              DAT_027033dc = DAT_027032d4 + DAT_02703354;
            }
          }
          if ((uVar21 >> 6 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032d8 <= (int)(DAT_027033c0 - DAT_02703358))) {
              DAT_027033c4 = uVar21 & 0xffffffbf;
              DAT_027033d4 = DAT_027033d4 & 0xffffffbf;
              if ((((DAT_00cc9010 >> 0x16 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                 (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x40)) != 0)) {
                if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                  DAT_027033dc = DAT_027033c0 + 4;
                }
                if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
              }
              DAT_00cc7400 = DAT_00cc7400 & 0xfffffeff;
              DAT_00cc9010 = DAT_00cc9010 | 0x40;
              uVar21 = DAT_027033c4;
            }
            else if (DAT_027032d8 < (int)(DAT_027033dc - DAT_02703358)) {
              DAT_027033dc = DAT_027032d8 + DAT_02703358;
            }
          }
          uVar22 = DAT_00cbec00;
          if ((uVar21 & 0xe0f19) == 0) goto LAB_004ffc50;
          if ((uVar21 & 1) == 0) goto LAB_00500f58;
          if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
             ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
            if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
              DAT_027033dc = DAT_027032c0 + DAT_02703340;
            }
            goto LAB_00500f58;
          }
          DAT_027033c4 = uVar21 & 0xfffffffe;
          DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
          DAT_02706260 = 0;
          uVar22 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar22 = 8;
          }
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
          if ((DAT_00cc3000 >> 8 & 1) == 0) {
            FUN_009885d0(&PTR_FUN_00c9aa28,"vif0 running when CHCR == %x");
          }
          uVar22 = DAT_00cc3000;
          if (DAT_027062f1 != '\0') {
            DAT_027033c4 = DAT_027033c4 | 0x20000;
            DAT_02703384 = DAT_027033c0;
            DAT_02703304 = 0x10;
            if (0 < DAT_02702544) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 0x10;
            }
LAB_00500f44:
            DAT_027033d4 = DAT_027033d4 | 1;
            uVar21 = DAT_027033c4;
            goto LAB_00500f58;
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
              if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_027062e0 = DAT_027062e0 + -1;
            if ((DAT_00cbe800 & 0x700) != 0) {
              uVar21 = DAT_00cc3020;
              if (7 < DAT_00cc3020) {
                uVar21 = 8;
              }
              uVar24 = DAT_00cbe800 & 0xe0000000;
              uVar21 = DAT_00cbe800 & 0xffffff | (uVar21 & 0x1f) << 0x18;
              DAT_00cbe800 = uVar24 | uVar21;
              if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
                DAT_00cbe800 = uVar24 | uVar21 & 0xeffffffc | 2;
                goto LAB_00500f44;
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
              uVar20 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_00501e84:
              lVar26 = DAT_00ccb000 + uVar20;
              puVar30 = (undefined *)0x2000000;
LAB_00502024:
              puVar30 = puVar30 + lVar26;
LAB_00502028:
              iVar13 = DAT_00cc3020 * 4;
              if (DAT_02706314 != '\0') {
                puVar30 = puVar30 + (ulong)DAT_02706318 * 4;
                iVar13 = iVar13 - DAT_02706318;
              }
              FUN_005e2c60(puVar30,iVar13,0);
            }
            else {
              uVar20 = (ulong)DAT_00cc3010 & 0x1ffffff0;
              if (uVar20 >> 0x19 == 0) {
                if (DAT_00ccb000 != 0) {
                  puVar30 = (undefined *)(DAT_00ccb000 + uVar20);
                  goto LAB_00502028;
                }
              }
              else {
                if (uVar20 >> 0x1c == 0) {
                  puVar30 = &DAT_02884000;
                  lVar26 = DAT_00ccb000;
                  goto LAB_00502024;
                }
                if ((uint)uVar20 < 0x10004000) {
                  uVar20 = (ulong)(DAT_00cc3010 & 0x3ff0);
                  goto LAB_00501e84;
                }
                FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              }
              DAT_027062d0 = 0;
              DAT_027062c4 = 0;
              DAT_00cc3020 = 0;
            }
            uVar22 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar22 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            DAT_027032c0 = DAT_02706260;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c0 = 8;
            }
            goto LAB_005020b4;
          }
          if (DAT_027062e4 != 0) {
            DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
            uVar22 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar22 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            DAT_027062e8 = '\0';
            DAT_02706314 = '\0';
            if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
              if ((DAT_02706328 & 1) != 0) {
                if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0050252c:
                  bVar12 = uVar22 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar22 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_0050252c;
                  }
                  bVar12 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_00502558;
LAB_00502584:
                  bVar11 = false;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_00502584;
LAB_00502558:
                  bVar11 = true;
                }
                if (bVar11 || !bVar12) goto LAB_005025c0;
              }
              DAT_02706322 = '\0';
              FUN_00604740(DAT_02706324);
            }
LAB_005025c0:
            DAT_02706260 = 0;
            if ((((DAT_00cc9010 >> 0x10 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
               (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 1)) != 0)) {
              if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 4;
              }
              if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
            DAT_00cbe800 = DAT_00cbe800 & 0xe0ffffff;
            DAT_00cc9010 = DAT_00cc9010 | 1;
            uVar21 = DAT_027033c4;
            goto LAB_00500f58;
          }
          uVar21 = DAT_027033c4;
          if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_00500f58;
          if (-1 < (int)DAT_00cc3030) {
            uVar20 = (ulong)DAT_00cc3030 & 0x1ffffff0;
            if (uVar20 >> 0x19 != 0) {
              if (uVar20 >> 0x1c != 0) {
                if (0x10003fff < (uint)uVar20) {
                  FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
                  goto LAB_005029d8;
                }
                uVar20 = (ulong)(DAT_00cc3030 & 0x3ff0);
                goto LAB_005023d4;
              }
              puVar30 = &DAT_02884000;
              lVar26 = DAT_00ccb000;
              goto LAB_005023f8;
            }
            if (DAT_00ccb000 != 0) {
              puVar32 = (uint *)(DAT_00ccb000 + uVar20);
              goto LAB_005023fc;
            }
LAB_005029d8:
            FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
            DAT_00cc9010 = DAT_00cc9010 | 0x8000;
            goto LAB_00502df8;
          }
          uVar20 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_005023d4:
          lVar26 = DAT_00ccb000 + uVar20;
          puVar30 = (undefined *)0x2000000;
LAB_005023f8:
          puVar32 = (uint *)(puVar30 + lVar26);
LAB_005023fc:
          DAT_00cc3000 = CONCAT22(*(undefined2 *)((long)puVar32 + 2),(undefined2)DAT_00cc3000);
          DAT_00cc3020 = (uint)(ushort)*puVar32;
          DAT_00cc3010 = puVar32[1];
          DAT_02706260 = DAT_02706260 + 1;
          DAT_02706320 = 0;
          if ((uVar22 >> 6 & 1) != 0) {
            DAT_02706258 = *(undefined8 *)(puVar32 + 2);
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
            uVar20 = FUN_005e2c60(puVar15,iVar13,1);
            if (((uVar20 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0050243c;
            DAT_02706320 = 0;
            DAT_00cc3020 = 0;
            uVar22 = 0;
            goto LAB_00502e04;
          }
LAB_0050243c:
          DAT_02706318 = 0;
          DAT_02706314 = '\0';
          switch(*puVar32 >> 0x1c & 7) {
          case 0:
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            goto code_r0x00502d90;
          case 1:
            bVar23 = 0;
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            break;
          case 2:
            bVar23 = 0;
            uVar22 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar22;
            break;
          default:
            bVar23 = 0;
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            break;
          case 5:
            uVar22 = DAT_00cc3030 + 0x10;
            uVar21 = DAT_00cc3000 >> 4 & 3;
            if (uVar21 == 1) {
              DAT_00cc3050 = uVar22 + DAT_00cc3020 * 0x10;
            }
            else {
              if (uVar21 != 0) {
                DAT_00cc3010 = uVar22;
                FUN_00988960(&PTR_FUN_00c9aa28,
                             "Call Stack Overflow (report if it fixes/breaks anything)");
                goto code_r0x00502d90;
              }
              DAT_00cc3040 = uVar22 + DAT_00cc3020 * 0x10;
            }
            bVar23 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar22;
            break;
          case 6:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            uVar22 = DAT_00cc3000 >> 4 & 3;
            if (uVar22 == 2) {
              puVar29 = (uint *)&DAT_00cc3050;
            }
            else {
              if (uVar22 != 1) {
                bVar23 = 1;
                break;
              }
              puVar29 = (uint *)&DAT_00cc3040;
            }
            bVar23 = 0;
            DAT_00cc3030 = *puVar29;
            *puVar29 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
            break;
          case 7:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00502d90:
            bVar23 = 1;
          }
          DAT_027062e4 = DAT_027062e4 | bVar23;
          if (DAT_00cc3020 != 0) {
            DAT_02706320 = 1;
          }
          if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar32 < 0)) {
            DAT_027062e4 = 1;
          }
LAB_00502df8:
          uVar22 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar22 = 8;
          }
LAB_00502e04:
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
          DAT_027032c0 = DAT_02706260;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c0 = 8;
          }
LAB_005020b4:
          DAT_027033c4 = DAT_027033c4 | 1;
          DAT_02703340 = DAT_027033c0;
          if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar21 = DAT_027033c4;
          if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_027032c0;
          }
LAB_00500f58:
          uVar24 = uVar21;
          uVar22 = DAT_00cc9010;
          if ((uVar21 >> 3 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
              DAT_027033c4 = uVar21 & 0xfffffff7;
              DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
              if (DAT_00cc6020 == 0) {
                DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
                uVar22 = DAT_00cc9010 | 8;
                uVar24 = DAT_027033c4;
                if ((((DAT_00cc9010 >> 0x13 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                   (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 8)) != 0)) {
                  if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                    DAT_027033dc = DAT_027033c0 + 4;
                  }
                  if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                }
              }
              else {
                FUN_006709a0();
                uVar24 = DAT_027033c4;
                uVar22 = DAT_00cc9010;
                uVar21 = DAT_027033c4;
              }
            }
            else if (DAT_027032cc < (int)(DAT_027033dc - DAT_0270334c)) {
              DAT_027033dc = DAT_027032cc + DAT_0270334c;
            }
          }
          DAT_00cc9010 = uVar22;
          uVar22 = DAT_00cc9010;
          if ((uVar21 >> 4 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032d0 <= (int)(DAT_027033c0 - DAT_02703350))) {
              DAT_027033c4 = uVar24 & 0xffffffef;
              DAT_027033d4 = DAT_027033d4 & 0xffffffef;
              if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
                FUN_006704a0();
                uVar22 = DAT_00cc9010;
                uVar24 = DAT_027033c4;
              }
              else {
                DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
                uVar22 = DAT_00cc9010 | 0x10;
                uVar24 = DAT_027033c4;
                if ((((DAT_00cc9010 >> 0x14 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                   (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x10)) != 0)) {
                  if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                    DAT_027033dc = DAT_027033c0 + 4;
                  }
                  if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                }
              }
            }
            else if (DAT_027032d0 < (int)(DAT_027033dc - DAT_02703350)) {
              DAT_027033dc = DAT_027032d0 + DAT_02703350;
            }
          }
          DAT_00cc9010 = uVar22;
          if ((uVar24 >> 0x13 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_0270330c <= (int)(DAT_027033c0 - DAT_0270338c))) {
              DAT_027033c4 = uVar24 & 0xfff7ffff;
              DAT_027033d4 = DAT_027033d4 & 0xfff7ffff;
              DAT_0281a6d4 = 0;
              uVar24 = DAT_027033c4;
              if (DAT_00cbd010 < 0) {
                FUN_00670c70();
                uVar24 = DAT_027033c4;
              }
            }
            else if (DAT_0270330c < (int)(DAT_027033dc - DAT_0270338c)) {
              DAT_027033dc = DAT_0270330c + DAT_0270338c;
            }
          }
          if ((uVar24 >> 8 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032e0 <= (int)(DAT_027033c0 - DAT_02703360))) {
              DAT_027033c4 = uVar24 & 0xfffffeff;
              DAT_027033d4 = DAT_027033d4 & 0xfffffeff;
              FUN_005d4d40();
              uVar24 = DAT_027033c4;
            }
            else if (DAT_027032e0 < (int)(DAT_027033dc - DAT_02703360)) {
              DAT_027033dc = DAT_027032e0 + DAT_02703360;
            }
          }
          uVar22 = DAT_00cc9010;
          if ((uVar24 >> 9 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
              DAT_027033c4 = uVar24 & 0xfffffdff;
              DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
              if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
                FUN_005d5b90();
                uVar22 = DAT_00cc9010;
                uVar24 = DAT_027033c4;
              }
              else {
                DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
                uVar22 = DAT_00cc9010 | 0x200;
                uVar24 = DAT_027033c4;
                if ((((DAT_00cc9010 >> 0x19 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
                   (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x200)) != 0)) {
                  if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                    DAT_027033dc = DAT_027033c0 + 4;
                  }
                  if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                }
              }
            }
            else if (DAT_027032e4 < (int)(DAT_027033dc - DAT_02703364)) {
              DAT_027033dc = DAT_027032e4 + DAT_02703364;
            }
          }
          DAT_00cc9010 = uVar22;
          if ((uVar24 >> 10 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032e8 <= (int)(DAT_027033c0 - DAT_02703368))) {
              DAT_027033c4 = uVar24 & 0xfffffbff;
              DAT_027033d4 = DAT_027033d4 & 0xfffffbff;
              FUN_005d9ad0();
              uVar24 = DAT_027033c4;
            }
            else if (DAT_027032e8 < (int)(DAT_027033dc - DAT_02703368)) {
              DAT_027033dc = DAT_027032e8 + DAT_02703368;
            }
          }
          if ((uVar24 >> 0xb & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               ((int)DAT_027032ec <= (int)(DAT_027033c0 - DAT_0270336c))) {
              DAT_027033c4 = uVar24 & 0xfffff7ff;
              DAT_027033d4 = DAT_027033d4 & 0xfffff7ff;
              FUN_003ef840();
              uVar24 = DAT_027033c4;
            }
            else if ((int)DAT_027032ec < (int)(DAT_027033dc - DAT_0270336c)) {
              DAT_027033dc = DAT_027032ec + DAT_0270336c;
            }
          }
          uVar22 = DAT_00cbe800;
          if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00503000;
          if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
             ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
            if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
              DAT_027033dc = DAT_02703304 + DAT_02703384;
            }
            goto LAB_00503000;
          }
          DAT_027033c4 = uVar24 & 0xfffdffff;
          DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
          uVar22 = _DAT_02819070 & 1;
          if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar22 != 0)) {
            do {
              uVar22 = 0x100;
              if ((int)DAT_02704e08[1] == 0) {
                uVar22 = 1;
LAB_005017c0:
                if ((uVar22 & _DAT_02819070) != 0) {
                  iVar13 = DAT_028190d4;
                  if ((int)DAT_02704e08[1] != 0) {
                    iVar13 = DAT_028196e4;
                  }
                  uVar22 = DAT_027033c0 - iVar13;
                  if (0 < (int)uVar22) {
                    if (uVar22 < 0x11) {
                      uVar22 = 0x10;
                    }
                    (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar22);
                  }
                }
              }
              else {
                if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0))
                goto LAB_005017c0;
                FUN_005b1f50(&DAT_01701a00);
              }
              uVar22 = _DAT_02819070 & 1;
            } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar22 != 0);
          }
          iVar13 = DAT_028190d4;
          if ((_DAT_02819070 & 5) != 0) {
            DAT_027033c4 = DAT_027033c4 | 0x20000;
            DAT_02703304 = 0x80;
            if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 0x80;
            }
            DAT_027033d4 = DAT_027033d4 | 0x20000;
            uVar22 = DAT_00cbe800;
            DAT_02703384 = DAT_027033c0;
            uVar24 = DAT_027033c4;
            goto LAB_00503000;
          }
          if (uVar22 != 0) {
            while ((_DAT_02819070 & 1) != 0) {
              (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
            }
            DAT_027033c4 = DAT_027033c4 | 0x20000;
            DAT_02703304 = (DAT_028190d4 - iVar13) * 2;
            if ((DAT_02703304 < 0x1d) && (0 < DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            iVar25 = DAT_027033dc - DAT_027033c0;
            if (iVar25 != DAT_02703304 &&
                iVar25 + (DAT_028190d4 - iVar13) * -2 < 0 == SBORROW4(iVar25,DAT_02703304)) {
              DAT_027033dc = DAT_027033c0 + DAT_02703304;
            }
            DAT_027033d4 = DAT_027033d4 | 0x20000;
            uVar22 = DAT_00cbe800;
            DAT_02703384 = DAT_027033c0;
            uVar24 = DAT_027033c4;
            goto LAB_00503000;
          }
          uVar22 = DAT_00cbe800 & 0xfffffffb;
          uVar24 = DAT_027033c4;
          if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
              ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_00503000;
          DAT_02706260 = 0;
          uVar22 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar22 = 8;
          }
          uVar22 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xfffffb | (uVar22 & 0x1f) << 0x18;
          if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
            if ((DAT_00cbe800 >> 0xd & 1) == 0) {
              uVar22 = uVar22 | 0x800;
            }
            DAT_00cbe800 = uVar22;
            if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
              DAT_00cbe800 = uVar22 | 0x400;
            }
            FUN_003f7540(4);
            DAT_027062e0 = DAT_027062e0 + -1;
            uVar22 = DAT_00cbe800;
            if ((DAT_00cbe800 & 0x700) != 0) {
              uVar22 = DAT_00cc3020;
              if (7 < DAT_00cc3020) {
                uVar22 = 8;
              }
              uVar21 = DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
              if ((DAT_00cc3020 != 0) ||
                 (uVar22 = DAT_00cbe800 & 0xe0000000 | uVar21, DAT_027062e4 == 0)) {
                DAT_027033d4 = DAT_027033d4 | 1;
                uVar22 = DAT_00cbe800 & 0xe0000000 | uVar21 & 0xeffffffc | 2;
                uVar24 = DAT_027033c4;
                goto LAB_00503000;
              }
            }
          }
          DAT_00cbe800 = uVar22;
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
              uVar20 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_005028a4:
              lVar26 = DAT_00ccb000 + uVar20;
              puVar30 = (undefined *)0x2000000;
LAB_005028cc:
              puVar30 = puVar30 + lVar26;
LAB_005028d0:
              iVar13 = DAT_00cc3020 * 4;
              if (DAT_02706314 != '\0') {
                puVar30 = puVar30 + (ulong)DAT_02706318 * 4;
                iVar13 = iVar13 - DAT_02706318;
              }
              FUN_005e2c60(puVar30,iVar13,0);
            }
            else {
              uVar20 = (ulong)DAT_00cc3010 & 0x1ffffff0;
              if (uVar20 >> 0x19 == 0) {
                if (DAT_00ccb000 != 0) {
                  puVar30 = (undefined *)(DAT_00ccb000 + uVar20);
                  goto LAB_005028d0;
                }
              }
              else {
                if (uVar20 >> 0x1c == 0) {
                  puVar30 = &DAT_02884000;
                  lVar26 = DAT_00ccb000;
                  goto LAB_005028cc;
                }
                if ((uint)uVar20 < 0x10004000) {
                  uVar20 = (ulong)(DAT_00cc3010 & 0x3ff0);
                  goto LAB_005028a4;
                }
                FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              }
              DAT_027062d0 = 0;
              DAT_027062c4 = 0;
              DAT_00cc3020 = 0;
            }
            uVar22 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar22 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            DAT_027032c0 = DAT_02706260;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c0 = 8;
            }
            goto LAB_0050295c;
          }
          if (DAT_027062e4 != 0) {
            DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
            uVar22 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar22 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            DAT_027062e8 = '\0';
            DAT_02706314 = '\0';
            if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
              if ((DAT_02706328 & 1) != 0) {
                if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00502f2c:
                  bVar12 = uVar22 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar22 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_00502f2c;
                  }
                  bVar12 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_00502f58;
LAB_00502f84:
                  bVar11 = false;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_00502f84;
LAB_00502f58:
                  bVar11 = true;
                }
                if (bVar11 || !bVar12) goto LAB_00502fb8;
              }
              DAT_02706322 = '\0';
              FUN_00604740(DAT_02706324);
            }
LAB_00502fb8:
            DAT_02706260 = 0;
            FUN_003f75f0(0);
            DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
            uVar22 = DAT_00cbe800 & 0xe0ffffff;
            uVar24 = DAT_027033c4;
            goto LAB_00503000;
          }
          uVar22 = DAT_00cbe800;
          uVar24 = DAT_027033c4;
          if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_00503000;
          if ((int)DAT_00cc3030 < 0) {
            puVar32 = (uint *)(DAT_00ccb000 + ((ulong)DAT_00cc3030 & 0x3ff0) + 0x2000000);
          }
          else {
            uVar20 = (ulong)DAT_00cc3030 & 0x1ffffff0;
            if (uVar20 >> 0x19 == 0) {
              puVar32 = (uint *)(DAT_00ccb000 + uVar20);
            }
            else if (uVar20 >> 0x1c == 0) {
              puVar32 = (uint *)(&DAT_02884000 + DAT_00ccb000);
            }
            else if ((uint)uVar20 < 0x10004000) {
              puVar32 = (uint *)(DAT_00ccb000 + (ulong)(DAT_00cc3030 & 0x3ff0) + 0x2000000);
            }
            else {
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              puVar32 = (uint *)0x0;
            }
          }
          uVar20 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar32);
          if ((uVar20 & 1) == 0) goto LAB_0050449c;
          DAT_00cc3010 = puVar32[1];
          DAT_02706260 = DAT_02706260 + 1;
          DAT_02706320 = 0;
          if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
            DAT_02706258 = *(undefined8 *)(puVar32 + 2);
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
            uVar20 = FUN_005e2c60(puVar15,iVar13,1);
            if (((uVar20 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_00503eb0;
            DAT_02706320 = 0;
            DAT_00cc3020 = 0;
            uVar22 = 0;
            goto LAB_005044b8;
          }
LAB_00503eb0:
          DAT_02706318 = 0;
          DAT_02706314 = '\0';
          switch(*puVar32 >> 0x1c & 7) {
          case 0:
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            goto code_r0x00504434;
          case 1:
            bVar23 = 0;
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            break;
          case 2:
            bVar23 = 0;
            uVar22 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar22;
            break;
          default:
            bVar23 = 0;
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            break;
          case 5:
            uVar22 = DAT_00cc3030 + 0x10;
            uVar21 = DAT_00cc3000 >> 4 & 3;
            if (uVar21 == 1) {
              DAT_00cc3050 = uVar22 + DAT_00cc3020 * 0x10;
            }
            else {
              if (uVar21 != 0) {
                DAT_00cc3010 = uVar22;
                FUN_00988960(&PTR_FUN_00c9aa28,
                             "Call Stack Overflow (report if it fixes/breaks anything)");
                goto code_r0x00504434;
              }
              DAT_00cc3040 = uVar22 + DAT_00cc3020 * 0x10;
            }
            bVar23 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar22;
            break;
          case 6:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            uVar22 = DAT_00cc3000 >> 4 & 3;
            if (uVar22 == 2) {
              puVar29 = (uint *)&DAT_00cc3050;
            }
            else {
              if (uVar22 != 1) goto code_r0x00504434;
              puVar29 = (uint *)&DAT_00cc3040;
            }
            bVar23 = 0;
            DAT_00cc3030 = *puVar29;
            *puVar29 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
            break;
          case 7:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00504434:
            bVar23 = 1;
          }
          DAT_027062e4 = DAT_027062e4 | bVar23;
          if (DAT_00cc3020 != 0) {
            DAT_02706320 = 1;
          }
          if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar32 < 0)) {
            DAT_027062e4 = 1;
          }
LAB_0050449c:
          uVar22 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar22 = 8;
          }
LAB_005044b8:
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
          DAT_027032c0 = DAT_02706260;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c0 = 8;
          }
LAB_0050295c:
          DAT_027033c4 = DAT_027033c4 | 1;
          DAT_02703340 = DAT_027033c0;
          if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar22 = DAT_00cbe800;
          uVar24 = DAT_027033c4;
          if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_027032c0;
          }
LAB_00503000:
          DAT_00cbe800 = uVar22;
          uVar22 = DAT_00cbec00;
          uVar21 = uVar24;
          if ((uVar24 >> 0x12 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               ((int)DAT_02703308 <= (int)(DAT_027033c0 - DAT_02703388))) {
              DAT_027033c4 = uVar24 & 0xfffbffff;
              DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
LAB_00503090:
              do {
                iVar13 = DAT_028196e4;
                if ((((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) ||
                   (((int)(DAT_027033c0 - DAT_028196e4) < 1 || ((_DAT_02819070 >> 8 & 1) == 0))))
                goto LAB_0050313c;
                uVar22 = 0x100;
                if ((int)DAT_02704e00[1] == 0) {
                  uVar22 = 1;
                }
                else if (((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) {
                  FUN_005b1f50(&DAT_01701a00);
                  goto LAB_00503090;
                }
                if ((uVar22 & _DAT_02819070) != 0) {
                  iVar13 = DAT_028190d4;
                  if ((int)DAT_02704e00[1] != 0) {
                    iVar13 = DAT_028196e4;
                  }
                  uVar22 = DAT_027033c0 - iVar13;
                  if (0 < (int)uVar22) {
                    if (uVar22 < 0x11) {
                      uVar22 = 0x10;
                    }
                    (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar22);
                  }
                }
              } while( true );
            }
            if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
              DAT_027033dc = DAT_02703308 + DAT_02703388;
            }
          }
          goto LAB_004ffc50;
        }
        goto LAB_004fe174;
      }
      goto LAB_004fbe70;
    }
    goto LAB_004fe174;
  }
  if ((_DAT_00cc9000 & 1) == 0) goto LAB_004fe174;
LAB_004fbe70:
  if ((DAT_00cca520._2_1_ & 1) != 0) goto LAB_004fe174;
  if ((DAT_027033c4 >> 0x14 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_02703310 <= (int)(DAT_027033c0 - DAT_02703390))) {
      DAT_027033c4 = DAT_027033c4 & 0xffefffff;
      DAT_027033d4 = DAT_027033d4 & 0xffefffff;
      _DAT_02819070 = _DAT_02819070 & 0xffff00ff;
    }
    else if (DAT_02703310 < (int)(DAT_027033dc - DAT_02703390)) {
      DAT_027033dc = DAT_02703310 + DAT_02703390;
    }
  }
  if ((DAT_027033c4 >> 1 & 1) == 0) goto LAB_004fc4a4;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
      DAT_027033dc = DAT_027032c4 + DAT_02703344;
    }
    goto LAB_004fc4a4;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffd;
  DAT_02706280 = 0;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar22 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_004fc194;
      uVar22 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar22 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_004fc100:
        bVar12 = uVar22 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar22 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_004fc100;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 != 0) goto LAB_004fc138;
LAB_004fc16c:
        bVar11 = false;
      }
      else {
        if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0)) goto LAB_004fc16c;
LAB_004fc138:
        bVar11 = true;
      }
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
      }
    }
  }
LAB_004fc194:
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar22 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar22 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    FUN_005d9ad0();
    goto LAB_004fc4a4;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar22 = *DAT_00ca16f0;
      if ((uVar22 >> 10 & 3 | 2) == 2) {
LAB_004fc270:
        if (((uVar22 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_004fc288;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_004fc288:
        uVar22 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar22 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar22 & 0x1f) << 0x18
        ;
        goto LAB_004fc2bc;
      }
      uVar22 = *DAT_00ca16f0;
      uVar21 = uVar22 >> 10 & 3;
      if (((uVar21 == 0) || (uVar21 == 2)) ||
         ((uVar21 == 3 && (((uVar22 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_004fc270;
    }
    DAT_02703344 = DAT_027033c0;
    DAT_027033c4 = DAT_027033c4 | 2;
    DAT_027032c4 = 8;
    if ((DAT_02704f28 & 0x40) == 0) {
      DAT_027032c4 = 0x80;
    }
    if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c4;
    }
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 8;
    }
    goto LAB_004fc4a4;
  }
LAB_004fc2bc:
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
    if ((DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_004fc48c:
    DAT_027033d4 = DAT_027033d4 | 2;
    goto LAB_004fc4a4;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_004fc48c;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar22 = DAT_00cbec00;
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
      if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_02706370 = DAT_02706370 + -1;
    uVar22 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      uVar21 = (uVar22 & 0x1f) << 0x18;
      uVar22 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar21;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar21 | 2;
        goto LAB_004fc48c;
      }
    }
  }
  DAT_00cbec00 = uVar22;
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
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    }
    if (((DAT_00cbec00 >> 3 & 1) != 0) && (DAT_00ca1630 != 0)) goto LAB_004fc4a4;
    if (DAT_02706381 == '\0') goto LAB_00506c4c;
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
    if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_004fc4a4;
    goto LAB_0050526c;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00505a94:
          bVar12 = uVar22 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar22 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00505a94;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00505acc;
LAB_00505b00:
          bVar11 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00505b00;
LAB_00505acc:
          bVar11 = true;
        }
        if (bVar11 || !bVar12) goto LAB_00505b20;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_00505b20:
    DAT_02706280 = 0;
    if ((((DAT_00cc9010 >> 0x11 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
       (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 2)) != 0)) {
      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + 4;
      }
      if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    DAT_00cc9010 = DAT_00cc9010 | 2;
    goto LAB_004fc4a4;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004fc4a4;
  if ((int)DAT_00cc4030 < 0) {
    uVar20 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00505be0:
    puVar32 = (uint *)(DAT_00ccb000 + uVar20 + 0x2000000);
  }
  else {
    uVar20 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar20 >> 0x19 == 0) {
      puVar32 = (uint *)(DAT_00ccb000 + uVar20);
    }
    else if (uVar20 >> 0x1c == 0) {
      puVar32 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar20 < 0x10004000) {
        uVar20 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_00505be0;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar32 = (uint *)0x0;
    }
  }
  uVar20 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar32);
  if ((uVar20 & 1) == 0) goto LAB_00506ba4;
  DAT_00cc4010 = puVar32[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar32 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_00506ba4;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar32 + 2);
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
    uVar20 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar20 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_00506ba4;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar32 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x00506b2c;
  case 1:
    bVar23 = 0;
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 2:
    bVar23 = 0;
    uVar22 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar22;
    break;
  default:
    bVar23 = 0;
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    break;
  case 5:
    uVar22 = DAT_00cc4030 + 0x10;
    uVar21 = DAT_00cc4000 >> 4 & 3;
    if (uVar21 == 1) {
      DAT_00cc4050 = uVar22 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar21 != 0) {
        DAT_00cc4010 = uVar22;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00506b2c;
      }
      DAT_00cc4040 = uVar22 + DAT_00cc4020 * 0x10;
    }
    bVar23 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar22;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4000 >> 4 & 3;
    if (uVar22 == 2) {
      puVar29 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar22 != 1) goto code_r0x00506b2c;
      puVar29 = (uint *)&DAT_00cc4040;
    }
    bVar23 = 0;
    DAT_00cc4030 = *puVar29;
    *puVar29 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x00506b2c:
    bVar23 = 1;
  }
  DAT_02706374 = DAT_02706374 | bVar23;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar32 < 0)) {
    DAT_02706374 = 1;
  }
LAB_00506ba4:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar22 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar22 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
  }
  if (((DAT_00cbec00 >> 3 & 1) == 0) || (DAT_00ca1630 == 0)) {
    if (DAT_02706381 == '\0') {
LAB_00506c4c:
      DAT_027033c4 = DAT_027033c4 | 2;
      DAT_027032c4 = DAT_02706280;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      DAT_02703344 = DAT_027033c0;
      if (((int)DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
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
      if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0050526c:
        DAT_027033dc = DAT_027033c0 + DAT_027032c4;
        DAT_02703344 = DAT_027033c0;
      }
    }
  }
LAB_004fc4a4:
  if ((DAT_027033c4 >> 2 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       ((int)DAT_027032c8 <= (int)(DAT_027033c0 - DAT_02703348))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffffb;
      DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
      if (DAT_00ca1630 == 4) {
        DAT_00ca1630 = 0;
      }
      if (((~DAT_00cbe020 & 0xc00) == 0) &&
         (DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff, (DAT_00ca1630 & 0xfffffffb) == 0)) {
        if ((DAT_00ca13ec == 0) &&
           (((DAT_02704e14 >> 3 & 1) != 0 && (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)))
           ) {
LAB_004fc664:
          bVar12 = uVar22 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar22 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_004fc664;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_004fc69c;
LAB_004fc6d0:
          bVar11 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_004fc6d0;
LAB_004fc69c:
          bVar11 = true;
        }
        if (bVar11 || !bVar12) {
          FUN_003ecbd0(&DAT_00ca1380,0,1);
        }
      }
      uVar22 = DAT_027033c0;
      puVar32 = DAT_00ca16f0;
      if ((DAT_00ca1630 == 0) && (((byte)DAT_00cbec00 >> 3 & 1) != 0)) {
        if ((DAT_027033c4 >> 1 & 1) == 0) {
          DAT_027033c4 = DAT_027033c4 | 2;
          DAT_02703344 = DAT_027033c0;
          DAT_027032c4 = 8;
          if ((DAT_02704f28 & 0x40) == 0) {
            DAT_027032c4 = 1;
          }
          if (0 < DAT_02702544) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027032c4 + DAT_027033c0;
          }
        }
        uVar21 = *DAT_00ca16f0;
        uVar24 = uVar21 & 3;
        if ((uVar24 == 0) || (DAT_00cc5020 == 0)) {
          if ((~_DAT_00cc9000 & 0xc) == 0) {
            if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
              piVar28 = (int *)&DAT_027032ec;
              DAT_027033c4 = DAT_027033c4 | 0x800;
              iVar13 = 0x10;
              if ((DAT_02704f28 & 0x40) != 0) {
                iVar13 = 8;
              }
LAB_004fcc98:
              piVar28[0x20] = DAT_027033c0;
              *piVar28 = iVar13;
              if (0 < DAT_02702544) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              if (iVar13 < (int)(DAT_027033dc - uVar22)) {
                DAT_027033dc = iVar13 + uVar22;
              }
              uVar21 = *puVar32;
              uVar24 = uVar21 & 3;
            }
          }
          else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
            piVar28 = (int *)&DAT_027032c8;
            DAT_027033c4 = DAT_027033c4 | 4;
            iVar13 = 0x10;
            if ((DAT_02704f28 & 0x40) != 0) {
              iVar13 = 8;
            }
            goto LAB_004fcc98;
          }
          if (uVar24 == 0) {
joined_r0x004fcb44:
            if (((((uVar21 & 0xc00) == 0xc00) || ((uVar21 & 0xc00) == 0)) &&
                ((uVar21 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)) {
              DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
              goto LAB_004fcd00;
            }
          }
        }
LAB_004fcce8:
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
            if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027032c8 + DAT_027033c0;
            }
          }
          DAT_027033d4 = DAT_027033d4 | 4;
          if (DAT_00ca1350 == 0x10) goto LAB_004fcd00;
        }
        if (DAT_00ca1350 == 0) {
          uVar22 = 0;
        }
        else {
          iVar13 = FUN_003ef270(&DAT_00ca1250);
          uVar22 = DAT_027033c0;
          if (iVar13 != 0) {
            uVar21 = iVar13 << 1;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar21)) {
                if ((DAT_02704f28 & 0x40) != 0) {
                  uVar21 = 8;
                }
                puVar32 = &DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_004fc9f8:
                puVar32[0x20] = DAT_027033c0;
                *puVar32 = uVar21;
                if ((uVar21 < 0x1d) && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if ((int)uVar21 < (int)(DAT_027033dc - uVar22)) {
                  DAT_027033dc = uVar21 + uVar22;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar21)) {
              if ((DAT_02704f28 & 0x40) != 0) {
                uVar21 = 8;
              }
              puVar32 = &DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_004fc9f8;
            }
          }
          uVar6 = DAT_02704f28;
          uVar21 = DAT_027033c0;
          puVar32 = DAT_00ca16f0;
          uVar22 = *DAT_00ca16f0;
          if (((((uVar22 & 0xc00) != 0xc00) &&
               (((uVar22 & 0xc00) != 0 ||
                (((uVar22 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
              ((uVar22 & 0x1008) != 0)) || (bVar23 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
            if (((uVar22 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                  piVar28 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_004fe058:
                  uVar10 = DAT_02704f28 & 0x40;
                  piVar28[0x20] = DAT_027033c0;
                  iVar25 = 8;
                  if (uVar10 == 0) {
                    iVar25 = 0x80;
                  }
                  *piVar28 = iVar25;
                  if (((uVar6 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar25 < (int)(DAT_027033dc - uVar21)) {
                    DAT_027033dc = iVar25 + uVar21;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                piVar28 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                goto LAB_004fe058;
              }
            }
            bVar23 = 1;
          }
          if ((iVar13 != 0) || (uVar22 = DAT_00ca1350, (bVar23 & DAT_00ca1350 == 0x10) != 0)) {
            uVar21 = *puVar32;
            if (((uVar21 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto joined_r0x004fcb44;
            goto LAB_004fcce8;
          }
        }
        uVar21 = DAT_027033c0;
        if ((DAT_00cc5000 >> 8 & 1) != 0) {
          if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
            DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
            DAT_00ca1368 = 0;
            DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                           DAT_00cbe020 & 0xffffff | (uVar22 & 0x1f) << 0x18;
            if ((uVar22 & 0x1f) < 0xf) {
              uVar24 = DAT_00ca2710 & 0xffff3fff;
              DAT_00ca2710 = uVar24 | 0x4000;
              if ((uVar22 & 0x1f) != 0) {
                DAT_00ca2710 = uVar24;
              }
            }
            else {
              DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
            }
            uVar24 = DAT_00cc9010 | 4;
            if ((((DAT_00cc9010 >> 0x12 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
               (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 4)) != 0)) {
              if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
                DAT_027033dc = DAT_027033c0 + 4;
              }
              if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
            }
            DAT_00cc9010 = uVar24;
            if (uVar22 != 0) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                  piVar28 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
                  iVar13 = 0x10;
                  if ((DAT_02704f28 & 0x40) != 0) {
                    iVar13 = 8;
                  }
LAB_00504fdc:
                  piVar28[0x20] = DAT_027033c0;
                  *piVar28 = iVar13;
                  if (0 < DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar13 < (int)(DAT_027033dc - uVar21)) {
                    DAT_027033dc = iVar13 + uVar21;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                piVar28 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                iVar13 = 0x10;
                if ((DAT_02704f28 & 0x40) != 0) {
                  iVar13 = 8;
                }
                goto LAB_00504fdc;
              }
            }
          }
          else if ((_DAT_00cc9000 & 1) == 0) {
            FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
            uVar6 = DAT_02704f28;
            uVar22 = DAT_027033c0;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                piVar28 = (int *)&DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_005050dc:
                uVar10 = DAT_02704f28 & 0x40;
                piVar28[0x20] = DAT_027033c0;
                iVar13 = 8;
                if (uVar10 == 0) {
                  iVar13 = 0x40;
                }
                *piVar28 = iVar13;
                if (((uVar6 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if (iVar13 < (int)(DAT_027033dc - uVar22)) {
                  DAT_027033dc = iVar13 + uVar22;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
              piVar28 = (int *)&DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_005050dc;
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
LAB_004fcd00:
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
        if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
      }
      DAT_00cc7000 = DAT_00cc7000 & 0xfffffeff;
      DAT_00cc9010 = DAT_00cc9010 | 0x20;
    }
    else if (DAT_027032d4 < (int)(DAT_027033dc - DAT_02703354)) {
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
        if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
      }
      DAT_00cc7400 = DAT_00cc7400 & 0xfffffeff;
      DAT_00cc9010 = DAT_00cc9010 | 0x40;
    }
    else if (DAT_027032d8 < (int)(DAT_027033dc - DAT_02703358)) {
      DAT_027033dc = DAT_027032d8 + DAT_02703358;
    }
  }
  uVar22 = DAT_00cbec00;
  if ((DAT_027033c4 & 0xe0f19) == 0) goto LAB_004fe174;
  if ((DAT_027033c4 & 1) == 0) goto LAB_004fd0b4;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
    if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
      DAT_027033dc = DAT_027032c0 + DAT_02703340;
    }
    goto LAB_004fd0b4;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffe;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
  uVar22 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar22 = 8;
  }
  DAT_02706260 = 0;
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
  if ((DAT_00cc3000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"vif0 running when CHCR == %x");
  }
  uVar22 = DAT_00cc3000;
  if (DAT_027062f1 != '\0') {
    DAT_02703304 = 0x10;
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703384 = DAT_027033c0;
    if (0 < DAT_02702544) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if (0x10 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + 0x10;
    }
LAB_004fd0a0:
    DAT_027033d4 = DAT_027033d4 | 1;
    goto LAB_004fd0b4;
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
      if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_027062e0 = DAT_027062e0 + -1;
    if ((DAT_00cbe800 & 0x700) != 0) {
      uVar21 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar21 = 8;
      }
      uVar24 = DAT_00cbe800 & 0xe0000000;
      uVar21 = DAT_00cbe800 & 0xffffff | (uVar21 & 0x1f) << 0x18;
      DAT_00cbe800 = uVar24 | uVar21;
      if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
        DAT_00cbe800 = uVar24 | uVar21 & 0xeffffffc | 2;
        goto LAB_004fd0a0;
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
      uVar20 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_00504c7c:
      lVar26 = DAT_00ccb000 + uVar20;
      puVar30 = (undefined *)0x2000000;
LAB_00504de4:
      puVar30 = puVar30 + lVar26;
LAB_00504de8:
      if (DAT_02706314 == '\0') {
        iVar13 = DAT_00cc3020 << 2;
      }
      else {
        puVar30 = puVar30 + (ulong)DAT_02706318 * 4;
        iVar13 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar30,iVar13,0);
    }
    else {
      uVar20 = (ulong)DAT_00cc3010 & 0x1ffffff0;
      if (uVar20 >> 0x19 == 0) {
        if (DAT_00ccb000 != 0) {
          puVar30 = (undefined *)(DAT_00ccb000 + uVar20);
          goto LAB_00504de8;
        }
      }
      else {
        if (uVar20 >> 0x1c == 0) {
          puVar30 = &DAT_02884000;
          lVar26 = DAT_00ccb000;
          goto LAB_00504de4;
        }
        if ((uint)uVar20 < 0x10004000) {
          uVar20 = (ulong)(DAT_00cc3010 & 0x3ff0);
          goto LAB_00504c7c;
        }
        FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      }
      DAT_027062d0 = 0;
      DAT_027062c4 = 0;
      DAT_00cc3020 = 0;
    }
    uVar22 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar22 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    DAT_027032c0 = DAT_02706260;
    if ((DAT_02704f28 & 0x40) != 0) {
      DAT_027032c0 = 8;
    }
    goto LAB_00504e58;
  }
  if (DAT_027062e4 != 0) {
    DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
    uVar22 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar22 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    DAT_027062e8 = '\0';
    DAT_02706314 = '\0';
    if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
      if ((DAT_02706328 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00505640:
          bVar12 = uVar22 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar22 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00505640;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00505678;
LAB_005056ac:
          bVar11 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_005056ac;
LAB_00505678:
          bVar11 = true;
        }
        if (bVar11 || !bVar12) goto LAB_005056cc;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_005056cc:
    DAT_02706260 = 0;
    if ((((DAT_00cc9010 >> 0x10 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
       (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 1)) != 0)) {
      if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
        DAT_027033dc = DAT_027033c0 + 4;
      }
      if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
    }
    DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
    DAT_00cbe800 = DAT_00cbe800 & 0xe0ffffff;
    DAT_00cc9010 = DAT_00cc9010 | 1;
    goto LAB_004fd0b4;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_004fd0b4;
  if (-1 < (int)DAT_00cc3030) {
    uVar20 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar20 >> 0x19 != 0) {
      if (uVar20 >> 0x1c != 0) {
        if (0x10003fff < (uint)uVar20) {
          FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
          goto LAB_005058ec;
        }
        uVar20 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_0050536c;
      }
      puVar30 = &DAT_02884000;
      lVar26 = DAT_00ccb000;
      goto LAB_00505568;
    }
    if (DAT_00ccb000 != 0) {
      puVar32 = (uint *)(DAT_00ccb000 + uVar20);
      goto LAB_0050556c;
    }
LAB_005058ec:
    FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
    DAT_00cc9010 = DAT_00cc9010 | 0x8000;
    goto LAB_00505dfc;
  }
  uVar20 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_0050536c:
  lVar26 = DAT_00ccb000 + uVar20;
  puVar30 = (undefined *)0x2000000;
LAB_00505568:
  puVar32 = (uint *)(puVar30 + lVar26);
LAB_0050556c:
  DAT_00cc3000 = CONCAT22(*(undefined2 *)((long)puVar32 + 2),(undefined2)DAT_00cc3000);
  DAT_00cc3020 = (uint)(ushort)*puVar32;
  DAT_00cc3010 = puVar32[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if ((uVar22 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar32 + 2);
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
    uVar20 = FUN_005e2c60(puVar15,iVar13,1);
    if (((uVar20 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0050583c;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar22 = 0;
    goto LAB_00505e08;
  }
LAB_0050583c:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar32 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto code_r0x00505d94;
  case 1:
    bVar23 = 0;
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 2:
    bVar23 = 0;
    uVar22 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar22;
    break;
  default:
    bVar23 = 0;
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    break;
  case 5:
    uVar22 = DAT_00cc3030 + 0x10;
    uVar21 = DAT_00cc3000 >> 4 & 3;
    if (uVar21 == 1) {
      DAT_00cc3050 = uVar22 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar21 != 0) {
        DAT_00cc3010 = uVar22;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00505d94;
      }
      DAT_00cc3040 = uVar22 + DAT_00cc3020 * 0x10;
    }
    bVar23 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar22;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar22 = DAT_00cc3000 >> 4 & 3;
    if (uVar22 == 2) {
      puVar29 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar22 != 1) goto code_r0x00505d94;
      puVar29 = (uint *)&DAT_00cc3040;
    }
    bVar23 = 0;
    DAT_00cc3030 = *puVar29;
    *puVar29 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00505d94:
    bVar23 = 1;
  }
  DAT_027062e4 = DAT_027062e4 | bVar23;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar32 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_00505dfc:
  uVar22 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar22 = 8;
  }
LAB_00505e08:
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
  DAT_027032c0 = DAT_02706260;
  if ((DAT_02704f28 & 0x40) != 0) {
    DAT_027032c0 = 8;
  }
LAB_00504e58:
  DAT_027033c4 = DAT_027033c4 | 1;
  DAT_02703340 = DAT_027033c0;
  if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
    DAT_02702540 = DAT_02702540 + DAT_02702544;
    DAT_02702544 = 0;
  }
  if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
    DAT_027033dc = DAT_027033c0 + DAT_027032c0;
  }
LAB_004fd0b4:
  uVar22 = DAT_00cc9010;
  if ((DAT_027033c4 >> 3 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffff7;
      DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
      if (DAT_00cc6020 == 0) {
        DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
        uVar22 = DAT_00cc9010 | 8;
        if ((((DAT_00cc9010 >> 0x13 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
           (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 8)) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
      }
      else {
        FUN_006709a0();
        uVar22 = DAT_00cc9010;
      }
    }
    else if (DAT_027032cc < (int)(DAT_027033dc - DAT_0270334c)) {
      DAT_027033dc = DAT_027032cc + DAT_0270334c;
    }
  }
  DAT_00cc9010 = uVar22;
  uVar22 = DAT_00cc9010;
  if ((DAT_027033c4 >> 4 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032d0 <= (int)(DAT_027033c0 - DAT_02703350))) {
      DAT_027033c4 = DAT_027033c4 & 0xffffffef;
      DAT_027033d4 = DAT_027033d4 & 0xffffffef;
      if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
        FUN_006704a0();
        uVar22 = DAT_00cc9010;
      }
      else {
        DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
        uVar22 = DAT_00cc9010 | 0x10;
        if ((((DAT_00cc9010 >> 0x14 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
           (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x10)) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
      }
    }
    else if (DAT_027032d0 < (int)(DAT_027033dc - DAT_02703350)) {
      DAT_027033dc = DAT_027032d0 + DAT_02703350;
    }
  }
  DAT_00cc9010 = uVar22;
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
    else if (DAT_0270330c < (int)(DAT_027033dc - DAT_0270338c)) {
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
    else if (DAT_027032e0 < (int)(DAT_027033dc - DAT_02703360)) {
      DAT_027033dc = DAT_027032e0 + DAT_02703360;
    }
  }
  uVar22 = DAT_00cc9010;
  if ((DAT_027033c4 >> 9 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffdff;
      DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
      if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
        FUN_005d5b90();
        uVar22 = DAT_00cc9010;
      }
      else {
        DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
        uVar22 = DAT_00cc9010 | 0x200;
        if ((((DAT_00cc9010 >> 0x19 & 1) != 0) && ((DAT_02703250 & 0x10807) == 0x10801)) &&
           (((DAT_00cc9010 >> 0x10 | 0x8000) & (DAT_00cc9010 & 0xffff | 0x200)) != 0)) {
          if (4 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 4;
          }
          if ((DAT_027026e8 != '\0') && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
        }
      }
    }
    else if (DAT_027032e4 < (int)(DAT_027033dc - DAT_02703364)) {
      DAT_027033dc = DAT_027032e4 + DAT_02703364;
    }
  }
  DAT_00cc9010 = uVar22;
  if ((DAT_027033c4 >> 10 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032e8 <= (int)(DAT_027033c0 - DAT_02703368))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffbff;
      DAT_027033d4 = DAT_027033d4 & 0xfffffbff;
      FUN_005d9ad0();
    }
    else if (DAT_027032e8 < (int)(DAT_027033dc - DAT_02703368)) {
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
    else if ((int)DAT_027032ec < (int)(DAT_027033dc - DAT_0270336c)) {
      DAT_027033dc = DAT_027032ec + DAT_0270336c;
    }
  }
  uVar22 = DAT_00cbe800;
  if ((DAT_027033c4 >> 0x11 & 1) == 0) goto LAB_004fda9c;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
    if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
      DAT_027033dc = DAT_02703304 + DAT_02703384;
    }
    goto LAB_004fda9c;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffdffff;
  DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
  uVar22 = _DAT_02819070 & 1;
  if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar22 != 0)) {
    do {
      uVar22 = 0x100;
      if ((int)DAT_02704e08[1] == 0) {
        uVar22 = 1;
LAB_004fd950:
        if ((uVar22 & _DAT_02819070) != 0) {
          iVar13 = DAT_028190d4;
          if ((int)DAT_02704e08[1] != 0) {
            iVar13 = DAT_028196e4;
          }
          uVar22 = DAT_027033c0 - iVar13;
          if (0 < (int)uVar22) {
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar22);
          }
        }
      }
      else {
        if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_004fd950;
        FUN_005b1f50(&DAT_01701a00);
      }
      uVar22 = _DAT_02819070 & 1;
    } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar22 != 0);
  }
  iVar13 = DAT_028190d4;
  if ((_DAT_02819070 & 5) != 0) {
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = 0x80;
    if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + 0x80;
    }
LAB_004fda88:
    DAT_027033d4 = DAT_027033d4 | 0x20000;
    uVar22 = DAT_00cbe800;
    DAT_02703384 = DAT_027033c0;
    goto LAB_004fda9c;
  }
  if (uVar22 != 0) {
    if ((_DAT_02819070 & 1) != 0) {
      (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
      while ((_DAT_02819070 & 1) != 0) {
        (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = (DAT_028190d4 - iVar13) * 2;
    if ((DAT_02703304 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    iVar25 = DAT_027033dc - DAT_027033c0;
    if (iVar25 != DAT_02703304 &&
        iVar25 + (DAT_028190d4 - iVar13) * -2 < 0 == SBORROW4(iVar25,DAT_02703304)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703304;
    }
    goto LAB_004fda88;
  }
  uVar22 = DAT_00cbe800 & 0xfffffffb;
  if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
      ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_004fda9c;
  DAT_02706260 = 0;
  uVar22 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar22 = 8;
  }
  uVar22 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xfffffb | (uVar22 & 0x1f) << 0x18;
  if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
    if ((DAT_00cbe800 >> 0xd & 1) == 0) {
      uVar22 = uVar22 | 0x800;
    }
    DAT_00cbe800 = uVar22;
    if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
      DAT_00cbe800 = uVar22 | 0x400;
    }
    FUN_003f7540(4);
    DAT_027062e0 = DAT_027062e0 + -1;
    uVar22 = DAT_00cbe800;
    if ((DAT_00cbe800 & 0x700) != 0) {
      uVar22 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar22 = 8;
      }
      uVar21 = DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
      if ((DAT_00cc3020 != 0) || (uVar22 = DAT_00cbe800 & 0xe0000000 | uVar21, DAT_027062e4 == 0)) {
        DAT_027033d4 = DAT_027033d4 | 1;
        uVar22 = DAT_00cbe800 & 0xe0000000 | uVar21 & 0xeffffffc | 2;
        goto LAB_004fda9c;
      }
    }
  }
  DAT_00cbe800 = uVar22;
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
    else {
      if ((int)DAT_00cc3010 < 0) {
        puVar30 = (undefined *)(DAT_00ccb000 + ((ulong)DAT_00cc3010 & 0x3ff0) + 0x2000000);
      }
      else {
        uVar20 = (ulong)DAT_00cc3010 & 0x1ffffff0;
        if (uVar20 >> 0x19 == 0) {
          if (DAT_00ccb000 == 0) {
LAB_00505e74:
            DAT_027062d0 = 0;
            DAT_027062c4 = 0;
            DAT_00cc3020 = 0;
            goto LAB_00505c6c;
          }
          puVar30 = (undefined *)(DAT_00ccb000 + uVar20);
        }
        else {
          if (uVar20 >> 0x1c == 0) {
            puVar30 = &DAT_02884000;
            lVar26 = DAT_00ccb000;
          }
          else {
            if (0x10003fff < (uint)uVar20) {
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              goto LAB_00505e74;
            }
            lVar26 = DAT_00ccb000 + (ulong)(DAT_00cc3010 & 0x3ff0);
            puVar30 = (undefined *)0x2000000;
          }
          puVar30 = puVar30 + lVar26;
        }
      }
      if (DAT_02706314 == '\0') {
        iVar13 = DAT_00cc3020 << 2;
      }
      else {
        puVar30 = puVar30 + (ulong)DAT_02706318 * 4;
        iVar13 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar30,iVar13,0);
    }
LAB_00505c6c:
    uVar22 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar22 = 8;
    }
    uVar22 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    DAT_027032c0 = DAT_02706260;
    if ((DAT_02704f28 & 0x40) != 0) {
      DAT_027032c0 = 8;
    }
    DAT_027033c4 = DAT_027033c4 | 1;
    DAT_02703340 = DAT_027033c0;
    if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c0;
    }
    goto LAB_004fda9c;
  }
  if (DAT_027062e4 != 0) {
    DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
    uVar22 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar22 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    DAT_027062e8 = '\0';
    DAT_02706314 = '\0';
    if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
      if ((DAT_02706328 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00505ed8:
          bVar12 = uVar22 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar22 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00505ed8;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00505f10;
LAB_00505f44:
          bVar11 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00505f44;
LAB_00505f10:
          bVar11 = true;
        }
        if (bVar11 || !bVar12) goto LAB_00505f64;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_00505f64:
    DAT_02706260 = 0;
    FUN_003f75f0(0);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
    uVar22 = DAT_00cbe800 & 0xe0ffffff;
    goto LAB_004fda9c;
  }
  uVar22 = DAT_00cbe800;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_004fda9c;
  if ((int)DAT_00cc3030 < 0) {
    uVar20 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_00505d20:
    puVar32 = (uint *)(DAT_00ccb000 + uVar20 + 0x2000000);
  }
  else {
    uVar20 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar20 >> 0x19 == 0) {
      puVar32 = (uint *)(DAT_00ccb000 + uVar20);
    }
    else if (uVar20 >> 0x1c == 0) {
      puVar32 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar20 < 0x10004000) {
        uVar20 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_00505d20;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar32 = (uint *)0x0;
    }
  }
  uVar20 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar32);
  if ((uVar20 & 1) == 0) goto LAB_00506e10;
  DAT_00cc3010 = puVar32[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar32 + 2);
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
    uVar20 = FUN_005e2c60(puVar15,iVar13,1);
    if (((uVar20 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_00506864;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar22 = 0;
    goto LAB_00506e1c;
  }
LAB_00506864:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar32 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto code_r0x00506da8;
  case 1:
    bVar23 = 0;
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 2:
    bVar23 = 0;
    uVar22 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar22;
    break;
  default:
    bVar23 = 0;
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    break;
  case 5:
    uVar22 = DAT_00cc3030 + 0x10;
    uVar21 = DAT_00cc3000 >> 4 & 3;
    if (uVar21 == 1) {
      DAT_00cc3050 = uVar22 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar21 != 0) {
        DAT_00cc3010 = uVar22;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00506da8;
      }
      DAT_00cc3040 = uVar22 + DAT_00cc3020 * 0x10;
    }
    bVar23 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar22;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar22 = DAT_00cc3000 >> 4 & 3;
    if (uVar22 == 2) {
      puVar29 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar22 != 1) goto code_r0x00506da8;
      puVar29 = (uint *)&DAT_00cc3040;
    }
    bVar23 = 0;
    DAT_00cc3030 = *puVar29;
    *puVar29 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00506da8:
    bVar23 = 1;
  }
  DAT_027062e4 = DAT_027062e4 | bVar23;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar32 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_00506e10:
  uVar22 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar22 = 8;
  }
LAB_00506e1c:
  uVar22 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
  DAT_027032c0 = DAT_02706260;
  if ((DAT_02704f28 & 0x40) != 0) {
    DAT_027032c0 = 8;
  }
  DAT_027033c4 = DAT_027033c4 | 1;
  DAT_02703340 = DAT_027033c0;
  if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
    DAT_02702540 = DAT_02702540 + DAT_02702544;
    DAT_02702544 = 0;
  }
  if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
    DAT_027033dc = DAT_027033c0 + DAT_027032c0;
  }
LAB_004fda9c:
  DAT_00cbe800 = uVar22;
  uVar22 = DAT_00cbec00;
  if ((DAT_027033c4 >> 0x12 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       ((int)DAT_02703308 <= (int)(DAT_027033c0 - DAT_02703388))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffbffff;
      DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
LAB_004fdb54:
      do {
        iVar13 = DAT_028196e4;
        if ((((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) ||
           (((int)(DAT_027033c0 - DAT_028196e4) < 1 || ((_DAT_02819070 >> 8 & 1) == 0))))
        goto LAB_004fdbe8;
        uVar22 = 0x100;
        if ((int)DAT_02704e00[1] == 0) {
          uVar22 = 1;
        }
        else if (((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) {
          FUN_005b1f50(&DAT_01701a00);
          goto LAB_004fdb54;
        }
        if ((uVar22 & _DAT_02819070) != 0) {
          iVar13 = DAT_028190d4;
          if ((int)DAT_02704e00[1] != 0) {
            iVar13 = DAT_028196e4;
          }
          uVar22 = DAT_027033c0 - iVar13;
          if (0 < (int)uVar22) {
            if (uVar22 < 0x11) {
              uVar22 = 0x10;
            }
            (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar22);
          }
        }
      } while( true );
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
      DAT_027033dc = DAT_02703308 + DAT_02703388;
    }
  }
  goto LAB_004fe174;
LAB_0050313c:
  if ((_DAT_02819070 & 0x500) != 0) {
    FUN_005b1f50(&DAT_01701a00);
    if ((DAT_02704e14 >> 3 & 1) == 0) {
      uVar22 = 0x80;
    }
    else if (((DAT_02704f20 & 0x30) == 0x10) && ((_DAT_02819070 & 0x100) != 0)) {
      uVar22 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)uVar22 < 2) {
        uVar22 = 1;
      }
    }
    else {
      uVar22 = 0x80;
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if ((uVar22 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    uVar21 = DAT_027033c0;
    DAT_02703308 = uVar22;
    if ((int)uVar22 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0050334c:
      DAT_027033dc = uVar21 + uVar22;
    }
LAB_00503358:
    DAT_027033d4 = DAT_027033d4 | 0x40000;
    uVar22 = DAT_00cbec00;
    DAT_02703388 = DAT_027033c0;
    uVar21 = DAT_027033c4;
    goto LAB_004ffc50;
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
      uVar21 = DAT_028196e4 - iVar13;
    }
    else {
      uVar21 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)uVar21 < 2) {
        uVar21 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if (((int)uVar21 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    uVar22 = DAT_027033c0;
    DAT_02703308 = uVar21;
    if ((int)uVar21 < (int)(DAT_027033dc - DAT_027033c0)) goto LAB_0050334c;
    goto LAB_00503358;
  }
  uVar22 = DAT_00cbec00 & 0xfffffffb;
  uVar21 = DAT_027033c4;
  if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
     (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_004ffc50;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    DAT_00cbec00 = uVar22;
    FUN_005d9ad0();
    uVar22 = DAT_00cbec00;
    uVar21 = DAT_027033c4;
    goto LAB_004ffc50;
  }
  DAT_02706280 = 0;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar21 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_0050359c;
      uVar21 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar21 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_005034e8:
        bVar12 = uVar22 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar22 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_005034e8;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 != 0) goto LAB_00503518;
LAB_0050353c:
        bVar11 = false;
      }
      else {
        if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0)) goto LAB_0050353c;
LAB_00503518:
        bVar11 = true;
      }
      uVar22 = DAT_00cbec00;
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
        uVar22 = DAT_00cbec00;
      }
    }
  }
LAB_0050359c:
  DAT_00cbec00 = uVar22;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar22 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar22 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    FUN_005d9ad0();
    uVar22 = DAT_00cbec00;
    uVar21 = DAT_027033c4;
    goto LAB_004ffc50;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar22 = *DAT_00ca16f0;
      if ((uVar22 >> 10 & 3 | 2) == 2) {
LAB_00503674:
        if (((uVar22 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_0050368c;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_0050368c:
        uVar22 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar22 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar22 & 0x1f) << 0x18
        ;
        goto LAB_005036b4;
      }
      uVar22 = *DAT_00ca16f0;
      uVar21 = uVar22 >> 10 & 3;
      if (((uVar21 == 0) || (uVar21 == 2)) ||
         ((uVar21 == 3 && (((uVar22 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_00503674;
    }
    DAT_02703344 = DAT_027033c0;
    DAT_027033c4 = DAT_027033c4 | 2;
    DAT_027032c4 = 8;
    if ((DAT_02704f28 & 0x40) == 0) {
      DAT_027032c4 = 0x80;
    }
    if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c4;
    }
    uVar22 = DAT_00cbec00;
    uVar21 = DAT_027033c4;
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      uVar22 = DAT_00cbec00 | 8;
    }
    goto LAB_004ffc50;
  }
LAB_005036b4:
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
    if ((DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_0050389c:
    DAT_027033d4 = DAT_027033d4 | 2;
    uVar22 = DAT_00cbec00;
    uVar21 = DAT_027033c4;
    goto LAB_004ffc50;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_0050389c;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar22 = DAT_00cbec00;
  if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
    if ((DAT_00cbec00 >> 0xd & 1) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 0x800;
    }
    if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
      DAT_00cbec00 = DAT_00cbec00 | 0x400;
    }
    FUN_003f7540(5);
    DAT_02706370 = DAT_02706370 + -1;
    uVar22 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      uVar21 = (uVar22 & 0x1f) << 0x18;
      uVar22 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar21;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_027033d4 = DAT_027033d4 | 2;
        uVar22 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar21 | 2;
        uVar21 = DAT_027033c4;
        goto LAB_004ffc50;
      }
    }
  }
  DAT_00cbec00 = uVar22;
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
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    }
    uVar31 = DAT_027033c0;
    uVar24 = DAT_027033c4;
    if (((DAT_00cbec00 >> 3 & 1) != 0) &&
       (uVar22 = DAT_00cbec00, uVar31 = DAT_027033c0, uVar21 = DAT_027033c4, DAT_00ca1630 != 0))
    goto LAB_004ffc50;
    goto joined_r0x00503f78;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00504574:
          bVar12 = uVar22 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar22 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00504574;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_005045a8;
LAB_005045e4:
          bVar11 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_005045e4;
LAB_005045a8:
          bVar11 = true;
        }
        if (bVar11 || !bVar12) goto LAB_00504608;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_00504608:
    DAT_02706280 = 0;
    FUN_003f75f0(1);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    uVar22 = DAT_00cbec00;
    uVar21 = DAT_027033c4;
    goto LAB_004ffc50;
  }
  uVar22 = DAT_00cbec00;
  uVar21 = DAT_027033c4;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004ffc50;
  if ((int)DAT_00cc4030 < 0) {
    uVar20 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00504668:
    puVar32 = (uint *)(DAT_00ccb000 + uVar20 + 0x2000000);
  }
  else {
    uVar20 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar20 >> 0x19 == 0) {
      puVar32 = (uint *)(DAT_00ccb000 + uVar20);
    }
    else if (uVar20 >> 0x1c == 0) {
      puVar32 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar20 < 0x10004000) {
        uVar20 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_00504668;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar32 = (uint *)0x0;
    }
  }
  uVar20 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar32);
  if ((uVar20 & 1) == 0) goto LAB_00504a24;
  DAT_00cc4010 = puVar32[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar32 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_00504a24;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar32 + 2);
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
    uVar20 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar20 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_00504a24;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar32 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x0050499c;
  case 1:
    bVar23 = 0;
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 2:
    bVar23 = 0;
    uVar22 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar22;
    break;
  default:
    bVar23 = 0;
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    break;
  case 5:
    uVar22 = DAT_00cc4030 + 0x10;
    uVar21 = DAT_00cc4000 >> 4 & 3;
    if (uVar21 == 1) {
      DAT_00cc4050 = uVar22 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar21 != 0) {
        DAT_00cc4010 = uVar22;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x0050499c;
      }
      DAT_00cc4040 = uVar22 + DAT_00cc4020 * 0x10;
    }
    bVar23 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar22;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4000 >> 4 & 3;
    if (uVar22 == 2) {
      puVar29 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar22 != 1) goto code_r0x0050499c;
      puVar29 = (uint *)&DAT_00cc4040;
    }
    bVar23 = 0;
    DAT_00cc4030 = *puVar29;
    *puVar29 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x0050499c:
    bVar23 = 1;
  }
  DAT_02706374 = DAT_02706374 | bVar23;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar32 < 0)) {
    DAT_02706374 = 1;
  }
LAB_00504a24:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar22 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar22 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
  }
  uVar31 = DAT_027033c0;
  uVar24 = DAT_027033c4;
  if (((DAT_00cbec00 >> 3 & 1) == 0) ||
     (uVar22 = DAT_00cbec00, uVar31 = DAT_027033c0, uVar21 = DAT_027033c4, DAT_00ca1630 == 0)) {
joined_r0x00503f78:
    DAT_02703344 = uVar31;
    uVar22 = DAT_00cbec00;
    DAT_027033c0 = DAT_02703344;
    if (DAT_02706381 == '\0') {
      DAT_027033c4 = uVar24 | 2;
      DAT_027032c4 = DAT_02706280;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      if (((int)DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      uVar21 = DAT_027033c4;
      if ((int)(DAT_027033dc - DAT_02703344) <= (int)DAT_027032c4) goto LAB_004ffc50;
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
      DAT_027033c4 = uVar24 | 2;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      uVar21 = DAT_027033c4;
      if ((int)(DAT_027033dc - DAT_02703344) <= (int)DAT_027032c4) goto LAB_004ffc50;
    }
    DAT_027033c4 = uVar24 | 2;
    DAT_027033dc = DAT_02703344 + DAT_027032c4;
    uVar21 = DAT_027033c4;
  }
LAB_004ffc50:
  DAT_00cbec00 = uVar22;
  uVar22 = DAT_00cbec00;
  if ((uVar21 & (DAT_027033d4 ^ 0xffffffff) & 0x1ffff) == 0) goto LAB_004fe174;
  goto LAB_004ffc60;
LAB_004fdbe8:
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
    if ((DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_004fe164:
    DAT_027033d4 = DAT_027033d4 | 0x40000;
    uVar22 = DAT_00cbec00;
    DAT_02703388 = DAT_027033c0;
    goto LAB_004fe174;
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
      DAT_02703308 = DAT_028196e4 - iVar13;
    }
    else {
      DAT_02703308 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)DAT_02703308 < 2) {
        DAT_02703308 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if (((int)DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_02703308 + DAT_027033c0;
    }
    goto LAB_004fe164;
  }
  uVar22 = DAT_00cbec00 & 0xfffffffb;
  if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
     (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_004fe174;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    DAT_00cbec00 = uVar22;
    FUN_005d9ad0();
    uVar22 = DAT_00cbec00;
    goto LAB_004fe174;
  }
  DAT_02706280 = 0;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar21 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_00506034;
      uVar21 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar21 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00505fa8:
        bVar12 = uVar22 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar22 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_00505fa8;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 != 0) goto LAB_00505fe0;
LAB_00506000:
        bVar11 = false;
      }
      else {
        if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0)) goto LAB_00506000;
LAB_00505fe0:
        bVar11 = true;
      }
      uVar22 = DAT_00cbec00;
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
        uVar22 = DAT_00cbec00;
      }
    }
  }
LAB_00506034:
  DAT_00cbec00 = uVar22;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar22 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar22 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    FUN_005d9ad0();
    uVar22 = DAT_00cbec00;
    goto LAB_004fe174;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar22 = *DAT_00ca16f0;
      if ((uVar22 >> 10 & 3 | 2) == 2) {
LAB_00506108:
        if (((uVar22 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_00506120;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_00506120:
        uVar22 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar22 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar22 & 0x1f) << 0x18
        ;
        goto LAB_00506154;
      }
      uVar22 = *DAT_00ca16f0;
      uVar21 = uVar22 >> 10 & 3;
      if (((uVar21 == 0) || (uVar21 == 2)) ||
         ((uVar21 == 3 && (((uVar22 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_00506108;
    }
    DAT_02703344 = DAT_027033c0;
    DAT_027033c4 = DAT_027033c4 | 2;
    DAT_027032c4 = 8;
    if ((DAT_02704f28 & 0x40) == 0) {
      DAT_027032c4 = 0x80;
    }
    if (((DAT_02704f28 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_027032c4;
    }
    uVar22 = DAT_00cbec00;
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      uVar22 = DAT_00cbec00 | 8;
    }
    goto LAB_004fe174;
  }
LAB_00506154:
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
    if ((DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703308;
    }
LAB_00506308:
    DAT_027033d4 = DAT_027033d4 | 2;
    uVar22 = DAT_00cbec00;
    goto LAB_004fe174;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_00506308;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar22 = DAT_00cbec00;
  if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
    if ((DAT_00cbec00 >> 0xd & 1) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 0x800;
    }
    if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
      DAT_00cbec00 = DAT_00cbec00 | 0x400;
    }
    FUN_003f7540(5);
    DAT_02706370 = DAT_02706370 + -1;
    uVar22 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      uVar21 = (uVar22 & 0x1f) << 0x18;
      uVar22 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar21;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar21 | 2;
        goto LAB_00506308;
      }
    }
  }
  DAT_00cbec00 = uVar22;
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
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    }
    uVar21 = DAT_027033c0;
    if (((DAT_00cbec00 >> 3 & 1) != 0) &&
       (uVar22 = DAT_00cbec00, uVar21 = DAT_027033c0, DAT_00ca1630 != 0)) goto LAB_004fe174;
    goto joined_r0x005068e8;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar22 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar22 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar22 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00506eec:
          bVar12 = uVar22 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar22 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00506eec;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00506f24;
LAB_00506f50:
          bVar11 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00506f50;
LAB_00506f24:
          bVar11 = true;
        }
        if (bVar11 || !bVar12) goto LAB_00506f70;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_00506f70:
    DAT_02706280 = 0;
    FUN_003f75f0(1);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    uVar22 = DAT_00cbec00;
    goto LAB_004fe174;
  }
  uVar22 = DAT_00cbec00;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004fe174;
  if ((int)DAT_00cc4030 < 0) {
    uVar20 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00506f98:
    puVar32 = (uint *)(DAT_00ccb000 + uVar20 + 0x2000000);
  }
  else {
    uVar20 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar20 >> 0x19 == 0) {
      puVar32 = (uint *)(DAT_00ccb000 + uVar20);
    }
    else if (uVar20 >> 0x1c == 0) {
      puVar32 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar20 < 0x10004000) {
        uVar20 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_00506f98;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar32 = (uint *)0x0;
    }
  }
  uVar20 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar32);
  if ((uVar20 & 1) == 0) goto LAB_00507350;
  DAT_00cc4010 = puVar32[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar32 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_00507350;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar32 + 2);
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
    uVar20 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar20 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_00507350;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar32 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x00507310;
  case 1:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4030;
    break;
  case 2:
    uVar22 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  default:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4010;
    break;
  case 5:
    uVar22 = DAT_00cc4030 + 0x10;
    uVar21 = DAT_00cc4000 >> 4 & 3;
    if (uVar21 == 1) {
      DAT_00cc4050 = uVar22 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar21 != 0) {
        DAT_00cc4010 = uVar22;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00507310;
      }
      DAT_00cc4040 = uVar22 + DAT_00cc4020 * 0x10;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4000 >> 4 & 3;
    if (uVar22 == 2) {
      puVar29 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar22 != 1) goto code_r0x00507310;
      puVar29 = (uint *)&DAT_00cc4040;
    }
    DAT_00cc4030 = *puVar29;
    *puVar29 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    uVar22 = DAT_00cc4010;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x00507310:
    DAT_02706374 = DAT_02706374 | 1;
    uVar22 = DAT_00cc4010;
  }
  DAT_00cc4010 = uVar22;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar32 < 0)) {
    DAT_02706374 = 1;
  }
LAB_00507350:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar22 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar22 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar22 & 0x1f) << 0x18;
  }
  uVar21 = DAT_027033c0;
  if (((DAT_00cbec00 >> 3 & 1) == 0) ||
     (uVar22 = DAT_00cbec00, uVar21 = DAT_027033c0, DAT_00ca1630 == 0)) {
joined_r0x005068e8:
    DAT_02703344 = uVar21;
    uVar22 = DAT_00cbec00;
    DAT_027033c0 = DAT_02703344;
    if (DAT_02706381 == '\0') {
      DAT_027033c4 = DAT_027033c4 | 2;
      DAT_027032c4 = DAT_02706280;
      if ((DAT_02704f28 & 0x40) != 0) {
        DAT_027032c4 = 8;
      }
      if (((int)DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
        DAT_027033dc = DAT_02703344 + DAT_027032c4;
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
      if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
        DAT_02702540 = DAT_02702540 + DAT_02702544;
        DAT_02702544 = 0;
      }
      if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
        DAT_027033dc = DAT_02703344 + DAT_027032c4;
      }
    }
  }
LAB_004fe174:
  DAT_00cbec00 = uVar22;
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
            uVar21 = DAT_00cab0a0;
            uVar22 = DAT_02704648;
            if (DAT_0270465d == '\0') {
              bVar12 = false;
            }
            else {
              if ((int)DAT_02704650 < 0x80) {
                if ((int)DAT_02704668 < 1) {
                  if (DAT_0270465c != '\0') goto LAB_004fe8d0;
                  DAT_02704670 = (int)DAT_0270466c._3_1_;
                  DAT_02704668 = (uint)DAT_00cab0a4 * (uint)DAT_00cab0a6;
                  bVar12 = true;
                  DAT_0270465c = '\x01';
                  goto joined_r0x004fe8a4;
                }
                uVar22 = 0x80 - DAT_02704650;
                if (DAT_02704668 <= 0x80 - DAT_02704650) {
                  uVar22 = DAT_02704668;
                }
                pvVar14 = (void *)(DAT_00cba000 + ((ulong)DAT_00cab0a0 & 0x1fffff));
                if ((int)DAT_02704650 < 4) {
                  uVar24 = uVar22;
                  if (4 - DAT_02704650 <= uVar22) {
                    uVar24 = 4 - DAT_02704650;
                  }
                  memcpy((void *)((long)(int)DAT_02704650 * 4 + 0x2704638),pvVar14,
                         (ulong)(uVar24 << 2));
                }
                uVar24 = uVar22;
                if ((int)(0x80 - DAT_0270464c) <= (int)uVar22) {
                  uVar24 = 0x80 - DAT_0270464c;
                }
                memcpy(&DAT_02704438 + (long)(int)DAT_0270464c * 4,pvVar14,(long)(int)(uVar24 << 2))
                ;
                __memcpy_chk(&DAT_02704438,(void *)((long)pvVar14 + (long)(int)uVar24 * 4),
                             (long)(int)((uVar22 - uVar24) * 4),0x244);
                DAT_00cab0a0 = uVar21 + uVar22 * 4;
                DAT_0270464c = DAT_0270464c + uVar22 & 0x7f;
                DAT_02704650 = DAT_02704650 + uVar22;
                DAT_02704660 = DAT_02704660 + (uVar22 >> 2);
                DAT_02704668 = DAT_02704668 - uVar22;
                if (DAT_02704668 == 0) {
                  DAT_00cab0a0 = DAT_0270466c & 0xffffff;
                }
                if (0 < (int)DAT_02704650) {
                  DAT_00cb9300 = DAT_00cb9300 & 0xfbffffff;
                }
LAB_004fe960:
                bVar12 = true;
              }
              else {
                bVar12 = false;
                if ((DAT_0270465c != '\0') && (DAT_02704668 == 0)) {
LAB_004fe8d0:
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
                  if (DAT_02702544 < 0) {
                    iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                    iVar25 = DAT_027033dc - DAT_027033c0;
                    if (iVar25 != iVar13 &&
                        iVar25 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar25,iVar13))
                    {
                      DAT_027033dc = DAT_027033c0 + iVar13;
                    }
                  }
                  goto LAB_004fe960;
                }
              }
              uVar22 = DAT_02704648;
            }
joined_r0x004fe8a4:
            DAT_02704648 = uVar22;
            if ((DAT_02704655 != '\0') &&
               ((3 < (int)DAT_02704650 || ((DAT_02704654 != '\0' && (DAT_00cc7820 == 0)))))) {
              if ((DAT_00cc7800 >> 8 & 1) == 0) {
                _DAT_02704654 = 0;
              }
              else {
                if (DAT_00cc7820 != 0) {
joined_r0x004fe9a4:
                  bVar12 = true;
                  if ((DAT_00cc7820 != 0) && (bVar12 = true, 0 < (int)DAT_02704650)) {
                    uVar22 = DAT_02704650 >> 2;
                    if ((int)DAT_00cc7820 <= (int)(DAT_02704650 >> 2)) {
                      uVar22 = DAT_00cc7820;
                    }
                    pvVar14 = (void *)FUN_003d1c90(&DAT_00cc7800,DAT_00cc7810,7,1);
                    if (pvVar14 != (void *)0x0) {
                      iVar13 = uVar22 * 4;
                      if (0 < iVar13) {
                        iVar17 = 0x80 - DAT_02704648;
                        iVar25 = iVar13;
                        if (iVar17 == iVar13 ||
                            (int)(iVar17 + uVar22 * -4) < 0 != SBORROW4(iVar17,iVar13)) {
                          iVar25 = iVar17;
                        }
                        memcpy(pvVar14,&DAT_02704438 + (long)(int)DAT_02704648 * 4,
                               (long)(iVar25 << 2));
                        memcpy((void *)((long)pvVar14 + (long)iVar25 * 4),&DAT_02704438,
                               (long)((iVar13 - iVar25) * 4));
                        DAT_02704648 = DAT_02704648 + iVar13 & 0x7f;
                        DAT_02704650 = DAT_02704650 + uVar22 * -4;
                      }
                      DAT_02704658 = DAT_02704658 + uVar22;
                      DAT_00cc7810 = DAT_00cc7810 + uVar22 * 0x10;
                      DAT_00cc7820 = DAT_00cc7820 - uVar22;
                    }
                    bVar12 = true;
                  }
                  goto LAB_004fe754;
                }
                uVar21 = DAT_00cc7800 & 0xffff;
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
                  if ((DAT_027032dc < 0x1d) && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  DAT_0270335c = DAT_027033c0;
                  if (DAT_027032dc < (int)(DAT_027033dc - DAT_027033c0)) {
                    DAT_027033dc = DAT_027033c0 + DAT_027032dc;
                  }
                }
                else {
                  uVar24 = DAT_02704650 - 4;
                  if (3 < (int)DAT_02704650) {
                    iVar13 = 0x80 - uVar22;
                    if (3 < iVar13) {
                      iVar13 = 4;
                    }
                    __memcpy_chk(&DAT_02704680,&DAT_02704438 + (long)(int)uVar22 * 4,
                                 (long)(iVar13 * 4),0x10);
                    memcpy(&DAT_02704680 + iVar13,&DAT_02704438,(long)(iVar13 * -4 + 0x10));
                    DAT_02704648 = uVar22 + 4 & 0x7f;
                    DAT_00cc7800 = DAT_02704680 & 0xffff0000 | uVar21;
                    DAT_00cc7820 = DAT_02704680 & 0xffff;
                    DAT_00cc7810 = DAT_02704684;
                    DAT_02704650 = uVar24;
                    if ((((uint)((int)DAT_02704680 < 0) & uVar21 >> 7) != 0) ||
                       ((DAT_02704680 & 0x70000000) == 0x70000000)) {
                      _DAT_02704654 = CONCAT11(DAT_02704655,1);
                    }
                    goto joined_r0x004fe9a4;
                  }
                }
              }
              bVar12 = true;
            }
LAB_004fe754:
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
        DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x8c);
        DAT_02b5bb5c = 6;
        bVar23 = DAT_02b5bb5d | 6;
        DAT_02b5bbbc = 0;
        if ((int)DAT_02b5bbb4 == 0) {
          DAT_02b6bc2c = 1;
          DAT_02b5bbd0 = 0;
          DAT_02b5bbb4 = 0x100000001;
          DAT_02b5bbac = DAT_02b6bc20;
        }
        if (DAT_02b6bc39 == '\0') {
          if (DAT_02b5bbac < DAT_02b6bc24) {
            DAT_02b5bb5d = bVar23;
            if (DAT_02b5bbb4._4_4_ == 0) {
LAB_004fed34:
              if ((DAT_02b5bbb0 < 1) || (DAT_02b6bc38 == 0)) {
                if (0 < DAT_02b5bbb0) {
                  iVar13 = DAT_02b5bbc4 + 3;
                  if (-1 < DAT_02b5bbc4) {
                    iVar13 = DAT_02b5bbc4;
                  }
                  DAT_027025ec = (iVar13 >> 2) * 0xc;
                  if (((DAT_02704f20 & 1) != 0) && (DAT_02b5bbc4 - 4U < 0xfffffff9))
                  goto LAB_004ffb74;
                  goto LAB_004ffb94;
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
              }
              else {
                iVar13 = FUN_00898660();
                if (iVar13 == -1) {
                  DAT_02b5bb5c = 10;
                  DAT_02b5bb5d = DAT_02b5bb5d | 10;
                  DAT_02b5bbbc = 1;
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
                    if (DAT_02702544 < 0) {
                      iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                      iVar25 = DAT_027033dc - DAT_027033c0;
                      if (iVar25 != iVar13 &&
                          iVar25 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar25,iVar13)
                         ) {
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
                goto LAB_004fed34;
              }
              if (DAT_02b5bbcc <= DAT_02b5bbd0) {
                DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
                FUN_009887f0(&PTR_FUN_00c9aa28,"CDVD READ ERROR, sector = 0x%08x");
                goto LAB_004fe374;
              }
              if (DAT_02b5bbc0 < 4) {
                DAT_02b5b110 = *(undefined4 *)(&DAT_0022b370 + (long)(int)DAT_02b5bbc0 * 4);
              }
              DAT_02b5b114 = DAT_02b5bbac;
              DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
              DAT_02b5bbd4 = (**(code **)(DAT_02b5bb48 + 0x10))(DAT_02b5bbac);
              DAT_027025ec = DAT_02b6bc28;
              if (((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) {
LAB_004ffb74:
                if (DAT_027025ec < DAT_02b5bb50) {
                  DAT_027025ec = (int)((float)DAT_027025ec * 0.5);
                }
              }
LAB_004ffb94:
              DAT_0270256c = DAT_02702530;
              DAT_02702534 = DAT_02702534 | 0x200;
              if ((int)DAT_027025ec < DAT_0270253c - DAT_02702530) {
                DAT_0270253c = DAT_02702530 + DAT_027025ec;
              }
              if (DAT_02702544 < 0) {
                iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                iVar25 = DAT_027033dc - DAT_027033c0;
                if (iVar25 != iVar13 &&
                    iVar25 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar25,iVar13)) {
                  DAT_027033dc = DAT_027033c0 + iVar13;
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
            }
          }
        }
        else {
          DAT_02b5bb5d = bVar23;
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
LAB_004fe374:
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
          if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50)) {
            DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
          }
          DAT_02702534 = DAT_02702534 | 0x400;
          DAT_02702570 = DAT_02702530;
          if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
            DAT_0270253c = DAT_027025f0 + DAT_02702530;
          }
          if (DAT_02702544 < 0) {
            iVar13 = (DAT_0270253c - DAT_02702530) * 8;
            iVar25 = DAT_027033dc - DAT_027033c0;
            if (iVar25 != iVar13 &&
                iVar25 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar25,iVar13)) {
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
          goto joined_r0x004ff294;
        }
        uVar22 = DAT_02702534 & 0xfffffffd;
        switch(DAT_02b6bc1d) {
        case 1:
          DAT_02b6bc2c = 1;
          DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
          DAT_02b5bb5c = 10;
          DAT_02b5bbac = DAT_02b6bc20;
          DAT_02b5bb5d = DAT_02b5bb5d | 10;
          DAT_02b6bc38 = 0;
          uVar21 = DAT_02702534 >> 10;
          DAT_02702534 = uVar22;
          if ((uVar21 & 1) == 0) {
            DAT_027025f0 = DAT_02b6bc28;
            if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50))
            {
              DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
            }
            DAT_02702534 = uVar22 | 0x400;
            DAT_02702570 = DAT_02702530;
            if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
              DAT_0270253c = DAT_027025f0 + DAT_02702530;
            }
            if (DAT_02702544 < 0) {
              iVar13 = (DAT_0270253c - DAT_02702530) * 8;
              iVar25 = DAT_027033dc - DAT_027033c0;
              if (iVar25 != iVar13 &&
                  iVar25 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar25,iVar13)) {
                DAT_027033dc = DAT_027033c0 + iVar13;
              }
            }
          }
          goto code_r0x004ff170;
        case 2:
          DAT_02b6bc2c = 1;
          DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
          DAT_02b5bb5c = 10;
          DAT_02b5bbac = DAT_02b6bc20;
          DAT_02b5bb5d = DAT_02b5bb5d | 10;
          DAT_02b6bc38 = 0;
          if ((DAT_02702534 >> 10 & 1) == 0) {
            DAT_027025f0 = DAT_02b6bc28;
            if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50))
            {
              DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
            }
            uVar22 = uVar22 | 0x400;
            DAT_02702570 = DAT_02702530;
            if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
              DAT_0270253c = DAT_027025f0 + DAT_02702530;
            }
            if (DAT_02702544 < 0) {
              iVar13 = (DAT_0270253c - DAT_02702530) * 8;
              iVar25 = DAT_027033dc - DAT_027033c0;
              if (iVar25 != iVar13 &&
                  iVar25 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar25,iVar13)) {
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
        DAT_02702534 = uVar22;
        DAT_02b6bc1d = 0;
code_r0x004ff170:
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
joined_r0x004ff294:
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
  }
  if (((DAT_00cab078 == 0) || ((DAT_00cab074 & DAT_00cab070) == 0)) ||
     ((DAT_027023d8 & 0xfe01) < 0x401)) {
    if (DAT_02702308 != '\0') goto LAB_004ff61c;
  }
  else {
    uVar38 = 0x80000080;
    if ((DAT_027023d8 & 0x400000) != 0) {
      uVar38 = 0xbfc00180;
    }
    DAT_027023d8 = DAT_027023d8 & 0xffffffc0 | (DAT_027023d8 & 0xf) << 2;
    DAT_027023dc = DAT_027023dc & 0xffffff80;
    DAT_027023e0 = DAT_02702528;
    DAT_02702308 = '\x01';
    DAT_02702528 = uVar38;
LAB_004ff61c:
    DAT_02702654 = (**(code **)(DAT_02702310 + 0x10))(DAT_02702654);
    DAT_02702308 = '\0';
  }
  iVar13 = (int)DAT_02704e08[1];
  uVar22 = 0x100;
  if (iVar13 == 0) {
    uVar22 = 1;
  }
  if (((iVar13 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)) {
    if ((_DAT_02819070 & uVar22) != 0) {
      piVar28 = &DAT_028190d4;
      if (iVar13 != 0) {
        piVar28 = &DAT_028196e4;
      }
      uVar22 = DAT_027033c0 - *piVar28;
      if (0 < (int)uVar22) {
        if (uVar22 < 0x11) {
          uVar22 = 0x10;
        }
        (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar22);
      }
    }
    iVar13 = (int)DAT_02704e00[1];
    if (iVar13 != 0) goto LAB_004ff6e4;
    uVar22 = 1;
LAB_004ff73c:
    if ((_DAT_02819070 & uVar22) != 0) {
      piVar28 = &DAT_028190d4;
      if (iVar13 != 0) {
        piVar28 = &DAT_028196e4;
      }
      uVar22 = DAT_027033c0 - *piVar28;
      if (0 < (int)uVar22) {
        if (uVar22 < 0x11) {
          uVar22 = 0x10;
        }
        (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar22);
      }
    }
  }
  else {
    FUN_005b1f50(&DAT_01701a00);
    iVar13 = (int)DAT_02704e00[1];
    if (iVar13 == 0) {
      uVar22 = 1;
      goto LAB_004ff73c;
    }
LAB_004ff6e4:
    uVar22 = 0x100;
    if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_004ff73c;
    FUN_005b1f50(&DAT_01701a00);
  }
  uVar20 = (ulong)DAT_027033dc;
  iVar13 = DAT_027033dc - DAT_027033c0;
  if ((0xc0 < DAT_02702654) && (0x30 < iVar13)) {
    DAT_027033dc = DAT_027033c0 + 0x30;
    uVar20 = (ulong)DAT_027033dc;
    iVar13 = 0x30;
  }
  iVar25 = (DAT_0270253c - DAT_02702530) * 8 - DAT_02702654;
  if (iVar13 <= iVar25) goto LAB_004ff850;
  DAT_027033dc = iVar25 + DAT_027033c0;
  uVar20 = (ulong)DAT_027033dc;
  if (DAT_00ca11d8 < (int)(DAT_027033dc - DAT_00ca11d4)) goto LAB_004ff868;
LAB_004ff804:
  if ((int)((int)uVar20 - DAT_00ca11c8) <= DAT_00ca11cc) goto LAB_004ff888;
  while (DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8, DAT_00ca77c8 == '\x01') {
    while( true ) {
      DAT_027026e8 = 0;
      DAT_00ca77c8 = '\0';
      fastjmp_jmp(&DAT_00ca77d0,1);
      uVar20 = extraout_x8;
      lVar19 = extraout_x14;
LAB_004ff850:
      if ((int)((int)uVar20 - DAT_00ca11d4) <= DAT_00ca11d8) goto LAB_004ff804;
LAB_004ff868:
      DAT_027033dc = DAT_00ca11d8 + DAT_00ca11d4;
      if (DAT_00ca11cc < (int)(DAT_027033dc - DAT_00ca11c8)) break;
LAB_004ff888:
      if (DAT_00ca77c8 != '\x01') goto LAB_004ff8a0;
    }
  }
LAB_004ff8a0:
  DAT_027026e8 = 0;
  lVar19 = *(long *)(lVar19 + 0x28);
LAB_004ff8a4:
  if (lVar19 != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

