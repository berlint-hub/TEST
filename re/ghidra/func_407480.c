// vaddr 0x407480  ghidra 0x507480  name=FUN_00507480  size=48872 instr-addr
// duvod: data 0xB9AA28 (33 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507480(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  void *pvVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  ulong uVar18;
  ulong extraout_x8;
  long lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  int *piVar28;
  int *piVar29;
  uint *puVar30;
  undefined *puVar31;
  long extraout_x14;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  timespec local_88;
  long local_78;
  
  iVar12 = DAT_027033c8;
  uVar23 = DAT_02703250;
  lVar19 = tpidr_el0;
  local_78 = *(long *)(lVar19 + 0x28);
  if (*(long *)(&DAT_02703000 + ((ulong)(DAT_027032ac >> 0x15) & 0x1f) * 0x10) !=
      *(long *)(&DAT_02703000 + ((ulong)(DAT_027032ac >> 0x10) & 0x1f) * 0x10)) {
    FUN_004ed550(DAT_027032a8 + ((int)(DAT_027032ac << 0x10) >> 0xe));
    lVar19 = *(long *)(lVar19 + 0x28);
    goto LAB_0050c89c;
  }
  DAT_027026e8 = '\x01';
  DAT_027033dc = DAT_027033c0 + 0xc00;
  DAT_027033e0 = DAT_027033c0;
  uVar22 = DAT_00cca000;
  if (DAT_00cca000 != 0) {
    if ((DAT_00cca010 & DAT_00cca000) == 0) {
      uVar22 = 0;
    }
    else {
      if ((DAT_00cca000 >> 1 & 1) != 0) {
        DAT_00ca1164 = DAT_00ca1158;
        if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
          uVar22 = 0;
          if (DAT_00ca1168 != 0) {
            uVar22 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
          }
          DAT_00ca1164 = uVar22 + DAT_00ca1158;
        }
        DAT_00ca1180 = DAT_00ca1174;
        if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
          uVar22 = 0;
          if (DAT_00ca1184 != 0) {
            uVar22 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
          }
          DAT_00ca1180 = uVar22 + DAT_00ca1174;
        }
      }
      uVar22 = 0x400;
    }
  }
  if (((ushort)DAT_00cc9010 & (DAT_00cc9010._2_2_ | 0x8000)) != 0) {
    uVar25 = 0;
    if (DAT_00cca520._2_1_ != 1 && (_DAT_00cc9000 & 1) != 0) {
      uVar25 = 0x800;
    }
    uVar22 = uVar25 | uVar22;
  }
  if (((((DAT_02703250 & uVar22) != 0) && ((DAT_02703250 >> 0x10 & 1) != 0)) &&
      ((DAT_02703250 & 1) != 0)) &&
     (((DAT_02703250 >> 1 & 1) == 0 && ((DAT_02703250 >> 2 & 1) == 0)))) {
    DAT_027033c8 = 0;
    DAT_02703250 = DAT_02703250 | 2;
    if (iVar12 == 0) {
      DAT_02703258 = DAT_027032a8;
    }
    else {
      DAT_02703254 = uVar22;
      FUN_00988960(&PTR_FUN_00c9aa28,"branch delay!!");
      DAT_02703258 = DAT_027032a8 - 4;
      uVar22 = DAT_02703254 | 0x80000000;
    }
    DAT_02703254 = uVar22;
    DAT_027032a8 = 0x80000200;
    if ((uVar23 & 0x400000) != 0) {
      DAT_027032a8 = 0xbfc00400;
    }
  }
  uVar23 = DAT_00ca1104;
  uVar22 = DAT_027033c0;
  if (DAT_00ca11cc <= (int)(DAT_027033c0 - DAT_00ca11c8)) {
    if (DAT_00ca1108 <= (int)(DAT_027033c0 - DAT_00ca1104)) {
      if (DAT_00ca1100 == 2) {
        uVar23 = DAT_00ca2710 ^ 0x2000;
        DAT_00ca2710 = DAT_00ca2710 | 0x2000;
        if ((DAT_00ca1720 & 0x6000) != 0 && (DAT_00ca1770 & 1) != 0) {
          DAT_00ca2710 = uVar23;
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
              uVar22 = uVar23;
            }
            else {
              uVar22 = DAT_027033c0;
              if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_00507dec;
            }
            DAT_00ca115c = DAT_00ca115c | 0x80;
            DAT_00ca1170 = uVar22;
          }
LAB_00507dec:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
              uVar22 = uVar23;
            }
            else {
              uVar22 = DAT_027033c0;
              if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_00507e4c;
            }
            DAT_00ca1178 = DAT_00ca1178 | 0x80;
            DAT_00ca118c = uVar22;
          }
LAB_00507e4c:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
              uVar22 = uVar23;
            }
            else {
              uVar22 = DAT_027033c0;
              if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_00507eac;
            }
            DAT_00ca1194 = DAT_00ca1194 | 0x80;
            DAT_00ca11a8 = uVar22;
          }
LAB_00507eac:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            else {
              uVar23 = DAT_027033c0;
              if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_00507f08;
            }
            DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
            DAT_00ca11c4 = uVar23;
          }
        }
LAB_00507f08:
        if (((uint)(DAT_00ca11dc * -0x11111111) >> 2 | DAT_00ca11dc * -0x40000000) < 0x4444445) {
          FUN_005d2150();
        }
        DAT_00ca1104 = DAT_00ca1104 + DAT_00ca1120;
        DAT_00ca1108 = DAT_00ca111c;
        DAT_00ca1100 = 0;
      }
      else {
        if (DAT_0281a575 == '\0') {
          bVar11 = DAT_00ca1150 != '\0';
          if (DAT_0281a574 != '\0') {
            cVar17 = DAT_00ca1150;
            if (60000000 < (int)(DAT_027033c0 - DAT_0281a570)) {
              cVar17 = '\0';
              DAT_0281a574 = '\0';
            }
            bVar11 = cVar17 != '\0';
          }
        }
        else {
          DAT_0281a575 = '\0';
          bVar11 = true;
        }
        if ((bool)DAT_00ca1150 != bVar11) {
          if ((DAT_02704e49 - 1 < 3) && (DAT_027051e0 = DAT_02704e49, bVar11 == false)) {
            DAT_027051e0 = DAT_02704e48;
          }
          DAT_00ca1150 = bVar11;
          if ((DAT_02704f28 >> 3 & 1) != 0) {
            if (((DAT_0281ce7c != '\r') && (DAT_0281ce7c != '\v')) ||
               ((DAT_00ca1154 != '\0' && (DAT_0281ce7c == '\r')))) {
              DAT_00ca1154 = DAT_0281ce7c != '\v' && DAT_0281ce7c != '\r';
              uVar3 = 0xd;
              if (bVar11 == false) {
                uVar3 = DAT_02704e64;
              }
              FUN_005b0140(&DAT_0c7adff0,uVar3,0);
              goto LAB_00507a90;
            }
          }
          DAT_00ca1154 = '\0';
        }
LAB_00507a90:
        FUN_00916070();
        FUN_008cd720();
        uVar18 = 0;
        do {
          lVar27 = 0;
          do {
            if (((&DAT_0c728f8d)[uVar18 * 0x280 + lVar27 * 0x28] != '\0') &&
               (iVar12 = (&DAT_0c728f84)[lVar27 * 10 + uVar18 * 0xa0], iVar12 != 0)) {
              piVar29 = &DAT_0c728f88 + lVar27 * 10 + uVar18 * 0xa0;
              iVar26 = *piVar29;
              *piVar29 = iVar26 + -1;
              if (iVar26 + -1 == 0) {
                *piVar29 = iVar12;
                puVar14 = &DAT_0c728f68 + uVar18 * 0x50 + lVar27 * 5;
                bVar24 = *(byte *)((long)puVar14 + 0x24);
                *(byte *)((long)puVar14 + 0x24) = bVar24 ^ 1;
                uVar38 = 0;
                if (bVar24 == 0) {
                  uVar38 = *(undefined4 *)(puVar14 + 3);
                }
                puVar20 = (undefined4 *)puVar14[1];
                for (puVar21 = (undefined4 *)*puVar14; puVar21 != puVar20; puVar21 = puVar21 + 1) {
                  FUN_008ca230(uVar38,&DAT_0c72a368,uVar18 & 0xffffffff,*puVar21);
                }
              }
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 != 0x10);
          uVar18 = uVar18 + 1;
        } while (uVar18 != 8);
        uVar18 = DAT_00ca1140;
        if ((DAT_02704e3c != 0.0) && (DAT_00ca114c == '\0')) {
          uVar18 = DAT_00ca1138 + DAT_00ca1140;
          clock_gettime(1,&local_88);
          lVar27 = (local_88.tv_nsec - uVar18) + local_88.tv_sec * 1000000000;
          if (lVar27 < DAT_00ca1138) {
            if (1 < (int)(SUB168(SEXT816(lVar27) * SEXT816(-0x431bde82d7b634db),8) >> 0x12) -
                    (SUB164(SEXT816(lVar27) * SEXT816(-0x431bde82d7b634db),0xc) >> 0x1f)) {
              local_88.tv_sec = uVar18 / 1000000000;
              local_88.tv_nsec = uVar18 % 1000000000;
              clock_nanosleep(1,1,&local_88,(timespec *)0x0);
            }
          }
          else {
            lVar7 = 0;
            if (DAT_00ca1138 != 0) {
              lVar7 = lVar27 / DAT_00ca1138;
            }
            uVar18 = DAT_00ca1140 + lVar7 * DAT_00ca1138;
          }
        }
        DAT_00ca1140 = uVar18;
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
            uVar5 = DAT_00ca115c >> 4 & 3;
            if ((uVar5 == 3) || (uVar5 == 1)) {
              DAT_00ca115c = DAT_00ca115c | 0x80;
              DAT_00ca1158 = 0;
              DAT_00ca1160 = DAT_00ca1160 & 0xffff;
            }
            else {
              if (uVar5 != 0) goto LAB_00507f7c;
              if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
                uVar22 = 0;
                if (DAT_00ca1168 != 0) {
                  uVar22 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
                }
                DAT_00ca1158 = uVar22 + DAT_00ca1158;
              }
              DAT_00ca115c = DAT_00ca115c & 0xff7f;
            }
            DAT_00ca1170 = uVar23;
          }
LAB_00507f7c:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            uVar5 = DAT_00ca1178 >> 4 & 3;
            if (uVar5 == 0) {
              if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
                uVar22 = 0;
                if (DAT_00ca1184 != 0) {
                  uVar22 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
                }
                DAT_00ca1174 = uVar22 + DAT_00ca1174;
              }
              DAT_00ca1178 = DAT_00ca1178 & 0xff7f;
            }
            else {
              if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_00508014;
              DAT_00ca1178 = DAT_00ca1178 | 0x80;
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
            }
            DAT_00ca118c = uVar23;
          }
LAB_00508014:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            uVar5 = DAT_00ca1194 >> 4 & 3;
            if (uVar5 == 0) {
              if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
                uVar22 = 0;
                if (DAT_00ca11a0 != 0) {
                  uVar22 = (DAT_027033c0 - DAT_00ca11a8) / DAT_00ca11a0;
                }
                DAT_00ca1190 = uVar22 + DAT_00ca1190;
              }
              DAT_00ca1194 = DAT_00ca1194 & 0xff7f;
            }
            else {
              if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_005080ac;
              DAT_00ca1194 = DAT_00ca1194 | 0x80;
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            }
            DAT_00ca11a8 = uVar23;
          }
LAB_005080ac:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            uVar5 = DAT_00ca11b0 >> 4 & 3;
            if (uVar5 == 0) {
              if (((DAT_00ca11b0 >> 7 & 1) != 0) && ((DAT_00ca11b0 & 3) != 3)) {
                uVar22 = 0;
                if (DAT_00ca11bc != 0) {
                  uVar22 = (DAT_027033c0 - DAT_00ca11c4) / DAT_00ca11bc;
                }
                DAT_00ca11ac = uVar22 + DAT_00ca11ac;
              }
              DAT_00ca11b0 = DAT_00ca11b0 & 0xff7f;
            }
            else {
              if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_00508144;
              DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            DAT_00ca11c4 = uVar23;
          }
        }
