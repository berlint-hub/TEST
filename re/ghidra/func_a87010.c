// vaddr 0xA87010  ghidra 0xB87010  name=FUN_00b87010  size=2316 instr-addr
// duvod: isolated yield x31
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


void FUN_00b87010(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int *param_6,
                 long param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  int *local_80;
  int local_74;
  
  uVar6 = *(uint *)(param_1 + 0x2c);
  if (uVar6 == 0x40) {
    iVar3 = FUN_00b86b20(param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
  }
  uVar11 = 0x40 - (ulong)uVar6;
  if (uVar11 < 2) {
    uVar14 = *(ulong *)(param_1 + 0x1030);
    iVar3 = FUN_00b86b20(param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar7 = 2 - (int)uVar11;
    uVar9 = (ulong)uVar7;
    uVar10 = *(ulong *)(param_1 + 0x1030);
    uVar13 = *(int *)(param_1 + 0x2c) + uVar7;
    *(uint *)(param_1 + 0x2c) = uVar13;
    *(ulong *)(param_1 + 0x1030) = uVar10 << (uVar9 & 0x3f);
    uVar6 = ((int)((uVar14 & (0xffffffffffffffffU >> (uVar11 & 0x3f) ^ 0xffffffffffffffff)) >>
                  ((ulong)uVar6 & 0x3f)) << (ulong)(uVar7 & 0x1f) |
            (uint)((uVar10 & (0xffffffffffffffffU >> (uVar9 & 0x3f) ^ 0xffffffffffffffff)) >>
                  (-uVar9 & 0x3f))) & 0xff;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x1030);
    uVar13 = uVar6 + 2;
    *(uint *)(param_1 + 0x2c) = uVar13;
    *(long *)(param_1 + 0x1030) = lVar5 << 2;
    uVar6 = (uint)((ulong)lVar5 >> 0x3e);
  }
  if (uVar6 < 2) {
    if (uVar13 == 0x40) {
      iVar3 = FUN_00b86b20(param_1);
      if (iVar3 == 0) {
        return;
      }
      uVar13 = *(uint *)(param_1 + 0x2c);
    }
    uVar11 = 0x40 - (ulong)uVar13;
    if (uVar11 < 4) {
      uVar14 = *(ulong *)(param_1 + 0x1030);
      iVar3 = FUN_00b86b20(param_1);
      if (iVar3 == 0) {
        return;
      }
      uVar7 = 4 - (int)uVar11;
      uVar9 = (ulong)uVar7;
      uVar8 = (int)((uVar14 & (0xffffffffffffffffU >> (uVar11 & 0x3f) ^ 0xffffffffffffffff)) >>
                   ((ulong)uVar13 & 0x3f)) << (ulong)(uVar7 & 0x1f) |
              (uint)((*(ulong *)(param_1 + 0x1030) &
                     (0xffffffffffffffffU >> (uVar9 & 0x3f) ^ 0xffffffffffffffff)) >>
                    (-uVar9 & 0x3f));
      *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar7;
      *(ulong *)(param_1 + 0x1030) = *(ulong *)(param_1 + 0x1030) << (uVar9 & 0x3f);
      uVar7 = uVar8 & 0xff;
    }
    else {
      uVar7 = (uint)((ulong)*(long *)(param_1 + 0x1030) >> 0x20);
      uVar8 = uVar7 >> 0x1c;
      *(uint *)(param_1 + 0x2c) = uVar13 + 4;
      *(long *)(param_1 + 0x1030) = *(long *)(param_1 + 0x1030) << 4;
      uVar7 = uVar7 >> 0x1c;
    }
    if (uVar7 < 9) {
      param_3 = param_3 >> (ulong)(uVar8 & 0x1f);
      uVar13 = param_3 - param_4;
      if (param_4 <= param_3) {
        local_80 = (int *)(param_7 + (ulong)param_4 * 4);
        local_74 = 1 << (ulong)(uVar7 & 0x1f);
        if (uVar6 == 1) goto LAB_00b872c8;
LAB_00b8722c:
        if (uVar6 != 0) {
          uVar11 = 0;
          goto LAB_00b873c0;
        }
        uVar8 = *(uint *)(param_1 + 0x2c);
        if (uVar8 == 0x40) {
          iVar3 = FUN_00b86b20(param_1);
          if (iVar3 == 0) {
            return;
          }
          uVar8 = *(uint *)(param_1 + 0x2c);
        }
        uVar11 = 0x40 - (ulong)uVar8;
        if (uVar11 < 4) {
          uVar14 = *(ulong *)(param_1 + 0x1030);
          iVar3 = FUN_00b86b20(param_1);
          if (iVar3 == 0) {
            return;
          }
          uVar2 = 4 - (int)uVar11;
          uVar9 = (ulong)uVar2;
          uVar1 = *(int *)(param_1 + 0x2c) + uVar2;
          uVar8 = (int)((uVar14 & (0xffffffffffffffffU >> (uVar11 & 0x3f) ^ 0xffffffffffffffff)) >>
                       ((ulong)uVar8 & 0x3f)) << (ulong)(uVar2 & 0x1f) |
                  (uint)((*(ulong *)(param_1 + 0x1030) &
                         (0xffffffffffffffffU >> (uVar9 & 0x3f) ^ 0xffffffffffffffff)) >>
                        (-uVar9 & 0x3f));
          uVar11 = (ulong)uVar8;
          *(uint *)(param_1 + 0x2c) = uVar1;
          *(ulong *)(param_1 + 0x1030) = *(ulong *)(param_1 + 0x1030) << (uVar9 & 0x3f);
          uVar8 = uVar8 & 0xff;
        }
        else {
          uVar14 = *(ulong *)(param_1 + 0x1030);
          uVar11 = uVar14 >> 0x3c;
          uVar1 = uVar8 + 4;
          *(uint *)(param_1 + 0x2c) = uVar1;
          *(ulong *)(param_1 + 0x1030) = uVar14 << 4;
          uVar8 = (uint)(uVar14 >> 0x3c);
        }
        uVar14 = (ulong)uVar1;
        if (uVar8 != 0xf) goto LAB_00b873b4;
LAB_00b873e8:
        if ((int)uVar14 == 0x40) {
          iVar3 = FUN_00b86b20(param_1);
          if (iVar3 == 0) {
            return;
          }
          uVar14 = (ulong)*(uint *)(param_1 + 0x2c);
        }
        uVar11 = 0x40 - uVar14;
        if (uVar11 < 5) {
          uVar9 = *(ulong *)(param_1 + 0x1030);
          iVar3 = FUN_00b86b20(param_1);
          if (iVar3 == 0) {
            return;
          }
          uVar1 = 5 - (int)uVar11;
          uVar10 = (ulong)uVar1;
          uVar8 = (int)((uVar9 & (0xffffffffffffffffU >> (uVar11 & 0x3f) ^ 0xffffffffffffffff)) >>
                       (uVar14 & 0x3f)) << (ulong)(uVar1 & 0x1f) |
                  (uint)((*(ulong *)(param_1 + 0x1030) &
                         (0xffffffffffffffffU >> (uVar10 & 0x3f) ^ 0xffffffffffffffff)) >>
                        (-uVar10 & 0x3f));
          *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar1;
          *(ulong *)(param_1 + 0x1030) = *(ulong *)(param_1 + 0x1030) << (uVar10 & 0x3f);
        }
        else {
          uVar8 = (uint)((ulong)*(long *)(param_1 + 0x1030) >> 0x3b);
          *(int *)(param_1 + 0x2c) = (int)uVar14 + 5;
          *(long *)(param_1 + 0x1030) = *(long *)(param_1 + 0x1030) << 5;
        }
        if (uVar13 != 0) {
          uVar11 = (ulong)uVar13;
          piVar12 = local_80;
          do {
            while ((uVar8 & 0xff) == 0) {
              *piVar12 = 0;
              if (0x17 < param_2) goto LAB_00b87650;
LAB_00b878a0:
              iVar3 = 0;
              iVar4 = 0;
              switch(param_4) {
              case 0x20:
                iVar4 = piVar12[-0x20] * param_6[0x1f];
              case 0x1f:
                iVar3 = iVar4 + piVar12[-0x1f] * param_6[0x1e];
              case 0x1e:
                iVar3 = iVar3 + piVar12[-0x1e] * param_6[0x1d];
              case 0x1d:
                iVar3 = iVar3 + piVar12[-0x1d] * param_6[0x1c];
              case 0x1c:
                iVar3 = iVar3 + piVar12[-0x1c] * param_6[0x1b];
              case 0x1b:
                iVar3 = iVar3 + piVar12[-0x1b] * param_6[0x1a];
              case 0x1a:
                iVar3 = iVar3 + piVar12[-0x1a] * param_6[0x19];
              case 0x19:
                iVar3 = iVar3 + piVar12[-0x19] * param_6[0x18];
              case 0x18:
                iVar3 = iVar3 + piVar12[-0x18] * param_6[0x17];
              case 0x17:
                iVar3 = iVar3 + piVar12[-0x17] * param_6[0x16];
              case 0x16:
                iVar3 = iVar3 + piVar12[-0x16] * param_6[0x15];
              case 0x15:
                iVar3 = iVar3 + piVar12[-0x15] * param_6[0x14];
              case 0x14:
                iVar3 = iVar3 + piVar12[-0x14] * param_6[0x13];
              case 0x13:
                iVar3 = iVar3 + piVar12[-0x13] * param_6[0x12];
              case 0x12:
                iVar3 = iVar3 + piVar12[-0x12] * param_6[0x11];
              case 0x11:
                iVar3 = iVar3 + piVar12[-0x11] * param_6[0x10];
              case 0x10:
                iVar3 = iVar3 + piVar12[-0x10] * param_6[0xf];
              case 0xf:
                iVar3 = iVar3 + piVar12[-0xf] * param_6[0xe];
              case 0xe:
                iVar3 = iVar3 + piVar12[-0xe] * param_6[0xd];
              case 0xd:
                iVar3 = iVar3 + piVar12[-0xd] * param_6[0xc];
              case 0xc:
                iVar3 = iVar3 + piVar12[-0xc] * param_6[0xb];
              case 0xb:
                iVar3 = iVar3 + piVar12[-0xb] * param_6[10];
              case 10:
                iVar3 = iVar3 + piVar12[-10] * param_6[9];
              case 9:
                iVar3 = iVar3 + piVar12[-9] * param_6[8];
              case 8:
                iVar3 = iVar3 + piVar12[-8] * param_6[7];
              case 7:
                iVar3 = iVar3 + piVar12[-7] * param_6[6];
              case 6:
                iVar3 = iVar3 + piVar12[-6] * param_6[5];
              case 5:
                iVar3 = iVar3 + piVar12[-5] * param_6[4];
              case 4:
                iVar3 = iVar3 + piVar12[-4] * param_6[3];
              case 3:
                iVar3 = iVar3 + piVar12[-3] * param_6[2];
              case 2:
                iVar3 = iVar3 + piVar12[-2] * param_6[1];
              case 1:
                iVar3 = iVar3 + piVar12[-1] * *param_6;
              }
              *piVar12 = *piVar12 + (iVar3 >> (param_5 & 0x1f));
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 1;
              if (uVar11 == 0) goto LAB_00b878d8;
            }
            iVar3 = FUN_00b86f00(param_1,uVar8 & 0xff,piVar12);
            if (iVar3 == 0) {
              return;
            }
            if (param_2 < 0x18) goto LAB_00b878a0;
LAB_00b87650:
            lVar5 = 0;
            switch(param_4) {
            case 0x20:
              lVar5 = (long)piVar12[-0x20] * (long)param_6[0x1f];
            case 0x1f:
              lVar5 = lVar5 + (long)piVar12[-0x1f] * (long)param_6[0x1e];
            case 0x1e:
              lVar5 = lVar5 + (long)piVar12[-0x1e] * (long)param_6[0x1d];
            case 0x1d:
              lVar5 = lVar5 + (long)piVar12[-0x1d] * (long)param_6[0x1c];
            case 0x1c:
              lVar5 = lVar5 + (long)piVar12[-0x1c] * (long)param_6[0x1b];
            case 0x1b:
              lVar5 = lVar5 + (long)piVar12[-0x1b] * (long)param_6[0x1a];
            case 0x1a:
              lVar5 = lVar5 + (long)piVar12[-0x1a] * (long)param_6[0x19];
            case 0x19:
              lVar5 = lVar5 + (long)piVar12[-0x19] * (long)param_6[0x18];
            case 0x18:
              lVar5 = lVar5 + (long)piVar12[-0x18] * (long)param_6[0x17];
            case 0x17:
              lVar5 = lVar5 + (long)piVar12[-0x17] * (long)param_6[0x16];
            case 0x16:
              lVar5 = lVar5 + (long)piVar12[-0x16] * (long)param_6[0x15];
            case 0x15:
              lVar5 = lVar5 + (long)piVar12[-0x15] * (long)param_6[0x14];
            case 0x14:
              lVar5 = lVar5 + (long)piVar12[-0x14] * (long)param_6[0x13];
            case 0x13:
              lVar5 = lVar5 + (long)piVar12[-0x13] * (long)param_6[0x12];
            case 0x12:
              lVar5 = lVar5 + (long)piVar12[-0x12] * (long)param_6[0x11];
            case 0x11:
              lVar5 = lVar5 + (long)piVar12[-0x11] * (long)param_6[0x10];
            case 0x10:
              lVar5 = lVar5 + (long)piVar12[-0x10] * (long)param_6[0xf];
            case 0xf:
              lVar5 = lVar5 + (long)piVar12[-0xf] * (long)param_6[0xe];
            case 0xe:
              lVar5 = lVar5 + (long)piVar12[-0xe] * (long)param_6[0xd];
            case 0xd:
              lVar5 = lVar5 + (long)piVar12[-0xd] * (long)param_6[0xc];
            case 0xc:
              lVar5 = lVar5 + (long)piVar12[-0xc] * (long)param_6[0xb];
            case 0xb:
              lVar5 = lVar5 + (long)piVar12[-0xb] * (long)param_6[10];
            case 10:
              lVar5 = lVar5 + (long)piVar12[-10] * (long)param_6[9];
            case 9:
              lVar5 = lVar5 + (long)piVar12[-9] * (long)param_6[8];
            case 8:
              lVar5 = lVar5 + (long)piVar12[-8] * (long)param_6[7];
            case 7:
              lVar5 = lVar5 + (long)piVar12[-7] * (long)param_6[6];
            case 6:
              lVar5 = lVar5 + (long)piVar12[-6] * (long)param_6[5];
            case 5:
              lVar5 = lVar5 + (long)piVar12[-5] * (long)param_6[4];
            case 4:
              lVar5 = lVar5 + (long)piVar12[-4] * (long)param_6[3];
            case 3:
              lVar5 = lVar5 + (long)piVar12[-3] * (long)param_6[2];
            case 2:
              lVar5 = lVar5 + (long)piVar12[-2] * (long)param_6[1];
            case 1:
              lVar5 = lVar5 + (long)piVar12[-1] * (long)*param_6;
            }
            *piVar12 = *piVar12 + (int)(lVar5 >> ((ulong)param_5 & 0x3f));
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 1;
          } while (uVar11 != 0);
        }
LAB_00b878d8:
        do {
          if (local_74 == 1) {
            return;
          }
          local_80 = local_80 + uVar13;
          local_74 = local_74 + -1;
          if (uVar7 != 0) {
            uVar13 = param_3;
          }
          if (uVar6 != 1) goto LAB_00b8722c;
LAB_00b872c8:
          uVar8 = *(uint *)(param_1 + 0x2c);
          if (uVar8 == 0x40) {
            iVar3 = FUN_00b86b20(param_1);
            if (iVar3 == 0) {
              return;
            }
            uVar8 = *(uint *)(param_1 + 0x2c);
          }
          uVar11 = 0x40 - (ulong)uVar8;
          if (uVar11 < 5) {
            uVar14 = *(ulong *)(param_1 + 0x1030);
            iVar3 = FUN_00b86b20(param_1);
            if (iVar3 == 0) {
              return;
            }
            uVar2 = 5 - (int)uVar11;
            uVar9 = (ulong)uVar2;
            uVar1 = *(int *)(param_1 + 0x2c) + uVar2;
            uVar8 = (int)((uVar14 & (0xffffffffffffffffU >> (uVar11 & 0x3f) ^ 0xffffffffffffffff))
                         >> ((ulong)uVar8 & 0x3f)) << (ulong)(uVar2 & 0x1f) |
                    (uint)((*(ulong *)(param_1 + 0x1030) &
                           (0xffffffffffffffffU >> (uVar9 & 0x3f) ^ 0xffffffffffffffff)) >>
                          (-uVar9 & 0x3f));
            uVar11 = (ulong)uVar8;
            *(uint *)(param_1 + 0x2c) = uVar1;
            *(ulong *)(param_1 + 0x1030) = *(ulong *)(param_1 + 0x1030) << (uVar9 & 0x3f);
            uVar8 = uVar8 & 0xff;
          }
          else {
            uVar14 = *(ulong *)(param_1 + 0x1030);
            uVar11 = uVar14 >> 0x3b;
            uVar1 = uVar8 + 5;
            *(uint *)(param_1 + 0x2c) = uVar1;
            *(ulong *)(param_1 + 0x1030) = uVar14 << 5;
            uVar8 = (uint)(uVar14 >> 0x3b);
          }
          uVar14 = (ulong)uVar1;
          if (uVar8 == 0x1f) goto LAB_00b873e8;
LAB_00b873b4:
          if ((~(uint)uVar11 & 0xff) == 0) goto LAB_00b873e8;
LAB_00b873c0:
          iVar3 = FUN_00b87920(param_1,param_2,uVar13,uVar11,param_4,(ulong)param_5,param_6,local_80
                              );
          if (iVar3 == 0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

