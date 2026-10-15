// vaddr 0x3ED550  ghidra 0x4ED550  name=FUN_004ed550  size=52884 instr-addr
// duvod: data 0xB9AA28 (40 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed550(uint param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  char *pcVar14;
  undefined8 *puVar15;
  void *pvVar16;
  int iVar17;
  uint *puVar18;
  char cVar19;
  uint uVar20;
  code *pcVar21;
  ulong extraout_x8;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  undefined *puVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint *extraout_x14;
  uint *puVar33;
  char *pcVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined4 *puVar39;
  undefined4 uVar40;
  timespec local_88;
  long local_78;
  
  uVar23 = DAT_027032a8;
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  DAT_027033c8 = 1;
  uVar35 = (ulong)DAT_027032a8;
  DAT_027032a8 = DAT_027032a8 + 4;
  DAT_027032ac = FUN_005fd4b0(uVar23);
  pcVar34 = "SPECIAL" + (ulong)(DAT_027032ac >> 0x1a) * 0x38;
  if ((code *)(&PTR_FUN_00c62920)[(ulong)(DAT_027032ac >> 0x1a) * 7] != (code *)0x0) {
    pcVar34 = (char *)(*(code *)(&PTR_FUN_00c62920)[(ulong)(DAT_027032ac >> 0x1a) * 7])();
    pcVar21 = *(code **)(pcVar34 + 0x18);
    while (pcVar21 != (code *)0x0) {
      pcVar34 = (char *)(*pcVar21)(DAT_027032ac);
      pcVar21 = *(code **)(pcVar34 + 0x18);
    }
  }
  if (DAT_027032a8 == 0x9fc43120) {
    DAT_00ca77c0 = 200000;
LAB_004ed620:
    DAT_00ca77c0 = DAT_00ca77c0 + -1;
    if ((DAT_00ca77a0 & 1) == 0) {
      DAT_00ca77a0 = 0;
    }
    else {
      *DAT_00ca77b0 = 0;
      DAT_00ca77a8 = 0;
    }
    uVar23 = DAT_027032ac;
    DAT_0c72ab54 = 0;
    pcVar14 = "SPECIAL" + (ulong)(DAT_027032ac >> 0x1a) * 0x38;
    pcVar21 = (code *)(&PTR_FUN_00c62920)[(ulong)(DAT_027032ac >> 0x1a) * 7];
    _DAT_0c72ab48 = uVar35;
    DAT_0c72ab50 = DAT_027032ac;
    while (pcVar21 != (code *)0x0) {
      pcVar14 = (char *)(*pcVar21)(uVar23);
      pcVar21 = *(code **)(pcVar14 + 0x18);
    }
    (**(code **)(pcVar14 + 0x30))(&DAT_00ca77a0);
  }
  else if (DAT_00ca77c0 != 0) goto LAB_004ed620;
  DAT_00ca77b8 = DAT_00ca77b8 + (byte)pcVar34[0x10];
  (**(code **)(pcVar34 + 0x20))();
  uVar23 = DAT_00ca1104;
  if (DAT_027033c8 != 0) {
    DAT_027033c8 = 0;
    DAT_027032a8 = param_1;
  }
  DAT_027026e8 = '\x01';
  uVar26 = DAT_00ca77b8 & 7;
  DAT_027033c0 = DAT_027033c0 + (DAT_00ca77b8 >> 3);
  uVar25 = DAT_027033c0 + 0xc00;
  if ((DAT_00cca000 == 0) || ((DAT_00cca010 & DAT_00cca000) == 0)) {
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
  if (((ushort)DAT_00cc9010 & (DAT_00cc9010._2_2_ | 0x8000)) == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = 0;
    if (DAT_00cca520._2_1_ != 1 && (_DAT_00cc9000 & 1) != 0) {
      uVar30 = 0x800;
    }
  }
  uVar30 = uVar30 | uVar22;
  if (((((DAT_02703250 & uVar30) != 0) && ((DAT_02703250 >> 0x10 & 1) != 0)) &&
      ((DAT_02703250 & 1) != 0)) &&
     (((DAT_02703250 >> 1 & 1) == 0 && ((DAT_02703250 >> 2 & 1) == 0)))) {
    DAT_027033c8 = 0;
    uVar22 = DAT_02703250 & 0x400000;
    DAT_02703250 = DAT_02703250 | 2;
    DAT_02703258 = DAT_027032a8;
    DAT_02703254 = uVar30;
    DAT_027032a8 = 0x80000200;
    if (uVar22 != 0) {
      DAT_027032a8 = 0xbfc00400;
    }
  }
  DAT_00ca77b8 = uVar26;
  DAT_027033dc = uVar25;
  DAT_027033e0 = DAT_027033c0;
  if ((int)(DAT_027033c0 - DAT_00ca11c8) < DAT_00ca11cc) {
    cVar19 = '\x01';
    uVar22 = DAT_00cca000;
    uVar31 = DAT_02703250;
    uVar20 = DAT_027033c0;
  }
  else {
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
            ((((DAT_02703250 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)) &&
             (DAT_027033dc = DAT_027033c0 + 4, 0 < DAT_02702544)))))) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
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
              uVar25 = uVar23;
            }
            else {
              uVar25 = DAT_027033c0;
              if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_004edf74;
            }
            DAT_00ca115c = DAT_00ca115c | 0x80;
            DAT_00ca1170 = uVar25;
          }
LAB_004edf74:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
              uVar25 = uVar23;
            }
            else {
              uVar25 = DAT_027033c0;
              if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_004ee040;
            }
            DAT_00ca1178 = DAT_00ca1178 | 0x80;
            DAT_00ca118c = uVar25;
          }
LAB_004ee040:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
              uVar25 = uVar23;
            }
            else {
              uVar25 = DAT_027033c0;
              if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_004ee0a0;
            }
            DAT_00ca1194 = DAT_00ca1194 | 0x80;
            DAT_00ca11a8 = uVar25;
          }
LAB_004ee0a0:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            else {
              uVar23 = DAT_027033c0;
              if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_004ee0fc;
            }
            DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
            DAT_00ca11c4 = uVar23;
          }
        }
LAB_004ee0fc:
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
              goto LAB_004edc08;
            }
          }
          DAT_00ca1154 = '\0';
        }
LAB_004edc08:
        FUN_00916070();
        FUN_008cd720();
        uVar35 = 0;
        do {
          lVar32 = 0;
          do {
            if (((&DAT_0c728f8d)[uVar35 * 0x280 + lVar32 * 0x28] != '\0') &&
               (iVar13 = (&DAT_0c728f84)[lVar32 * 10 + uVar35 * 0xa0], iVar13 != 0)) {
              piVar28 = &DAT_0c728f88 + lVar32 * 10 + uVar35 * 0xa0;
              iVar27 = *piVar28;
              *piVar28 = iVar27 + -1;
              if (iVar27 + -1 == 0) {
                *piVar28 = iVar13;
                puVar15 = &DAT_0c728f68 + uVar35 * 0x50 + lVar32 * 5;
                bVar24 = *(byte *)((long)puVar15 + 0x24);
                *(byte *)((long)puVar15 + 0x24) = bVar24 ^ 1;
                uVar40 = 0;
                if (bVar24 == 0) {
                  uVar40 = *(undefined4 *)(puVar15 + 3);
                }
                puVar3 = (undefined4 *)puVar15[1];
                for (puVar39 = (undefined4 *)*puVar15; puVar39 != puVar3; puVar39 = puVar39 + 1) {
                  FUN_008ca230(uVar40,&DAT_0c72a368,uVar35 & 0xffffffff,*puVar39);
                }
              }
            }
            lVar32 = lVar32 + 1;
          } while (lVar32 != 0x10);
          uVar35 = uVar35 + 1;
        } while (uVar35 != 8);
        uVar35 = DAT_00ca1140;
        if ((DAT_02704e3c != 0.0) && (DAT_00ca114c == '\0')) {
          uVar35 = DAT_00ca1138 + DAT_00ca1140;
          clock_gettime(1,&local_88);
          lVar32 = (local_88.tv_nsec - uVar35) + local_88.tv_sec * 1000000000;
          if (lVar32 < DAT_00ca1138) {
            if (1 < (int)(SUB168(SEXT816(lVar32) * SEXT816(-0x431bde82d7b634db),8) >> 0x12) -
                    (SUB164(SEXT816(lVar32) * SEXT816(-0x431bde82d7b634db),0xc) >> 0x1f)) {
              local_88.tv_sec = uVar35 / 1000000000;
              local_88.tv_nsec = uVar35 % 1000000000;
              clock_nanosleep(1,1,&local_88,(timespec *)0x0);
            }
          }
          else {
            lVar7 = 0;
            if (DAT_00ca1138 != 0) {
              lVar7 = lVar32 / DAT_00ca1138;
            }
            uVar35 = DAT_00ca1140 + lVar7 * DAT_00ca1138;
          }
        }
        DAT_00ca1140 = uVar35;
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
              if (uVar5 != 0) goto LAB_004edfdc;
              if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
                uVar25 = 0;
                if (DAT_00ca1168 != 0) {
                  uVar25 = (DAT_027033c0 - DAT_00ca1170) / DAT_00ca1168;
                }
                DAT_00ca1158 = uVar25 + DAT_00ca1158;
              }
              DAT_00ca115c = DAT_00ca115c & 0xff7f;
            }
            DAT_00ca1170 = uVar23;
          }
LAB_004edfdc:
          if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) != 0)) {
            uVar5 = DAT_00ca1178 >> 4 & 3;
            if (uVar5 == 0) {
              if (((DAT_00ca1178 >> 7 & 1) != 0) && ((DAT_00ca1178 & 3) != 3)) {
                uVar25 = 0;
                if (DAT_00ca1184 != 0) {
                  uVar25 = (DAT_027033c0 - DAT_00ca118c) / DAT_00ca1184;
                }
                DAT_00ca1174 = uVar25 + DAT_00ca1174;
              }
              DAT_00ca1178 = DAT_00ca1178 & 0xff7f;
            }
            else {
              if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_004ee190;
              DAT_00ca1178 = DAT_00ca1178 | 0x80;
              DAT_00ca1174 = 0;
              DAT_00ca117c = DAT_00ca117c & 0xffff;
            }
            DAT_00ca118c = uVar23;
          }
LAB_004ee190:
          if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) != 0)) {
            uVar5 = DAT_00ca1194 >> 4 & 3;
            if (uVar5 == 0) {
              if (((DAT_00ca1194 >> 7 & 1) != 0) && ((DAT_00ca1194 & 3) != 3)) {
                uVar25 = 0;
                if (DAT_00ca11a0 != 0) {
                  uVar25 = (DAT_027033c0 - DAT_00ca11a8) / DAT_00ca11a0;
                }
                DAT_00ca1190 = uVar25 + DAT_00ca1190;
              }
              DAT_00ca1194 = DAT_00ca1194 & 0xff7f;
            }
            else {
              if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_004ee228;
              DAT_00ca1194 = DAT_00ca1194 | 0x80;
              DAT_00ca1190 = 0;
              DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            }
            DAT_00ca11a8 = uVar23;
          }
LAB_004ee228:
          if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) != 0)) {
            uVar5 = DAT_00ca11b0 >> 4 & 3;
            if (uVar5 == 0) {
              if (((DAT_00ca11b0 >> 7 & 1) != 0) && ((DAT_00ca11b0 & 3) != 3)) {
                uVar25 = 0;
                if (DAT_00ca11bc != 0) {
                  uVar25 = (DAT_027033c0 - DAT_00ca11c4) / DAT_00ca11bc;
                }
                DAT_00ca11ac = uVar25 + DAT_00ca11ac;
              }
              DAT_00ca11b0 = DAT_00ca11b0 & 0xff7f;
            }
            else {
              if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_004ee2c0;
              DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
              DAT_00ca11ac = 0;
              DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            }
            DAT_00ca11c4 = uVar23;
          }
        }
LAB_004ee2c0:
        DAT_00ca1104 = DAT_00ca1104 + DAT_00ca111c;
        DAT_00ca1108 = DAT_00ca1124;
        DAT_00ca1100 = 2;
        DAT_00ca11d4 = DAT_00ca11d4 + DAT_00ca1128;
      }
    }
    uVar20 = DAT_027033c0;
    uVar31 = DAT_02703250;
    cVar19 = DAT_027026e8;
    uVar1 = DAT_00cca010;
    iVar27 = DAT_00ca1108;
    uVar30 = DAT_00ca1104;
    lVar32 = 0;
    uVar26 = DAT_02703250 & 0x10407;
    uVar23 = DAT_027033c0 + 4;
    uVar25 = DAT_027033dc;
    uVar22 = DAT_00cca000;
    iVar13 = DAT_02702540;
    iVar17 = DAT_02702544;
    do {
      uVar5 = *(ushort *)((long)&DAT_00ca115c + lVar32);
      uVar37 = (uint)uVar5;
      if ((uVar5 >> 7 & 1) != 0) {
        if ((~uVar5 & 3) == 0) {
          *(uint *)((long)&DAT_00ca1170 + lVar32) = uVar20;
        }
        else {
          uVar36 = uVar20 - *(int *)((long)&DAT_00ca1170 + lVar32);
          uVar36 = uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU);
          uVar4 = *(uint *)((long)&DAT_00ca1168 + lVar32);
          uVar38 = 0;
          if (uVar4 != 0) {
            uVar38 = uVar36 / uVar4;
          }
          uVar8 = *(uint *)((long)&DAT_00ca1158 + lVar32) + uVar38;
          *(uint *)((long)&DAT_00ca1158 + lVar32) = uVar8;
          *(uint *)((long)&DAT_00ca1170 + lVar32) = uVar20 + (uVar38 * uVar4 - uVar36);
          uVar36 = *(uint *)((long)&DAT_00ca1160 + lVar32);
          if (uVar36 <= uVar8) {
            if ((uVar5 & 0x500) == 0x100) {
              uVar37 = uVar5 | 0x400;
              *(short *)((long)&DAT_00ca115c + lVar32) = (short)uVar37;
              uVar4 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar32) & 0x1f);
              uVar22 = uVar4 | uVar22;
              DAT_00cca000 = uVar22;
              if ((((uVar4 & uVar1) != 0) && (uVar26 == 0x10401)) && ((uVar22 & uVar1) != 0)) {
                if (4 < (int)(uVar25 - uVar20)) {
                  uVar25 = uVar23;
                  DAT_027033dc = uVar23;
                }
                if ((cVar19 != '\0') && (0 < iVar17)) {
                  iVar13 = iVar17 + iVar13;
                  DAT_02702544 = 0;
                  iVar17 = 0;
                  DAT_02702540 = iVar13;
                }
              }
            }
            if ((uVar37 >> 6 & 1) == 0) {
              uVar36 = uVar36 | 0x10000000;
              *(uint *)((long)&DAT_00ca1160 + lVar32) = uVar36;
            }
            else {
              *(uint *)((long)&DAT_00ca1158 + lVar32) = uVar8 - uVar36;
              uVar8 = uVar8 - uVar36;
            }
          }
          if (0xffff < uVar8) {
            if ((uVar37 & 0xa00) == 0x200) {
              *(ushort *)((long)&DAT_00ca115c + lVar32) = (ushort)uVar37 | 0x800;
              uVar37 = 1 << (ulong)(*(uint *)((long)&DAT_00ca116c + lVar32) & 0x1f);
              uVar22 = uVar37 | uVar22;
              DAT_00cca000 = uVar22;
              if ((((uVar37 & uVar1) != 0) && (uVar26 == 0x10401)) && ((uVar22 & uVar1) != 0)) {
                if (4 < (int)(uVar25 - uVar20)) {
                  uVar25 = uVar23;
                  DAT_027033dc = uVar23;
                }
                if ((cVar19 != '\0') && (0 < iVar17)) {
                  iVar13 = iVar17 + iVar13;
                  DAT_02702544 = 0;
                  iVar17 = 0;
                  DAT_02702540 = iVar13;
                }
              }
            }
            *(uint *)((long)&DAT_00ca1158 + lVar32) = uVar8 - 0x10000;
            *(uint *)((long)&DAT_00ca1160 + lVar32) = uVar36 & 0xffff;
          }
        }
      }
      lVar32 = lVar32 + 0x1c;
    } while (lVar32 != 0x70);
    DAT_00ca11c8 = uVar20;
    iVar27 = (uVar30 - uVar20) + iVar27;
    DAT_00ca11cc = (DAT_00ca11d4 - uVar20) + DAT_00ca11d8;
    if (iVar27 <= DAT_00ca11cc) {
      DAT_00ca11cc = iVar27;
    }
    if (((DAT_00ca115c >> 7 & 1) != 0) && ((DAT_00ca115c & 3) != 3)) {
      if ((DAT_00ca1158 < 0x10001) && (DAT_00ca1158 <= DAT_00ca1160)) {
        iVar27 = DAT_00ca1168 * (0x10000 - DAT_00ca1158);
        iVar13 = (iVar27 - uVar20) + DAT_00ca1170;
        if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
          uVar25 = iVar27 + DAT_00ca1170;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca1160 >> 0x1c & 1) == 0) {
          iVar27 = DAT_00ca1168 * (DAT_00ca1160 - DAT_00ca1158);
          iVar13 = (iVar27 - uVar20) + DAT_00ca1170;
          if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
            uVar25 = iVar27 + DAT_00ca1170;
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
        iVar27 = DAT_00ca1184 * (0x10000 - DAT_00ca1174);
        iVar13 = (iVar27 - uVar20) + DAT_00ca118c;
        if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
          uVar25 = iVar27 + DAT_00ca118c;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca117c >> 0x1c & 1) == 0) {
          iVar27 = DAT_00ca1184 * (DAT_00ca117c - DAT_00ca1174);
          iVar13 = (iVar27 - uVar20) + DAT_00ca118c;
          if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
            uVar25 = iVar27 + DAT_00ca118c;
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
        iVar27 = DAT_00ca11a0 * (0x10000 - DAT_00ca1190);
        iVar13 = (iVar27 - uVar20) + DAT_00ca11a8;
        if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
          uVar25 = iVar27 + DAT_00ca11a8;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca1198 >> 0x1c & 1) == 0) {
          iVar27 = DAT_00ca11a0 * (DAT_00ca1198 - DAT_00ca1190);
          iVar13 = (iVar27 - uVar20) + DAT_00ca11a8;
          if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
            uVar25 = iVar27 + DAT_00ca11a8;
            DAT_027033dc = uVar25;
          }
        }
      }
      else {
        DAT_00ca11cc = 4;
      }
    }
    if (((DAT_00ca11b0 >> 7 & 1) == 0) || ((DAT_00ca11b0 & 3) == 3)) {
joined_r0x004f3e10:
      if (DAT_00ca11cc < 0) {
        DAT_00ca11cc = 0;
        if ((int)(uVar25 - uVar20) < 1) goto LAB_004ee60c;
        goto LAB_004ee844;
      }
      if (DAT_00ca11cc < (int)(uVar25 - uVar20)) goto LAB_004ee844;
LAB_004ee60c:
      if ((uVar31 >> 2 & 1) == 0) goto LAB_004ee850;
LAB_004ee85c:
      DAT_027033e8 = uVar20;
    }
    else {
      if ((DAT_00ca11ac < 0x10001) && (DAT_00ca11ac <= DAT_00ca11b4)) {
        iVar27 = DAT_00ca11bc * (0x10000 - DAT_00ca11ac);
        iVar13 = (iVar27 - uVar20) + DAT_00ca11c4;
        if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
          uVar25 = iVar27 + DAT_00ca11c4;
          DAT_027033dc = uVar25;
        }
        if ((DAT_00ca11b4 >> 0x1c & 1) == 0) {
          iVar27 = DAT_00ca11bc * (DAT_00ca11b4 - DAT_00ca11ac);
          iVar13 = (iVar27 - uVar20) + DAT_00ca11c4;
          if ((iVar13 < DAT_00ca11cc) && (DAT_00ca11cc = iVar13, iVar13 < (int)(uVar25 - uVar20))) {
            uVar25 = iVar27 + DAT_00ca11c4;
            DAT_027033dc = uVar25;
          }
        }
        goto joined_r0x004f3e10;
      }
      DAT_00ca11cc = 4;
      if ((int)(uVar25 - uVar20) < 5) goto LAB_004ee60c;