LAB_00508144:
        DAT_00ca1104 = DAT_00ca1104 + DAT_00ca111c;
        DAT_00ca1100 = 2;
        DAT_00ca1108 = DAT_00ca1124;
        DAT_00ca11d4 = DAT_00ca11d4 + DAT_00ca1128;
      }
    }
    DAT_00ca11c8 = DAT_027033c0;
    uVar15 = DAT_02703250;
    cVar17 = DAT_027026e8;
    uVar2 = DAT_00cca010;
    iVar26 = DAT_00ca1108;
    uVar1 = DAT_00ca1104;
    lVar27 = 0;
    uVar22 = DAT_02703250 & 0x10407;
    uVar23 = DAT_027033c0 + 4;
    uVar32 = DAT_00cca000;
    uVar25 = DAT_027033dc;
    iVar12 = DAT_02702540;
    iVar16 = DAT_02702544;
    do {
      uVar5 = *(ushort *)((long)&DAT_00ca115c + lVar27);
      uVar37 = (uint)uVar5;
      if ((uVar5 >> 7 & 1) != 0) {
        if ((~uVar5 & 3) == 0) {
          *(uint *)((long)&DAT_00ca1170 + lVar27) = DAT_00ca11c8;
        }
        else {
          uVar34 = DAT_00ca11c8 - *(int *)((long)&DAT_00ca1170 + lVar27);
          uVar34 = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
          uVar36 = *(uint *)((long)&DAT_00ca1168 + lVar27);
          uVar4 = 0;
          if (uVar36 != 0) {
            uVar4 = uVar34 / uVar36;
          }
          uVar35 = *(uint *)((long)&DAT_00ca1158 + lVar27) + uVar4;
          *(uint *)((long)&DAT_00ca1158 + lVar27) = uVar35;
          *(uint *)((long)&DAT_00ca1170 + lVar27) = DAT_00ca11c8 + (uVar4 * uVar36 - uVar34);
          uVar34 = *(uint *)((long)&DAT_00ca1160 + lVar27);
          if (uVar34 <= uVar35) {
            if ((uVar5 & 0x500) == 0x100) {
              uVar37 = uVar5 | 0x400;
              *(short *)((long)&DAT_00ca115c + lVar27) = (short)uVar37;
              uVar36 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar27) & 0x1f);
              uVar32 = uVar36 | uVar32;
              DAT_00cca000 = uVar32;
              if ((((uVar36 & uVar2) != 0) && (uVar22 == 0x10401)) && ((uVar32 & uVar2) != 0)) {
                if (4 < (int)(uVar25 - DAT_00ca11c8)) {
                  uVar25 = uVar23;
                  DAT_027033dc = uVar23;
                }
                if ((cVar17 != '\0') && (0 < iVar16)) {
                  iVar12 = iVar16 + iVar12;
                  DAT_02702544 = 0;
                  iVar16 = 0;
                  DAT_02702540 = iVar12;
                }
              }
            }
            if ((uVar37 >> 6 & 1) == 0) {
              uVar34 = uVar34 | 0x10000000;
              *(uint *)((long)&DAT_00ca1160 + lVar27) = uVar34;
            }
            else {
              *(uint *)((long)&DAT_00ca1158 + lVar27) = uVar35 - uVar34;
              uVar35 = uVar35 - uVar34;
            }
          }
          if (0xffff < uVar35) {
            if ((uVar37 & 0xa00) == 0x200) {
              *(ushort *)((long)&DAT_00ca115c + lVar27) = (ushort)uVar37 | 0x800;
              uVar37 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar27) & 0x1f);
              uVar32 = uVar37 | uVar32;
              DAT_00cca000 = uVar32;
              if ((((uVar37 & uVar2) != 0) && (uVar22 == 0x10401)) && ((uVar32 & uVar2) != 0)) {
                if (4 < (int)(uVar25 - DAT_00ca11c8)) {
                  uVar25 = uVar23;
                  DAT_027033dc = uVar23;
                }
                if ((cVar17 != '\0') && (0 < iVar16)) {
                  iVar12 = iVar16 + iVar12;
                  DAT_02702544 = 0;
                  iVar16 = 0;
                  DAT_02702540 = iVar12;
                }
              }
            }
            *(uint *)((long)&DAT_00ca1158 + lVar27) = uVar35 - 0x10000;
            *(uint *)((long)&DAT_00ca1160 + lVar27) = uVar34 & 0xffff;
          }
        }
      }
      lVar27 = lVar27 + 0x1c;
    } while (lVar27 != 0x70);
    iVar26 = (uVar1 - DAT_00ca11c8) + iVar26;
    DAT_00ca11cc = (DAT_00ca11d4 - DAT_00ca11c8) + DAT_00ca11d8;
    if (iVar26 <= DAT_00ca11cc) {
      DAT_00ca11cc = iVar26;
    }
    if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
      if ((DAT_00ca1158 < 0x10001) && (DAT_00ca1158 <= DAT_00ca1160)) {
        iVar26 = DAT_00ca1168 * (0x10000 - DAT_00ca1158);
        iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca1170;
        if ((iVar12 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
          uVar25 = iVar26 + DAT_00ca1170;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca1160 >> 0x1c & 1) == 0) {
          iVar26 = DAT_00ca1168 * (DAT_00ca1160 - DAT_00ca1158);
          iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca1170;
          if ((iVar12 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
            uVar25 = iVar26 + DAT_00ca1170;
            DAT_027033dc = uVar25;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
      if ((DAT_00ca1174 < 0x10001) && (DAT_00ca1174 <= DAT_00ca117c)) {
        iVar26 = DAT_00ca1184 * (0x10000 - DAT_00ca1174);
        iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca118c;
        if ((iVar12 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
          uVar25 = iVar26 + DAT_00ca118c;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca117c >> 0x1c & 1) == 0) {
          iVar26 = DAT_00ca1184 * (DAT_00ca117c - DAT_00ca1174);
          iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca118c;
          if ((iVar12 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
            uVar25 = iVar26 + DAT_00ca118c;
            DAT_027033dc = uVar25;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
      if ((DAT_00ca1190 < 0x10001) && (DAT_00ca1190 <= DAT_00ca1198)) {
        iVar26 = DAT_00ca11a0 * (0x10000 - DAT_00ca1190);
        iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca11a8;
        if ((iVar12 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
          uVar25 = iVar26 + DAT_00ca11a8;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca1198 >> 0x1c & 1) == 0) {
          iVar26 = DAT_00ca11a0 * (DAT_00ca1198 - DAT_00ca1190);
          iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca11a8;
          if ((iVar12 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
            uVar25 = iVar26 + DAT_00ca11a8;
            DAT_027033dc = uVar25;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    uVar22 = DAT_00ca11c8;
    if (((DAT_00ca11b0 >> 7 & 1) == 0) || ((DAT_00ca11b0 & 3) == 3)) {
LAB_005086fc:
      if (DAT_00ca11cc < 0) {
        DAT_00ca11cc = 0;
        if (0 < (int)(uVar25 - DAT_00ca11c8)) goto LAB_0050870c;
        goto LAB_005084b8;
      }
      if ((int)(uVar25 - DAT_00ca11c8) <= DAT_00ca11cc) goto LAB_005084b8;
LAB_0050870c:
      DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8;
      if ((uVar15 >> 2 & 1) == 0) goto LAB_00508718;
LAB_00508724:
      DAT_027033e8 = DAT_00ca11c8;
    }
    else {
      if ((DAT_00ca11ac < 0x10001) && (DAT_00ca11ac <= DAT_00ca11b4)) {
        iVar26 = DAT_00ca11bc * (0x10000 - DAT_00ca11ac);
        iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca11c4;
        if ((iVar12 < DAT_00ca11cc) &&
           (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
          uVar25 = iVar26 + DAT_00ca11c4;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca11b4 >> 0x1c & 1) == 0) {
          iVar26 = DAT_00ca11bc * (DAT_00ca11b4 - DAT_00ca11ac);
          iVar12 = (iVar26 - DAT_00ca11c8) + DAT_00ca11c4;
          if ((iVar12 < DAT_00ca11cc) &&
             (DAT_00ca11cc = iVar12, iVar12 < (int)(uVar25 - DAT_00ca11c8))) {
            uVar25 = iVar26 + DAT_00ca11c4;
            DAT_027033dc = uVar25;
          }
        }
        goto LAB_005086fc;
      }
      DAT_00ca11cc = 4;
      if (4 < (int)(uVar25 - DAT_00ca11c8)) goto LAB_0050870c;
LAB_005084b8:
      if ((uVar15 >> 2 & 1) != 0) goto LAB_00508724;
LAB_00508718:
      if (-1 < (int)DAT_027032b0) goto LAB_00508724;
      uVar23 = uVar15 >> 3 & 3;
      if ((((DAT_027032b0 & (4 << (ulong)uVar23 | uVar15 & 2)) != 0) &&
          (uVar25 = DAT_027032b0 >> 5 & 0x1f, uVar25 < 0x10)) &&
         ((1 << (ulong)uVar25 & 0xf00eU) != 0)) {
        iVar12 = DAT_00ca11c8 - DAT_027033e8;
        if (iVar12 == 0) {
          iVar12 = 1;
        }
        DAT_027032b4 = iVar12 + DAT_027032b4;
        DAT_027033e8 = DAT_00ca11c8;
      }
      uVar23 = 1 << (ulong)(uVar23 | 0xc);
      if ((((DAT_027032b0 & (uVar23 & 0xfffff000 | uVar23 & 0x7ff | (uVar15 >> 1 & 1) << 0xb)) == 0)
          || (uVar23 = DAT_027032b0 >> 0xf & 0x1f, 0xf < uVar23)) ||
         ((1 << (ulong)uVar23 & 0xf00eU) == 0)) goto LAB_00508734;
      iVar12 = DAT_00ca11c8 - DAT_027033ec;
      if (iVar12 == 0) {
        iVar12 = 1;
      }
      DAT_027032b8 = iVar12 + DAT_027032b8;
    }
    DAT_027033ec = DAT_00ca11c8;
  }
LAB_00508734:
  cVar17 = DAT_027026e8;
  uVar32 = DAT_00cca010;
  uVar25 = DAT_00ca11d4;
  uVar23 = DAT_00ca1148;
  if (DAT_00ca11d8 <= (int)(uVar22 - DAT_00ca11d4)) {
    piVar29 = &DAT_00ca112c;
    if ((_DAT_00ca11d0 & 1) == 0) {
      if (((((DAT_00ca2710 >> 2 & 1) == 0) &&
           (DAT_00ca2710 = DAT_00ca2710 | 4, (DAT_00ca2720._1_1_ >> 2 & 1) == 0)) &&
          (DAT_00cca000 = DAT_00cca000 | 1, (DAT_00cca010 & 1) != 0)) &&
         (((DAT_02703250 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)))) {
        if (4 < (int)(DAT_027033dc - uVar22)) {
          DAT_027033dc = uVar22 + 4;
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
            uVar23 = DAT_00ca11d4;
          }
          else {
            uVar23 = uVar22;
            if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_00508b88;
          }
          DAT_00ca1170 = uVar23;
          DAT_00ca115c = DAT_00ca115c | 0x80;
        }
LAB_00508b88:
        if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) == 0)) {
          if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
            DAT_00ca1174 = 0;
            DAT_00ca117c = DAT_00ca117c & 0xffff;
            uVar23 = DAT_00ca11d4;
          }
          else {
            uVar23 = uVar22;
            if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_00508be4;
          }
          DAT_00ca118c = uVar23;
          DAT_00ca1178 = DAT_00ca1178 | 0x80;
        }
LAB_00508be4:
        if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) == 0)) {
          if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
            DAT_00ca1190 = 0;
            DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            uVar23 = DAT_00ca11d4;
          }
          else {
            uVar23 = uVar22;
            if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_00508c40;
          }
          DAT_00ca11a8 = uVar23;
          DAT_00ca1194 = DAT_00ca1194 | 0x80;
        }
LAB_00508c40:
        if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) == 0)) {
          if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
            DAT_00ca11ac = 0;
            DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            uVar22 = DAT_00ca11d4;
          }
          else if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_00508c98;
          DAT_00ca11c4 = uVar22;
          DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
        }
      }
LAB_00508c98:
      if (DAT_00ca9904 != '\0') {
        FUN_00584140(0);
      }
      _DAT_00ca11d0 = 1;
      piVar28 = piVar29;
      piVar29 = &DAT_00ca1130;
    }
    else {
      lVar27 = 0;
      uVar1 = uVar22 + 4;
      uVar2 = DAT_02703250 & 0x10407;
      puVar33 = &DAT_00ca1158;
      iVar12 = DAT_02702544;
      uVar15 = DAT_00cca000;
      uVar37 = DAT_027033dc;
      iVar26 = DAT_02702540;
      do {
        uVar5 = (ushort)puVar33[1];
        uVar34 = (uint)uVar5;
        if (((uVar5 ^ 0xffff) & 0x83) == 0) {
          uVar4 = *puVar33;
          uVar36 = uVar4 + 1;
          *puVar33 = uVar36;
          uVar35 = puVar33[2];
          uVar8 = uVar36 - uVar35;
          if (uVar36 < uVar35) {
LAB_0050898c:
            uVar4 = uVar4 - 0xffff;
            uVar8 = uVar36;
          }
          else {
            if ((uVar5 & 0x500) == 0x100) {
              uVar34 = uVar34 | 0x400;
              *(short *)(puVar33 + 1) = (short)uVar34;
              uVar6 = 1 << (ulong)(puVar33[5] & 0x1f);
              DAT_00cca000 = uVar6 | uVar15;
              uVar15 = DAT_00cca000;
              if ((((uVar6 & uVar32) != 0) && (uVar2 == 0x10401)) && ((DAT_00cca000 & uVar32) != 0))
              {
                if (4 < (int)(uVar37 - uVar22)) {
                  DAT_027033dc = uVar1;
                  uVar37 = uVar1;
                }
                if ((cVar17 != '\0') && (0 < iVar12)) {
                  DAT_02702540 = iVar12 + iVar26;
                  DAT_02702544 = 0;
                  iVar12 = 0;
                  iVar26 = DAT_02702540;
                }
              }
            }
            if ((uVar34 >> 6 & 1) == 0) {
              uVar35 = uVar35 | 0x10000000;
              puVar33[2] = uVar35;
              goto LAB_0050898c;
            }
            *puVar33 = uVar8;
            uVar4 = uVar8 - 0x10000;
          }
          if (0xffff < uVar8) {
            if ((uVar34 & 0xa00) == 0x200) {
              uVar34 = uVar34 | 0x800;
              *(short *)(puVar33 + 1) = (short)uVar34;
              uVar36 = 1 << (ulong)(puVar33[5] & 0x1f);
              DAT_00cca000 = uVar36 | uVar15;
              uVar15 = DAT_00cca000;
              if ((((uVar36 & uVar32) != 0) && (uVar2 == 0x10401)) && ((DAT_00cca000 & uVar32) != 0)
                 ) {
                if (4 < (int)(uVar37 - uVar22)) {
                  DAT_027033dc = uVar1;
                  uVar37 = uVar1;
                }
                if ((cVar17 != '\0') && (0 < iVar12)) {
                  DAT_02702540 = iVar12 + iVar26;
                  DAT_02702544 = 0;
                  iVar12 = 0;
                  iVar26 = DAT_02702540;
                }
              }
            }
            *puVar33 = uVar4;
            puVar33[2] = uVar35 & 0xffff;
          }
        }
        if (((uVar23 >> (ulong)((uint)lVar27 & 0x1f) & 1) != 0) && ((uVar34 >> 3 & 1) == 0)) {
          uVar36 = uVar34 >> 4 & 3;
          if ((uVar36 == 3) || (uVar36 == 1)) {
            *(ushort *)(puVar33 + 1) = (ushort)uVar34 | 0x80;
            *puVar33 = 0;
            puVar33[2] = (uint)(ushort)puVar33[2];
          }
          else {
            if (uVar36 != 0) goto LAB_005088e4;
            uVar36 = *puVar33;
            if (((uVar34 >> 7 & 1) != 0) && ((uVar34 & 3) != 3)) {
              uVar4 = 0;
              if (puVar33[4] != 0) {
                uVar4 = (uVar22 - puVar33[6]) / puVar33[4];
              }
              uVar36 = uVar4 + uVar36;
            }
            *puVar33 = uVar36;
            *(ushort *)(puVar33 + 1) = (ushort)uVar34 & 0xff7f;
          }
          puVar33[6] = uVar25;
        }
LAB_005088e4:
        lVar27 = lVar27 + 1;
        puVar33 = puVar33 + 7;
      } while (lVar27 != 4);
      FUN_00583a20(0);
      _DAT_00ca11d0 = 0;
      piVar28 = &DAT_00ca1130;
    }
    DAT_00ca11d4 = *piVar28 + DAT_00ca11d4;
    DAT_00ca11d8 = *piVar29;
    uVar22 = DAT_027033c0;
  }
  DAT_02703244 = DAT_02703244 + (uVar22 - DAT_027033e4);
  DAT_027033e4 = uVar22;
  if (((DAT_02703250._1_1_ < '\0') && (DAT_0270324c <= DAT_02703244)) &&
     (DAT_02703244 < DAT_0270324c + 1000)) {
    FUN_00988670(&PTR_FUN_00c9aa28,5,"timr intr: %x, %x");
    iVar12 = DAT_027033c8;
    uVar23 = DAT_02703250;
    DAT_027033c8 = 0;
    DAT_02703254 = 0x8000;
    if ((DAT_02703250 >> 2 & 1) == 0) {
      if ((DAT_02703250 >> 1 & 1) == 0) {
        DAT_02703250 = DAT_02703250 | 2;
        if (iVar12 == 0) {
          DAT_02703258 = DAT_027032a8;
          DAT_02703254 = 0x8000;
        }
        else {
          FUN_00988960(&PTR_FUN_00c9aa28,"branch delay!!");
          DAT_02703258 = DAT_027032a8 - 4;
          DAT_02703254 = DAT_02703254 | 0x80000000;
        }
        uVar22 = 0x200;
      }
      else {
        uVar22 = 0x180;
      }
      DAT_027032a8 = uVar22 | 0x80000000;
      if ((uVar23 & 0x400000) != 0) {
        DAT_027032a8 = uVar22 + 0xbfc00200;
      }
    }
    else {
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2* FIX ME: Level 2 cpuException");
      DAT_027032a8 = 0xbfc00000;
      FUN_00988960(&PTR_FUN_00c9aa28,"Reset request");
    }
  }
  uVar23 = DAT_00cbec00;
  if ((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) {
    if ((_DAT_00cc9000 & 1) != 0) {
      if (((DAT_00cca520._2_1_ & 1) == 0) && (uVar22 = DAT_027033c4, (DAT_027033c4 & 0x1ffff) != 0))
      {
LAB_0050cc54:
        puVar21 = &DAT_00cca000;
        uVar23 = DAT_00cbec00;
        if (((uVar22 & 0x1ffff) != 0) &&
           (((_DAT_00cc9000 & 1) != 0 && ((DAT_00cca520._2_1_ & 1) == 0)))) {
          if ((uVar22 >> 0x14 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_02703310 <= (int)(DAT_027033c0 - DAT_02703390))) {
              DAT_027033c4 = uVar22 & 0xffefffff;
              DAT_027033d4 = DAT_027033d4 & 0xffefffff;
              _DAT_02819070 = _DAT_02819070 & 0xffff00ff;
              uVar22 = DAT_027033c4;
            }
            else if (DAT_02703310 < (int)(DAT_027033dc - DAT_02703390)) {
              DAT_027033dc = DAT_02703310 + DAT_02703390;
            }
          }
          uVar23 = DAT_00cc9010;
          uVar25 = DAT_027033c4;
          if ((uVar22 >> 1 & 1) == 0) goto joined_r0x0050cd48;
          if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
             ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
              DAT_027033dc = DAT_027032c4 + DAT_02703344;
            }
            goto joined_r0x0050cd48;
          }
          DAT_027033c4 = uVar22 & 0xfffffffd;
          DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
          DAT_02706280 = 0;
          if ((DAT_00cbe020 & 0xc00) == 0x800) {
            if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
               (uVar23 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
              if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_0050cee8;
              uVar23 = DAT_00ca1510 & 0xfffffffb;
            }
            if (uVar23 == 0) {
              DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
              DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
              if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0050ce48:
                bVar11 = uVar23 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar23 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_0050ce48;
                }
                bVar11 = false;
              }
              if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1638 != 0) goto LAB_0050ce78;
LAB_0050cea4:
                bVar10 = false;
              }
              else {
                if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0))
                goto LAB_0050cea4;
LAB_0050ce78:
                bVar10 = true;
              }
              if (bVar10 || !bVar11) {
                FUN_003ecbd0(&DAT_00ca1380,0,1);
              }
            }
          }
LAB_0050cee8:
          if ((_DAT_00cc9000 & 0xc) == 8) {
            if ((DAT_00cc4000 & 0xc) == 0) {
              FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
            }
            uVar23 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar23 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            FUN_005d9ad0();
            uVar32 = DAT_027033c4 >> 2 & 1;
            uVar25 = DAT_027033c4;
            goto joined_r0x0050cf60;
          }
          if ((DAT_00cc4000 & 1) != 0) {
            if ((DAT_02706360 & 0x7f) == 0x51) {
              uVar23 = *DAT_00ca16f0;
              if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_0050cfe0:
                if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_0050cff8;
              }
            }
            else {
              if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_0050cff8:
                uVar23 = DAT_00cc4020;
                if (0xf < DAT_00cc4020) {
                  uVar23 = 0x10;
                }
                DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                               DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18;
                goto LAB_0050d02c;
              }
              uVar23 = *DAT_00ca16f0;
              uVar22 = uVar23 >> 10 & 3;
              if (((uVar22 == 0) || (uVar22 == 2)) ||
                 ((uVar22 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3))))))
              goto LAB_0050cfe0;
            }
            uVar25 = DAT_027033c4 | 2;
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
            uVar23 = DAT_00cc9010;
            DAT_02703344 = DAT_027033c0;
            uVar22 = uVar25;
            if ((~DAT_00cbe020 & 0xc00) != 0) goto joined_r0x0050cd48;
            DAT_00cbec00 = DAT_00cbec00 | 8;
            uVar32 = DAT_027033c4 & 4;
            DAT_027033c4 = uVar25;
            goto joined_r0x0050cf60;
          }
LAB_0050d02c:
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
LAB_0050d2a8:
            DAT_027033d4 = DAT_027033d4 | 2;
            uVar23 = DAT_00cc9010;
            uVar25 = DAT_027033c4;
            uVar22 = DAT_027033c4;
            goto joined_r0x0050cd48;
          }
          if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_0050d2a8;
          if ((DAT_00cc4000 >> 8 & 1) == 0) {
            FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
          }
          uVar23 = DAT_00cbec00;
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
            uVar23 = DAT_00cbec00;
            if ((DAT_00cbec00 & 0x700) != 0) {
              uVar23 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar23 = 0x10;
              }
              uVar22 = (uVar23 & 0x1f) << 0x18;
              uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar22;
              if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0))
              {
                DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar22 | 2;
                goto LAB_0050d2a8;
              }
            }
          }
          DAT_00cbec00 = uVar23;
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
              uVar23 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar23 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            }
            uVar32 = DAT_027033c4;
            if (((DAT_00cbec00 >> 3 & 1) != 0) &&
               (uVar23 = DAT_00cc9010, uVar25 = DAT_027033c4, uVar22 = DAT_027033c4,
               DAT_00ca1630 != 0)) goto joined_r0x0050cd48;
            goto joined_r0x0050f140;
          }
          if (DAT_02706374 != 0) {
            if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
              DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
            }
            if ((DAT_00cc4000 & 1) != 0) {
              uVar23 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar23 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            }
            DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
            DAT_02706378 = '\0';
            DAT_027063a4 = '\0';
            if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
              if ((DAT_027063b8 & 1) != 0) {
                if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0050fb4c:
                  bVar11 = uVar23 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar23 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_0050fb4c;
                  }
                  bVar11 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_0050fb78;
LAB_0050fba4:
                  bVar10 = false;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_0050fba4;
LAB_0050fb78:
                  bVar10 = true;
                }
                if (bVar10 || !bVar11) goto LAB_0050fbe0;
              }
              DAT_027063b2 = '\0';
              FUN_00605e90(DAT_027063b4);
            }
LAB_0050fbe0:
            DAT_02706280 = 0;
            uVar23 = DAT_00cc9010 | 2;
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
            uVar25 = DAT_027033c4;
            uVar22 = DAT_027033c4;
            goto joined_r0x0050cd48;
          }
          uVar23 = DAT_00cc9010;
          uVar25 = DAT_027033c4;
          uVar22 = DAT_027033c4;
          if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto joined_r0x0050cd48;
          if ((int)DAT_00cc4030 < 0) {
            uVar18 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_0050fca0:
            puVar33 = (uint *)((long)DAT_00ccb000 + uVar18 + 0x2000000);
          }
          else {
            uVar18 = (ulong)DAT_00cc4030 & 0x1ffffff0;
            if (uVar18 >> 0x19 == 0) {
              puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
            }
            else if (uVar18 >> 0x1c == 0) {
              puVar33 = (uint *)(&DAT_02884000 + (long)DAT_00ccb000);
            }
            else {
              if ((uint)uVar18 < 0x10004000) {
                uVar18 = (ulong)(DAT_00cc4030 & 0x3ff0);
                goto LAB_0050fca0;
              }
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              puVar33 = (uint *)0x0;
            }
          }
          uVar18 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
          if ((uVar18 & 1) == 0) goto LAB_005113b4;
          DAT_00cc4010 = puVar33[1];
          DAT_02706280 = DAT_02706280 + 1;
          DAT_027063b0 = DAT_027063b0 & 0xfe;
          if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
              ((*puVar33 & 0x70000000) == 0x40000000)) &&
             ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
            FUN_003f75f0(0xd);
            goto LAB_005113b4;
          }
          if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
            DAT_02706278 = *(undefined8 *)(puVar33 + 2);
            DAT_02706270 = 0;
            if (DAT_027063a4 == '\0') {
              DAT_027063a8 = 2;
              DAT_027063a4 = '\x01';
              puVar14 = &DAT_02706278;
              iVar12 = 2;
            }
            else {
              puVar14 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
              iVar12 = 4 - DAT_027063a8;
            }
            uVar18 = FUN_005e3030(puVar14,iVar12,1);
            if (((uVar18 & 1) == 0) && (DAT_027063a4 != '\0')) {
              DAT_027063b0 = DAT_027063b0 & 0xfe;
              DAT_00cc4020 = 0;
              goto LAB_005113b4;
            }
          }
          DAT_027063a8 = 0;
          DAT_027063a4 = '\0';
          switch(*puVar33 >> 0x1c & 7) {
          case 0:
            DAT_00cc4030 = DAT_00cc4030 + 0x10;
            goto code_r0x00510de0;
          case 1:
            bVar24 = 0;
            DAT_00cc4030 = DAT_00cc4030 + 0x10;
            DAT_00cc4010 = DAT_00cc4030;
            break;
          case 2:
            bVar24 = 0;
            uVar23 = DAT_00cc4030 + 0x10;
            DAT_00cc4030 = DAT_00cc4010;
            DAT_00cc4010 = uVar23;
            break;
          default:
            bVar24 = 0;
            DAT_00cc4030 = DAT_00cc4030 + 0x10;
            break;
          case 5:
            uVar23 = DAT_00cc4030 + 0x10;
            uVar22 = DAT_00cc4000 >> 4 & 3;
            if (uVar22 == 1) {
              DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
            }
            else {
              if (uVar22 != 0) {
                DAT_00cc4010 = uVar23;
                FUN_00988960(&PTR_FUN_00c9aa28,
                             "Call Stack Overflow (report if it fixes/breaks anything)");
                bVar24 = 1;
                break;
              }
              DAT_00cc4040 = uVar23 + DAT_00cc4020 * 0x10;
            }
            bVar24 = 0;
            DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                           DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
            DAT_00cc4030 = DAT_00cc4010;
            DAT_00cc4010 = uVar23;
            break;
          case 6:
            DAT_00cc4010 = DAT_00cc4030 + 0x10;
            uVar23 = DAT_00cc4000 >> 4 & 3;
            if (uVar23 == 2) {
              puVar30 = (uint *)&DAT_00cc4050;
            }
            else {
              if (uVar23 != 1) {
                bVar24 = 1;
                break;
              }
              puVar30 = (uint *)&DAT_00cc4040;
            }
            bVar24 = 0;
            DAT_00cc4030 = *puVar30;
            *puVar30 = 0;
            DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                           DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
            break;
          case 7:
            DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x00510de0:
            bVar24 = 1;
          }
          DAT_02706374 = DAT_02706374 | bVar24;
          if (DAT_00cc4020 != 0) {
            DAT_027063b0 = DAT_027063b0 | 1;
          }
          if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar33 < 0)) {
            DAT_02706374 = 1;
          }
LAB_005113b4:
          if ((DAT_00cc4000 & 1) != 0) {
            uVar23 = DAT_00cc4020;
            if (0xf < DAT_00cc4020) {
              uVar23 = 0x10;
            }
            DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                           DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
          }
          uVar32 = DAT_027033c4;
          if (((DAT_00cbec00 >> 3 & 1) == 0) ||
             (uVar23 = DAT_00cc9010, uVar25 = DAT_027033c4, uVar22 = DAT_027033c4, DAT_00ca1630 == 0
             )) {
joined_r0x0050f140:
            DAT_02703344 = DAT_027033c0;
            uVar23 = DAT_00cc9010;
            if (DAT_02706381 != '\0') {
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
              if ((DAT_02704f28 & 0x40) != 0) {
                DAT_027032c4 = 8;
              }
              if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              uVar25 = uVar32 | 2;
              uVar22 = uVar32 | 2;
              if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) goto LAB_005114a0;
              goto joined_r0x0050cd48;
            }
            DAT_027032c4 = DAT_02706280;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c4 = 8;
            }
            if (((int)DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            uVar25 = uVar32 | 2;
            uVar22 = uVar32 | 2;
            if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto joined_r0x0050cd48;
LAB_005114a0:
            DAT_027033c4 = uVar32 | 2;
            DAT_027033dc = DAT_027033c0 + DAT_027032c4;
            uVar32 = uVar32 >> 2 & 1;
            uVar25 = DAT_027033c4;
          }
          else {
joined_r0x0050cd48:
            uVar32 = uVar22 >> 2 & 1;
            DAT_00cc9010 = uVar23;
            DAT_027033c4 = uVar25;
            uVar25 = uVar22;
          }
joined_r0x0050cf60:
          if (uVar32 != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               ((int)DAT_027032c8 <= (int)(DAT_027033c0 - DAT_02703348))) {
              DAT_027033c4 = uVar25 & 0xfffffffb;
              DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
              if (DAT_00ca1630 == 4) {
                DAT_00ca1630 = 0;
              }
              if (((~DAT_00cbe020 & 0xc00) == 0) &&
                 (DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff, (DAT_00ca1630 & 0xfffffffb) == 0)) {
                if ((DAT_00ca13ec == 0) &&
                   (((DAT_02704e14 >> 3 & 1) != 0 &&
                    (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)))) {
LAB_0050d46c:
                  bVar11 = uVar23 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar23 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_0050d46c;
                  }
                  bVar11 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_0050d498;
LAB_0050d7c4:
                  if (bVar11 == true) goto LAB_0050d50c;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_0050d7c4;
LAB_0050d498:
                  if ((byte)(bVar11 ^ 1U | 2) == 0) goto LAB_0050d50c;
                }
                FUN_003ecbd0(&DAT_00ca1380,0,1);
              }
LAB_0050d50c:
              uVar23 = DAT_027033c0;
              puVar33 = DAT_00ca16f0;
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
                uVar25 = *DAT_00ca16f0;
                uVar22 = uVar25 & 3;
                if ((uVar22 == 0) || (DAT_00cc5020 == 0)) {
                  if ((~_DAT_00cc9000 & 0xc) == 0) {
                    if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                      DAT_027033c4 = DAT_027033c4 | 0x800;
                      iVar12 = 0x10;
                      if ((DAT_02704f28 & 0x40) != 0) {
                        iVar12 = 8;
                      }
                      piVar29 = (int *)&DAT_027032ec;
LAB_0050db3c:
                      piVar29[0x20] = DAT_027033c0;
                      *piVar29 = iVar12;
                      if (0 < DAT_02702544) {
                        DAT_02702540 = DAT_02702540 + DAT_02702544;
                        DAT_02702544 = 0;
                      }
                      if (iVar12 < (int)(DAT_027033dc - uVar23)) {
                        DAT_027033dc = iVar12 + uVar23;
                      }
                      uVar25 = *puVar33;
                      uVar22 = uVar25 & 3;
                    }
                  }
                  else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                    DAT_027033c4 = DAT_027033c4 | 4;
                    iVar12 = 0x10;
                    if ((DAT_02704f28 & 0x40) != 0) {
                      iVar12 = 8;
                    }
                    piVar29 = (int *)&DAT_027032c8;
                    goto LAB_0050db3c;
                  }
                  if ((uVar22 == 0) &&
                     (((((uVar25 & 0xc00) == 0xc00 || ((uVar25 & 0xc00) == 0)) &&
                       ((uVar25 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)))) {
                    DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                    uVar25 = DAT_027033c4;
                    goto LAB_0050dba4;
                  }
                }
                goto LAB_0050db94;
              }
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                FUN_003ef840();
                uVar25 = DAT_027033c4;
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
                  uVar25 = DAT_027033c4;
                  if (DAT_00ca1350 == 0x10) goto LAB_0050dba4;
                }
                if (DAT_00ca1350 == 0) {
                  uVar23 = 0;
                }
                else {
                  iVar12 = FUN_003ef270(&DAT_00ca1250);
                  uVar23 = DAT_027033c0;
                  if (iVar12 != 0) {
                    uVar22 = iVar12 << 1;
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar22)) {
                        if ((DAT_02704f28 & 0x40) != 0) {
                          uVar22 = 8;
                        }
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        puVar33 = &DAT_027032ec;
LAB_0050d858:
                        puVar33[0x20] = DAT_027033c0;
                        *puVar33 = uVar22;
                        if ((uVar22 < 0x1d) && (0 < DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if ((int)uVar22 < (int)(DAT_027033dc - uVar23)) {
                          DAT_027033dc = uVar22 + uVar23;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar22)) {
                      if ((DAT_02704f28 & 0x40) != 0) {
                        uVar22 = 8;
                      }
                      DAT_027033c4 = DAT_027033c4 | 4;
                      puVar33 = &DAT_027032c8;
                      goto LAB_0050d858;
                    }
                  }
                  uVar5 = DAT_02704f28;
                  uVar22 = DAT_027033c0;
                  puVar33 = DAT_00ca16f0;
                  uVar23 = *DAT_00ca16f0;
                  if (((((uVar23 & 0xc00) != 0xc00) &&
                       (((uVar23 & 0xc00) != 0 ||
                        (((uVar23 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
                      ((uVar23 & 0x1008) != 0)) || (bVar24 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
                    if (((uVar23 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
                      if ((~_DAT_00cc9000 & 0xc) == 0) {
                        if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                          DAT_027033c4 = DAT_027033c4 | 0x800;
                          piVar29 = (int *)&DAT_027032ec;
LAB_0050ecf0:
                          uVar9 = DAT_02704f28 & 0x40;
                          piVar29[0x20] = DAT_027033c0;
                          iVar26 = 8;
                          if (uVar9 == 0) {
                            iVar26 = 0x80;
                          }
                          *piVar29 = iVar26;
                          if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                            DAT_02702540 = DAT_02702540 + DAT_02702544;
                            DAT_02702544 = 0;
                          }
                          if (iVar26 < (int)(DAT_027033dc - uVar22)) {
                            DAT_027033dc = iVar26 + uVar22;
                          }
                        }
                      }
                      else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                        DAT_027033c4 = DAT_027033c4 | 4;
                        piVar29 = (int *)&DAT_027032c8;
                        goto LAB_0050ecf0;
                      }
                    }
                    bVar24 = 1;
                  }
                  if ((iVar12 != 0) || (uVar23 = DAT_00ca1350, (bVar24 & DAT_00ca1350 == 0x10) != 0)
                     ) {
                    uVar23 = *puVar33;
                    uVar25 = DAT_027033c4;
                    if ((((uVar23 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) &&
                       (((((uVar23 & 0xc00) == 0xc00 || ((uVar23 & 0xc00) == 0)) &&
                         ((uVar23 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)))) {
                      DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                    }
                    else {
                      DAT_027033d4 = DAT_027033d4 | 4;
                    }
                    goto LAB_0050dba4;
                  }
                }
                uVar22 = DAT_027033c0;
                uVar25 = DAT_027033c4;
                if ((DAT_00cc5000 >> 8 & 1) != 0) {
                  if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
                    DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
                    DAT_00ca1368 = 0;
                    DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                                   DAT_00cbe020 & 0xffffff | (uVar23 & 0x1f) << 0x18;
                    if ((uVar23 & 0x1f) < 0xf) {
                      uVar32 = DAT_00ca2710 & 0xffff3fff;
                      DAT_00ca2710 = uVar32 | 0x4000;
                      if ((uVar23 & 0x1f) != 0) {
                        DAT_00ca2710 = uVar32;
                      }
                    }
                    else {
                      DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
                    }
                    uVar32 = DAT_00cc9010 | 4;
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
                    DAT_00cc9010 = uVar32;
                    if (uVar23 != 0) {
                      if ((~_DAT_00cc9000 & 0xc) == 0) {
                        if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                          DAT_027033c4 = DAT_027033c4 | 0x800;
                          iVar12 = 0x10;
                          if ((DAT_02704f28 & 0x40) != 0) {
                            iVar12 = 8;
                          }
                          piVar29 = (int *)&DAT_027032ec;
LAB_0050f1d4:
                          piVar29[0x20] = DAT_027033c0;
                          *piVar29 = iVar12;
                          if (0 < DAT_02702544) {
                            DAT_02702540 = DAT_02702540 + DAT_02702544;
                            DAT_02702544 = 0;
                          }
                          uVar25 = DAT_027033c4;
                          if (iVar12 < (int)(DAT_027033dc - uVar22)) {
                            DAT_027033dc = iVar12 + uVar22;
                          }
                        }
                      }
                      else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                        DAT_027033c4 = DAT_027033c4 | 4;
                        iVar12 = 0x10;
                        if ((DAT_02704f28 & 0x40) != 0) {
                          iVar12 = 8;
                        }
                        piVar29 = (int *)&DAT_027032c8;
                        goto LAB_0050f1d4;
                      }
                    }
                  }
                  else if ((_DAT_00cc9000 & 1) == 0) {
                    FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
                    uVar5 = DAT_02704f28;
                    uVar23 = DAT_027033c0;
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        piVar29 = (int *)&DAT_027032ec;
LAB_0050f29c:
                        uVar9 = DAT_02704f28 & 0x40;
                        piVar29[0x20] = DAT_027033c0;
                        iVar12 = 8;
                        if (uVar9 == 0) {
                          iVar12 = 0x40;
                        }
                        *piVar29 = iVar12;
                        if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if (iVar12 < (int)(DAT_027033dc - uVar23)) {
                          DAT_027033dc = iVar12 + uVar23;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      piVar29 = (int *)&DAT_027032c8;
                      goto LAB_0050f29c;
                    }
LAB_0050db94:
                    DAT_027033d4 = DAT_027033d4 | 4;
                    uVar25 = DAT_027033c4;
                  }
                  else {
                    FUN_003f0da0();
                    uVar25 = DAT_027033c4;
                  }
                }
              }
            }
            else if ((int)DAT_027032c8 < (int)(DAT_027033dc - DAT_02703348)) {
              DAT_027033dc = DAT_027032c8 + DAT_02703348;
            }
          }
LAB_0050dba4:
          if ((uVar25 >> 5 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032d4 <= (int)(DAT_027033c0 - DAT_02703354))) {
              DAT_027033c4 = uVar25 & 0xffffffdf;
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
              uVar25 = DAT_027033c4;
            }
            else if (DAT_027032d4 < (int)(DAT_027033dc - DAT_02703354)) {
              DAT_027033dc = DAT_027032d4 + DAT_02703354;
            }
          }
          if ((uVar25 >> 6 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032d8 <= (int)(DAT_027033c0 - DAT_02703358))) {
              DAT_027033c4 = uVar25 & 0xffffffbf;
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
              uVar25 = DAT_027033c4;
            }
            else if (DAT_027032d8 < (int)(DAT_027033dc - DAT_02703358)) {
              DAT_027033dc = DAT_027032d8 + DAT_02703358;
            }
          }
          uVar23 = DAT_00cbec00;
          if ((uVar25 & 0xe0f19) == 0) goto LAB_0050cc44;
          if ((uVar25 & 1) == 0) goto LAB_0050df4c;
          if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
             ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
            if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
              DAT_027033dc = DAT_027032c0 + DAT_02703340;
            }
            goto LAB_0050df4c;
          }
          DAT_027033c4 = uVar25 & 0xfffffffe;
          DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
          DAT_02706260 = 0;
          uVar23 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar23 = 8;
          }
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
          if ((DAT_00cc3000 >> 8 & 1) == 0) {
            FUN_009885d0(&PTR_FUN_00c9aa28,"vif0 running when CHCR == %x");
          }
          uVar23 = DAT_00cc3000;
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
LAB_0050df3c:
            DAT_027033d4 = DAT_027033d4 | 1;
            uVar25 = DAT_027033c4;
            goto LAB_0050df4c;
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
              uVar22 = DAT_00cc3020;
              if (7 < DAT_00cc3020) {
                uVar22 = 8;
              }
              uVar25 = DAT_00cbe800 & 0xe0000000;
              uVar22 = DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
              DAT_00cbe800 = uVar25 | uVar22;
              if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
                DAT_00cbe800 = uVar25 | uVar22 & 0xeffffffc | 2;
                goto LAB_0050df3c;
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
              uVar18 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_0050ee60:
              puVar20 = (undefined4 *)((long)DAT_00ccb000 + uVar18);
              puVar31 = (undefined *)0x2000000;