LAB_004ee844:
      uVar25 = DAT_00ca11cc + uVar20;
      DAT_027033dc = uVar25;
      if ((uVar31 >> 2 & 1) != 0) goto LAB_004ee85c;
LAB_004ee850:
      if (-1 < (int)DAT_027032b0) goto LAB_004ee85c;
      uVar23 = uVar31 >> 3 & 3;
      if ((((DAT_027032b0 & (4 << (ulong)uVar23 | uVar31 & 2)) != 0) &&
          (uVar26 = DAT_027032b0 >> 5 & 0x1f, uVar26 < 0x10)) &&
         ((1 << (ulong)uVar26 & 0xf00eU) != 0)) {
        iVar13 = uVar20 - DAT_027033e8;
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        DAT_027032b4 = iVar13 + DAT_027032b4;
        DAT_027033e8 = uVar20;
      }
      uVar23 = 1 << (ulong)(uVar23 | 0xc);
      if ((((DAT_027032b0 & (uVar23 & 0xfffff000 | uVar23 & 0x7ff | (uVar31 >> 1 & 1) << 0xb)) == 0)
          || (uVar23 = DAT_027032b0 >> 0xf & 0x1f, 0xf < uVar23)) ||
         ((1 << (ulong)uVar23 & 0xf00eU) == 0)) goto LAB_004ee86c;
      iVar13 = uVar20 - DAT_027033ec;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      DAT_027032b8 = iVar13 + DAT_027032b8;
    }
    DAT_027033ec = uVar20;
  }
LAB_004ee86c:
  uVar30 = DAT_00cca010;
  uVar26 = DAT_00ca11d4;
  uVar23 = DAT_00ca1148;
  if ((int)DAT_00ca11d8 <= (int)(uVar20 - DAT_00ca11d4)) {
    puVar33 = &DAT_00ca112c;
    if ((_DAT_00ca11d0 & 1) == 0) {
      if (((((DAT_00ca2710 >> 2 & 1) == 0) &&
           (DAT_00ca2710 = DAT_00ca2710 | 4, (DAT_00ca2720._1_1_ >> 2 & 1) == 0)) &&
          (DAT_00cca000 = uVar22 | 1, (DAT_00cca010 & 1) != 0)) &&
         (((uVar31 & 0x10407) == 0x10401 && ((DAT_00cca010 & DAT_00cca000) != 0)))) {
        if (4 < (int)(uVar25 - uVar20)) {
          DAT_027033dc = uVar20 + 4;
        }
        if ((cVar19 != '\0') && (0 < DAT_02702544)) {
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
            uVar23 = uVar20;
            if ((DAT_00ca115c >> 4 & 3) != 0) goto LAB_004eec6c;
          }
          DAT_00ca1170 = uVar23;
          DAT_00ca115c = DAT_00ca115c | 0x80;
        }
LAB_004eec6c:
        if (((DAT_00ca1148 >> 1 & 1) != 0) && ((DAT_00ca1178 >> 3 & 1) == 0)) {
          if ((DAT_00ca1178 >> 4 & 3) - 2 < 2) {
            DAT_00ca1174 = 0;
            DAT_00ca117c = DAT_00ca117c & 0xffff;
            uVar23 = DAT_00ca11d4;
          }
          else {
            uVar23 = uVar20;
            if ((DAT_00ca1178 >> 4 & 3) != 0) goto LAB_004eecc8;
          }
          DAT_00ca118c = uVar23;
          DAT_00ca1178 = DAT_00ca1178 | 0x80;
        }
LAB_004eecc8:
        if (((DAT_00ca1148 >> 2 & 1) != 0) && ((DAT_00ca1194 >> 3 & 1) == 0)) {
          if ((DAT_00ca1194 >> 4 & 3) - 2 < 2) {
            DAT_00ca1190 = 0;
            DAT_00ca1198 = DAT_00ca1198 & 0xffff;
            uVar23 = DAT_00ca11d4;
          }
          else {
            uVar23 = uVar20;
            if ((DAT_00ca1194 >> 4 & 3) != 0) goto LAB_004eed24;
          }
          DAT_00ca11a8 = uVar23;
          DAT_00ca1194 = DAT_00ca1194 | 0x80;
        }
LAB_004eed24:
        if (((DAT_00ca1148 >> 3 & 1) != 0) && ((DAT_00ca11b0 >> 3 & 1) == 0)) {
          if ((DAT_00ca11b0 >> 4 & 3) - 2 < 2) {
            DAT_00ca11ac = 0;
            DAT_00ca11b4 = DAT_00ca11b4 & 0xffff;
            uVar20 = DAT_00ca11d4;
          }
          else if ((DAT_00ca11b0 >> 4 & 3) != 0) goto LAB_004eed7c;
          DAT_00ca11c4 = uVar20;
          DAT_00ca11b0 = DAT_00ca11b0 | 0x80;
        }
      }
LAB_004eed7c:
      if (DAT_00ca9904 != '\0') {
        FUN_00584140(0);
      }
      _DAT_00ca11d0 = 1;
      puVar18 = puVar33;
      puVar33 = &DAT_00ca1130;
    }
    else {
      lVar32 = 0;
      uVar1 = uVar20 + 4;
      puVar18 = &DAT_00ca1158;
      iVar13 = DAT_02702544;
      iVar27 = DAT_02702540;
      do {
        uVar5 = (ushort)puVar18[1];
        uVar37 = (uint)uVar5;
        if (((uVar5 ^ 0xffff) & 0x83) == 0) {
          uVar4 = *puVar18;
          uVar36 = uVar4 + 1;
          *puVar18 = uVar36;
          uVar38 = puVar18[2];
          uVar8 = uVar36 - uVar38;
          if (uVar36 < uVar38) {
LAB_004eea8c:
            uVar4 = uVar4 - 0xffff;
            uVar8 = uVar36;
          }
          else {
            if ((uVar5 & 0x500) == 0x100) {
              uVar37 = uVar37 | 0x400;
              *(short *)(puVar18 + 1) = (short)uVar37;
              uVar6 = 1 << (ulong)(puVar18[5] & 0x1f);
              uVar22 = uVar6 | uVar22;
              DAT_00cca000 = uVar22;
              if ((((uVar6 & uVar30) != 0) && ((uVar31 & 0x10407) == 0x10401)) &&
                 ((uVar22 & uVar30) != 0)) {
                if (4 < (int)(uVar25 - uVar20)) {
                  uVar25 = uVar1;
                  DAT_027033dc = uVar1;
                }
                if ((cVar19 != '\0') && (0 < iVar13)) {
                  DAT_02702540 = iVar13 + iVar27;
                  DAT_02702544 = 0;
                  iVar13 = 0;
                  iVar27 = DAT_02702540;
                }
              }
            }
            if ((uVar37 >> 6 & 1) == 0) {
              uVar38 = uVar38 | 0x10000000;
              puVar18[2] = uVar38;
              goto LAB_004eea8c;
            }
            *puVar18 = uVar8;
            uVar4 = uVar8 - 0x10000;
          }
          if (0xffff < uVar8) {
            if ((uVar37 & 0xa00) == 0x200) {
              uVar37 = uVar37 | 0x800;
              *(short *)(puVar18 + 1) = (short)uVar37;
              uVar36 = 1 << (ulong)(puVar18[5] & 0x1f);
              uVar22 = uVar36 | uVar22;
              DAT_00cca000 = uVar22;
              if ((((uVar36 & uVar30) != 0) && ((uVar31 & 0x10407) == 0x10401)) &&
                 ((uVar22 & uVar30) != 0)) {
                if (4 < (int)(uVar25 - uVar20)) {
                  uVar25 = uVar1;
                  DAT_027033dc = uVar1;
                }
                if ((cVar19 != '\0') && (0 < iVar13)) {
                  DAT_02702540 = iVar13 + iVar27;
                  DAT_02702544 = 0;
                  iVar13 = 0;
                  iVar27 = DAT_02702540;
                }
              }
            }
            *puVar18 = uVar4;
            puVar18[2] = uVar38 & 0xffff;
          }
        }
        if (((uVar23 >> (ulong)((uint)lVar32 & 0x1f) & 1) != 0) && ((uVar37 >> 3 & 1) == 0)) {
          uVar36 = uVar37 >> 4 & 3;
          if ((uVar36 == 3) || (uVar36 == 1)) {
            *(ushort *)(puVar18 + 1) = (ushort)uVar37 | 0x80;
            *puVar18 = 0;
            puVar18[2] = (uint)(ushort)puVar18[2];
          }
          else {
            if (uVar36 != 0) goto LAB_004ee9e4;
            uVar36 = *puVar18;
            if (((uVar37 >> 7 & 1) != 0) && ((uVar37 & 3) != 3)) {
              uVar4 = 0;
              if (puVar18[4] != 0) {
                uVar4 = (uVar20 - puVar18[6]) / puVar18[4];
              }
              uVar36 = uVar4 + uVar36;
            }
            *puVar18 = uVar36;
            *(ushort *)(puVar18 + 1) = (ushort)uVar37 & 0xff7f;
          }
          puVar18[6] = uVar26;
        }
LAB_004ee9e4:
        lVar32 = lVar32 + 1;
        puVar18 = puVar18 + 7;
      } while (lVar32 != 4);
      FUN_00583a20(0);
      _DAT_00ca11d0 = 0;
      puVar18 = &DAT_00ca1130;
    }
    DAT_00ca11d8 = *puVar33;
    DAT_00ca11d4 = *puVar18 + DAT_00ca11d4;
    uVar31 = DAT_02703250;
    uVar20 = DAT_027033c0;
  }
  DAT_02703244 = DAT_02703244 + (uVar20 - DAT_027033e4);
  DAT_027033e4 = uVar20;
  if ((((uVar31 >> 0xf & 1) != 0) && (DAT_0270324c <= DAT_02703244)) &&
     (DAT_02703244 < DAT_0270324c + 1000)) {
    FUN_00988670(&PTR_FUN_00c9aa28,5,"timr intr: %x, %x");
    iVar13 = DAT_027033c8;
    uVar23 = DAT_02703250;
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
        uVar25 = 0x200;
      }
      else {
        uVar25 = 0x180;
      }
      DAT_027032a8 = uVar25 | 0x80000000;
      if ((uVar23 & 0x400000) != 0) {
        DAT_027032a8 = uVar25 + 0xbfc00200;
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
      if (((DAT_00cca520._2_1_ & 1) != 0) || (uVar25 = DAT_027033c4, (DAT_027033c4 & 0x1ffff) == 0))
      goto LAB_004eef3c;
      do {
        uVar23 = DAT_00cbec00;
        if (((uVar25 & 0x1ffff) == 0) ||
           (((_DAT_00cc9000 & 1) == 0 || ((DAT_00cca520._2_1_ & 1) != 0)))) break;
        if ((uVar25 >> 0x14 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_02703310 <= (int)(DAT_027033c0 - DAT_02703390))) {
            DAT_027033c4 = uVar25 & 0xffefffff;
            DAT_027033d4 = DAT_027033d4 & 0xffefffff;
            _DAT_02819070 = _DAT_02819070 & 0xffff00ff;
            uVar25 = DAT_027033c4;
          }
          else if (DAT_02703310 < (int)(DAT_027033dc - DAT_02703390)) {
            DAT_027033dc = DAT_02703310 + DAT_02703390;
          }
        }
        if ((uVar25 >> 1 & 1) == 0) goto LAB_004ef6fc;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
          if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
            DAT_027033dc = DAT_027032c4 + DAT_02703344;
          }
          goto LAB_004ef6fc;
        }
        DAT_027033c4 = uVar25 & 0xfffffffd;
        DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
        DAT_02706280 = 0;
        if ((DAT_00cbe020 & 0xc00) == 0x800) {
          if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
             (uVar23 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
            if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_004ef378;
            uVar23 = DAT_00ca1510 & 0xfffffffb;
          }
          if (uVar23 == 0) {
            DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
            DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
            if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_004ef314:
              bVar12 = uVar23 == 0;
            }
            else {
              if (DAT_00ca1398 <= DAT_00ca139c) {
                uVar23 = DAT_00ca13f0 & 0xfffffffb;
                goto LAB_004ef314;
              }
              bVar12 = false;
            }
            if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               ((DAT_02704f20 >> 4 & 1) != 0)) {
              if (DAT_00ca1638 == 0) goto LAB_004efe74;
LAB_004ef344:
              if ((byte)(bVar12 ^ 1U | 4) == 0) goto LAB_004ef378;
            }
            else {
              if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0))
              goto LAB_004ef344;
LAB_004efe74:
              if (bVar12 == true) goto LAB_004ef378;
            }
            FUN_003ecbd0(&DAT_00ca1380,0,1);
          }
        }