LAB_0050efe8:
              puVar31 = (undefined *)((long)puVar20 + (long)puVar31);
LAB_0050efec:
              if (DAT_02706314 == '\0') {
                iVar12 = DAT_00cc3020 << 2;
              }
              else {
                puVar31 = puVar31 + (ulong)DAT_02706318 * 4;
                iVar12 = DAT_00cc3020 * 4 - DAT_02706318;
              }
              FUN_005e2c60(puVar31,iVar12,0);
            }
            else {
              uVar18 = (ulong)DAT_00cc3010 & 0x1ffffff0;
              if (uVar18 >> 0x19 == 0) {
                if (DAT_00ccb000 != (undefined4 *)0x0) {
                  puVar31 = (undefined *)((long)DAT_00ccb000 + uVar18);
                  goto LAB_0050efec;
                }
              }
              else {
                if (uVar18 >> 0x1c == 0) {
                  puVar31 = &DAT_02884000;
                  puVar20 = DAT_00ccb000;
                  goto LAB_0050efe8;
                }
                if ((uint)uVar18 < 0x10004000) {
                  uVar18 = (ulong)(DAT_00cc3010 & 0x3ff0);
                  goto LAB_0050ee60;
                }
                FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              }
              DAT_027062d0 = 0;
              DAT_027062c4 = 0;
              DAT_00cc3020 = 0;
            }
            uVar23 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar23 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            DAT_027032c0 = DAT_02706260;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c0 = 8;
            }
            goto LAB_0050f084;
          }
          if (DAT_027062e4 != 0) {
            DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
            uVar23 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar23 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            DAT_027062e8 = '\0';
            DAT_02706314 = '\0';
            if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
              if ((DAT_02706328 & 1) != 0) {
                if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0050f510:
                  bVar11 = uVar23 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar23 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_0050f510;
                  }
                  bVar11 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_0050f53c;
LAB_0050f568:
                  bVar10 = false;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_0050f568;
LAB_0050f53c:
                  bVar10 = true;
                }
                if (bVar10 || !bVar11) goto LAB_0050f5a4;
              }
              DAT_02706322 = '\0';
              FUN_00604740(DAT_02706324);
            }
LAB_0050f5a4:
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
            uVar25 = DAT_027033c4;
            goto LAB_0050df4c;
          }
          uVar25 = DAT_027033c4;
          if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_0050df4c;
          if (-1 < (int)DAT_00cc3030) {
            uVar18 = (ulong)DAT_00cc3030 & 0x1ffffff0;
            if (uVar18 >> 0x19 != 0) {
              if (uVar18 >> 0x1c != 0) {
                if (0x10003fff < (uint)uVar18) {
                  FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
                  goto LAB_0050f9c8;
                }
                uVar18 = (ulong)(DAT_00cc3030 & 0x3ff0);
                goto LAB_0050f3b0;
              }
              puVar31 = &DAT_02884000;
              puVar20 = DAT_00ccb000;
              goto LAB_0050f3d4;
            }
            if (DAT_00ccb000 != (undefined4 *)0x0) {
              puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
              goto LAB_0050f3d8;
            }
LAB_0050f9c8:
            FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
            DAT_00cc9010 = DAT_00cc9010 | 0x8000;
            goto LAB_0050fdf0;
          }
          uVar18 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_0050f3b0:
          puVar20 = (undefined4 *)((long)DAT_00ccb000 + uVar18);
          puVar31 = (undefined *)0x2000000;
LAB_0050f3d4:
          puVar33 = (uint *)((long)puVar20 + (long)puVar31);
LAB_0050f3d8:
          DAT_00cc3000 = CONCAT22(*(undefined2 *)((long)puVar33 + 2),(undefined2)DAT_00cc3000);
          DAT_00cc3020 = (uint)(ushort)*puVar33;
          DAT_00cc3010 = puVar33[1];
          DAT_02706260 = DAT_02706260 + 1;
          DAT_02706320 = 0;
          if ((uVar23 >> 6 & 1) != 0) {
            DAT_02706258 = *(undefined8 *)(puVar33 + 2);
            DAT_02706250 = 0;
            if (DAT_02706314 == '\0') {
              DAT_02706318 = 2;
              DAT_02706314 = '\x01';
              puVar14 = &DAT_02706258;
              iVar12 = 2;
            }
            else {
              puVar14 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
              iVar12 = 4 - DAT_02706318;
            }
            uVar18 = FUN_005e2c60(puVar14,iVar12,1);
            if (((uVar18 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0050f418;
            DAT_02706320 = 0;
            DAT_00cc3020 = 0;
            uVar23 = 0;
            goto LAB_0050fdfc;
          }
LAB_0050f418:
          DAT_02706318 = 0;
          DAT_02706314 = '\0';
          switch(*puVar33 >> 0x1c & 7) {
          case 0:
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            goto code_r0x0050fd88;
          case 1:
            bVar24 = 0;
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            break;
          case 2:
            bVar24 = 0;
            uVar23 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar23;
            break;
          default:
            bVar24 = 0;
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            break;
          case 5:
            uVar23 = DAT_00cc3030 + 0x10;
            uVar22 = DAT_00cc3000 >> 4 & 3;
            if (uVar22 == 1) {
              DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
            }
            else {
              if (uVar22 != 0) {
                DAT_00cc3010 = uVar23;
                FUN_00988960(&PTR_FUN_00c9aa28,
                             "Call Stack Overflow (report if it fixes/breaks anything)");
                goto code_r0x0050fd88;
              }
              DAT_00cc3040 = uVar23 + DAT_00cc3020 * 0x10;
            }
            bVar24 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar23;
            break;
          case 6:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            uVar23 = DAT_00cc3000 >> 4 & 3;
            if (uVar23 == 2) {
              puVar30 = (uint *)&DAT_00cc3050;
            }
            else {
              if (uVar23 != 1) {
                bVar24 = 1;
                break;
              }
              puVar30 = (uint *)&DAT_00cc3040;
            }
            bVar24 = 0;
            DAT_00cc3030 = *puVar30;
            *puVar30 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
            break;
          case 7:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x0050fd88:
            bVar24 = 1;
          }
          DAT_027062e4 = DAT_027062e4 | bVar24;
          if (DAT_00cc3020 != 0) {
            DAT_02706320 = 1;
          }
          if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
            DAT_027062e4 = 1;
          }
LAB_0050fdf0:
          uVar23 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar23 = 8;
          }
LAB_0050fdfc:
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
          DAT_027032c0 = DAT_02706260;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c0 = 8;
          }
LAB_0050f084:
          DAT_027033c4 = DAT_027033c4 | 1;
          DAT_02703340 = DAT_027033c0;
          if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar25 = DAT_027033c4;
          if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_027032c0;
          }
LAB_0050df4c:
          uVar22 = uVar25;
          uVar23 = DAT_00cc9010;
          if ((uVar25 >> 3 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
              DAT_027033c4 = uVar25 & 0xfffffff7;
              DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
              if (DAT_00cc6020 == 0) {
                DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
                uVar23 = DAT_00cc9010 | 8;
                uVar22 = DAT_027033c4;
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
                uVar22 = DAT_027033c4;
                uVar23 = DAT_00cc9010;
                uVar25 = DAT_027033c4;
              }
            }
            else if (DAT_027032cc < (int)(DAT_027033dc - DAT_0270334c)) {
              DAT_027033dc = DAT_027032cc + DAT_0270334c;
            }
          }
          DAT_00cc9010 = uVar23;
          uVar23 = DAT_00cc9010;
          if ((uVar25 >> 4 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032d0 <= (int)(DAT_027033c0 - DAT_02703350))) {
              DAT_027033c4 = uVar22 & 0xffffffef;
              DAT_027033d4 = DAT_027033d4 & 0xffffffef;
              if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
                FUN_006704a0();
                uVar23 = DAT_00cc9010;
                uVar22 = DAT_027033c4;
              }
              else {
                DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
                uVar23 = DAT_00cc9010 | 0x10;
                uVar22 = DAT_027033c4;
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
          DAT_00cc9010 = uVar23;
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
            else if (DAT_0270330c < (int)(DAT_027033dc - DAT_0270338c)) {
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
            else if (DAT_027032e0 < (int)(DAT_027033dc - DAT_02703360)) {
              DAT_027033dc = DAT_027032e0 + DAT_02703360;
            }
          }
          uVar23 = DAT_00cc9010;
          if ((uVar22 >> 9 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
              DAT_027033c4 = uVar22 & 0xfffffdff;
              DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
              if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
                FUN_005d5b90();
                uVar23 = DAT_00cc9010;
                uVar22 = DAT_027033c4;
              }
              else {
                DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
                uVar23 = DAT_00cc9010 | 0x200;
                uVar22 = DAT_027033c4;
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
          DAT_00cc9010 = uVar23;
          if ((uVar22 >> 10 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               (DAT_027032e8 <= (int)(DAT_027033c0 - DAT_02703368))) {
              DAT_027033c4 = uVar22 & 0xfffffbff;
              DAT_027033d4 = DAT_027033d4 & 0xfffffbff;
              FUN_005d9ad0();
              uVar22 = DAT_027033c4;
            }
            else if (DAT_027032e8 < (int)(DAT_027033dc - DAT_02703368)) {
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
            else if ((int)DAT_027032ec < (int)(DAT_027033dc - DAT_0270336c)) {
              DAT_027033dc = DAT_027032ec + DAT_0270336c;
            }
          }
          uVar23 = DAT_00cbe800;
          if ((uVar22 >> 0x11 & 1) == 0) goto LAB_00510018;
          if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
             ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
            if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
              DAT_027033dc = DAT_02703304 + DAT_02703384;
            }
            goto LAB_00510018;
          }
          DAT_027033c4 = uVar22 & 0xfffdffff;
          DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
          uVar23 = _DAT_02819070 & 1;
          if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar23 != 0)) {
            do {
              uVar23 = 0x100;
              if ((int)DAT_02704e08[1] == 0) {
                uVar23 = 1;
LAB_0050e7a0:
                if ((uVar23 & _DAT_02819070) != 0) {
                  iVar12 = DAT_028190d4;
                  if ((int)DAT_02704e08[1] != 0) {
                    iVar12 = DAT_028196e4;
                  }
                  uVar23 = DAT_027033c0 - iVar12;
                  if (0 < (int)uVar23) {
                    if (uVar23 < 0x11) {
                      uVar23 = 0x10;
                    }
                    (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar23);
                  }
                }
              }
              else {
                if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0))
                goto LAB_0050e7a0;
                FUN_005b1f50(&DAT_01701a00);
              }
              uVar23 = _DAT_02819070 & 1;
            } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar23 != 0);
          }
          iVar12 = DAT_028190d4;
          if ((_DAT_02819070 & 5) != 0) {
            DAT_027033c4 = DAT_027033c4 | 0x20000;
            DAT_02703304 = 0x80;
            if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
              DAT_027033dc = DAT_027033c0 + 0x80;
            }
            DAT_027033d4 = DAT_027033d4 | 0x20000;
            uVar23 = DAT_00cbe800;
            DAT_02703384 = DAT_027033c0;
            uVar22 = DAT_027033c4;
            goto LAB_00510018;
          }
          if (uVar23 != 0) {
            while ((_DAT_02819070 & 1) != 0) {
              (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
            }
            DAT_027033c4 = DAT_027033c4 | 0x20000;
            DAT_02703304 = (DAT_028190d4 - iVar12) * 2;
            if ((DAT_02703304 < 0x1d) && (0 < DAT_02702544)) {
              DAT_02702540 = DAT_02702540 + DAT_02702544;
              DAT_02702544 = 0;
            }
            iVar26 = DAT_027033dc - DAT_027033c0;
            if (iVar26 != DAT_02703304 &&
                iVar26 + (DAT_028190d4 - iVar12) * -2 < 0 == SBORROW4(iVar26,DAT_02703304)) {
              DAT_027033dc = DAT_027033c0 + DAT_02703304;
            }
            DAT_027033d4 = DAT_027033d4 | 0x20000;
            uVar23 = DAT_00cbe800;
            DAT_02703384 = DAT_027033c0;
            uVar22 = DAT_027033c4;
            goto LAB_00510018;
          }
          uVar23 = DAT_00cbe800 & 0xfffffffb;
          uVar22 = DAT_027033c4;
          if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
              ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_00510018;
          DAT_02706260 = 0;
          uVar23 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar23 = 8;
          }
          uVar23 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xfffffb | (uVar23 & 0x1f) << 0x18;
          if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
            if ((DAT_00cbe800 >> 0xd & 1) == 0) {
              uVar23 = uVar23 | 0x800;
            }
            DAT_00cbe800 = uVar23;
            if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
              DAT_00cbe800 = uVar23 | 0x400;
            }
            FUN_003f7540(4);
            DAT_027062e0 = DAT_027062e0 + -1;
            uVar23 = DAT_00cbe800;
            if ((DAT_00cbe800 & 0x700) != 0) {
              uVar23 = DAT_00cc3020;
              if (7 < DAT_00cc3020) {
                uVar23 = 8;
              }
              uVar22 = DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
              if ((DAT_00cc3020 != 0) ||
                 (uVar23 = DAT_00cbe800 & 0xe0000000 | uVar22, DAT_027062e4 == 0)) {
                DAT_027033d4 = DAT_027033d4 | 1;
                uVar23 = DAT_00cbe800 & 0xe0000000 | uVar22 & 0xeffffffc | 2;
                uVar22 = DAT_027033c4;
                goto LAB_00510018;
              }
            }
          }
          DAT_00cbe800 = uVar23;
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
              uVar18 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_0050f890:
              puVar21 = (undefined4 *)((long)DAT_00ccb000 + uVar18);
              puVar31 = (undefined *)0x2000000;
LAB_0050f8b8:
              puVar31 = (undefined *)((long)puVar21 + (long)puVar31);
LAB_0050f8bc:
              iVar12 = DAT_00cc3020 * 4;
              if (DAT_02706314 != '\0') {
                puVar31 = puVar31 + (ulong)DAT_02706318 * 4;
                iVar12 = iVar12 - DAT_02706318;
              }
              FUN_005e2c60(puVar31,iVar12,0);
            }
            else {
              uVar18 = (ulong)DAT_00cc3010 & 0x1ffffff0;
              if (uVar18 >> 0x19 == 0) {
                if (DAT_00ccb000 != (undefined4 *)0x0) {
                  puVar31 = (undefined *)((long)DAT_00ccb000 + uVar18);
                  goto LAB_0050f8bc;
                }
              }
              else {
                if (uVar18 >> 0x1c == 0) {
                  puVar31 = &DAT_02884000;
                  puVar21 = DAT_00ccb000;
                  goto LAB_0050f8b8;
                }
                if ((uint)uVar18 < 0x10004000) {
                  uVar18 = (ulong)(DAT_00cc3010 & 0x3ff0);
                  goto LAB_0050f890;
                }
                FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              }
              DAT_027062d0 = 0;
              DAT_027062c4 = 0;
              DAT_00cc3020 = 0;
            }
            uVar23 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar23 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            DAT_027032c0 = DAT_02706260;
            if ((DAT_02704f28 & 0x40) != 0) {
              DAT_027032c0 = 8;
            }
            goto LAB_0050f948;
          }
          if (DAT_027062e4 != 0) {
            DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
            uVar23 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar23 = 8;
            }
            DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                           DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            DAT_027062e8 = '\0';
            DAT_02706314 = '\0';
            if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
              if ((DAT_02706328 & 1) != 0) {
                if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0050ff3c:
                  bVar11 = uVar23 == 0;
                }
                else {
                  if (DAT_00ca1398 <= DAT_00ca139c) {
                    uVar23 = DAT_00ca13f0 & 0xfffffffb;
                    goto LAB_0050ff3c;
                  }
                  bVar11 = false;
                }
                if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                   ((DAT_02704f20 >> 4 & 1) != 0)) {
                  if (DAT_00ca1518 != 0) goto LAB_0050ff68;
LAB_0050ff94:
                  bVar10 = false;
                }
                else {
                  if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
                  goto LAB_0050ff94;
LAB_0050ff68:
                  bVar10 = true;
                }
                if (bVar10 || !bVar11) goto LAB_0050ffd4;
              }
              DAT_02706322 = '\0';
              FUN_00604740(DAT_02706324);
            }
LAB_0050ffd4:
            DAT_02706260 = 0;
            FUN_003f75f0(0);
            DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
            uVar23 = DAT_00cbe800 & 0xe0ffffff;
            uVar22 = DAT_027033c4;
            goto LAB_00510018;
          }
          uVar23 = DAT_00cbe800;
          uVar22 = DAT_027033c4;
          if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_00510018;
          if ((int)DAT_00cc3030 < 0) {
            puVar21 = (undefined4 *)((long)DAT_00ccb000 + ((ulong)DAT_00cc3030 & 0x3ff0));
            puVar33 = puVar21 + 0x800000;
          }
          else {
            uVar18 = (ulong)DAT_00cc3030 & 0x1ffffff0;
            if (uVar18 >> 0x19 == 0) {
              puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
              puVar21 = DAT_00ccb000;
            }
            else if (uVar18 >> 0x1c == 0) {
              puVar33 = (uint *)(&DAT_02884000 + (long)DAT_00ccb000);
              puVar21 = DAT_00ccb000;
            }
            else if ((uint)uVar18 < 0x10004000) {
              puVar33 = (uint *)((long)DAT_00ccb000 + (ulong)(DAT_00cc3030 & 0x3ff0) + 0x2000000);
            }
            else {
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              puVar33 = (uint *)0x0;
            }
          }
          uVar18 = FUN_003d1c10(puVar21,&DAT_00cc3000,"vif0 Tag",puVar33);
          if ((uVar18 & 1) == 0) goto LAB_0051156c;
          DAT_00cc3010 = puVar33[1];
          DAT_02706260 = DAT_02706260 + 1;
          DAT_02706320 = 0;
          if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
            DAT_02706258 = *(undefined8 *)(puVar33 + 2);
            DAT_02706250 = 0;
            if (DAT_02706314 == '\0') {
              DAT_02706318 = 2;
              DAT_02706314 = '\x01';
              puVar14 = &DAT_02706258;
              iVar12 = 2;
            }
            else {
              puVar14 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
              iVar12 = 4 - DAT_02706318;
            }
            uVar18 = FUN_005e2c60(puVar14,iVar12,1);
            if (((uVar18 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_00510f50;
            DAT_02706320 = 0;
            DAT_00cc3020 = 0;
            uVar23 = 0;
            goto LAB_00511588;
          }
LAB_00510f50:
          DAT_02706318 = 0;
          DAT_02706314 = '\0';
          switch(*puVar33 >> 0x1c & 7) {
          case 0:
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            goto code_r0x00511500;
          case 1:
            bVar24 = 0;
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            break;
          case 2:
            bVar24 = 0;
            uVar23 = DAT_00cc3030 + 0x10;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar23;
            break;
          default:
            bVar24 = 0;
            DAT_00cc3030 = DAT_00cc3030 + 0x10;
            break;
          case 5:
            uVar23 = DAT_00cc3030 + 0x10;
            uVar22 = DAT_00cc3000 >> 4 & 3;
            if (uVar22 == 1) {
              DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
            }
            else {
              if (uVar22 != 0) {
                DAT_00cc3010 = uVar23;
                FUN_00988960(&PTR_FUN_00c9aa28,
                             "Call Stack Overflow (report if it fixes/breaks anything)");
                goto code_r0x00511500;
              }
              DAT_00cc3040 = uVar23 + DAT_00cc3020 * 0x10;
            }
            bVar24 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
            DAT_00cc3030 = DAT_00cc3010;
            DAT_00cc3010 = uVar23;
            break;
          case 6:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
            uVar23 = DAT_00cc3000 >> 4 & 3;
            if (uVar23 == 2) {
              puVar30 = (uint *)&DAT_00cc3050;
            }
            else {
              if (uVar23 != 1) goto code_r0x00511500;
              puVar30 = (uint *)&DAT_00cc3040;
            }
            bVar24 = 0;
            DAT_00cc3030 = *puVar30;
            *puVar30 = 0;
            DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                           DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
            break;
          case 7:
            DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00511500:
            bVar24 = 1;
          }
          DAT_027062e4 = DAT_027062e4 | bVar24;
          if (DAT_00cc3020 != 0) {
            DAT_02706320 = 1;
          }
          if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
            DAT_027062e4 = 1;
          }
LAB_0051156c:
          uVar23 = DAT_00cc3020;
          if (7 < DAT_00cc3020) {
            uVar23 = 8;
          }
LAB_00511588:
          DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 |
                         DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
          DAT_027032c0 = DAT_02706260;
          if ((DAT_02704f28 & 0x40) != 0) {
            DAT_027032c0 = 8;
          }
LAB_0050f948:
          DAT_027033c4 = DAT_027033c4 | 1;
          DAT_02703340 = DAT_027033c0;
          if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar23 = DAT_00cbe800;
          uVar22 = DAT_027033c4;
          if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_027032c0;
          }
LAB_00510018:
          DAT_00cbe800 = uVar23;
          uVar23 = DAT_00cbec00;
          uVar25 = uVar22;
          if ((uVar22 >> 0x12 & 1) != 0) {
            if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
               ((int)DAT_02703308 <= (int)(DAT_027033c0 - DAT_02703388))) {
              DAT_027033c4 = uVar22 & 0xfffbffff;
              DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
LAB_005100a8:
              do {
                iVar12 = DAT_028196e4;
                if ((((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) ||
                   (((int)(DAT_027033c0 - DAT_028196e4) < 1 || ((_DAT_02819070 >> 8 & 1) == 0))))
                goto LAB_00510150;
                uVar23 = 0x100;
                if ((int)DAT_02704e00[1] == 0) {
                  uVar23 = 1;
                }
                else if (((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) {
                  FUN_005b1f50(&DAT_01701a00);
                  goto LAB_005100a8;
                }
                if ((uVar23 & _DAT_02819070) != 0) {
                  iVar12 = DAT_028190d4;
                  if ((int)DAT_02704e00[1] != 0) {
                    iVar12 = DAT_028196e4;
                  }
                  uVar23 = DAT_027033c0 - iVar12;
                  if (0 < (int)uVar23) {
                    if (uVar23 < 0x11) {
                      uVar23 = 0x10;
                    }
                    (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar23);
                  }
                }
              } while( true );
            }
            if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
              DAT_027033dc = DAT_02703308 + DAT_02703388;
            }
          }
          goto LAB_0050cc44;
        }
        goto LAB_0050b16c;
      }
      goto LAB_00508e74;
    }
    goto LAB_0050b16c;
  }
  if ((_DAT_00cc9000 & 1) == 0) goto LAB_0050b16c;
LAB_00508e74:
  if ((DAT_00cca520._2_1_ & 1) != 0) goto LAB_0050b16c;
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
  if ((DAT_027033c4 >> 1 & 1) == 0) goto LAB_005094a8;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
      DAT_027033dc = DAT_027032c4 + DAT_02703344;
    }
    goto LAB_005094a8;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffd;
  DAT_02706280 = 0;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar23 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_00509198;
      uVar23 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar23 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00509104:
        bVar11 = uVar23 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar23 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_00509104;
        }
        bVar11 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 != 0) goto LAB_0050913c;
LAB_00509170:
        bVar10 = false;
      }
      else {
        if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0)) goto LAB_00509170;
LAB_0050913c:
        bVar10 = true;
      }
      if (bVar10 || !bVar11) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
      }
    }
  }
LAB_00509198:
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    FUN_005d9ad0();
    goto LAB_005094a8;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar23 = *DAT_00ca16f0;
      if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_00509274:
        if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_0050928c;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_0050928c:
        uVar23 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar23 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18
        ;
        goto LAB_005092c0;
      }
      uVar23 = *DAT_00ca16f0;
      uVar22 = uVar23 >> 10 & 3;
      if (((uVar22 == 0) || (uVar22 == 2)) ||
         ((uVar22 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_00509274;
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
    goto LAB_005094a8;
  }
LAB_005092c0:
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
LAB_00509490:
    DAT_027033d4 = DAT_027033d4 | 2;
    goto LAB_005094a8;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_00509490;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar23 = DAT_00cbec00;
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
    uVar23 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      uVar22 = (uVar23 & 0x1f) << 0x18;
      uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar22;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar22 | 2;
        goto LAB_00509490;
      }
    }
  }
  DAT_00cbec00 = uVar23;
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
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    }
    if (((DAT_00cbec00 >> 3 & 1) != 0) && (DAT_00ca1630 != 0)) goto LAB_005094a8;
    if (DAT_02706381 == '\0') goto LAB_00513cf4;
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
    if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_005094a8;
    goto LAB_00512314;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00512b3c:
          bVar11 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00512b3c;
          }
          bVar11 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00512b74;
LAB_00512ba8:
          bVar10 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00512ba8;
LAB_00512b74:
          bVar10 = true;
        }
        if (bVar10 || !bVar11) goto LAB_00512bc8;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_00512bc8:
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
    goto LAB_005094a8;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_005094a8;
  if ((int)DAT_00cc4030 < 0) {
    uVar18 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00512c88:
    puVar33 = (uint *)((long)DAT_00ccb000 + uVar18 + 0x2000000);
  }
  else {
    uVar18 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar18 >> 0x19 == 0) {
      puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
    }
    else if (uVar18 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + (long)DAT_00ccb000);
    }
    else {
      if ((uint)uVar18 < 0x10004000) {
        uVar18 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_00512c88;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar18 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
  if ((uVar18 & 1) == 0) goto LAB_00513c4c;
  DAT_00cc4010 = puVar33[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar33 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_00513c4c;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar33 + 2);
    DAT_02706270 = 0;
    if (DAT_027063a4 == '\0') {
      DAT_027063a8 = 2;
      DAT_027063a4 = '\x01';
      puVar14 = &DAT_02706278;
      iVar12 = 2;
    }
    else {
      puVar14 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
      iVar12 = 4 - DAT_027063a8;
    }
    uVar18 = FUN_005e3030(puVar14,iVar12,1);
    if (((uVar18 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_00513c4c;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x00513bd4;
  case 1:
    bVar24 = 0;
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 2:
    bVar24 = 0;
    uVar23 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar23;
    break;
  default:
    bVar24 = 0;
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    break;
  case 5:
    uVar23 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4000 >> 4 & 3;
    if (uVar22 == 1) {
      DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar22 != 0) {
        DAT_00cc4010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00513bd4;
      }
      DAT_00cc4040 = uVar23 + DAT_00cc4020 * 0x10;
    }
    bVar24 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar23;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar23 = DAT_00cc4000 >> 4 & 3;
    if (uVar23 == 2) {
      puVar30 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar23 != 1) goto code_r0x00513bd4;
      puVar30 = (uint *)&DAT_00cc4040;
    }
    bVar24 = 0;
    DAT_00cc4030 = *puVar30;
    *puVar30 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x00513bd4:
    bVar24 = 1;
  }
  DAT_02706374 = DAT_02706374 | bVar24;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_02706374 = 1;
  }
LAB_00513c4c:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  }
  if (((DAT_00cbec00 >> 3 & 1) == 0) || (DAT_00ca1630 == 0)) {
    if (DAT_02706381 == '\0') {
LAB_00513cf4:
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
LAB_00512314:
        DAT_027033dc = DAT_027033c0 + DAT_027032c4;
        DAT_02703344 = DAT_027033c0;
      }
    }
  }
LAB_005094a8:
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
           (((DAT_02704e14 >> 3 & 1) != 0 && (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)))
           ) {
LAB_00509668:
          bVar11 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00509668;
          }
          bVar11 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_005096a0;
LAB_005096d4:
          bVar10 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_005096d4;