LAB_004ef378:
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
          uVar25 = DAT_027033c4;
          goto LAB_004ef6fc;
        }
        if ((DAT_00cc4000 & 1) != 0) {
          if ((DAT_02706360 & 0x7f) == 0x51) {
            uVar23 = *DAT_00ca16f0;
            if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_004ef44c:
              if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_004ef464;
            }
          }
          else {
            if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_004ef464:
              uVar23 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar23 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18;
              goto LAB_004ef490;
            }
            uVar23 = *DAT_00ca16f0;
            uVar25 = uVar23 >> 10 & 3;
            if (((uVar25 == 0) || (uVar25 == 2)) ||
               ((uVar25 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3))))))
            goto LAB_004ef44c;
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
          uVar25 = DAT_027033c4;
          if ((~DAT_00cbe020 & 0xc00) == 0) {
            DAT_00cbec00 = DAT_00cbec00 | 8;
          }
          goto LAB_004ef6fc;
        }
LAB_004ef490:
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
LAB_004ef6e4:
          DAT_027033d4 = DAT_027033d4 | 2;
          uVar25 = DAT_027033c4;
          goto LAB_004ef6fc;
        }
        if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_004ef6e4;
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
            uVar25 = (uVar23 & 0x1f) << 0x18;
            uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar25;
            if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar25 | 2;
              goto LAB_004ef6e4;
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
          uVar23 = DAT_027033c0;
          if (((DAT_00cbec00 >> 3 & 1) != 0) &&
             (uVar23 = DAT_027033c0, uVar25 = DAT_027033c4, DAT_00ca1630 != 0)) goto LAB_004ef6fc;
          goto joined_r0x004f1870;
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
LAB_004f2378:
                bVar12 = uVar23 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar23 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_004f2378;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_004f23d0;
LAB_004f23a4:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_004f23a4;
LAB_004f23d0:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_004f23fc;
            }
            DAT_027063b2 = '\0';
            FUN_00605e90(DAT_027063b4);
          }
LAB_004f23fc:
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
          uVar25 = DAT_027033c4;
          goto LAB_004ef6fc;
        }
        uVar25 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004ef6fc;
        if ((int)DAT_00cc4030 < 0) {
          uVar35 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_004f24bc:
          puVar33 = (uint *)(DAT_00ccb000 + uVar35 + 0x2000000);
        }
        else {
          uVar35 = (ulong)DAT_00cc4030 & 0x1ffffff0;
          if (uVar35 >> 0x19 == 0) {
            puVar33 = (uint *)(DAT_00ccb000 + uVar35);
          }
          else if (uVar35 >> 0x1c == 0) {
            puVar33 = (uint *)(&DAT_02884000 + DAT_00ccb000);
          }
          else {
            if ((uint)uVar35 < 0x10004000) {
              uVar35 = (ulong)(DAT_00cc4030 & 0x3ff0);
              goto LAB_004f24bc;
            }
            FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            puVar33 = (uint *)0x0;
          }
        }
        uVar35 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
        if ((uVar35 & 1) == 0) goto LAB_004f3414;
        DAT_00cc4010 = puVar33[1];
        DAT_02706280 = DAT_02706280 + 1;
        DAT_027063b0 = DAT_027063b0 & 0xfe;
        if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
            ((*puVar33 & 0x70000000) == 0x40000000)) &&
           ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
          FUN_003f75f0(0xd);
          goto LAB_004f3414;
        }
        if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
          DAT_02706278 = *(undefined8 *)(puVar33 + 2);
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
          uVar35 = FUN_005e3030(puVar15,iVar13,1);
          if (((uVar35 & 1) == 0) && (DAT_027063a4 != '\0')) {
            DAT_027063b0 = DAT_027063b0 & 0xfe;
            DAT_00cc4020 = 0;
            goto LAB_004f3414;
          }
        }
        DAT_027063a8 = 0;
        DAT_027063a4 = '\0';
        switch(*puVar33 >> 0x1c & 7) {
        case 0:
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          goto LAB_004f2f44;
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
          uVar25 = DAT_00cc4000 >> 4 & 3;
          if (uVar25 == 1) {
            DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
          }
          else {
            if (uVar25 != 0) {
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
            puVar18 = (uint *)&DAT_00cc4050;
          }
          else {
            if (uVar23 != 1) {
              bVar24 = 1;
              break;
            }
            puVar18 = (uint *)&DAT_00cc4040;
          }
          bVar24 = 0;
          DAT_00cc4030 = *puVar18;
          *puVar18 = 0;
          DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                         DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
LAB_004f2f44:
          bVar24 = 1;
        }
        DAT_02706374 = DAT_02706374 | bVar24;
        if (DAT_00cc4020 != 0) {
          DAT_027063b0 = DAT_027063b0 | 1;
        }
        if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar33 < 0)) {
          DAT_02706374 = 1;
        }
LAB_004f3414:
        if ((DAT_00cc4000 & 1) != 0) {
          uVar23 = DAT_00cc4020;
          if (0xf < DAT_00cc4020) {
            uVar23 = 0x10;
          }
          DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                         DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
        }
        uVar23 = DAT_027033c0;
        if (((DAT_00cbec00 >> 3 & 1) == 0) ||
           (uVar23 = DAT_027033c0, uVar25 = DAT_027033c4, DAT_00ca1630 == 0)) {
joined_r0x004f1870:
          DAT_02703344 = uVar23;
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
            uVar25 = DAT_027033c4;
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
            uVar25 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
              DAT_027033dc = DAT_02703344 + DAT_027032c4;
            }
          }
        }
LAB_004ef6fc:
        if ((uVar25 >> 2 & 1) != 0) {
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
LAB_004efb48:
                bVar12 = uVar23 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar23 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_004efb48;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_004efbb4;
LAB_004efb74:
                if ((byte)(bVar12 ^ 1U | 2) == 0) goto LAB_004ef7a8;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_004efb74;
LAB_004efbb4:
                if (bVar12 == true) goto LAB_004ef7a8;
              }
              FUN_003ecbd0(&DAT_00ca1380,0,1);
            }
LAB_004ef7a8:
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
              uVar26 = *DAT_00ca16f0;
              uVar25 = uVar26 & 3;
              if ((uVar25 != 0) && (DAT_00cc5020 != 0)) goto LAB_004efe40;
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                  DAT_027033c4 = DAT_027033c4 | 0x800;
                  iVar13 = 0x10;
                  if ((DAT_02704f28 & 0x40) != 0) {
                    iVar13 = 8;
                  }
                  piVar28 = (int *)&DAT_027032ec;
LAB_004efdf0:
                  piVar28[0x20] = DAT_027033c0;
                  *piVar28 = iVar13;
                  if (0 < DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar13 < (int)(DAT_027033dc - uVar23)) {
                    DAT_027033dc = iVar13 + uVar23;
                  }
                  uVar26 = *puVar33;
                  uVar25 = uVar26 & 3;
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
                DAT_027033c4 = DAT_027033c4 | 4;
                iVar13 = 0x10;
                if ((DAT_02704f28 & 0x40) != 0) {
                  iVar13 = 8;
                }
                piVar28 = (int *)&DAT_027032c8;
                goto LAB_004efdf0;
              }
              if ((uVar25 == 0) &&
                 (((((uVar26 & 0xc00) == 0xc00 || ((uVar26 & 0xc00) == 0)) &&
                   ((uVar26 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)))) {
                DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
                uVar25 = DAT_027033c4;
              }
              else {
LAB_004efe40:
                DAT_027033d4 = DAT_027033d4 | 4;
                uVar25 = DAT_027033c4;
              }
            }
            else if ((~_DAT_00cc9000 & 0xc) == 0) {
              FUN_003ef840();
              uVar25 = DAT_027033c4;
            }
            else if (DAT_00ca16e8 == 0) {
              if (DAT_00ca1350 != 0) goto LAB_004ef8b8;
LAB_004efa6c:
              uVar23 = 0;
LAB_004eff74:
              uVar26 = DAT_027033c0;
              uVar25 = DAT_027033c4;
              if ((DAT_00cc5000 >> 8 & 1) != 0) {
                if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
                  DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
                  DAT_00ca1368 = 0;
                  DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                                 DAT_00cbe020 & 0xffffff | (uVar23 & 0x1f) << 0x18;
                  if ((uVar23 & 0x1f) < 0xf) {
                    uVar22 = DAT_00ca2710 & 0xffff3fff;
                    DAT_00ca2710 = uVar22 | 0x4000;
                    if ((uVar23 & 0x1f) != 0) {
                      DAT_00ca2710 = uVar22;
                    }
                  }
                  else {
                    DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
                  }
                  uVar22 = DAT_00cc9010 | 4;
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
                  DAT_00cc9010 = uVar22;
                  if (uVar23 != 0) {
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        iVar13 = 0x10;
                        if ((DAT_02704f28 & 0x40) != 0) {
                          iVar13 = 8;
                        }
                        piVar28 = (int *)&DAT_027032ec;
LAB_004f1904:
                        piVar28[0x20] = DAT_027033c0;
                        *piVar28 = iVar13;
                        if (0 < DAT_02702544) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        uVar25 = DAT_027033c4;
                        if (iVar13 < (int)(DAT_027033dc - uVar26)) {
                          DAT_027033dc = iVar13 + uVar26;
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
                      goto LAB_004f1904;
                    }
                  }
                }
                else {
                  if ((_DAT_00cc9000 & 1) == 0) {
                    FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
                    uVar5 = DAT_02704f28;
                    uVar23 = DAT_027033c0;
                    if ((~_DAT_00cc9000 & 0xc) == 0) {
                      if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                        DAT_027033c4 = DAT_027033c4 | 0x800;
                        piVar28 = (int *)&DAT_027032ec;
LAB_004f19ec:
                        uVar10 = DAT_02704f28 & 0x40;
                        piVar28[0x20] = DAT_027033c0;
                        iVar13 = 8;
                        if (uVar10 == 0) {
                          iVar13 = 0x40;
                        }
                        *piVar28 = iVar13;
                        if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if (iVar13 < (int)(DAT_027033dc - uVar23)) {
                          DAT_027033dc = iVar13 + uVar23;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      piVar28 = (int *)&DAT_027032c8;
                      goto LAB_004f19ec;
                    }
                    goto LAB_004efe40;
                  }
                  FUN_003f0da0();
                  uVar25 = DAT_027033c4;
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
              if (DAT_00ca1350 != 0x10) {
                if (DAT_00ca1350 == 0) goto LAB_004efa6c;
LAB_004ef8b8:
                iVar13 = FUN_003ef270(&DAT_00ca1250);
                uVar23 = DAT_027033c0;
                if (iVar13 != 0) {
                  uVar25 = iVar13 << 1;
                  if ((~_DAT_00cc9000 & 0xc) == 0) {
                    if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar25)) {
                      if ((DAT_02704f28 & 0x40) != 0) {
                        uVar25 = 8;
                      }
                      DAT_027033c4 = DAT_027033c4 | 0x800;
                      puVar33 = &DAT_027032ec;
LAB_004efca4:
                      puVar33[0x20] = DAT_027033c0;
                      *puVar33 = uVar25;
                      if ((uVar25 < 0x1d) && (0 < DAT_02702544)) {
                        DAT_02702540 = DAT_02702540 + DAT_02702544;
                        DAT_02702544 = 0;
                      }
                      if ((int)uVar25 < (int)(DAT_027033dc - uVar23)) {
                        DAT_027033dc = uVar25 + uVar23;
                      }
                    }
                  }
                  else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar25)) {
                    if ((DAT_02704f28 & 0x40) != 0) {
                      uVar25 = 8;
                    }
                    DAT_027033c4 = DAT_027033c4 | 4;
                    puVar33 = &DAT_027032c8;
                    goto LAB_004efca4;
                  }
                }
                uVar5 = DAT_02704f28;
                uVar25 = DAT_027033c0;
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
                        piVar28 = (int *)&DAT_027032ec;
LAB_004efef8:
                        uVar10 = DAT_02704f28 & 0x40;
                        piVar28[0x20] = DAT_027033c0;
                        iVar27 = 8;
                        if (uVar10 == 0) {
                          iVar27 = 0x80;
                        }
                        *piVar28 = iVar27;
                        if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                          DAT_02702540 = DAT_02702540 + DAT_02702544;
                          DAT_02702544 = 0;
                        }
                        if (iVar27 < (int)(DAT_027033dc - uVar25)) {
                          DAT_027033dc = iVar27 + uVar25;
                        }
                      }
                    }
                    else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                      DAT_027033c4 = DAT_027033c4 | 4;
                      piVar28 = (int *)&DAT_027032c8;
                      goto LAB_004efef8;
                    }
                  }
                  bVar24 = 1;
                }
                if ((iVar13 == 0) && (uVar23 = DAT_00ca1350, (bVar24 & DAT_00ca1350 == 0x10) == 0))
                goto LAB_004eff74;
                uVar23 = *puVar33;
                uVar25 = DAT_027033c4;
                if (((((uVar23 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) &&
                    (((uVar23 & 0xc00) == 0xc00 || ((uVar23 & 0xc00) == 0)))) &&
                   (((uVar23 & 0x1008) == 0 && (DAT_00ca16e8 == 0)))) {
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
        if ((uVar25 & 0xe0f19) == 0) goto LAB_004ef0f8;
        if ((uVar25 & 1) == 0) goto LAB_004f03d0;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
          if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
            DAT_027033dc = DAT_027032c0 + DAT_02703340;
          }
          goto LAB_004f03d0;
        }
        DAT_027033c4 = uVar25 & 0xfffffffe;
        DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
        DAT_02706260 = 0;
        uVar23 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar23 = 8;
        }
        DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18
        ;
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
LAB_004f03b8:
          DAT_027033d4 = DAT_027033d4 | 1;
          uVar25 = DAT_027033c4;
          goto LAB_004f03d0;
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
            uVar25 = DAT_00cc3020;
            if (7 < DAT_00cc3020) {
              uVar25 = 8;
            }
            uVar26 = DAT_00cbe800 & 0xe0000000;
            uVar25 = DAT_00cbe800 & 0xffffff | (uVar25 & 0x1f) << 0x18;
            DAT_00cbe800 = uVar26 | uVar25;
            if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
              DAT_00cbe800 = uVar26 | uVar25 & 0xeffffffc | 2;
              goto LAB_004f03b8;
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
            uVar35 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_004f15c0:
            lVar32 = DAT_00ccb000 + uVar35;
            puVar29 = (undefined *)0x2000000;
LAB_004f1754:
            puVar29 = puVar29 + lVar32;
LAB_004f1758:
            iVar13 = DAT_00cc3020 * 4;
            if (DAT_02706314 != '\0') {
              puVar29 = puVar29 + (ulong)DAT_02706318 * 4;
              iVar13 = iVar13 - DAT_02706318;
            }
            FUN_005e2c60(puVar29,iVar13,0);
          }
          else {
            uVar35 = (ulong)DAT_00cc3010 & 0x1ffffff0;
            if (uVar35 >> 0x19 == 0) {
              if (DAT_00ccb000 != 0) {
                puVar29 = (undefined *)(DAT_00ccb000 + uVar35);
                goto LAB_004f1758;
              }
            }
            else {
              if (uVar35 >> 0x1c == 0) {
                puVar29 = &DAT_02884000;
                lVar32 = DAT_00ccb000;
                goto LAB_004f1754;
              }
              if ((uint)uVar35 < 0x10004000) {
                uVar35 = (ulong)(DAT_00cc3010 & 0x3ff0);
                goto LAB_004f15c0;
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
          goto LAB_004f17d4;
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
LAB_004f1c94:
                bVar12 = uVar23 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar23 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_004f1c94;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_004f1cec;
LAB_004f1cc0:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_004f1cc0;
LAB_004f1cec:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_004f1d18;
            }
            DAT_02706322 = '\0';
            FUN_00604740(DAT_02706324);
          }
LAB_004f1d18:
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
          goto LAB_004f03d0;
        }
        uVar25 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_004f03d0;
        if (-1 < (int)DAT_00cc3030) {
          uVar35 = (ulong)DAT_00cc3030 & 0x1ffffff0;
          if (uVar35 >> 0x19 != 0) {
            if (uVar35 >> 0x1c != 0) {
              if (0x10003fff < (uint)uVar35) {
                FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
                goto LAB_004f21ac;
              }
              uVar35 = (ulong)(DAT_00cc3030 & 0x3ff0);
              goto LAB_004f1af8;
            }
            puVar29 = &DAT_02884000;
            lVar32 = DAT_00ccb000;
            goto LAB_004f1b70;
          }
          if (DAT_00ccb000 != 0) {
            puVar33 = (uint *)(DAT_00ccb000 + uVar35);
            goto LAB_004f1b74;
          }
LAB_004f21ac:
          FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
          DAT_00cc9010 = DAT_00cc9010 | 0x8000;
          goto LAB_004f28e8;
        }
        uVar35 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_004f1af8:
        lVar32 = DAT_00ccb000 + uVar35;
        puVar29 = (undefined *)0x2000000;