LAB_005096a0:
          bVar10 = true;
        }
        if (bVar10 || !bVar11) {
          FUN_003ecbd0(&DAT_00ca1380,0,1);
        }
      }
      uVar23 = DAT_027033c0;
      puVar33 = DAT_00ca16f0;
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
        uVar22 = *DAT_00ca16f0;
        uVar25 = uVar22 & 3;
        if ((uVar25 == 0) || (DAT_00cc5020 == 0)) {
          if ((~_DAT_00cc9000 & 0xc) == 0) {
            if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
              piVar29 = (int *)&DAT_027032ec;
              DAT_027033c4 = DAT_027033c4 | 0x800;
              iVar12 = 0x10;
              if ((DAT_02704f28 & 0x40) != 0) {
                iVar12 = 8;
              }
LAB_00509c90:
              piVar29[0x20] = DAT_027033c0;
              *piVar29 = iVar12;
              if (0 < DAT_02702544) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              if (iVar12 < (int)(DAT_027033dc - uVar23)) {
                DAT_027033dc = iVar12 + uVar23;
              }
              uVar22 = *puVar33;
              uVar25 = uVar22 & 3;
            }
          }
          else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
            piVar29 = (int *)&DAT_027032c8;
            DAT_027033c4 = DAT_027033c4 | 4;
            iVar12 = 0x10;
            if ((DAT_02704f28 & 0x40) != 0) {
              iVar12 = 8;
            }
            goto LAB_00509c90;
          }
          if (uVar25 == 0) {
joined_r0x00509b44:
            if (((((uVar22 & 0xc00) == 0xc00) || ((uVar22 & 0xc00) == 0)) &&
                ((uVar22 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)) {
              DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
              goto LAB_00509cf8;
            }
          }
        }
LAB_00509ce0:
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
          if (DAT_00ca1350 == 0x10) goto LAB_00509cf8;
        }
        if (DAT_00ca1350 == 0) {
          uVar23 = 0;
        }
        else {
          iVar12 = FUN_003ef270(&DAT_00ca1250);
          uVar23 = DAT_027033c0;
          if (iVar12 != 0) {
            uVar22 = iVar12 << 1;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar22)) {
                if ((DAT_02704f28 & 0x40) != 0) {
                  uVar22 = 8;
                }
                puVar33 = &DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_005099f8:
                puVar33[0x20] = DAT_027033c0;
                *puVar33 = uVar22;
                if ((uVar22 < 0x1d) && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if ((int)uVar22 < (int)(DAT_027033dc - uVar23)) {
                  DAT_027033dc = uVar22 + uVar23;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar22)) {
              if ((DAT_02704f28 & 0x40) != 0) {
                uVar22 = 8;
              }
              puVar33 = &DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_005099f8;
            }
          }
          uVar5 = DAT_02704f28;
          uVar22 = DAT_027033c0;
          puVar33 = DAT_00ca16f0;
          uVar23 = *DAT_00ca16f0;
          if (((((uVar23 & 0xc00) != 0xc00) &&
               (((uVar23 & 0xc00) != 0 ||
                (((uVar23 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
              ((uVar23 & 0x1008) != 0)) || (bVar24 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
            if (((uVar23 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                  piVar29 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_0050b050:
                  uVar9 = DAT_02704f28 & 0x40;
                  piVar29[0x20] = DAT_027033c0;
                  iVar26 = 8;
                  if (uVar9 == 0) {
                    iVar26 = 0x80;
                  }
                  *piVar29 = iVar26;
                  if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar26 < (int)(DAT_027033dc - uVar22)) {
                    DAT_027033dc = iVar26 + uVar22;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                piVar29 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                goto LAB_0050b050;
              }
            }
            bVar24 = 1;
          }
          if ((iVar12 != 0) || (uVar23 = DAT_00ca1350, (bVar24 & DAT_00ca1350 == 0x10) != 0)) {
            uVar22 = *puVar33;
            if (((uVar22 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto joined_r0x00509b44;
            goto LAB_00509ce0;
          }
        }
        uVar22 = DAT_027033c0;
        if ((DAT_00cc5000 >> 8 & 1) != 0) {
          if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
            DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
            DAT_00ca1368 = 0;
            DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                           DAT_00cbe020 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            if ((uVar23 & 0x1f) < 0xf) {
              uVar25 = DAT_00ca2710 & 0xffff3fff;
              DAT_00ca2710 = uVar25 | 0x4000;
              if ((uVar23 & 0x1f) != 0) {
                DAT_00ca2710 = uVar25;
              }
            }
            else {
              DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
            }
            uVar25 = DAT_00cc9010 | 4;
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
            DAT_00cc9010 = uVar25;
            if (uVar23 != 0) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                  piVar29 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
                  iVar12 = 0x10;
                  if ((DAT_02704f28 & 0x40) != 0) {
                    iVar12 = 8;
                  }
LAB_00512084:
                  piVar29[0x20] = DAT_027033c0;
                  *piVar29 = iVar12;
                  if (0 < DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar12 < (int)(DAT_027033dc - uVar22)) {
                    DAT_027033dc = iVar12 + uVar22;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                piVar29 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                iVar12 = 0x10;
                if ((DAT_02704f28 & 0x40) != 0) {
                  iVar12 = 8;
                }
                goto LAB_00512084;
              }
            }
          }
          else if ((_DAT_00cc9000 & 1) == 0) {
            FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
            uVar5 = DAT_02704f28;
            uVar23 = DAT_027033c0;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                piVar29 = (int *)&DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_00512184:
                uVar9 = DAT_02704f28 & 0x40;
                piVar29[0x20] = DAT_027033c0;
                iVar12 = 8;
                if (uVar9 == 0) {
                  iVar12 = 0x40;
                }
                *piVar29 = iVar12;
                if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if (iVar12 < (int)(DAT_027033dc - uVar23)) {
                  DAT_027033dc = iVar12 + uVar23;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
              piVar29 = (int *)&DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_00512184;
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
LAB_00509cf8:
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
  uVar23 = DAT_00cbec00;
  if ((DAT_027033c4 & 0xe0f19) == 0) goto LAB_0050b16c;
  if ((DAT_027033c4 & 1) == 0) goto LAB_0050a0ac;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
    if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
      DAT_027033dc = DAT_027032c0 + DAT_02703340;
    }
    goto LAB_0050a0ac;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffe;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
  uVar23 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar23 = 8;
  }
  DAT_02706260 = 0;
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  if ((DAT_00cc3000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"vif0 running when CHCR == %x");
  }
  uVar23 = DAT_00cc3000;
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
LAB_0050a098:
    DAT_027033d4 = DAT_027033d4 | 1;
    goto LAB_0050a0ac;
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
      uVar22 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar22 = 8;
      }
      uVar25 = DAT_00cbe800 & 0xe0000000;
      uVar22 = DAT_00cbe800 & 0xffffff | (uVar22 & 0x1f) << 0x18;
      DAT_00cbe800 = uVar25 | uVar22;
      if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
        DAT_00cbe800 = uVar25 | uVar22 & 0xeffffffc | 2;
        goto LAB_0050a098;
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
      uVar18 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_00511d28:
      puVar21 = (undefined4 *)((long)DAT_00ccb000 + uVar18);
      puVar31 = (undefined *)0x2000000;
LAB_00511e8c:
      puVar31 = (undefined *)((long)puVar21 + (long)puVar31);
LAB_00511e90:
      if (DAT_02706314 == '\0') {
        iVar12 = DAT_00cc3020 << 2;
      }
      else {
        puVar31 = puVar31 + (ulong)DAT_02706318 * 4;
        iVar12 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar31,iVar12,0);
    }
    else {
      uVar18 = (ulong)DAT_00cc3010 & 0x1ffffff0;
      if (uVar18 >> 0x19 == 0) {
        if (DAT_00ccb000 != (undefined4 *)0x0) {
          puVar31 = (undefined *)((long)DAT_00ccb000 + uVar18);
          goto LAB_00511e90;
        }
      }
      else {
        if (uVar18 >> 0x1c == 0) {
          puVar31 = &DAT_02884000;
          puVar21 = DAT_00ccb000;
          goto LAB_00511e8c;
        }
        if ((uint)uVar18 < 0x10004000) {
          uVar18 = (ulong)(DAT_00cc3010 & 0x3ff0);
          goto LAB_00511d28;
        }
        FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      }
      DAT_027062d0 = 0;
      DAT_027062c4 = 0;
      DAT_00cc3020 = 0;
    }
    uVar23 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar23 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    DAT_027032c0 = DAT_02706260;
    if ((DAT_02704f28 & 0x40) != 0) {
      DAT_027032c0 = 8;
    }
    goto LAB_00511f00;
  }
  if (DAT_027062e4 != 0) {
    DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
    uVar23 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar23 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    DAT_027062e8 = '\0';
    DAT_02706314 = '\0';
    if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
      if ((DAT_02706328 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_005126e8:
          bVar11 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_005126e8;
          }
          bVar11 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00512720;
LAB_00512754:
          bVar10 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00512754;
LAB_00512720:
          bVar10 = true;
        }
        if (bVar10 || !bVar11) goto LAB_00512774;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_00512774:
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
    goto LAB_0050a0ac;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_0050a0ac;
  if (-1 < (int)DAT_00cc3030) {
    uVar18 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar18 >> 0x19 != 0) {
      if (uVar18 >> 0x1c != 0) {
        if (0x10003fff < (uint)uVar18) {
          FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
          goto LAB_00512994;
        }
        uVar18 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_00512414;
      }
      puVar31 = &DAT_02884000;
      puVar21 = DAT_00ccb000;
      goto LAB_00512610;
    }
    if (DAT_00ccb000 != (undefined4 *)0x0) {
      puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
      goto LAB_00512614;
    }
LAB_00512994:
    FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
    DAT_00cc9010 = DAT_00cc9010 | 0x8000;
    goto LAB_00512ea4;
  }
  uVar18 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_00512414:
  puVar21 = (undefined4 *)((long)DAT_00ccb000 + uVar18);
  puVar31 = (undefined *)0x2000000;
LAB_00512610:
  puVar33 = (uint *)((long)puVar21 + (long)puVar31);
LAB_00512614:
  DAT_00cc3000 = CONCAT22(*(undefined2 *)((long)puVar33 + 2),(undefined2)DAT_00cc3000);
  DAT_00cc3020 = (uint)(ushort)*puVar33;
  DAT_00cc3010 = puVar33[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if ((uVar23 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar33 + 2);
    DAT_02706250 = 0;
    if (DAT_02706314 == '\0') {
      DAT_02706318 = 2;
      DAT_02706314 = '\x01';
      puVar14 = &DAT_02706258;
      iVar12 = 2;
    }
    else {
      puVar14 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
      iVar12 = 4 - DAT_02706318;
    }
    uVar18 = FUN_005e2c60(puVar14,iVar12,1);
    if (((uVar18 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_005128e4;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar23 = 0;
    goto LAB_00512eb0;
  }
LAB_005128e4:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto code_r0x00512e3c;
  case 1:
    bVar24 = 0;
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 2:
    bVar24 = 0;
    uVar23 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar23;
    break;
  default:
    bVar24 = 0;
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    break;
  case 5:
    uVar23 = DAT_00cc3030 + 0x10;
    uVar22 = DAT_00cc3000 >> 4 & 3;
    if (uVar22 == 1) {
      DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar22 != 0) {
        DAT_00cc3010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00512e3c;
      }
      DAT_00cc3040 = uVar23 + DAT_00cc3020 * 0x10;
    }
    bVar24 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar23;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar23 = DAT_00cc3000 >> 4 & 3;
    if (uVar23 == 2) {
      puVar30 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar23 != 1) goto code_r0x00512e3c;
      puVar30 = (uint *)&DAT_00cc3040;
    }
    bVar24 = 0;
    DAT_00cc3030 = *puVar30;
    *puVar30 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00512e3c:
    bVar24 = 1;
  }
  DAT_027062e4 = DAT_027062e4 | bVar24;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_00512ea4:
  uVar23 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar23 = 8;
  }
LAB_00512eb0:
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  DAT_027032c0 = DAT_02706260;
  if ((DAT_02704f28 & 0x40) != 0) {
    DAT_027032c0 = 8;
  }
LAB_00511f00:
  DAT_027033c4 = DAT_027033c4 | 1;
  DAT_02703340 = DAT_027033c0;
  if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
    DAT_02702540 = DAT_02702540 + DAT_02702544;
    DAT_02702544 = 0;
  }
  if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
    DAT_027033dc = DAT_027033c0 + DAT_027032c0;
  }
LAB_0050a0ac:
  uVar23 = DAT_00cc9010;
  if ((DAT_027033c4 >> 3 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffff7;
      DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
      if (DAT_00cc6020 == 0) {
        DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
        uVar23 = DAT_00cc9010 | 8;
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
        uVar23 = DAT_00cc9010;
      }
    }
    else if (DAT_027032cc < (int)(DAT_027033dc - DAT_0270334c)) {
      DAT_027033dc = DAT_027032cc + DAT_0270334c;
    }
  }
  DAT_00cc9010 = uVar23;
  uVar23 = DAT_00cc9010;
  if ((DAT_027033c4 >> 4 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032d0 <= (int)(DAT_027033c0 - DAT_02703350))) {
      DAT_027033c4 = DAT_027033c4 & 0xffffffef;
      DAT_027033d4 = DAT_027033d4 & 0xffffffef;
      if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
        FUN_006704a0();
        uVar23 = DAT_00cc9010;
      }
      else {
        DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
        uVar23 = DAT_00cc9010 | 0x10;
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
  DAT_00cc9010 = uVar23;
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
  uVar23 = DAT_00cc9010;
  if ((DAT_027033c4 >> 9 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffffdff;
      DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
      if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
        FUN_005d5b90();
        uVar23 = DAT_00cc9010;
      }
      else {
        DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
        uVar23 = DAT_00cc9010 | 0x200;
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
  DAT_00cc9010 = uVar23;
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
  uVar23 = DAT_00cbe800;
  if ((DAT_027033c4 >> 0x11 & 1) == 0) goto LAB_0050aa94;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
    if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
      DAT_027033dc = DAT_02703304 + DAT_02703384;
    }
    goto LAB_0050aa94;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffdffff;
  DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
  uVar23 = _DAT_02819070 & 1;
  if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar23 != 0)) {
    do {
      uVar23 = 0x100;
      if ((int)DAT_02704e08[1] == 0) {
        uVar23 = 1;
LAB_0050a948:
        if ((uVar23 & _DAT_02819070) != 0) {
          iVar12 = DAT_028190d4;
          if ((int)DAT_02704e08[1] != 0) {
            iVar12 = DAT_028196e4;
          }
          uVar23 = DAT_027033c0 - iVar12;
          if (0 < (int)uVar23) {
            if (uVar23 < 0x11) {
              uVar23 = 0x10;
            }
            (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar23);
          }
        }
      }
      else {
        if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_0050a948;
        FUN_005b1f50(&DAT_01701a00);
      }
      uVar23 = _DAT_02819070 & 1;
    } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar23 != 0);
  }
  iVar12 = DAT_028190d4;
  if ((_DAT_02819070 & 5) != 0) {
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = 0x80;
    if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + 0x80;
    }
LAB_0050aa80:
    DAT_027033d4 = DAT_027033d4 | 0x20000;
    uVar23 = DAT_00cbe800;
    DAT_02703384 = DAT_027033c0;
    goto LAB_0050aa94;
  }
  if (uVar23 != 0) {
    if ((_DAT_02819070 & 1) != 0) {
      (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
      while ((_DAT_02819070 & 1) != 0) {
        (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = (DAT_028190d4 - iVar12) * 2;
    if ((DAT_02703304 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    iVar26 = DAT_027033dc - DAT_027033c0;
    if (iVar26 != DAT_02703304 &&
        iVar26 + (DAT_028190d4 - iVar12) * -2 < 0 == SBORROW4(iVar26,DAT_02703304)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703304;
    }
    goto LAB_0050aa80;
  }
  uVar23 = DAT_00cbe800 & 0xfffffffb;
  if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
      ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_0050aa94;
  DAT_02706260 = 0;
  uVar23 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar23 = 8;
  }
  uVar23 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xfffffb | (uVar23 & 0x1f) << 0x18;
  if (((DAT_027062e0 != 0) && (DAT_027062e8 != '\0')) && (DAT_027062ec == 2)) {
    if ((DAT_00cbe800 >> 0xd & 1) == 0) {
      uVar23 = uVar23 | 0x800;
    }
    DAT_00cbe800 = uVar23;
    if ((DAT_00cbe880 & 0x7f000000) != 0x7000000) {
      DAT_00cbe800 = uVar23 | 0x400;
    }
    FUN_003f7540(4);
    DAT_027062e0 = DAT_027062e0 + -1;
    uVar23 = DAT_00cbe800;
    if ((DAT_00cbe800 & 0x700) != 0) {
      uVar23 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar23 = 8;
      }
      uVar22 = DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
      if ((DAT_00cc3020 != 0) || (uVar23 = DAT_00cbe800 & 0xe0000000 | uVar22, DAT_027062e4 == 0)) {
        DAT_027033d4 = DAT_027033d4 | 1;
        uVar23 = DAT_00cbe800 & 0xe0000000 | uVar22 & 0xeffffffc | 2;
        goto LAB_0050aa94;
      }
    }
  }
  DAT_00cbe800 = uVar23;
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
        puVar31 = (undefined *)((long)DAT_00ccb000 + ((ulong)DAT_00cc3010 & 0x3ff0) + 0x2000000);
      }
      else {
        uVar18 = (ulong)DAT_00cc3010 & 0x1ffffff0;
        if (uVar18 >> 0x19 == 0) {
          if (DAT_00ccb000 == (undefined4 *)0x0) {
LAB_00512f1c:
            DAT_027062d0 = 0;
            DAT_027062c4 = 0;
            DAT_00cc3020 = 0;
            goto LAB_00512d14;
          }
          puVar31 = (undefined *)((long)DAT_00ccb000 + uVar18);
        }
        else {
          if (uVar18 >> 0x1c == 0) {
            puVar31 = &DAT_02884000;
            puVar21 = DAT_00ccb000;
          }
          else {
            if (0x10003fff < (uint)uVar18) {
              FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
              goto LAB_00512f1c;
            }
            puVar21 = (undefined4 *)((long)DAT_00ccb000 + (ulong)(DAT_00cc3010 & 0x3ff0));
            puVar31 = (undefined *)0x2000000;
          }
          puVar31 = (undefined *)((long)puVar21 + (long)puVar31);
        }
      }
      if (DAT_02706314 == '\0') {
        iVar12 = DAT_00cc3020 << 2;
      }
      else {
        puVar31 = puVar31 + (ulong)DAT_02706318 * 4;
        iVar12 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar31,iVar12,0);
    }
LAB_00512d14:
    uVar23 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar23 = 8;
    }
    uVar23 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
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
    goto LAB_0050aa94;
  }
  if (DAT_027062e4 != 0) {
    DAT_00cc3000 = DAT_00cc3000 & 0xfffffeff;
    uVar23 = DAT_00cc3020;
    if (7 < DAT_00cc3020) {
      uVar23 = 8;
    }
    DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    DAT_027062e8 = '\0';
    DAT_02706314 = '\0';
    if ((DAT_02706322 != '\0') && ((_DAT_02819070 & 1) == 0)) {
      if ((DAT_02706328 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00512f80:
          bVar11 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00512f80;
          }
          bVar11 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00512fb8;
LAB_00512fec:
          bVar10 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00512fec;
LAB_00512fb8:
          bVar10 = true;
        }
        if (bVar10 || !bVar11) goto LAB_0051300c;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_0051300c:
    DAT_02706260 = 0;
    FUN_003f75f0(0);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
    uVar23 = DAT_00cbe800 & 0xe0ffffff;
    goto LAB_0050aa94;
  }
  uVar23 = DAT_00cbe800;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_0050aa94;
  if ((int)DAT_00cc3030 < 0) {
    uVar18 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_00512dc8:
    puVar33 = (uint *)((long)DAT_00ccb000 + uVar18 + 0x2000000);
  }
  else {
    uVar18 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar18 >> 0x19 == 0) {
      puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
    }
    else if (uVar18 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + (long)DAT_00ccb000);
    }
    else {
      if ((uint)uVar18 < 0x10004000) {
        uVar18 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_00512dc8;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar18 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar33);
  if ((uVar18 & 1) == 0) goto LAB_00513eb8;
  DAT_00cc3010 = puVar33[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar33 + 2);
    DAT_02706250 = 0;
    if (DAT_02706314 == '\0') {
      DAT_02706318 = 2;
      DAT_02706314 = '\x01';
      puVar14 = &DAT_02706258;
      iVar12 = 2;
    }
    else {
      puVar14 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
      iVar12 = 4 - DAT_02706318;
    }
    uVar18 = FUN_005e2c60(puVar14,iVar12,1);
    if (((uVar18 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_0051390c;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar23 = 0;
    goto LAB_00513ec4;
  }
LAB_0051390c:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto code_r0x00513e50;
  case 1:
    bVar24 = 0;
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 2:
    bVar24 = 0;
    uVar23 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar23;
    break;
  default:
    bVar24 = 0;
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    break;
  case 5:
    uVar23 = DAT_00cc3030 + 0x10;
    uVar22 = DAT_00cc3000 >> 4 & 3;
    if (uVar22 == 1) {
      DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar22 != 0) {
        DAT_00cc3010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00513e50;
      }
      DAT_00cc3040 = uVar23 + DAT_00cc3020 * 0x10;
    }
    bVar24 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    DAT_00cc3010 = uVar23;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar23 = DAT_00cc3000 >> 4 & 3;
    if (uVar23 == 2) {
      puVar30 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar23 != 1) goto code_r0x00513e50;
      puVar30 = (uint *)&DAT_00cc3040;
    }
    bVar24 = 0;
    DAT_00cc3030 = *puVar30;
    *puVar30 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
code_r0x00513e50:
    bVar24 = 1;
  }
  DAT_027062e4 = DAT_027062e4 | bVar24;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_00513eb8:
  uVar23 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar23 = 8;
  }
LAB_00513ec4:
  uVar23 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
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
LAB_0050aa94:
  DAT_00cbe800 = uVar23;
  uVar23 = DAT_00cbec00;
  if ((DAT_027033c4 >> 0x12 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       ((int)DAT_02703308 <= (int)(DAT_027033c0 - DAT_02703388))) {
      DAT_027033c4 = DAT_027033c4 & 0xfffbffff;
      DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
LAB_0050ab4c:
      do {
        iVar12 = DAT_028196e4;
        if ((((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) ||
           (((int)(DAT_027033c0 - DAT_028196e4) < 1 || ((_DAT_02819070 >> 8 & 1) == 0))))
        goto LAB_0050abe0;
        uVar23 = 0x100;
        if ((int)DAT_02704e00[1] == 0) {
          uVar23 = 1;
        }
        else if (((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) {
          FUN_005b1f50(&DAT_01701a00);
          goto LAB_0050ab4c;
        }
        if ((uVar23 & _DAT_02819070) != 0) {
          iVar12 = DAT_028190d4;
          if ((int)DAT_02704e00[1] != 0) {
            iVar12 = DAT_028196e4;
          }
          uVar23 = DAT_027033c0 - iVar12;
          if (0 < (int)uVar23) {
            if (uVar23 < 0x11) {
              uVar23 = 0x10;
            }
            (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar23);
          }
        }
      } while( true );
    }
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
      DAT_027033dc = DAT_02703308 + DAT_02703388;
    }
  }
  goto LAB_0050b16c;
LAB_00510150:
  if ((_DAT_02819070 & 0x500) != 0) {
    FUN_005b1f50(&DAT_01701a00);
    if ((DAT_02704e14 >> 3 & 1) == 0) {
      uVar23 = 0x80;
    }
    else if (((DAT_02704f20 & 0x30) == 0x10) && ((_DAT_02819070 & 0x100) != 0)) {
      uVar23 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)uVar23 < 2) {
        uVar23 = 1;
      }
    }
    else {
      uVar23 = 0x80;
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if ((uVar23 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    uVar22 = DAT_027033c0;
    DAT_02703308 = uVar23;
    if ((int)uVar23 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_0051035c:
      DAT_027033dc = uVar22 + uVar23;
    }
LAB_00510368:
    DAT_027033d4 = DAT_027033d4 | 0x40000;
    uVar23 = DAT_00cbec00;
    DAT_02703388 = DAT_027033c0;
    uVar25 = DAT_027033c4;
    goto LAB_0050cc44;
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
      uVar22 = DAT_028196e4 - iVar12;
    }
    else {
      uVar22 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)uVar22 < 2) {
        uVar22 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if (((int)uVar22 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    uVar23 = DAT_027033c0;
    DAT_02703308 = uVar22;
    if ((int)uVar22 < (int)(DAT_027033dc - DAT_027033c0)) goto LAB_0051035c;
    goto LAB_00510368;
  }
  uVar23 = DAT_00cbec00 & 0xfffffffb;
  uVar25 = DAT_027033c4;
  if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
     (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_0050cc44;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    DAT_00cbec00 = uVar23;
    FUN_005d9ad0();
    uVar23 = DAT_00cbec00;
    uVar25 = DAT_027033c4;
    goto LAB_0050cc44;
  }
  DAT_02706280 = 0;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar22 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_005105cc;
      uVar22 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar22 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_0051050c:
        bVar11 = uVar23 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar23 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_0051050c;
        }
        bVar11 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 != 0) goto LAB_0051053c;
LAB_00510560:
        bVar10 = false;
      }
      else {
        if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0)) goto LAB_00510560;
LAB_0051053c:
        bVar10 = true;
      }
      uVar23 = DAT_00cbec00;
      if (bVar10 || !bVar11) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
        uVar23 = DAT_00cbec00;
      }
    }
  }