LAB_004f1b70:
        puVar33 = (uint *)(puVar29 + lVar32);
LAB_004f1b74:
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
            puVar15 = &DAT_02706258;
            iVar13 = 2;
          }
          else {
            puVar15 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
            iVar13 = 4 - DAT_02706318;
          }
          uVar35 = FUN_005e2c60(puVar15,iVar13,1);
          if (((uVar35 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_004f1bb4;
          DAT_02706320 = 0;
          DAT_00cc3020 = 0;
          uVar23 = 0;
          goto LAB_004f28f4;
        }
LAB_004f1bb4:
        DAT_02706318 = 0;
        DAT_02706314 = '\0';
        switch(*puVar33 >> 0x1c & 7) {
        case 0:
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          goto LAB_004f2890;
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
          uVar25 = DAT_00cc3000 >> 4 & 3;
          if (uVar25 == 1) {
            DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
          }
          else {
            if (uVar25 != 0) {
              DAT_00cc3010 = uVar23;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              goto LAB_004f2890;
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
            puVar18 = (uint *)&DAT_00cc3050;
          }
          else {
            if (uVar23 != 1) goto LAB_004f2890;
            puVar18 = (uint *)&DAT_00cc3040;
          }
          bVar24 = 0;
          DAT_00cc3030 = *puVar18;
          *puVar18 = 0;
          DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                         DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
LAB_004f2890:
          bVar24 = 1;
        }
        DAT_027062e4 = DAT_027062e4 | bVar24;
        if (DAT_00cc3020 != 0) {
          DAT_02706320 = 1;
        }
        if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
          DAT_027062e4 = 1;
        }
LAB_004f28e8:
        uVar23 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar23 = 8;
        }
LAB_004f28f4:
        DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18
        ;
        DAT_027032c0 = DAT_02706260;
        if ((DAT_02704f28 & 0x40) != 0) {
          DAT_027032c0 = 8;
        }
LAB_004f17d4:
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
LAB_004f03d0:
        uVar26 = uVar25;
        uVar23 = DAT_00cc9010;
        if ((uVar25 >> 3 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
            DAT_027033c4 = uVar25 & 0xfffffff7;
            DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
            if (DAT_00cc6020 == 0) {
              DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
              uVar23 = DAT_00cc9010 | 8;
              uVar26 = DAT_027033c4;
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
              uVar26 = DAT_027033c4;
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
            DAT_027033c4 = uVar26 & 0xffffffef;
            DAT_027033d4 = DAT_027033d4 & 0xffffffef;
            if ((DAT_0281a6d1 == '\0') || (DAT_0281a6d0 != '\0')) {
              FUN_006704a0();
              uVar23 = DAT_00cc9010;
              uVar26 = DAT_027033c4;
            }
            else {
              DAT_00cc6400 = DAT_00cc6400 & 0xfffffeff;
              uVar23 = DAT_00cc9010 | 0x10;
              uVar26 = DAT_027033c4;
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
        if ((uVar26 >> 0x13 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_0270330c <= (int)(DAT_027033c0 - DAT_0270338c))) {
            DAT_027033c4 = uVar26 & 0xfff7ffff;
            DAT_027033d4 = DAT_027033d4 & 0xfff7ffff;
            DAT_0281a6d4 = 0;
            uVar26 = DAT_027033c4;
            if (DAT_00cbd010 < 0) {
              FUN_00670c70();
              uVar26 = DAT_027033c4;
            }
          }
          else if (DAT_0270330c < (int)(DAT_027033dc - DAT_0270338c)) {
            DAT_027033dc = DAT_0270330c + DAT_0270338c;
          }
        }
        if ((uVar26 >> 8 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032e0 <= (int)(DAT_027033c0 - DAT_02703360))) {
            DAT_027033c4 = uVar26 & 0xfffffeff;
            DAT_027033d4 = DAT_027033d4 & 0xfffffeff;
            FUN_005d4d40();
            uVar26 = DAT_027033c4;
          }
          else if (DAT_027032e0 < (int)(DAT_027033dc - DAT_02703360)) {
            DAT_027033dc = DAT_027032e0 + DAT_02703360;
          }
        }
        uVar23 = DAT_00cc9010;
        if ((uVar26 >> 9 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032e4 <= (int)(DAT_027033c0 - DAT_02703364))) {
            DAT_027033c4 = uVar26 & 0xfffffdff;
            DAT_027033d4 = DAT_027033d4 & 0xfffffdff;
            if ((DAT_02704da0 == '\0') || (DAT_00cc8420 != 0)) {
              FUN_005d5b90();
              uVar23 = DAT_00cc9010;
              uVar26 = DAT_027033c4;
            }
            else {
              DAT_00cc8400 = DAT_00cc8400 & 0xfffffeff;
              uVar23 = DAT_00cc9010 | 0x200;
              uVar26 = DAT_027033c4;
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
        if ((uVar26 >> 10 & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             (DAT_027032e8 <= (int)(DAT_027033c0 - DAT_02703368))) {
            DAT_027033c4 = uVar26 & 0xfffffbff;
            DAT_027033d4 = DAT_027033d4 & 0xfffffbff;
            FUN_005d9ad0();
            uVar26 = DAT_027033c4;
          }
          else if (DAT_027032e8 < (int)(DAT_027033dc - DAT_02703368)) {
            DAT_027033dc = DAT_027032e8 + DAT_02703368;
          }
        }
        if ((uVar26 >> 0xb & 1) != 0) {
          if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
             ((int)DAT_027032ec <= (int)(DAT_027033c0 - DAT_0270336c))) {
            DAT_027033c4 = uVar26 & 0xfffff7ff;
            DAT_027033d4 = DAT_027033d4 & 0xfffff7ff;
            FUN_003ef840();
            uVar26 = DAT_027033c4;
          }
          else if ((int)DAT_027032ec < (int)(DAT_027033dc - DAT_0270336c)) {
            DAT_027033dc = DAT_027032ec + DAT_0270336c;
          }
        }
        uVar23 = DAT_00cbe800;
        if ((uVar26 >> 0x11 & 1) == 0) goto LAB_004f0d44;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
          if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
            DAT_027033dc = DAT_02703304 + DAT_02703384;
          }
          goto LAB_004f0d44;
        }
        DAT_027033c4 = uVar26 & 0xfffdffff;
        DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
        uVar23 = _DAT_02819070 & 1;
        if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar23 != 0)) {
          do {
            uVar23 = 0x100;
            if ((int)DAT_02704e08[1] == 0) {
              uVar23 = 1;
LAB_004f0c08:
              if ((uVar23 & _DAT_02819070) != 0) {
                iVar13 = DAT_028190d4;
                if ((int)DAT_02704e08[1] != 0) {
                  iVar13 = DAT_028196e4;
                }
                uVar23 = DAT_027033c0 - iVar13;
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
              goto LAB_004f0c08;
              FUN_005b1f50(&DAT_01701a00);
            }
            uVar23 = _DAT_02819070 & 1;
          } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar23 != 0);
        }
        iVar13 = DAT_028190d4;
        if ((_DAT_02819070 & 5) != 0) {
          DAT_02703304 = 0x80;
          if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + 0x80;
          }
LAB_004f0d34:
          DAT_027033d4 = DAT_027033d4 | 0x20000;
          DAT_027033c4 = DAT_027033c4 | 0x20000;
          uVar23 = DAT_00cbe800;
          DAT_02703384 = DAT_027033c0;
          uVar26 = DAT_027033c4;
          goto LAB_004f0d44;
        }
        if (uVar23 != 0) {
          while ((_DAT_02819070 & 1) != 0) {
            (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,0x7fffffff);
          }
          DAT_02703304 = (DAT_028190d4 - iVar13) * 2;
          if ((DAT_02703304 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          iVar27 = DAT_027033dc - DAT_027033c0;
          if (iVar27 != DAT_02703304 &&
              iVar27 + (DAT_028190d4 - iVar13) * -2 < 0 == SBORROW4(iVar27,DAT_02703304)) {
            DAT_027033dc = DAT_027033c0 + DAT_02703304;
          }
          goto LAB_004f0d34;
        }
        uVar23 = DAT_00cbe800 & 0xfffffffb;
        uVar26 = DAT_027033c4;
        if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
            ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_004f0d44;
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
            uVar25 = DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            if ((DAT_00cc3020 != 0) ||
               (uVar23 = DAT_00cbe800 & 0xe0000000 | uVar25, DAT_027062e4 == 0)) {
              DAT_027033d4 = DAT_027033d4 | 1;
              uVar23 = DAT_00cbe800 & 0xe0000000 | uVar25 & 0xeffffffc | 2;
              uVar26 = DAT_027033c4;
              goto LAB_004f0d44;
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
            uVar35 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_004f2090:
            lVar32 = DAT_00ccb000 + uVar35;
            puVar29 = (undefined *)0x2000000;
LAB_004f20b8:
            puVar29 = puVar29 + lVar32;
LAB_004f20bc:
            iVar13 = DAT_00cc3020 * 4;
            if (DAT_02706314 != '\0') {
              puVar29 = puVar29 + (ulong)DAT_02706318 * 4;
              iVar13 = iVar13 - DAT_02706318;
            }
            FUN_005e2c60(puVar29,iVar13,0);
          }
          else {
            uVar35 = (ulong)DAT_00cc3010 & 0x1ffffff0;
            if (uVar35 >> 0x19 == 0) {
              if (DAT_00ccb000 != 0) {
                puVar29 = (undefined *)(DAT_00ccb000 + uVar35);
                goto LAB_004f20bc;
              }
            }
            else {
              if (uVar35 >> 0x1c == 0) {
                puVar29 = &DAT_02884000;
                lVar32 = DAT_00ccb000;
                goto LAB_004f20b8;
              }
              if ((uint)uVar35 < 0x10004000) {
                uVar35 = (ulong)(DAT_00cc3010 & 0x3ff0);
                goto LAB_004f2090;
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
          goto LAB_004f2138;
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
LAB_004f2a3c:
                bVar12 = uVar23 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar23 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_004f2a3c;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_004f2a94;
LAB_004f2a68:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_004f2a68;
LAB_004f2a94:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_004f2ab8;
            }
            DAT_02706322 = '\0';
            FUN_00604740(DAT_02706324);
          }
LAB_004f2ab8:
          DAT_02706260 = 0;
          FUN_003f75f0(0);
          DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
          uVar23 = DAT_00cbe800 & 0xe0ffffff;
          uVar26 = DAT_027033c4;
          goto LAB_004f0d44;
        }
        uVar23 = DAT_00cbe800;
        uVar26 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_004f0d44;
        if ((int)DAT_00cc3030 < 0) {
          uVar35 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_004f2518:
          puVar33 = (uint *)(DAT_00ccb000 + uVar35 + 0x2000000);
        }
        else {
          uVar35 = (ulong)DAT_00cc3030 & 0x1ffffff0;
          if (uVar35 >> 0x19 == 0) {
            puVar33 = (uint *)(DAT_00ccb000 + uVar35);
          }
          else if (uVar35 >> 0x1c == 0) {
            puVar33 = (uint *)(&DAT_02884000 + DAT_00ccb000);
          }
          else {
            if ((uint)uVar35 < 0x10004000) {
              uVar35 = (ulong)(DAT_00cc3030 & 0x3ff0);
              goto LAB_004f2518;
            }
            FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            puVar33 = (uint *)0x0;
          }
        }
        uVar35 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar33);
        if ((uVar35 & 1) == 0) goto LAB_004f3674;
        DAT_00cc3010 = puVar33[1];
        DAT_02706260 = DAT_02706260 + 1;
        DAT_02706320 = 0;
        if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
          DAT_02706258 = *(undefined8 *)(puVar33 + 2);
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
          uVar35 = FUN_005e2c60(puVar15,iVar13,1);
          if (((uVar35 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_004f2fac;
          DAT_02706320 = 0;
          DAT_00cc3020 = 0;
          uVar23 = 0;
          goto LAB_004f3684;
        }
LAB_004f2fac:
        DAT_02706318 = 0;
        DAT_02706314 = '\0';
        switch(*puVar33 >> 0x1c & 7) {
        case 0:
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          goto LAB_004f3274;
        case 1:
          bVar24 = 0;
          DAT_00cc3030 = DAT_00cc3030 + 0x10;
          DAT_00cc3010 = DAT_00cc3030;
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
          uVar25 = DAT_00cc3000 >> 4 & 3;
          if (uVar25 == 1) {
            DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
          }
          else {
            if (uVar25 != 0) {
              DAT_00cc3010 = uVar23;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              bVar24 = 1;
              break;
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
            puVar18 = (uint *)&DAT_00cc3050;
          }
          else {
            if (uVar23 != 1) {
              bVar24 = 1;
              break;
            }
            puVar18 = (uint *)&DAT_00cc3040;
          }
          bVar24 = 0;
          DAT_00cc3030 = *puVar18;
          *puVar18 = 0;
          DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                         DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc3010 = DAT_00cc3030 + 0x10;
LAB_004f3274:
          bVar24 = 1;
        }
        DAT_027062e4 = DAT_027062e4 | bVar24;
        if (DAT_00cc3020 != 0) {
          DAT_02706320 = 1;
        }
        if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
          DAT_027062e4 = 1;
        }
LAB_004f3674:
        uVar23 = DAT_00cc3020;
        if (7 < DAT_00cc3020) {
          uVar23 = 8;
        }
LAB_004f3684:
        DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18
        ;
        DAT_027032c0 = DAT_02706260;
        if ((DAT_02704f28 & 0x40) != 0) {
          DAT_027032c0 = 8;
        }
LAB_004f2138:
        DAT_027033c4 = DAT_027033c4 | 1;
        DAT_02703340 = DAT_027033c0;
        if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
          DAT_02702540 = DAT_02702540 + DAT_02702544;
          DAT_02702544 = 0;
        }
        uVar23 = DAT_00cbe800;
        uVar26 = DAT_027033c4;
        if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
          DAT_027033dc = DAT_027033c0 + DAT_027032c0;
        }
LAB_004f0d44:
        DAT_00cbe800 = uVar23;
        uVar23 = DAT_00cbec00;
        uVar25 = uVar26;
        if ((uVar26 >> 0x12 & 1) == 0) goto LAB_004ef0f8;
        if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
           ((int)(DAT_027033c0 - DAT_02703388) < (int)DAT_02703308)) {
          if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
            DAT_027033dc = DAT_02703308 + DAT_02703388;
          }
          goto LAB_004ef0f8;
        }
        DAT_027033c4 = uVar26 & 0xfffbffff;
        DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
        while (((iVar13 = DAT_028196e4, (DAT_02704e14 >> 3 & 1) == 0 ||
                ((DAT_02704f20 >> 4 & 1) == 0)) &&
               ((0 < (int)(DAT_027033c0 - DAT_028196e4) && ((_DAT_02819070 >> 8 & 1) != 0))))) {
          uVar23 = 0x100;
          if ((int)DAT_02704e00[1] == 0) {
            uVar23 = 1;
LAB_004f0e30:
            if ((uVar23 & _DAT_02819070) != 0) {
              iVar13 = DAT_028190d4;
              if ((int)DAT_02704e00[1] != 0) {
                iVar13 = DAT_028196e4;
              }
              uVar23 = DAT_027033c0 - iVar13;
              if (0 < (int)uVar23) {
                if (uVar23 < 0x11) {
                  uVar23 = 0x10;
                }
                (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar23);
              }
            }
          }
          else {
            if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_004f0e30;
            FUN_005b1f50(&DAT_01701a00);
          }
        }
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
          DAT_02703388 = DAT_027033c0;
          if ((DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_027033c0 + DAT_02703308;
          }
          DAT_027033d4 = DAT_027033d4 | 0x40000;
          uVar23 = DAT_00cbec00;
          uVar25 = DAT_027033c4;
          goto LAB_004ef0f8;
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
          DAT_02703388 = DAT_027033c0;
          DAT_027033c4 = DAT_027033c4 | 0x40000;
          if (((int)DAT_02703308 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_027033c0)) {
            DAT_027033dc = DAT_02703308 + DAT_027033c0;
          }
          DAT_027033d4 = DAT_027033d4 | 0x40000;
          uVar23 = DAT_00cbec00;
          uVar25 = DAT_027033c4;
          goto LAB_004ef0f8;
        }
        uVar23 = DAT_00cbec00 & 0xfffffffb;
        uVar25 = DAT_027033c4;
        if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
           (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_004ef0f8;
        if ((_DAT_00cc9000 & 0xc) == 8) {
          DAT_00cbec00 = uVar23;
          FUN_005d9ad0();
          uVar23 = DAT_00cbec00;
          uVar25 = DAT_027033c4;
          goto LAB_004ef0f8;
        }
        DAT_02706280 = 0;
        if ((DAT_00cbe020 & 0xc00) == 0x800) {
          if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
             (uVar25 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
            if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_004f1dec;
            uVar25 = DAT_00ca1510 & 0xfffffffb;
          }
          if (uVar25 == 0) {
            DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
            DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
            if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_004f2b0c:
              bVar12 = uVar23 == 0;
            }
            else {
              if (DAT_00ca1398 <= DAT_00ca139c) {
                uVar23 = DAT_00ca13f0 & 0xfffffffb;
                goto LAB_004f2b0c;
              }
              bVar12 = false;
            }
            if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
               ((DAT_02704f20 >> 4 & 1) != 0)) {
              if (DAT_00ca1638 == 0) goto LAB_004f2b60;
LAB_004f2b3c:
              bVar11 = true;
            }
            else {
              if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0))
              goto LAB_004f2b3c;
LAB_004f2b60:
              bVar11 = false;
            }
            uVar23 = DAT_00cbec00;
            if (bVar11 || !bVar12) {
              FUN_003ecbd0(&DAT_00ca1380,0,1);
              uVar23 = DAT_00cbec00;
            }
          }
        }
LAB_004f1dec:
        DAT_00cbec00 = uVar23;
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
          uVar23 = DAT_00cbec00;
          uVar25 = DAT_027033c4;
          goto LAB_004ef0f8;
        }
        if ((DAT_00cc4000 & 1) != 0) {
          if ((DAT_02706360 & 0x7f) == 0x51) {
            uVar23 = *DAT_00ca16f0;
            if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_004f2548:
              if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_004f2560;
            }
          }
          else {
            if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_004f2560:
              uVar23 = DAT_00cc4020;
              if (0xf < DAT_00cc4020) {
                uVar23 = 0x10;
              }
              DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                             DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18;
              goto LAB_004f258c;
            }
            uVar23 = *DAT_00ca16f0;
            uVar25 = uVar23 >> 10 & 3;
            if (((uVar25 == 0) || (uVar25 == 2)) ||
               ((uVar25 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3))))))
            goto LAB_004f2548;
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
          goto LAB_004ef0f8;
        }
LAB_004f258c:
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
LAB_004f2778:
          DAT_027033d4 = DAT_027033d4 | 2;
          uVar23 = DAT_00cbec00;
          uVar25 = DAT_027033c4;
          goto LAB_004ef0f8;
        }
        if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_004f2778;
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
            uVar25 = (uVar23 & 0x1f) << 0x18;
            uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar25;
            if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
              DAT_027033d4 = DAT_027033d4 | 2;
              uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar25 | 2;
              uVar25 = DAT_027033c4;
              goto LAB_004ef0f8;
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
          uVar23 = DAT_00cbec00;
          if (((DAT_00cbec00 >> 3 & 1) != 0) && (uVar25 = DAT_027033c4, DAT_00ca1630 != 0))
          goto LAB_004ef0f8;
          if (DAT_02706381 == '\0') {
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
            uVar25 = DAT_027033c4;
            if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_004ef0f8;
            goto LAB_004f3578;
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
          if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
            DAT_02702540 = DAT_02702540 + DAT_02702544;
            DAT_02702544 = 0;
          }
          uVar25 = DAT_027033c4;
          if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_004ef0f8;
          goto LAB_004f3314;
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
LAB_004f36fc:
                bVar12 = uVar23 == 0;
              }
              else {
                if (DAT_00ca1398 <= DAT_00ca139c) {
                  uVar23 = DAT_00ca13f0 & 0xfffffffb;
                  goto LAB_004f36fc;
                }
                bVar12 = false;
              }
              if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
                 ((DAT_02704f20 >> 4 & 1) != 0)) {
                if (DAT_00ca1518 == 0) goto LAB_004f3760;
LAB_004f3730:
                bVar11 = true;
              }
              else {
                if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
                goto LAB_004f3730;
LAB_004f3760:
                bVar11 = false;
              }
              if (bVar11 || !bVar12) goto LAB_004f3784;
            }
            DAT_027063b2 = '\0';
            FUN_00605e90(DAT_027063b4);
          }
LAB_004f3784:
          DAT_02706280 = 0;
          FUN_003f75f0(1);
          DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
          uVar23 = DAT_00cbec00;
          uVar25 = DAT_027033c4;
          goto LAB_004ef0f8;
        }
        uVar23 = DAT_00cbec00;
        uVar25 = DAT_027033c4;
        if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004ef0f8;
        if ((int)DAT_00cc4030 < 0) {
          uVar35 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_004f37c4:
          puVar33 = (uint *)(DAT_00ccb000 + uVar35 + 0x2000000);
        }
        else {
          uVar35 = (ulong)DAT_00cc4030 & 0x1ffffff0;
          if (uVar35 >> 0x19 == 0) {
            puVar33 = (uint *)(DAT_00ccb000 + uVar35);
          }
          else if (uVar35 >> 0x1c == 0) {
            puVar33 = (uint *)(&DAT_02884000 + DAT_00ccb000);
          }
          else {
            if ((uint)uVar35 < 0x10004000) {
              uVar35 = (ulong)(DAT_00cc4030 & 0x3ff0);
              goto LAB_004f37c4;
            }
            FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
            puVar33 = (uint *)0x0;
          }
        }
        uVar35 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
        if ((uVar35 & 1) == 0) goto LAB_004f3b80;
        DAT_00cc4010 = puVar33[1];
        DAT_02706280 = DAT_02706280 + 1;
        DAT_027063b0 = DAT_027063b0 & 0xfe;
        if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
            ((*puVar33 & 0x70000000) == 0x40000000)) &&
           ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
          FUN_003f75f0(0xd);
          goto LAB_004f3b80;
        }
        if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
          DAT_02706278 = *(undefined8 *)(puVar33 + 2);
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
          uVar35 = FUN_005e3030(puVar15,iVar13,1);
          if (((uVar35 & 1) == 0) && (DAT_027063a4 != '\0')) {
            DAT_027063b0 = DAT_027063b0 & 0xfe;
            DAT_00cc4020 = 0;
            goto LAB_004f3b80;
          }
        }
        DAT_027063a8 = 0;
        DAT_027063a4 = '\0';
        switch(*puVar33 >> 0x1c & 7) {
        case 0:
          DAT_00cc4030 = DAT_00cc4030 + 0x10;
          goto LAB_004f3af8;
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
          uVar25 = DAT_00cc4000 >> 4 & 3;
          if (uVar25 == 1) {
            DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
          }
          else {
            if (uVar25 != 0) {
              DAT_00cc4010 = uVar23;
              FUN_00988960(&PTR_FUN_00c9aa28,
                           "Call Stack Overflow (report if it fixes/breaks anything)");
              goto LAB_004f3af8;
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
            puVar18 = (uint *)&DAT_00cc4050;
          }
          else {
            if (uVar23 != 1) goto LAB_004f3af8;
            puVar18 = (uint *)&DAT_00cc4040;
          }
          bVar24 = 0;
          DAT_00cc4030 = *puVar18;
          *puVar18 = 0;
          DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                         DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
          break;
        case 7:
          DAT_00cc4010 = DAT_00cc4030 + 0x10;
LAB_004f3af8:
          bVar24 = 1;
        }
        DAT_02706374 = DAT_02706374 | bVar24;
        if (DAT_00cc4020 != 0) {
          DAT_027063b0 = DAT_027063b0 | 1;
        }
        if (((char)(byte)DAT_00cc4000 < '\0') && ((int)*puVar33 < 0)) {
          DAT_02706374 = 1;
        }
LAB_004f3b80:
        if ((DAT_00cc4000 & 1) != 0) {
          uVar23 = DAT_00cc4020;
          if (0xf < DAT_00cc4020) {
            uVar23 = 0x10;
          }
          DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 |
                         DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
        }
        uVar23 = DAT_00cbec00;
        if (((DAT_00cbec00 >> 3 & 1) == 0) || (uVar25 = DAT_027033c4, DAT_00ca1630 == 0)) {
          if (DAT_02706381 == '\0') {
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
            uVar25 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_004f3578:
              DAT_027033dc = DAT_027033c0 + DAT_027032c4;
              uVar23 = DAT_00cbec00;
              DAT_02703344 = DAT_027033c0;
              uVar25 = DAT_027033c4;
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
            uVar25 = DAT_027033c4;
            if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_004f3314:
              DAT_027033dc = DAT_027033c0 + DAT_027032c4;
              uVar23 = DAT_00cbec00;
              DAT_02703344 = DAT_027033c0;
              uVar25 = DAT_027033c4;
            }
          }
        }
LAB_004ef0f8:
        DAT_00cbec00 = uVar23;
        uVar23 = DAT_00cbec00;
      } while ((uVar25 & (DAT_027033d4 ^ 0xffffffff) & 0x1ffff) != 0);
    }
    goto LAB_004f5ac8;
  }
  if ((_DAT_00cc9000 & 1) == 0) goto LAB_004f5ac8;
LAB_004eef3c:
  if ((DAT_00cca520._2_1_ & 1) != 0) goto LAB_004f5ac8;
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
  if ((DAT_027033c4 >> 1 & 1) == 0) goto LAB_004f4274;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703344) < (int)DAT_027032c4)) {
    if ((int)DAT_027032c4 < (int)(DAT_027033dc - DAT_02703344)) {
      DAT_027033dc = DAT_027032c4 + DAT_02703344;
    }
    goto LAB_004f4274;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffffffd;
  DAT_02706280 = 0;
  DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar23 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_004f3f6c;
      uVar23 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar23 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff7;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_004f3ed8:
        bVar12 = uVar23 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar23 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_004f3ed8;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 == 0) goto LAB_004f3f44;
LAB_004f3f10:
        bVar11 = true;
      }
      else {
        if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto LAB_004f3f10;
LAB_004f3f44:
        bVar11 = false;
      }
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
      }
    }
  }
LAB_004f3f6c:
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
    goto LAB_004f4274;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar23 = *DAT_00ca16f0;
      if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_004f4048:
        if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_004f4060;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_004f4060:
        uVar23 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar23 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18
        ;
        goto LAB_004f4094;
      }
      uVar23 = *DAT_00ca16f0;
      uVar25 = uVar23 >> 10 & 3;
      if (((uVar25 == 0) || (uVar25 == 2)) ||
         ((uVar25 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_004f4048;
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
    goto LAB_004f4274;
  }
LAB_004f4094:
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
LAB_004f4260:
    DAT_027033d4 = DAT_027033d4 | 2;
    goto LAB_004f4274;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_004f4260;
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
      uVar25 = (uVar23 & 0x1f) << 0x18;
      uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar25;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar25 | 2;
        goto LAB_004f4260;
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
    if (((DAT_00cbec00 >> 3 & 1) != 0) && (DAT_00ca1630 != 0)) goto LAB_004f4274;
    if (DAT_02706381 == '\0') {
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
      if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_004f4274;
      goto LAB_004f825c;
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
    if ((DAT_027032c4 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    if ((int)(DAT_027033dc - DAT_027033c0) <= (int)DAT_027032c4) goto LAB_004f4274;
    goto LAB_004f80d8;
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
LAB_004f8a50:
          bVar12 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_004f8a50;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_004f8abc;
LAB_004f8a88:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_004f8a88;
LAB_004f8abc:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_004f8adc;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_004f8adc:
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
    goto LAB_004f4274;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004f4274;
  if ((int)DAT_00cc4030 < 0) {
    uVar35 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_004f8b98:
    puVar33 = (uint *)(DAT_00ccb000 + uVar35 + 0x2000000);
  }
  else {
    uVar35 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar35 >> 0x19 == 0) {
      puVar33 = (uint *)(DAT_00ccb000 + uVar35);
    }
    else if (uVar35 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar35 < 0x10004000) {
        uVar35 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_004f8b98;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar35 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
  if ((uVar35 & 1) == 0) goto LAB_004f9ac4;
  DAT_00cc4010 = puVar33[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar33 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_004f9ac4;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar33 + 2);
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
    uVar35 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar35 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_004f9ac4;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto LAB_004f9a84;
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
    uVar25 = DAT_00cc4000 >> 4 & 3;
    if (uVar25 == 1) {
      DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar25 != 0) {
        DAT_00cc4010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto LAB_004f9a84;
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
      puVar18 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar23 != 1) goto LAB_004f9a84;
      puVar18 = (uint *)&DAT_00cc4040;
    }
    DAT_00cc4030 = *puVar18;
    *puVar18 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    uVar23 = DAT_00cc4010;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
LAB_004f9a84:
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
LAB_004f9ac4:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  }
  if (((DAT_00cbec00 >> 3 & 1) == 0) || (DAT_00ca1630 == 0)) {
    if (DAT_02706381 == '\0') {
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
LAB_004f825c:
        DAT_027033dc = DAT_027033c0 + DAT_027032c4;
        DAT_02703344 = DAT_027033c0;
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
LAB_004f80d8:
        DAT_027033dc = DAT_027033c0 + DAT_027032c4;
        DAT_02703344 = DAT_027033c0;
      }
    }
  }
LAB_004f4274:
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
LAB_004f4434:
          bVar12 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_004f4434;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_004f44a0;
LAB_004f446c:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_004f446c;
LAB_004f44a0:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) {
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
        uVar25 = *DAT_00ca16f0;
        uVar26 = uVar25 & 3;
        if ((uVar26 == 0) || (DAT_00cc5020 == 0)) {
          if ((~_DAT_00cc9000 & 0xc) == 0) {
            if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
              piVar28 = (int *)&DAT_027032ec;
              DAT_027033c4 = DAT_027033c4 | 0x800;
              iVar13 = 0x10;
              if ((DAT_02704f28 & 0x40) != 0) {
                iVar13 = 8;
              }
LAB_004f491c:
              piVar28[0x20] = DAT_027033c0;
              *piVar28 = iVar13;
              if (0 < DAT_02702544) {
                DAT_02702540 = DAT_02702540 + DAT_02702544;
                DAT_02702544 = 0;
              }
              if (iVar13 < (int)(DAT_027033dc - uVar23)) {
                DAT_027033dc = iVar13 + uVar23;
              }
              uVar25 = *puVar33;
              uVar26 = uVar25 & 3;
            }
          }
          else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x10)) {
            piVar28 = (int *)&DAT_027032c8;
            DAT_027033c4 = DAT_027033c4 | 4;
            iVar13 = 0x10;
            if ((DAT_02704f28 & 0x40) != 0) {
              iVar13 = 8;
            }
            goto LAB_004f491c;
          }
          if (uVar26 == 0) {
joined_r0x004f4ad4:
            if (((((uVar25 & 0xc00) == 0xc00) || ((uVar25 & 0xc00) == 0)) &&
                ((uVar25 & 0x1008) == 0)) && (DAT_00ca16e8 == 0)) {
              DAT_027033d4 = DAT_027033d4 & 0xfffffffb;
              goto LAB_004f4b18;
            }
          }
        }