LAB_005105cc:
  DAT_00cbec00 = uVar23;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    FUN_005d9ad0();
    uVar23 = DAT_00cbec00;
    uVar25 = DAT_027033c4;
    goto LAB_0050cc44;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar23 = *DAT_00ca16f0;
      if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_005106b4:
        if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_005106cc;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_005106cc:
        uVar23 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar23 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18
        ;
        goto LAB_00510700;
      }
      uVar23 = *DAT_00ca16f0;
      uVar22 = uVar23 >> 10 & 3;
      if (((uVar22 == 0) || (uVar22 == 2)) ||
         ((uVar22 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_005106b4;
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
    uVar23 = DAT_00cbec00;
    uVar25 = DAT_027033c4;
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      uVar23 = DAT_00cbec00 | 8;
    }
    goto LAB_0050cc44;
  }
LAB_00510700:
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
LAB_005108f0:
    DAT_027033d4 = DAT_027033d4 | 2;
    uVar23 = DAT_00cbec00;
    uVar25 = DAT_027033c4;
    goto LAB_0050cc44;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_005108f0;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar23 = DAT_00cbec00;
  if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
    if ((DAT_00cbec00 >> 0xd & 1) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 0x800;
    }
    if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
      DAT_00cbec00 = DAT_00cbec00 | 0x400;
    }
    FUN_003f7540(5);
    DAT_02706370 = DAT_02706370 + -1;
    uVar23 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      uVar22 = (uVar23 & 0x1f) << 0x18;
      uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar22;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_027033d4 = DAT_027033d4 | 2;
        uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar22 | 2;
        uVar25 = DAT_027033c4;
        goto LAB_0050cc44;
      }
    }
  }
  DAT_00cbec00 = uVar23;
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
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    }
    uVar32 = DAT_027033c0;
    uVar22 = DAT_027033c4;
    if (((DAT_00cbec00 >> 3 & 1) != 0) &&
       (uVar23 = DAT_00cbec00, uVar32 = DAT_027033c0, uVar25 = DAT_027033c4, DAT_00ca1630 != 0))
    goto LAB_0050cc44;
    goto joined_r0x00511024;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00511638:
          bVar11 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00511638;
          }
          bVar11 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_0051166c;
LAB_0051169c:
          bVar10 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_0051169c;
LAB_0051166c:
          bVar10 = true;
        }
        if (bVar10 || !bVar11) goto LAB_005116c0;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_005116c0:
    DAT_02706280 = 0;
    FUN_003f75f0(1);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    uVar23 = DAT_00cbec00;
    uVar25 = DAT_027033c4;
    goto LAB_0050cc44;
  }
  uVar23 = DAT_00cbec00;
  uVar25 = DAT_027033c4;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_0050cc44;
  if ((int)DAT_00cc4030 < 0) {
    uVar18 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00511718:
    puVar33 = (uint *)((long)DAT_00ccb000 + uVar18 + 0x2000000);
  }
  else {
    uVar18 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar18 >> 0x19 == 0) {
      puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
    }
    else if (uVar18 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + (long)DAT_00ccb000);
    }
    else {
      if ((uint)uVar18 < 0x10004000) {
        uVar18 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_00511718;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar18 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
  if ((uVar18 & 1) == 0) goto LAB_00511ad4;
  DAT_00cc4010 = puVar33[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar33 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_00511ad4;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar33 + 2);
    DAT_02706270 = 0;
    if (DAT_027063a4 == '\0') {
      DAT_027063a8 = 2;
      DAT_027063a4 = '\x01';
      puVar14 = &DAT_02706278;
      iVar12 = 2;
    }
    else {
      puVar14 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
      iVar12 = 4 - DAT_027063a8;
    }
    uVar18 = FUN_005e3030(puVar14,iVar12,1);
    if (((uVar18 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_00511ad4;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x00511a4c;
  case 1:
    bVar24 = 0;
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 2:
    bVar24 = 0;
    uVar23 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar23;
    break;
  default:
    bVar24 = 0;
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    break;
  case 5:
    uVar23 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4000 >> 4 & 3;
    if (uVar22 == 1) {
      DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar22 != 0) {
        DAT_00cc4010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x00511a4c;
      }
      DAT_00cc4040 = uVar23 + DAT_00cc4020 * 0x10;
    }
    bVar24 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    DAT_00cc4010 = uVar23;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar23 = DAT_00cc4000 >> 4 & 3;
    if (uVar23 == 2) {
      puVar30 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar23 != 1) goto code_r0x00511a4c;
      puVar30 = (uint *)&DAT_00cc4040;
    }
    bVar24 = 0;
    DAT_00cc4030 = *puVar30;
    *puVar30 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x00511a4c:
    bVar24 = 1;
  }
  DAT_02706374 = DAT_02706374 | bVar24;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_02706374 = 1;
  }
LAB_00511ad4:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  }
  uVar32 = DAT_027033c0;
  uVar22 = DAT_027033c4;
  if (((DAT_00cbec00 >> 3 & 1) == 0) ||
     (uVar23 = DAT_00cbec00, uVar32 = DAT_027033c0, uVar25 = DAT_027033c4, DAT_00ca1630 == 0)) {
joined_r0x00511024:
    DAT_02703344 = uVar32;
    uVar23 = DAT_00cbec00;
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
      uVar25 = DAT_027033c4;
      if ((int)(DAT_027033dc - DAT_02703344) <= (int)DAT_027032c4) goto LAB_0050cc44;
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
      uVar25 = DAT_027033c4;
      if ((int)(DAT_027033dc - DAT_02703344) <= (int)DAT_027032c4) goto LAB_0050cc44;
    }
    DAT_027033c4 = uVar22 | 2;
    DAT_027033dc = DAT_02703344 + DAT_027032c4;
    uVar25 = DAT_027033c4;
  }
LAB_0050cc44:
  DAT_00cbec00 = uVar23;
  uVar23 = DAT_00cbec00;
  uVar22 = uVar25;
  if ((uVar25 & (DAT_027033d4 ^ 0xffffffff) & 0x1ffff) == 0) goto LAB_0050b16c;
  goto LAB_0050cc54;
LAB_0050abe0:
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
LAB_0050b15c:
    DAT_027033d4 = DAT_027033d4 | 0x40000;
    uVar23 = DAT_00cbec00;
    DAT_02703388 = DAT_027033c0;
    goto LAB_0050b16c;
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
      DAT_02703308 = DAT_028196e4 - iVar12;
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
    goto LAB_0050b15c;
  }
  uVar23 = DAT_00cbec00 & 0xfffffffb;
  if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
     (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_0050b16c;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    DAT_00cbec00 = uVar23;
    FUN_005d9ad0();
    uVar23 = DAT_00cbec00;
    goto LAB_0050b16c;
  }
  DAT_02706280 = 0;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar22 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_005130dc;
      uVar22 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar22 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00513050:
        bVar11 = uVar23 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar23 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_00513050;
        }
        bVar11 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 != 0) goto LAB_00513088;
LAB_005130a8:
        bVar10 = false;
      }
      else {
        if ((DAT_00ca15d8 <= DAT_00ca15dc) && ((DAT_00ca1630 & 0xfffffffb) == 0)) goto LAB_005130a8;
LAB_00513088:
        bVar10 = true;
      }
      uVar23 = DAT_00cbec00;
      if (bVar10 || !bVar11) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
        uVar23 = DAT_00cbec00;
      }
    }
  }
LAB_005130dc:
  DAT_00cbec00 = uVar23;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    FUN_005d9ad0();
    uVar23 = DAT_00cbec00;
    goto LAB_0050b16c;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar23 = *DAT_00ca16f0;
      if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_005131b0:
        if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_005131c8;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_005131c8:
        uVar23 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar23 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18
        ;
        goto LAB_005131fc;
      }
      uVar23 = *DAT_00ca16f0;
      uVar22 = uVar23 >> 10 & 3;
      if (((uVar22 == 0) || (uVar22 == 2)) ||
         ((uVar22 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_005131b0;
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
    uVar23 = DAT_00cbec00;
    if ((~DAT_00cbe020 & 0xc00) == 0) {
      uVar23 = DAT_00cbec00 | 8;
    }
    goto LAB_0050b16c;
  }
LAB_005131fc:
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
LAB_005133b0:
    DAT_027033d4 = DAT_027033d4 | 2;
    uVar23 = DAT_00cbec00;
    goto LAB_0050b16c;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_005133b0;
  if ((DAT_00cc4000 >> 8 & 1) == 0) {
    FUN_009885d0(&PTR_FUN_00c9aa28,"Vif1 running when CHCR == %x");
  }
  uVar23 = DAT_00cbec00;
  if (((DAT_02706370 != 0) && (DAT_02706378 != '\0')) && (DAT_0270637c == 2)) {
    if ((DAT_00cbec00 >> 0xd & 1) == 0) {
      DAT_00cbec00 = DAT_00cbec00 | 0x800;
    }
    if ((DAT_00cbec80 & 0x7f000000) != 0x7000000) {
      DAT_00cbec00 = DAT_00cbec00 | 0x400;
    }
    FUN_003f7540(5);
    DAT_02706370 = DAT_02706370 + -1;
    uVar23 = DAT_00cbec00;
    if ((DAT_00cbec00 & 0x700) != 0) {
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      uVar22 = (uVar23 & 0x1f) << 0x18;
      uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar22;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar22 | 2;
        goto LAB_005133b0;
      }
    }
  }
  DAT_00cbec00 = uVar23;
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
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    }
    uVar22 = DAT_027033c0;
    if (((DAT_00cbec00 >> 3 & 1) != 0) &&
       (uVar23 = DAT_00cbec00, uVar22 = DAT_027033c0, DAT_00ca1630 != 0)) goto LAB_0050b16c;
    goto joined_r0x00513990;
  }
  if (DAT_02706374 != 0) {
    if (((DAT_00cc4000 & 1) == 0) && (DAT_027063a0 < 0x11)) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffffdff;
    }
    if ((DAT_00cc4000 & 1) != 0) {
      uVar23 = DAT_00cc4020;
      if (0xf < DAT_00cc4020) {
        uVar23 = 0x10;
      }
      DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xfffffeff;
    DAT_02706378 = '\0';
    DAT_027063a4 = '\0';
    if ((DAT_027063b2 != '\0') && ((_DAT_02819070 & 0x100) == 0)) {
      if ((DAT_027063b8 & 1) != 0) {
        if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_00513f94:
          bVar11 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_00513f94;
          }
          bVar11 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 != 0) goto LAB_00513fcc;
LAB_00513ff8:
          bVar10 = false;
        }
        else {
          if ((DAT_00ca14b8 <= DAT_00ca14bc) && ((DAT_00ca1510 & 0xfffffffb) == 0))
          goto LAB_00513ff8;
LAB_00513fcc:
          bVar10 = true;
        }
        if (bVar10 || !bVar11) goto LAB_00514018;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_00514018:
    DAT_02706280 = 0;
    FUN_003f75f0(1);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    uVar23 = DAT_00cbec00;
    goto LAB_0050b16c;
  }
  uVar23 = DAT_00cbec00;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_0050b16c;
  if ((int)DAT_00cc4030 < 0) {
    uVar18 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_00514040:
    puVar33 = (uint *)((long)DAT_00ccb000 + uVar18 + 0x2000000);
  }
  else {
    uVar18 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar18 >> 0x19 == 0) {
      puVar33 = (uint *)((long)DAT_00ccb000 + uVar18);
    }
    else if (uVar18 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + (long)DAT_00ccb000);
    }
    else {
      if ((uint)uVar18 < 0x10004000) {
        uVar18 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_00514040;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar18 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
  if ((uVar18 & 1) == 0) goto LAB_005143f8;
  DAT_00cc4010 = puVar33[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar33 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_005143f8;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar33 + 2);
    DAT_02706270 = 0;
    if (DAT_027063a4 == '\0') {
      DAT_027063a8 = 2;
      DAT_027063a4 = '\x01';
      puVar14 = &DAT_02706278;
      iVar12 = 2;
    }
    else {
      puVar14 = (undefined8 *)((long)&DAT_02706270 + (ulong)DAT_027063a8 * 4);
      iVar12 = 4 - DAT_027063a8;
    }
    uVar18 = FUN_005e3030(puVar14,iVar12,1);
    if (((uVar18 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_005143f8;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto code_r0x005143b8;
  case 1:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar23 = DAT_00cc4030;
    break;
  case 2:
    uVar23 = DAT_00cc4030 + 0x10;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  default:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    uVar23 = DAT_00cc4010;
    break;
  case 5:
    uVar23 = DAT_00cc4030 + 0x10;
    uVar22 = DAT_00cc4000 >> 4 & 3;
    if (uVar22 == 1) {
      DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar22 != 0) {
        DAT_00cc4010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto code_r0x005143b8;
      }
      DAT_00cc4040 = uVar23 + DAT_00cc4020 * 0x10;
    }
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc4030 = DAT_00cc4010;
    break;
  case 6:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
    uVar23 = DAT_00cc4000 >> 4 & 3;
    if (uVar23 == 2) {
      puVar30 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar23 != 1) goto code_r0x005143b8;
      puVar30 = (uint *)&DAT_00cc4040;
    }
    DAT_00cc4030 = *puVar30;
    *puVar30 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    uVar23 = DAT_00cc4010;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
code_r0x005143b8:
    DAT_02706374 = DAT_02706374 | 1;
    uVar23 = DAT_00cc4010;
  }
  DAT_00cc4010 = uVar23;
  if (DAT_00cc4020 != 0) {
    DAT_027063b0 = DAT_027063b0 | 1;
  }
  if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_02706374 = 1;
  }
LAB_005143f8:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  }
  uVar22 = DAT_027033c0;
  if (((DAT_00cbec00 >> 3 & 1) == 0) ||
     (uVar23 = DAT_00cbec00, uVar22 = DAT_027033c0, DAT_00ca1630 == 0)) {
joined_r0x00513990:
    DAT_02703344 = uVar22;
    uVar23 = DAT_00cbec00;
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
LAB_0050b16c:
  DAT_00cbec00 = uVar23;
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
            uVar22 = DAT_00cab0a0;
            uVar23 = DAT_02704648;
            if (DAT_0270465d == '\0') {
              bVar11 = false;
            }
            else {
              if ((int)DAT_02704650 < 0x80) {
                if ((int)DAT_02704668 < 1) {
                  if (DAT_0270465c != '\0') goto LAB_0050b8c8;
                  DAT_02704670 = (int)DAT_0270466c._3_1_;
                  DAT_02704668 = (uint)DAT_00cab0a4 * (uint)DAT_00cab0a6;
                  bVar11 = true;
                  DAT_0270465c = '\x01';
                  goto joined_r0x0050b89c;
                }
                uVar23 = 0x80 - DAT_02704650;
                if (DAT_02704668 <= 0x80 - DAT_02704650) {
                  uVar23 = DAT_02704668;
                }
                pvVar13 = (void *)(DAT_00cba000 + ((ulong)DAT_00cab0a0 & 0x1fffff));
                if ((int)DAT_02704650 < 4) {
                  uVar25 = uVar23;
                  if (4 - DAT_02704650 <= uVar23) {
                    uVar25 = 4 - DAT_02704650;
                  }
                  memcpy((void *)((long)(int)DAT_02704650 * 4 + 0x2704638),pvVar13,
                         (ulong)(uVar25 << 2));
                }
                uVar25 = uVar23;
                if ((int)(0x80 - DAT_0270464c) <= (int)uVar23) {
                  uVar25 = 0x80 - DAT_0270464c;
                }
                memcpy(&DAT_02704438 + (long)(int)DAT_0270464c * 4,pvVar13,(long)(int)(uVar25 << 2))
                ;
                __memcpy_chk(&DAT_02704438,(void *)((long)pvVar13 + (long)(int)uVar25 * 4),
                             (long)(int)((uVar23 - uVar25) * 4),0x244);
                DAT_00cab0a0 = uVar22 + uVar23 * 4;
                DAT_0270464c = DAT_0270464c + uVar23 & 0x7f;
                DAT_02704650 = DAT_02704650 + uVar23;
                DAT_02704660 = DAT_02704660 + (uVar23 >> 2);
                DAT_02704668 = DAT_02704668 - uVar23;
                if (DAT_02704668 == 0) {
                  DAT_00cab0a0 = DAT_0270466c & 0xffffff;
                }
                if (0 < (int)DAT_02704650) {
                  DAT_00cb9300 = DAT_00cb9300 & 0xfbffffff;
                }
LAB_0050b958:
                bVar11 = true;
              }
              else {
                bVar11 = false;
                if ((DAT_0270465c != '\0') && (DAT_02704668 == 0)) {
LAB_0050b8c8:
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
                    iVar12 = (DAT_0270253c - DAT_02702530) * 8;
                    iVar26 = DAT_027033dc - DAT_027033c0;
                    if (iVar26 != iVar12 &&
                        iVar26 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar26,iVar12))
                    {
                      DAT_027033dc = DAT_027033c0 + iVar12;
                    }
                  }
                  goto LAB_0050b958;
                }
              }
              uVar23 = DAT_02704648;
            }