LAB_004f4b00:
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
          if (DAT_00ca1350 == 0x10) goto LAB_004f4b18;
        }
        if (DAT_00ca1350 == 0) {
          uVar23 = 0;
        }
        else {
          iVar13 = FUN_003ef270(&DAT_00ca1250);
          uVar23 = DAT_027033c0;
          if (iVar13 != 0) {
            uVar25 = iVar13 << 1;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < uVar25)) {
                if ((DAT_02704f28 & 0x40) != 0) {
                  uVar25 = 8;
                }
                puVar33 = &DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_004f47c8:
                puVar33[0x20] = DAT_027033c0;
                *puVar33 = uVar25;
                if ((uVar25 < 0x1d) && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if ((int)uVar25 < (int)(DAT_027033dc - uVar23)) {
                  DAT_027033dc = uVar25 + uVar23;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < uVar25)) {
              if ((DAT_02704f28 & 0x40) != 0) {
                uVar25 = 8;
              }
              puVar33 = &DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_004f47c8;
            }
          }
          uVar5 = DAT_02704f28;
          uVar25 = DAT_027033c0;
          puVar33 = DAT_00ca16f0;
          uVar23 = *DAT_00ca16f0;
          if (((((uVar23 & 0xc00) != 0xc00) &&
               (((uVar23 & 0xc00) != 0 ||
                (((uVar23 & 3) != 0 && ((DAT_00ca1630 & 0xfffffffb) == 0)))))) ||
              ((uVar23 & 0x1008) != 0)) || (bVar24 = DAT_00ca16e8, DAT_00ca16e8 != 0)) {
            if (((uVar23 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x80)) {
                  piVar28 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_004f49e0:
                  uVar10 = DAT_02704f28 & 0x40;
                  piVar28[0x20] = DAT_027033c0;
                  iVar27 = 8;
                  if (uVar10 == 0) {
                    iVar27 = 0x80;
                  }
                  *piVar28 = iVar27;
                  if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar27 < (int)(DAT_027033dc - uVar25)) {
                    DAT_027033dc = iVar27 + uVar25;
                  }
                }
              }
              else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x80)) {
                piVar28 = (int *)&DAT_027032c8;
                DAT_027033c4 = DAT_027033c4 | 4;
                goto LAB_004f49e0;
              }
            }
            bVar24 = 1;
          }
          if ((iVar13 != 0) || (uVar23 = DAT_00ca1350, (bVar24 & DAT_00ca1350 == 0x10) != 0)) {
            uVar25 = *puVar33;
            if (((uVar25 & 3) == 0) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto joined_r0x004f4ad4;
            goto LAB_004f4b00;
          }
        }
        uVar25 = DAT_027033c0;
        if ((DAT_00cc5000 >> 8 & 1) != 0) {
          if ((DAT_00cc5020 == 0) && (DAT_00ca1364 != '\0')) {
            DAT_00cc5000 = DAT_00cc5000 & 0xfffffeff;
            DAT_00ca1368 = 0;
            DAT_00cbe020 = DAT_00cbe020 & 0xe0000000 |
                           DAT_00cbe020 & 0xffffff | (uVar23 & 0x1f) << 0x18;
            if ((uVar23 & 0x1f) < 0xf) {
              uVar26 = DAT_00ca2710 & 0xffff3fff;
              DAT_00ca2710 = uVar26 | 0x4000;
              if ((uVar23 & 0x1f) != 0) {
                DAT_00ca2710 = uVar26;
              }
            }
            else {
              DAT_00ca2710 = DAT_00ca2710 & 0xffff3fff | 0x8000;
            }
            uVar26 = DAT_00cc9010 | 4;
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
            DAT_00cc9010 = uVar26;
            if (uVar23 != 0) {
              if ((~_DAT_00cc9000 & 0xc) == 0) {
                if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x10)) {
                  piVar28 = (int *)&DAT_027032ec;
                  DAT_027033c4 = DAT_027033c4 | 0x800;
                  iVar13 = 0x10;
                  if ((DAT_02704f28 & 0x40) != 0) {
                    iVar13 = 8;
                  }
LAB_004f7e58:
                  piVar28[0x20] = DAT_027033c0;
                  *piVar28 = iVar13;
                  if (0 < DAT_02702544) {
                    DAT_02702540 = DAT_02702540 + DAT_02702544;
                    DAT_02702544 = 0;
                  }
                  if (iVar13 < (int)(DAT_027033dc - uVar25)) {
                    DAT_027033dc = iVar13 + uVar25;
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
                goto LAB_004f7e58;
              }
            }
          }
          else if ((_DAT_00cc9000 & 1) == 0) {
            FUN_00988960(&PTR_FUN_00c9aa28,"gs dma masked, re-scheduling...");
            uVar5 = DAT_02704f28;
            uVar23 = DAT_027033c0;
            if ((~_DAT_00cc9000 & 0xc) == 0) {
              if (((DAT_027033c4 >> 0xb & 1) == 0) || (DAT_027032ec < 0x40)) {
                piVar28 = (int *)&DAT_027032ec;
                DAT_027033c4 = DAT_027033c4 | 0x800;
LAB_004f7f50:
                uVar10 = DAT_02704f28 & 0x40;
                piVar28[0x20] = DAT_027033c0;
                iVar13 = 8;
                if (uVar10 == 0) {
                  iVar13 = 0x40;
                }
                *piVar28 = iVar13;
                if (((uVar5 >> 6 & 1) != 0) && (0 < DAT_02702544)) {
                  DAT_02702540 = DAT_02702540 + DAT_02702544;
                  DAT_02702544 = 0;
                }
                if (iVar13 < (int)(DAT_027033dc - uVar23)) {
                  DAT_027033dc = iVar13 + uVar23;
                }
              }
            }
            else if (((DAT_027033c4 >> 2 & 1) == 0) || (DAT_027032c8 < 0x40)) {
              piVar28 = (int *)&DAT_027032c8;
              DAT_027033c4 = DAT_027033c4 | 4;
              goto LAB_004f7f50;
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
LAB_004f4b18:
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
  if ((DAT_027033c4 & 0xe0f19) == 0) goto LAB_004f5ac8;
  if ((DAT_027033c4 & 1) == 0) goto LAB_004f4ecc;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703340) < DAT_027032c0)) {
    if (DAT_027032c0 < (int)(DAT_027033dc - DAT_02703340)) {
      DAT_027033dc = DAT_027032c0 + DAT_02703340;
    }
    goto LAB_004f4ecc;
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
LAB_004f4eb8:
    DAT_027033d4 = DAT_027033d4 | 1;
    goto LAB_004f4ecc;
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
      uVar25 = DAT_00cc3020;
      if (7 < DAT_00cc3020) {
        uVar25 = 8;
      }
      uVar26 = DAT_00cbe800 & 0xe0000000;
      uVar25 = DAT_00cbe800 & 0xffffff | (uVar25 & 0x1f) << 0x18;
      DAT_00cbe800 = uVar26 | uVar25;
      if ((DAT_00cc3020 != 0) || (DAT_027062e4 == 0)) {
        DAT_00cbe800 = uVar26 | uVar25 & 0xeffffffc | 2;
        goto LAB_004f4eb8;
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
      uVar35 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_004f7af8:
      lVar32 = DAT_00ccb000 + uVar35;
      puVar29 = (undefined *)0x2000000;
LAB_004f7c60:
      puVar29 = puVar29 + lVar32;
LAB_004f7c64:
      if (DAT_02706314 == '\0') {
        iVar13 = DAT_00cc3020 << 2;
      }
      else {
        puVar29 = puVar29 + (ulong)DAT_02706318 * 4;
        iVar13 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar29,iVar13,0);
    }
    else {
      uVar35 = (ulong)DAT_00cc3010 & 0x1ffffff0;
      if (uVar35 >> 0x19 == 0) {
        if (DAT_00ccb000 != 0) {
          puVar29 = (undefined *)(DAT_00ccb000 + uVar35);
          goto LAB_004f7c64;
        }
      }
      else {
        if (uVar35 >> 0x1c == 0) {
          puVar29 = &DAT_02884000;
          lVar32 = DAT_00ccb000;
          goto LAB_004f7c60;
        }
        if ((uint)uVar35 < 0x10004000) {
          uVar35 = (ulong)(DAT_00cc3010 & 0x3ff0);
          goto LAB_004f7af8;
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
    goto LAB_004f7cd4;
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
LAB_004f84e0:
          bVar12 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_004f84e0;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_004f854c;
LAB_004f8518:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_004f8518;
LAB_004f854c:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_004f856c;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_004f856c:
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
    goto LAB_004f4ecc;
  }
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_004f4ecc;
  if (-1 < (int)DAT_00cc3030) {
    uVar35 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar35 >> 0x19 != 0) {
      if (uVar35 >> 0x1c != 0) {
        if (0x10003fff < (uint)uVar35) {
          FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
          goto LAB_004f8878;
        }
        uVar35 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_004f81d8;
      }
      puVar29 = &DAT_02884000;
      lVar32 = DAT_00ccb000;
      goto LAB_004f8408;
    }
    if (DAT_00ccb000 != 0) {
      puVar33 = (uint *)(DAT_00ccb000 + uVar35);
      goto LAB_004f840c;
    }
LAB_004f8878:
    FUN_009887f0(&PTR_FUN_00c9aa28,"%s BUSERR","vif0 Tag");
    DAT_00cc9010 = DAT_00cc9010 | 0x8000;
    goto LAB_004f8cc0;
  }
  uVar35 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_004f81d8:
  lVar32 = DAT_00ccb000 + uVar35;
  puVar29 = (undefined *)0x2000000;
LAB_004f8408:
  puVar33 = (uint *)(puVar29 + lVar32);
LAB_004f840c:
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
      puVar15 = &DAT_02706258;
      iVar13 = 2;
    }
    else {
      puVar15 = (undefined8 *)((long)&DAT_02706250 + (ulong)DAT_02706318 * 4);
      iVar13 = 4 - DAT_02706318;
    }
    uVar35 = FUN_005e2c60(puVar15,iVar13,1);
    if (((uVar35 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_004f86dc;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar23 = 0;
    goto LAB_004f8ccc;
  }
LAB_004f86dc:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto LAB_004f8c80;
  case 1:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    uVar23 = DAT_00cc3030;
    break;
  case 2:
    uVar23 = DAT_00cc3030 + 0x10;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  default:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    uVar23 = DAT_00cc3010;
    break;
  case 5:
    uVar23 = DAT_00cc3030 + 0x10;
    uVar25 = DAT_00cc3000 >> 4 & 3;
    if (uVar25 == 1) {
      DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar25 != 0) {
        DAT_00cc3010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto LAB_004f8c80;
      }
      DAT_00cc3040 = uVar23 + DAT_00cc3020 * 0x10;
    }
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x10 >> 4 & 3) << 4;
    DAT_00cc3030 = DAT_00cc3010;
    break;
  case 6:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
    uVar23 = DAT_00cc3000 >> 4 & 3;
    if (uVar23 == 2) {
      puVar18 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar23 != 1) goto LAB_004f8c80;
      puVar18 = (uint *)&DAT_00cc3040;
    }
    DAT_00cc3030 = *puVar18;
    *puVar18 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    uVar23 = DAT_00cc3010;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
LAB_004f8c80:
    DAT_027062e4 = DAT_027062e4 | 1;
    uVar23 = DAT_00cc3010;
  }
  DAT_00cc3010 = uVar23;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_004f8cc0:
  uVar23 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar23 = 8;
  }
LAB_004f8ccc:
  DAT_00cbe800 = DAT_00cbe800 & 0xe0000000 | DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  DAT_027032c0 = DAT_02706260;
  if ((DAT_02704f28 & 0x40) != 0) {
    DAT_027032c0 = 8;
  }
LAB_004f7cd4:
  DAT_027033c4 = DAT_027033c4 | 1;
  DAT_02703340 = DAT_027033c0;
  if ((DAT_027032c0 < 0x1d) && (0 < DAT_02702544)) {
    DAT_02702540 = DAT_02702540 + DAT_02702544;
    DAT_02702544 = 0;
  }
  if (DAT_027032c0 < (int)(DAT_027033dc - DAT_027033c0)) {
    DAT_027033dc = DAT_027033c0 + DAT_027032c0;
  }
LAB_004f4ecc:
  uVar25 = DAT_00cc9010;
  uVar23 = DAT_027033c4;
  uVar26 = DAT_027033c4;
  if ((DAT_027033c4 >> 3 & 1) != 0) {
    if (((DAT_027026f0 == '\0') || ((DAT_02704f28 >> 7 & 1) != 0)) ||
       (DAT_027032cc <= (int)(DAT_027033c0 - DAT_0270334c))) {
      uVar23 = DAT_027033c4 & 0xfffffff7;
      DAT_027033d4 = DAT_027033d4 & 0xfffffff7;
      if (DAT_00cc6020 == 0) {
        DAT_00cc6000 = DAT_00cc6000 & 0xfffffeff;
        uVar25 = DAT_00cc9010 | 8;
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
        DAT_027033c4 = uVar23;
        FUN_006709a0();
        uVar25 = DAT_00cc9010;
        uVar23 = DAT_027033c4;
        uVar26 = DAT_027033c4;
      }
    }
    else if (DAT_027032cc < (int)(DAT_027033dc - DAT_0270334c)) {
      DAT_027033dc = DAT_027032cc + DAT_0270334c;
    }
  }
  DAT_027033c4 = uVar23;
  DAT_00cc9010 = uVar25;
  uVar23 = DAT_00cc9010;
  if ((uVar26 >> 4 & 1) != 0) {
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
  if ((DAT_027033c4 >> 0x11 & 1) == 0) goto LAB_004f58bc;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703384) < DAT_02703304)) {
    if (DAT_02703304 < (int)(DAT_027033dc - DAT_02703384)) {
      DAT_027033dc = DAT_02703304 + DAT_02703384;
    }
    goto LAB_004f58bc;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffdffff;
  DAT_027033d4 = DAT_027033d4 & 0xfffdffff;
  uVar23 = _DAT_02819070 & 1;
  if ((0 < (int)(DAT_027033c0 - DAT_028190d4)) && (uVar23 != 0)) {
    do {
      uVar23 = 0x100;
      if ((int)DAT_02704e08[1] == 0) {
        uVar23 = 1;
LAB_004f5770:
        if ((uVar23 & _DAT_02819070) != 0) {
          iVar13 = DAT_028190d4;
          if ((int)DAT_02704e08[1] != 0) {
            iVar13 = DAT_028196e4;
          }
          uVar23 = DAT_027033c0 - iVar13;
          if (0 < (int)uVar23) {
            if (uVar23 < 0x11) {
              uVar23 = 0x10;
            }
            (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar23);
          }
        }
      }
      else {
        if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_004f5770;
        FUN_005b1f50(&DAT_01701a00);
      }
      uVar23 = _DAT_02819070 & 1;
    } while (0 < (int)(DAT_027033c0 - DAT_028190d4) && uVar23 != 0);
  }
  iVar13 = DAT_028190d4;
  if ((_DAT_02819070 & 5) != 0) {
    DAT_027033c4 = DAT_027033c4 | 0x20000;
    DAT_02703304 = 0x80;
    if (0x80 < (int)(DAT_027033dc - DAT_027033c0)) {
      DAT_027033dc = DAT_027033c0 + 0x80;
    }
LAB_004f58a8:
    DAT_027033d4 = DAT_027033d4 | 0x20000;
    uVar23 = DAT_00cbe800;
    DAT_02703384 = DAT_027033c0;
    goto LAB_004f58bc;
  }
  if (uVar23 != 0) {
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
    iVar27 = DAT_027033dc - DAT_027033c0;
    if (iVar27 != DAT_02703304 &&
        iVar27 + (DAT_028190d4 - iVar13) * -2 < 0 == SBORROW4(iVar27,DAT_02703304)) {
      DAT_027033dc = DAT_027033c0 + DAT_02703304;
    }
    goto LAB_004f58a8;
  }
  uVar23 = DAT_00cbe800 & 0xfffffffb;
  if ((((DAT_027062f1 == '\0') || (DAT_027062f1 = '\0', (DAT_027033c4 & 1) != 0)) ||
      ((DAT_00cc3000 & 0x100) == 0)) || ((DAT_00cbe800 & 0x700) != 0)) goto LAB_004f58bc;
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
      uVar25 = DAT_00cbe800 & 0xffffff | (uVar23 & 0x1f) << 0x18;
      if ((DAT_00cc3020 != 0) || (uVar23 = DAT_00cbe800 & 0xe0000000 | uVar25, DAT_027062e4 == 0)) {
        DAT_027033d4 = DAT_027033d4 | 1;
        uVar23 = DAT_00cbe800 & 0xe0000000 | uVar25 & 0xeffffffc | 2;
        goto LAB_004f58bc;
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
      uVar35 = (ulong)DAT_00cc3010 & 0x3ff0;
LAB_004f8744:
      lVar32 = DAT_00ccb000 + uVar35;
      puVar29 = (undefined *)0x2000000;
LAB_004f8788:
      puVar29 = puVar29 + lVar32;
LAB_004f878c:
      if (DAT_02706314 == '\0') {
        iVar13 = DAT_00cc3020 << 2;
      }
      else {
        puVar29 = puVar29 + (ulong)DAT_02706318 * 4;
        iVar13 = DAT_00cc3020 * 4 - DAT_02706318;
      }
      FUN_005e2c60(puVar29,iVar13,0);
    }
    else {
      uVar35 = (ulong)DAT_00cc3010 & 0x1ffffff0;
      if (uVar35 >> 0x19 == 0) {
        if (DAT_00ccb000 != 0) {
          puVar29 = (undefined *)(DAT_00ccb000 + uVar35);
          goto LAB_004f878c;
        }
      }
      else {
        if (uVar35 >> 0x1c == 0) {
          puVar29 = &DAT_02884000;
          lVar32 = DAT_00ccb000;
          goto LAB_004f8788;
        }
        if ((uint)uVar35 < 0x10004000) {
          uVar35 = (ulong)(DAT_00cc3010 & 0x3ff0);
          goto LAB_004f8744;
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
    goto LAB_004f58bc;
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
LAB_004f8dd8:
          bVar12 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_004f8dd8;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_004f8e44;
LAB_004f8e10:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_004f8e10;
LAB_004f8e44:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_004f8e64;
      }
      DAT_02706322 = '\0';
      FUN_00604740(DAT_02706324);
    }
LAB_004f8e64:
    DAT_02706260 = 0;
    FUN_003f75f0(0);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffe;
    uVar23 = DAT_00cbe800 & 0xe0ffffff;
    goto LAB_004f58bc;
  }
  uVar23 = DAT_00cbe800;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbe800 >> 8 & 1) != 0)) goto LAB_004f58bc;
  if ((int)DAT_00cc3030 < 0) {
    uVar35 = (ulong)DAT_00cc3030 & 0x3ff0;
LAB_004f8bf4:
    puVar33 = (uint *)(DAT_00ccb000 + uVar35 + 0x2000000);
  }
  else {
    uVar35 = (ulong)DAT_00cc3030 & 0x1ffffff0;
    if (uVar35 >> 0x19 == 0) {
      puVar33 = (uint *)(DAT_00ccb000 + uVar35);
    }
    else if (uVar35 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar35 < 0x10004000) {
        uVar35 = (ulong)(DAT_00cc3030 & 0x3ff0);
        goto LAB_004f8bf4;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar35 = FUN_003d1c10(&DAT_00cc3000,"vif0 Tag",puVar33);
  if ((uVar35 & 1) == 0) goto LAB_004f9d78;
  DAT_00cc3010 = puVar33[1];
  DAT_02706260 = DAT_02706260 + 1;
  DAT_02706320 = 0;
  if (((byte)DAT_00cc3000 >> 6 & 1) != 0) {
    DAT_02706258 = *(undefined8 *)(puVar33 + 2);
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
    uVar35 = FUN_005e2c60(puVar15,iVar13,1);
    if (((uVar35 & 1) != 0) || (DAT_02706314 == '\0')) goto LAB_004f971c;
    DAT_02706320 = 0;
    DAT_00cc3020 = 0;
    uVar23 = 0;
    goto LAB_004f9d88;
  }
LAB_004f971c:
  DAT_02706318 = 0;
  DAT_02706314 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc3030 = DAT_00cc3030 + 0x10;
    goto LAB_004f9d10;
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
    uVar25 = DAT_00cc3000 >> 4 & 3;
    if (uVar25 == 1) {
      DAT_00cc3050 = uVar23 + DAT_00cc3020 * 0x10;
    }
    else {
      if (uVar25 != 0) {
        DAT_00cc3010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto LAB_004f9d10;
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
      puVar18 = (uint *)&DAT_00cc3050;
    }
    else {
      if (uVar23 != 1) goto LAB_004f9d10;
      puVar18 = (uint *)&DAT_00cc3040;
    }
    bVar24 = 0;
    DAT_00cc3030 = *puVar18;
    *puVar18 = 0;
    DAT_00cc3000 = DAT_00cc3000 & 0xffffffc0 |
                   DAT_00cc3000 & 0xf | (DAT_00cc3000 + 0x30 >> 4 & 3) << 4;
    break;
  case 7:
    DAT_00cc3010 = DAT_00cc3030 + 0x10;
LAB_004f9d10:
    bVar24 = 1;
  }
  DAT_027062e4 = DAT_027062e4 | bVar24;
  if (DAT_00cc3020 != 0) {
    DAT_02706320 = 1;
  }
  if (((char)(byte)DAT_00cc3000 < '\0') && ((int)*puVar33 < 0)) {
    DAT_027062e4 = 1;
  }
LAB_004f9d78:
  uVar23 = DAT_00cc3020;
  if (7 < DAT_00cc3020) {
    uVar23 = 8;
  }
LAB_004f9d88:
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
LAB_004f58bc:
  DAT_00cbe800 = uVar23;
  uVar23 = DAT_00cbec00;
  if ((DAT_027033c4 >> 0x12 & 1) == 0) goto LAB_004f5ac8;
  if (((DAT_027026f0 != '\0') && ((DAT_02704f28 >> 7 & 1) == 0)) &&
     ((int)(DAT_027033c0 - DAT_02703388) < (int)DAT_02703308)) {
    if ((int)DAT_02703308 < (int)(DAT_027033dc - DAT_02703388)) {
      DAT_027033dc = DAT_02703308 + DAT_02703388;
    }
    goto LAB_004f5ac8;
  }
  DAT_027033c4 = DAT_027033c4 & 0xfffbffff;
  DAT_027033d4 = DAT_027033d4 & 0xfffbffff;
  while (((iVar13 = DAT_028196e4, (DAT_02704e14 >> 3 & 1) == 0 || ((DAT_02704f20 >> 4 & 1) == 0)) &&
         ((0 < (int)(DAT_027033c0 - DAT_028196e4) && ((_DAT_02819070 >> 8 & 1) != 0))))) {
    uVar23 = 0x100;
    if ((int)DAT_02704e00[1] == 0) {
      uVar23 = 1;
LAB_004f59d4:
      if ((uVar23 & _DAT_02819070) != 0) {
        iVar13 = DAT_028190d4;
        if ((int)DAT_02704e00[1] != 0) {
          iVar13 = DAT_028196e4;
        }
        uVar23 = DAT_027033c0 - iVar13;
        if (0 < (int)uVar23) {
          if (uVar23 < 0x11) {
            uVar23 = 0x10;
          }
          (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar23);
        }
      }
    }
    else {
      if (((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 >> 4 & 1) == 0)) goto LAB_004f59d4;
      FUN_005b1f50(&DAT_01701a00);
    }
  }
  if ((_DAT_02819070 & 0x500) != 0) {
    FUN_005b1f50(&DAT_01701a00);
    if ((((DAT_02704e14 >> 3 & 1) == 0) || ((DAT_02704f20 & 0x30) != 0x10)) ||
       ((_DAT_02819070 & 0x100) == 0)) {
      uVar23 = 0x80;
    }
    else {
      uVar23 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)uVar23 < 2) {
        uVar23 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if ((uVar23 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    uVar25 = DAT_027033c0;
    DAT_02703308 = uVar23;
    if ((int)uVar23 < (int)(DAT_027033dc - DAT_027033c0)) {
LAB_004f5ab0:
      DAT_027033dc = uVar25 + uVar23;
    }
LAB_004f5ab8:
    DAT_027033d4 = DAT_027033d4 | 0x40000;
    uVar23 = DAT_00cbec00;
    DAT_02703388 = DAT_027033c0;
    goto LAB_004f5ac8;
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
      uVar25 = DAT_028196e4 - iVar13;
    }
    else {
      uVar25 = (DAT_02703310 + DAT_02703390) - DAT_027033c0;
      if ((int)uVar25 < 2) {
        uVar25 = 1;
      }
    }
    DAT_027033c4 = DAT_027033c4 | 0x40000;
    if (((int)uVar25 < 0x1d) && (0 < DAT_02702544)) {
      DAT_02702540 = DAT_02702540 + DAT_02702544;
      DAT_02702544 = 0;
    }
    uVar23 = DAT_027033c0;
    DAT_02703308 = uVar25;
    if ((int)uVar25 < (int)(DAT_027033dc - DAT_027033c0)) goto LAB_004f5ab0;
    goto LAB_004f5ab8;
  }
  uVar23 = DAT_00cbec00 & 0xfffffffb;
  if (((DAT_02706381 == '\0') || (DAT_02706381 = '\0', (DAT_027033c4 & 0x402) != 0)) ||
     (((DAT_00cc4000 >> 8 & 1) == 0 || ((DAT_00cbec00 & 0x700) != 0)))) goto LAB_004f5ac8;
  if ((_DAT_00cc9000 & 0xc) == 8) {
LAB_004f8f84:
    DAT_00cbec00 = uVar23;
    FUN_005d9ad0();
    uVar23 = DAT_00cbec00;
    goto LAB_004f5ac8;
  }
  DAT_02706280 = 0;
  if ((DAT_00cbe020 & 0xc00) == 0x800) {
    if (((DAT_00ca150c != 0) || ((DAT_02704e14 >> 3 & 1) == 0)) ||
       (uVar25 = DAT_00ca1518, (DAT_02704f20 >> 4 & 1) == 0)) {
      if (DAT_00ca14bc < DAT_00ca14b8) goto LAB_004f8f34;
      uVar25 = DAT_00ca1510 & 0xfffffffb;
    }
    if (uVar25 == 0) {
      DAT_00cbe020 = DAT_00cbe020 & 0xfffff1ff;
      DAT_00cbec00 = DAT_00cbec00 & 0xfffffff3;
      if (((DAT_00ca13ec == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
         (uVar23 = DAT_00ca13f8, (DAT_02704f20 >> 4 & 1) != 0)) {
LAB_004f8ea8:
        bVar12 = uVar23 == 0;
      }
      else {
        if (DAT_00ca1398 <= DAT_00ca139c) {
          uVar23 = DAT_00ca13f0 & 0xfffffffb;
          goto LAB_004f8ea8;
        }
        bVar12 = false;
      }
      if (((DAT_00ca162c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) && ((DAT_02704f20 >> 4 & 1) != 0))
      {
        if (DAT_00ca1638 == 0) goto LAB_004f8f00;
LAB_004f8ee0:
        bVar11 = true;
      }
      else {
        if ((DAT_00ca15dc < DAT_00ca15d8) || ((DAT_00ca1630 & 0xfffffffb) != 0)) goto LAB_004f8ee0;
LAB_004f8f00:
        bVar11 = false;
      }
      uVar23 = DAT_00cbec00;
      if (bVar11 || !bVar12) {
        FUN_003ecbd0(&DAT_00ca1380,0,1);
        uVar23 = DAT_00cbec00;
      }
    }
  }
LAB_004f8f34:
  DAT_00cbec00 = uVar23;
  if ((_DAT_00cc9000 & 0xc) == 8) {
    if ((DAT_00cc4000 & 0xc) == 0) {
      FUN_009885d0(&PTR_FUN_00c9aa28,"MFIFO mode is normal (which isn\'t normal here)! %x");
    }
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
    goto LAB_004f8f84;
  }
  if ((DAT_00cc4000 & 1) != 0) {
    if ((DAT_02706360 & 0x7f) == 0x51) {
      uVar23 = *DAT_00ca16f0;
      if ((uVar23 >> 10 & 3 | 2) == 2) {
LAB_004f9008:
        if (((uVar23 & 0x1008) == 0) && (DAT_00ca16e8 == 0)) goto LAB_004f9020;
      }
    }
    else {
      if ((DAT_02706360 & 0x7f) != 0x50) {
LAB_004f9020:
        uVar23 = DAT_00cc4020;
        if (0xf < DAT_00cc4020) {
          uVar23 = 0x10;
        }
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffff7 | (uVar23 & 0x1f) << 0x18
        ;
        goto LAB_004f9054;
      }
      uVar23 = *DAT_00ca16f0;
      uVar25 = uVar23 >> 10 & 3;
      if (((uVar25 == 0) || (uVar25 == 2)) ||
         ((uVar25 == 3 && (((uVar23 >> 2 & 1) != 0 && (DAT_00ca1630 == 3)))))) goto LAB_004f9008;
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
    goto LAB_004f5ac8;
  }
LAB_004f9054:
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
LAB_004f9204:
    DAT_027033d4 = DAT_027033d4 | 2;
    uVar23 = DAT_00cbec00;
    goto LAB_004f5ac8;
  }
  if (((byte)DAT_00cbec00 >> 3 & 1) != 0) goto LAB_004f9204;
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
      uVar25 = (uVar23 & 0x1f) << 0x18;
      uVar23 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | uVar25;
      if (((DAT_00cc4020 != 0) || (DAT_02706374 == 0)) && ((DAT_02704f28 >> 0xb & 1) == 0)) {
        DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xfffffc | uVar25 | 2;
        goto LAB_004f9204;
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
    uVar25 = DAT_027033c0;
    if (((DAT_00cbec00 >> 3 & 1) != 0) &&
       (uVar23 = DAT_00cbec00, uVar25 = DAT_027033c0, DAT_00ca1630 != 0)) goto LAB_004f5ac8;
    goto joined_r0x004f9830;
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
LAB_004f9e54:
          bVar12 = uVar23 == 0;
        }
        else {
          if (DAT_00ca1398 <= DAT_00ca139c) {
            uVar23 = DAT_00ca13f0 & 0xfffffffb;
            goto LAB_004f9e54;
          }
          bVar12 = false;
        }
        if (((DAT_00ca150c == 0) && ((DAT_02704e14 >> 3 & 1) != 0)) &&
           ((DAT_02704f20 >> 4 & 1) != 0)) {
          if (DAT_00ca1518 == 0) goto LAB_004f9eb8;
LAB_004f9e8c:
          bVar11 = true;
        }
        else {
          if ((DAT_00ca14bc < DAT_00ca14b8) || ((DAT_00ca1510 & 0xfffffffb) != 0))
          goto LAB_004f9e8c;
LAB_004f9eb8:
          bVar11 = false;
        }
        if (bVar11 || !bVar12) goto LAB_004f9ed8;
      }
      DAT_027063b2 = '\0';
      FUN_00605e90(DAT_027063b4);
    }
LAB_004f9ed8:
    DAT_02706280 = 0;
    FUN_003f75f0(1);
    DAT_027033d4 = DAT_027033d4 & 0xfffffffd;
    uVar23 = DAT_00cbec00;
    goto LAB_004f5ac8;
  }
  uVar23 = DAT_00cbec00;
  if (((_DAT_00cc9000 & 1) == 0) || ((DAT_00cbec00 & 0x100) != 0)) goto LAB_004f5ac8;
  if ((int)DAT_00cc4030 < 0) {
    uVar35 = (ulong)DAT_00cc4030 & 0x3ff0;
LAB_004f9f00:
    puVar33 = (uint *)(DAT_00ccb000 + uVar35 + 0x2000000);
  }
  else {
    uVar35 = (ulong)DAT_00cc4030 & 0x1ffffff0;
    if (uVar35 >> 0x19 == 0) {
      puVar33 = (uint *)(DAT_00ccb000 + uVar35);
    }
    else if (uVar35 >> 0x1c == 0) {
      puVar33 = (uint *)(&DAT_02884000 + DAT_00ccb000);
    }
    else {
      if ((uint)uVar35 < 0x10004000) {
        uVar35 = (ulong)(DAT_00cc4030 & 0x3ff0);
        goto LAB_004f9f00;
      }
      FUN_009887f0(&PTR_FUN_00c9aa28,"*PCSX2*: DMA error: %8.8x");
      puVar33 = (uint *)0x0;
    }
  }
  uVar35 = FUN_003d1c10(&DAT_00cc4000,"Vif1 Tag",puVar33);
  if ((uVar35 & 1) == 0) goto LAB_004fa2b8;
  DAT_00cc4010 = puVar33[1];
  DAT_02706280 = DAT_02706280 + 1;
  DAT_027063b0 = DAT_027063b0 & 0xfe;
  if ((((DAT_02706374 == 0) && ((_DAT_00cc9000 & 0xc0) == 0x40)) &&
      ((*puVar33 & 0x70000000) == 0x40000000)) &&
     ((DAT_00cc9060 & 0x7fffffff) < DAT_00cc4010 + DAT_00cc4020 * 0x10)) {
    FUN_003f75f0(0xd);
    goto LAB_004fa2b8;
  }
  if (((byte)DAT_00cc4000 >> 6 & 1) != 0) {
    DAT_02706278 = *(undefined8 *)(puVar33 + 2);
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
    uVar35 = FUN_005e3030(puVar15,iVar13,1);
    if (((uVar35 & 1) == 0) && (DAT_027063a4 != '\0')) {
      DAT_027063b0 = DAT_027063b0 & 0xfe;
      DAT_00cc4020 = 0;
      goto LAB_004fa2b8;
    }
  }
  DAT_027063a8 = 0;
  DAT_027063a4 = '\0';
  switch(*puVar33 >> 0x1c & 7) {
  case 0:
    DAT_00cc4030 = DAT_00cc4030 + 0x10;
    goto LAB_004fa278;
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
    uVar25 = DAT_00cc4000 >> 4 & 3;
    if (uVar25 == 1) {
      DAT_00cc4050 = uVar23 + DAT_00cc4020 * 0x10;
    }
    else {
      if (uVar25 != 0) {
        DAT_00cc4010 = uVar23;
        FUN_00988960(&PTR_FUN_00c9aa28,"Call Stack Overflow (report if it fixes/breaks anything)");
        goto LAB_004fa278;
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
      puVar18 = (uint *)&DAT_00cc4050;
    }
    else {
      if (uVar23 != 1) goto LAB_004fa278;
      puVar18 = (uint *)&DAT_00cc4040;
    }
    DAT_00cc4030 = *puVar18;
    *puVar18 = 0;
    DAT_00cc4000 = DAT_00cc4000 & 0xffffffc0 |
                   DAT_00cc4000 & 0xf | (DAT_00cc4000 + 0x30 >> 4 & 3) << 4;
    uVar23 = DAT_00cc4010;
    break;
  case 7:
    DAT_00cc4010 = DAT_00cc4030 + 0x10;
LAB_004fa278:
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
LAB_004fa2b8:
  if ((DAT_00cc4000 & 1) != 0) {
    uVar23 = DAT_00cc4020;
    if (0xf < DAT_00cc4020) {
      uVar23 = 0x10;
    }
    DAT_00cbec00 = DAT_00cbec00 & 0xe0000000 | DAT_00cbec00 & 0xffffff | (uVar23 & 0x1f) << 0x18;
  }
  uVar25 = DAT_027033c0;
  if (((DAT_00cbec00 >> 3 & 1) == 0) ||
     (uVar23 = DAT_00cbec00, uVar25 = DAT_027033c0, DAT_00ca1630 == 0)) {
joined_r0x004f9830:
    DAT_02703344 = uVar25;
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
LAB_004f5ac8:
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
            uVar25 = DAT_00cab0a0;
            uVar23 = DAT_02704648;
            if (DAT_0270465d == '\0') {
              bVar12 = false;
            }
            else {
              if ((int)DAT_02704650 < 0x80) {
                if ((int)DAT_02704668 < 1) {
                  if (DAT_0270465c != '\0') goto LAB_004f61e0;
                  DAT_02704670 = (int)DAT_0270466c._3_1_;
                  DAT_02704668 = (uint)DAT_00cab0a4 * (uint)DAT_00cab0a6;
                  bVar12 = true;
                  DAT_0270465c = '\x01';
                  goto joined_r0x004f61b4;
                }
                uVar23 = 0x80 - DAT_02704650;
                if (DAT_02704668 <= 0x80 - DAT_02704650) {
                  uVar23 = DAT_02704668;
                }
                pvVar16 = (void *)(DAT_00cba000 + ((ulong)DAT_00cab0a0 & 0x1fffff));
                if ((int)DAT_02704650 < 4) {
                  uVar26 = uVar23;
                  if (4 - DAT_02704650 <= uVar23) {
                    uVar26 = 4 - DAT_02704650;
                  }
                  memcpy((void *)((long)(int)DAT_02704650 * 4 + 0x2704638),pvVar16,
                         (ulong)(uVar26 << 2));
                }
                uVar26 = uVar23;
                if ((int)(0x80 - DAT_0270464c) <= (int)uVar23) {
                  uVar26 = 0x80 - DAT_0270464c;
                }
                memcpy(&DAT_02704438 + (long)(int)DAT_0270464c * 4,pvVar16,(long)(int)(uVar26 << 2))
                ;
                __memcpy_chk(&DAT_02704438,(void *)((long)pvVar16 + (long)(int)uVar26 * 4),
                             (long)(int)((uVar23 - uVar26) * 4),0x244);
                DAT_00cab0a0 = uVar25 + uVar23 * 4;
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
LAB_004f626c:
                bVar12 = true;
              }
              else {
                bVar12 = false;
                if ((DAT_0270465c != '\0') && (DAT_02704668 == 0)) {
LAB_004f61e0:
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
                    iVar27 = DAT_027033dc - DAT_027033c0;
                    if (iVar27 != iVar13 &&
                        iVar27 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar27,iVar13))
                    {
                      DAT_027033dc = DAT_027033c0 + iVar13;
                    }
                  }
                  goto LAB_004f626c;
                }
              }
              uVar23 = DAT_02704648;
            }
joined_r0x004f61b4:
            DAT_02704648 = uVar23;
            if ((DAT_02704655 != '\0') &&
               ((3 < (int)DAT_02704650 || ((DAT_02704654 != '\0' && (DAT_00cc7820 == 0)))))) {
              if ((DAT_00cc7800 >> 8 & 1) == 0) {
                _DAT_02704654 = 0;
              }
              else {
                if (DAT_00cc7820 != 0) {
joined_r0x004f62b4:
                  bVar12 = true;
                  if ((DAT_00cc7820 != 0) && (bVar12 = true, 0 < (int)DAT_02704650)) {
                    uVar23 = DAT_02704650 >> 2;
                    if ((int)DAT_00cc7820 <= (int)(DAT_02704650 >> 2)) {
                      uVar23 = DAT_00cc7820;
                    }
                    pvVar16 = (void *)FUN_003d1c90(&DAT_00cc7800,DAT_00cc7810,7,1);
                    if (pvVar16 != (void *)0x0) {
                      iVar13 = uVar23 * 4;
                      if (0 < iVar13) {
                        iVar17 = 0x80 - DAT_02704648;
                        iVar27 = iVar13;
                        if (iVar17 == iVar13 ||
                            (int)(iVar17 + uVar23 * -4) < 0 != SBORROW4(iVar17,iVar13)) {
                          iVar27 = iVar17;
                        }
                        memcpy(pvVar16,&DAT_02704438 + (long)(int)DAT_02704648 * 4,
                               (long)(iVar27 << 2));
                        memcpy((void *)((long)pvVar16 + (long)iVar27 * 4),&DAT_02704438,
                               (long)((iVar13 - iVar27) * 4));
                        DAT_02704648 = DAT_02704648 + iVar13 & 0x7f;
                        DAT_02704650 = DAT_02704650 + uVar23 * -4;
                      }
                      DAT_02704658 = DAT_02704658 + uVar23;
                      DAT_00cc7810 = DAT_00cc7810 + uVar23 * 0x10;
                      DAT_00cc7820 = DAT_00cc7820 - uVar23;
                    }
                    bVar12 = true;
                  }
                  goto LAB_004f6064;
                }
                uVar25 = DAT_00cc7800 & 0xffff;
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
                  uVar26 = DAT_02704650 - 4;
                  if (3 < (int)DAT_02704650) {
                    iVar13 = 0x80 - uVar23;
                    if (3 < iVar13) {
                      iVar13 = 4;
                    }
                    __memcpy_chk(&DAT_02704680,&DAT_02704438 + (long)(int)uVar23 * 4,
                                 (long)(iVar13 * 4),0x10);
                    memcpy(&DAT_02704680 + iVar13,&DAT_02704438,(long)(iVar13 * -4 + 0x10));
                    DAT_02704648 = uVar23 + 4 & 0x7f;
                    DAT_00cc7800 = DAT_02704680 & 0xffff0000 | uVar25;
                    DAT_00cc7820 = DAT_02704680 & 0xffff;
                    DAT_00cc7810 = DAT_02704684;
                    DAT_02704650 = uVar26;
                    if ((((uint)((int)DAT_02704680 < 0) & uVar25 >> 7) != 0) ||
                       ((DAT_02704680 & 0x70000000) == 0x70000000)) {
                      _DAT_02704654 = CONCAT11(DAT_02704655,1);
                    }
                    goto joined_r0x004f62b4;
                  }
                }
              }
              bVar12 = true;
            }
LAB_004f6064:
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
        bVar24 = DAT_02b5bb5d | 6;
        DAT_02b5bbbc = 0;
        uVar35 = DAT_02b5bbb4;
        if ((int)DAT_02b5bbb4 == 0) {
          DAT_02b6bc2c = 1;
          DAT_02b5bbd0 = 0;
          DAT_02b5bbb4 = 0x100000001;
          DAT_02b5bbac = DAT_02b6bc20;
          uVar35 = DAT_02b5bbb4;
        }
        DAT_02b5bbb4 = uVar35;
        if (DAT_02b6bc39 == '\0') {
          if (DAT_02b5bbac < DAT_02b6bc24) {
            DAT_02b5bbb4._4_4_ = (int)(uVar35 >> 0x20);
            bVar12 = DAT_02b5bbb4._4_4_ == 0;
            DAT_02b5bb5d = bVar24;
            if (bVar12) {
LAB_004f667c:
              if ((DAT_02b5bbb0 < 1) || (DAT_02b6bc38 == 0)) {
                if (0 < DAT_02b5bbb0) {
                  iVar13 = DAT_02b5bbc4 + 3;
                  if (-1 < DAT_02b5bbc4) {
                    iVar13 = DAT_02b5bbc4;
                  }
                  DAT_027025ec = (iVar13 >> 2) * 0xc;
                  if (((DAT_02704f20 & 1) != 0) && (DAT_02b5bbc4 - 4U < 0xfffffff9))
                  goto LAB_004f7544;
                  goto LAB_004f7564;
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
                      iVar27 = DAT_027033dc - DAT_027033c0;
                      if (iVar27 != iVar13 &&
                          iVar27 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar27,iVar13)
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
                goto LAB_004f667c;
              }
              if (DAT_02b5bbcc <= DAT_02b5bbd0) {
                DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
                FUN_009887f0(&PTR_FUN_00c9aa28,"CDVD READ ERROR, sector = 0x%08x");
                goto LAB_004f5cc4;
              }
              if (DAT_02b5bbc0 < 4) {
                DAT_02b5b110 = *(undefined4 *)(&DAT_0022b370 + (long)(int)DAT_02b5bbc0 * 4);
              }
              DAT_02b5b114 = DAT_02b5bbac;
              DAT_02b5bbd0 = DAT_02b5bbd0 + 1;
              DAT_02b5bbd4 = (**(code **)(DAT_02b5bb48 + 0x10))(DAT_02b5bbac);
              DAT_027025ec = DAT_02b6bc28;
              if (((DAT_02704f20 & 1) != 0) && (1 < DAT_02b6bc28)) {
LAB_004f7544:
                if (DAT_027025ec < DAT_02b5bb50) {
                  DAT_027025ec = (int)((float)DAT_027025ec * 0.5);
                }
              }
LAB_004f7564:
              DAT_0270256c = DAT_02702530;
              DAT_02702534 = DAT_02702534 | 0x200;
              if ((int)DAT_027025ec < DAT_0270253c - DAT_02702530) {
                DAT_0270253c = DAT_02702530 + DAT_027025ec;
              }
              if (DAT_02702544 < 0) {
                iVar13 = (DAT_0270253c - DAT_02702530) * 8;
                iVar27 = DAT_027033dc - DAT_027033c0;
                if (iVar27 != iVar13 &&
                    iVar27 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar27,iVar13)) {
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
LAB_004f5cc4:
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
            iVar27 = DAT_027033dc - DAT_027033c0;
            if (iVar27 != iVar13 &&
                iVar27 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar27,iVar13)) {
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
          goto joined_r0x004f6c84;
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
          uVar25 = DAT_02702534 >> 10;
          DAT_02702534 = uVar23;
          if ((uVar25 & 1) == 0) {
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
              iVar13 = (DAT_0270253c - DAT_02702530) * 8;
              iVar27 = DAT_027033dc - DAT_027033c0;
              if (iVar27 != iVar13 &&
                  iVar27 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar27,iVar13)) {
                DAT_027033dc = DAT_027033c0 + iVar13;
              }
            }
          }
          goto LAB_004f6ab4;
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
              iVar13 = (DAT_0270253c - DAT_02702530) * 8;
              iVar27 = DAT_027033dc - DAT_027033c0;
              if (iVar27 != iVar13 &&
                  iVar27 + (DAT_0270253c - DAT_02702530) * -8 < 0 == SBORROW4(iVar27,iVar13)) {
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
        DAT_02702534 = uVar23;
        DAT_02b6bc1d = 0;
LAB_004f6ab4:
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
joined_r0x004f6c84:
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
    if (DAT_02702308 != '\0') goto LAB_004f700c;
  }
  else {
    uVar40 = 0x80000080;
    if ((DAT_027023d8 & 0x400000) != 0) {
      uVar40 = 0xbfc00180;
    }
    DAT_027023d8 = DAT_027023d8 & 0xffffffc0 | (DAT_027023d8 & 0xf) << 2;
    DAT_027023dc = DAT_027023dc & 0xffffff80;
    DAT_027023e0 = DAT_02702528;
    DAT_02702308 = '\x01';
    DAT_02702528 = uVar40;
LAB_004f700c:
    DAT_02702654 = (**(code **)(DAT_02702310 + 0x10))(DAT_02702654);
    DAT_02702308 = '\0';
  }
  iVar13 = (int)DAT_02704e08[1];
  uVar23 = 0x100;
  if (iVar13 == 0) {
    uVar23 = 1;
  }
  if (((iVar13 == 0) || ((DAT_02704e14 >> 3 & 1) == 0)) || ((DAT_02704f20 >> 4 & 1) == 0)) {
    if ((_DAT_02819070 & uVar23) != 0) {
      piVar28 = &DAT_028190d4;
      if (iVar13 != 0) {
        piVar28 = &DAT_028196e4;
      }
      uVar23 = DAT_027033c0 - *piVar28;
      if (0 < (int)uVar23) {
        if (uVar23 < 0x11) {
          uVar23 = 0x10;
        }
        (**(code **)(*DAT_02704e08 + 0x40))(DAT_02704e08,uVar23);
      }
    }
  }
  else {
    FUN_005b1f50(&DAT_01701a00);
  }
  uVar23 = 0x100;
  if ((int)DAT_02704e00[1] == 0) {
    uVar23 = 1;
  }
  else if (((DAT_02704e14 >> 3 & 1) != 0) && ((DAT_02704f20 >> 4 & 1) != 0)) {
    FUN_005b1f50(&DAT_01701a00);
    goto LAB_004f7168;
  }
  if ((_DAT_02819070 & uVar23) != 0) {
    piVar28 = &DAT_028190d4;
    if ((int)DAT_02704e00[1] != 0) {
      piVar28 = &DAT_028196e4;
    }
    uVar23 = DAT_027033c0 - *piVar28;
    if (0 < (int)uVar23) {
      if (uVar23 < 0x11) {
        uVar23 = 0x10;
      }
      (**(code **)(*DAT_02704e00 + 0x40))(DAT_02704e00,uVar23);
    }
  }
LAB_004f7168:
  uVar35 = (ulong)DAT_027033dc;
  iVar13 = DAT_027033dc - DAT_027033c0;
  if ((0xc0 < DAT_02702654) && (0x30 < iVar13)) {
    DAT_027033dc = DAT_027033c0 + 0x30;
    uVar35 = (ulong)DAT_027033dc;
    iVar13 = 0x30;
  }
  puVar33 = &DAT_00ca11d4;
  iVar27 = (DAT_0270253c - DAT_02702530) * 8 - DAT_02702654;
  if (iVar13 <= iVar27) goto LAB_004f7230;
  DAT_027033dc = iVar27 + DAT_027033c0;
  uVar35 = (ulong)DAT_027033dc;
  uVar23 = DAT_00ca11d4;
  uVar25 = DAT_00ca11d8;
  if ((int)DAT_00ca11d8 < (int)(DAT_027033dc - DAT_00ca11d4)) goto LAB_004f7240;
LAB_004f71e4:
  if ((int)((int)uVar35 - DAT_00ca11c8) <= DAT_00ca11cc) goto LAB_004f7260;
  while (DAT_027033dc = DAT_00ca11cc + DAT_00ca11c8, DAT_00ca77c8 == '\x01') {
    while( true ) {
      DAT_027026e8 = 0;
      DAT_00ca77c8 = '\0';
      fastjmp_jmp(&DAT_00ca77d0,1);
      uVar35 = extraout_x8;
      puVar33 = extraout_x14;
LAB_004f7230:
      uVar23 = *puVar33;
      uVar25 = puVar33[1];
      if ((int)((int)uVar35 - uVar23) <= (int)uVar25) goto LAB_004f71e4;
LAB_004f7240:
      DAT_027033dc = uVar25 + uVar23;
      if (DAT_00ca11cc < (int)(DAT_027033dc - DAT_00ca11c8)) break;
LAB_004f7260:
      if (DAT_00ca77c8 != '\x01') goto LAB_004f7278;
    }
  }
LAB_004f7278:
  DAT_027026e8 = 0;
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