joined_r0x0050b89c:
            DAT_02704648 = uVar23;
            if ((DAT_02704655 != '\0') &&
               ((3 < (int)DAT_02704650 || ((DAT_02704654 != '\0' && (DAT_00cc7820 == 0)))))) {
              if ((DAT_00cc7800 >> 8 & 1) == 0) {
                _DAT_02704654 = 0;
              }
              else {
                if (DAT_00cc7820 != 0) {
joined_r0x0050b99c:
                  bVar11 = true;
                  if ((DAT_00cc7820 != 0) && (bVar11 = true, 0 < (int)DAT_02704650)) {
                    uVar23 = DAT_02704650 >> 2;
                    if ((int)DAT_00cc7820 <= (int)(DAT_02704650 >> 2)) {
                      uVar23 = DAT_00cc7820;
                    }
                    pvVar13 = (void *)FUN_003d1c90(&DAT_00cc7800,DAT_00cc7810,7,1);
                    if (pvVar13 != (void *)0x0) {
                      iVar12 = uVar23 * 4;
                      if (0 < iVar12) {
                        iVar16 = 0x80 - DAT_02704648;
                        iVar26 = iVar12;
                        if (iVar16 == iVar12 ||
                            (int)(iVar16 + uVar23 * -4) < 0 != SBORROW4(iVar16,iVar12)) {
                          iVar26 = iVar16;
                        }
                        memcpy(pvVar13,&DAT_02704438 + (long)(int)DAT_02704648 * 4,
                               (long)(iVar26 << 2));
                        memcpy((void *)((long)pvVar13 + (long)iVar26 * 4),&DAT_02704438,
                               (long)((iVar12 - iVar26) * 4));
                        DAT_02704648 = DAT_02704648 + iVar12 & 0x7f;
                        DAT_02704650 = DAT_02704650 + uVar23 * -4;
                      }
                      DAT_02704658 = DAT_02704658 + uVar23;
                      DAT_00cc7810 = DAT_00cc7810 + uVar23 * 0x10;
                      DAT_00cc7820 = DAT_00cc7820 - uVar23;
                    }
                    bVar11 = true;
                  }
                  goto LAB_0050b74c;
                }
                uVar22 = DAT_00cc7800 & 0xffff;
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
                  uVar25 = DAT_02704650 - 4;
                  if (3 < (int)DAT_02704650) {
                    iVar12 = 0x80 - uVar23;
                    if (3 < iVar12) {
                      iVar12 = 4;
                    }
                    __memcpy_chk(&DAT_02704680,&DAT_02704438 + (long)(int)uVar23 * 4,
                                 (long)(iVar12 * 4),0x10);
                    memcpy(&DAT_02704680 + iVar12,&DAT_02704438,(long)(iVar12 * -4 + 0x10));
                    DAT_02704648 = uVar23 + 4 & 0x7f;
                    DAT_00cc7800 = DAT_02704680 & 0xffff0000 | uVar22;
                    DAT_00cc7820 = DAT_02704680 & 0xffff;
                    DAT_00cc7810 = DAT_02704684;
                    DAT_02704650 = uVar25;
                    if ((((uint)((int)DAT_02704680 < 0) & uVar22 >> 7) != 0) ||
                       ((DAT_02704680 & 0x70000000) == 0x70000000)) {
                      _DAT_02704654 = CONCAT11(DAT_02704655,1);
                    }
                    goto joined_r0x0050b99c;
                  }
                }
              }
              bVar11 = true;
            }
LAB_0050b74c:
          } while (bVar11);
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
        bVar24 = DAT_02b5bb5d | 6;
        DAT_02b5bbbc = 0;
        if ((int)DAT_02b5bbb4 == 0) {
          DAT_02b6bc2c = 1;
          DAT_02b5bbd0 = 0;
          DAT_02b5bbb4 = 0x100000001;
          DAT_02b5bbac = DAT_02b6bc20;
        }
        if (DAT_02b6bc39 == '\0') {
          if (DAT_02b5bbac < DAT_02b6bc24) {
            DAT_02b5bb5d = bVar24;
            if (DAT_02b5bbb4._4_4_ == 0) {
LAB_0050bd2c:
              if ((DAT_02b5bbb0 < 1) || (DAT_02b6bc38 == 0)) {
                if (0 < DAT_02b5bbb0) {
                  iVar12 = DAT_02b5bbc4 + 3;
                  if (-1 < DAT_02b5bbc4) {
                    iVar12 = DAT_02b5bbc4;
                  }
                  DAT_027025ec = (iVar12 >> 2) * 0xc;
                  if (((DAT_02704f20 & 1) != 0) && (DAT_02b5bbc4 - 4U < 0xfffffff9))
                  goto LAB_0050cb6c;
                  goto LAB_0050cb8c;
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
                iVar12 = FUN_00898660();
                if (iVar12 == -1) {
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
                      iVar12 = (DAT_0270253c - DAT_02702530) * 8;
                      iVar26 = DAT_027033dc - DAT_027033c0;
                      if (iVar26 != iVar12 &&
                          iVar26 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar26,iVar12)
                         ) {
                        DAT_027033dc = DAT_027033c0 + iVar12;
                      }
                    }
                  }
                  DAT_02b6bc20 = DAT_02b6bc20 + 1;
                  DAT_02b5bbac = DAT_02b5bbac + 1;
                  iVar12 = DAT_02b5bbb0 + -1;
                  if (iVar12 == 0 || DAT_02b5bbb0 < 1) {
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
                      DAT_02b5bbb0 = iVar12;
                    }
                    else {
                      DAT_02b5bb5c = 10;
                      DAT_02b5bb5d = DAT_02b5bb5d | 10;
                      DAT_02b5bbb0 = iVar12;
                    }
                  }
                  else {
                    DAT_02b5bbd0 = 0;
                    DAT_02b5bbb4 = CONCAT44(1,(int)DAT_02b5bbb4);
                    if (DAT_02b5bbc0 < 4) {
                      DAT_02b5b110 = *(undefined4 *)(&DAT_0022b370 + (long)(int)DAT_02b5bbc0 * 4);
                    }
                    DAT_02b5b114 = DAT_02b5bbac;
                    DAT_02b5bbb0 = iVar12;
                    DAT_02b5bbd4 = (**(code **)(DAT_02b5bb48 + 0x10))();
                    if (DAT_02b6bc38 == 0) {
                      iVar12 = DAT_02b5bbc4 + 3;
                      if (-1 < DAT_02b5bbc4) {
                        iVar12 = DAT_02b5bbc4;
                      }
                      iVar12 = (DAT_02702530 - DAT_02702570) + (iVar12 >> 2) * 0xc;
                    }
                    else {
                      iVar12 = DAT_02b5bbc4 + 3;
                      if (-1 < DAT_02b5bbc4) {
                        iVar12 = DAT_02b5bbc4;
                      }
                      iVar12 = (iVar12 >> 2) * 0xc;
                    }
                    FUN_00898ed0(iVar12);
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
                goto LAB_0050bd2c;
              }
              if (DAT_02b5bbcc <= DAT_02b5bbd0) {
                DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
                FUN_009887f0(&PTR_FUN_00c9aa28,"CDVD READ ERROR, sector = 0x%08x");
                goto LAB_0050b36c;
              }
              if (DAT_02b5bbc0 < 4) {
                DAT_02b5b110 = *(undefined4 *)(&DAT_0022b370 + (long)(int)DAT_02b5bbc0 * 4);
              }
              DAT_02b5b114 = DAT_02b5bbac;
              DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
              DAT_02b5bbd4 = (**(code **)(DAT_02b5bb48 + 0x10))(DAT_02b5bbac);
              DAT_027025ec = DAT_02b6bc28;
              if (((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) {
LAB_0050cb6c:
                if (DAT_027025ec < DAT_02b5bb50) {
                  DAT_027025ec = (int)((float)DAT_027025ec * 0.5);
                }
              }
LAB_0050cb8c:
              DAT_0270256c = DAT_02702530;
              DAT_02702534 = DAT_02702534 | 0x200;
              if ((int)DAT_027025ec < DAT_0270253c - DAT_02702530) {
                DAT_0270253c = DAT_02702530 + DAT_027025ec;
              }
              if (DAT_02702544 < 0) {
                iVar12 = (DAT_0270253c - DAT_02702530) * 8;
                iVar26 = DAT_027033dc - DAT_027033c0;
                if (iVar26 != iVar12 &&
                    iVar26 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar26,iVar12)) {
                  DAT_027033dc = DAT_027033c0 + iVar12;
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
          DAT_02b5bb5d = bVar24;
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
LAB_0050b36c:
    if ((DAT_02702534 >> 10 & 1) != 0) {
      if (DAT_02702530 - DAT_02702570 < (int)DAT_027025f0) {
        if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702570) {
          DAT_0270253c = DAT_027025f0 + DAT_02702570;
        }
      }
      else {
        bVar11 = DAT_02b6bc38 != 0xf;
        if ((DAT_02b6bc38 < 0x10) && (DAT_02b6bc38 = DAT_02b6bc38 + 1, bVar11)) {
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
            iVar12 = (DAT_0270253c - DAT_02702530) * 8;
            iVar26 = DAT_027033dc - DAT_027033c0;
            if (iVar26 != iVar12 &&
                iVar26 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar26,iVar12)) {
              DAT_027033dc = DAT_027033c0 + iVar12;
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
          goto joined_r0x0050c28c;
        }
        uVar23 = DAT_02702534 & 0xfffffffd;
        switch(DAT_02b6bc1d) {
        case 1:
          DAT_02b6bc2c = 1;
          DAT_02b5bb59 = CONCAT11(DAT_02b5bb59._1_1_,0x4c);
          DAT_02b5bb5c = 10;
          DAT_02b5bbac = DAT_02b6bc20;
          DAT_02b5bb5d = DAT_02b5bb5d | 10;
          DAT_02b6bc38 = 0;
          uVar22 = DAT_02702534 >> 10;
          DAT_02702534 = uVar23;
          if ((uVar22 & 1) == 0) {
            DAT_027025f0 = DAT_02b6bc28;
            if ((((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) && (DAT_02b6bc28 < DAT_02b5bb50))
            {
              DAT_027025f0 = (uint)((float)DAT_02b6bc28 * 0.5);
            }
            DAT_02702534 = uVar23 | 0x400;
            DAT_02702570 = DAT_02702530;
            if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
              DAT_0270253c = DAT_027025f0 + DAT_02702530;
            }
            if (DAT_02702544 < 0) {
              iVar12 = (DAT_0270253c - DAT_02702530) * 8;
              iVar26 = DAT_027033dc - DAT_027033c0;
              if (iVar26 != iVar12 &&
                  iVar26 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar26,iVar12)) {
                DAT_027033dc = DAT_027033c0 + iVar12;
              }
            }
          }
          goto code_r0x0050c168;
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
            uVar23 = uVar23 | 0x400;
            DAT_02702570 = DAT_02702530;
            if ((int)DAT_027025f0 < DAT_0270253c - DAT_02702530) {
              DAT_0270253c = DAT_027025f0 + DAT_02702530;
            }
            if (DAT_02702544 < 0) {
              iVar12 = (DAT_0270253c - DAT_02702530) * 8;
              iVar26 = DAT_027033dc - DAT_027033c0;
              if (iVar26 != iVar12 &&
                  iVar26 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar26,iVar12)) {
                DAT_027033dc = DAT_027033c0 + iVar12;
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
        DAT_02702534 = uVar23;
        DAT_02b6bc1d = 0;
code_r0x0050c168:
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
joined_r0x0050c28c:
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
    if (DAT_02702308 != '\0') goto LAB_0050c614;
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
LAB_0050c614:
    DAT_02702654 = (**(code **)(DAT_02702310 + 0x10))(DAT_02702654);
    DAT_02702308 = '\0';
  }
  iVar12 = (int)DAT_02704e08[1];
  uVar23 = 0x100;
  if (iVar12 == 0) {
    uVar23 = 1;
  }
  if (((iVar12 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)) {
    if ((_DAT_02819070 & uVar23) != 0) {
      piVar29 = &DAT_028190d4;
      if (iVar12 != 0) {
        piVar29 = &DAT_028196e4;
      }
      uVar23 = DAT_027033c0 - *piVar29;
      if (0 < (int)uVar23) {
        if (uVar23 < 0x11) {
          uVar23 = 0x10;
        }
        (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar23);
      }
    }
    iVar12 = (int)DAT_02704e00[1];
    if (iVar12 != 0) goto LAB_0050c6dc;
    uVar23 = 1;
LAB_0050c734:
    if ((_DAT_02819070 & uVar23) != 0) {
      piVar29 = &DAT_028190d4;
      if (iVar12 != 0) {
        piVar29 = &DAT_028196e4;
      }
      uVar23 = DAT_027033c0 - *piVar29;
      if (0 < (int)uVar23) {
        if (uVar23 < 0x11) {
          uVar23 = 0x10;
        }
        (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar23);
      }
    }
  }
  else {
    FUN_005b1f50(&DAT_01701a00);
    iVar12 = (int)DAT_02704e00[1];
    if (iVar12 == 0) {
      uVar23 = 1;
      goto LAB_0050c734;
    }
LAB_0050c6dc:
    uVar23 = 0x100;
    if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_0050c734;
    FUN_005b1f50(&DAT_01701a00);
  }
  uVar18 = (ulong)DAT_027033dc;
  iVar12 = DAT_027033dc - DAT_027033c0;
  if ((0xc0 < DAT_02702654) && (0x30 < iVar12)) {
    DAT_027033dc = DAT_027033c0 + 0x30;
    uVar18 = (ulong)DAT_027033dc;
    iVar12 = 0x30;
  }
  iVar26 = (DAT_0270253c - DAT_02702530) * 8 - DAT_02702654;
  if (iVar12 <= iVar26) goto LAB_0050c848;
  DAT_027033dc = iVar26 + DAT_027033c0;
  uVar18 = (ulong)DAT_027033dc;
  if (DAT_00ca11d8 < (int)(DAT_027033dc - DAT_00ca11d4)) goto LAB_0050c860;
LAB_0050c7fc:
  if ((int)((int)uVar18 - DAT_00ca11c8) <= DAT_00ca11cc) goto LAB_0050c880;
  while (DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8, DAT_00ca77c8 == '\x01') {
    while( true ) {
      DAT_027026e8 = 0;
      DAT_00ca77c8 = '\0';
      fastjmp_jmp(&DAT_00ca77d0,1);
      uVar18 = extraout_x8;
      lVar19 = extraout_x14;
LAB_0050c848:
      if ((int)((int)uVar18 - DAT_00ca11d4) <= DAT_00ca11d8) goto LAB_0050c7fc;
LAB_0050c860:
      DAT_027033dc = DAT_00ca11d8 + DAT_00ca11d4;
      if (DAT_00ca11cc < (int)(DAT_027033dc - DAT_00ca11c8)) break;
LAB_0050c880:
      if (DAT_00ca77c8 != '\x01') goto LAB_0050c898;
    }
  }
LAB_0050c898:
  DAT_027026e8 = 0;
  lVar19 = *(long *)(lVar19 + 0x28);
LAB_0050c89c:
  if (lVar19 != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

