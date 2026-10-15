// vaddr 0xA87920  ghidra 0xB87920  name=FUN_00b87920  size=19476 instr-addr
// duvod: isolated yield x149
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


undefined8
FUN_00b87920(long param_1,int param_2,uint param_3,ulong param_4,int param_5,uint param_6,
            int *param_7,int *param_8)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  
  uVar11 = (uint)param_4;
  uVar5 = uVar11 & 0xff;
  uVar6 = ~(uint)(-1L << (param_4 & 0x3f));
  if (param_5 == 0) {
    if (param_3 != 0) {
      uVar12 = 0;
      uVar2 = 0x3f - uVar5;
      uVar13 = *(ulong *)(param_1 + 0x1030);
      do {
        iVar15 = *(int *)(param_1 + 0x2c);
        if (uVar13 == 0) {
LAB_00b899d8:
          uVar16 = 0x40 - iVar15;
LAB_00b899f4:
          do {
            uVar19 = *(uint *)(param_1 + 0x28);
            if (uVar19 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar32 = (uint)uVar18;
              uVar13 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar13 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar13 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar13 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar13 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar13 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar13 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar13 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar13 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar13 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar13 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar13 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar13 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar13 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar13 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar13 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar13 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar13 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar13 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar13 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar13 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar13 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar13 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar13 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar13 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar13 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar13 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar13 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar13 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar13 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar13 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar13 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar13 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar13 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar13 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar13 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar13 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar13 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar13 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar13 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar32 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar13 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar32 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar13 >> 0x28 & 0xff ^ (ulong)(uVar32 >> 8 & 0xff)) * 2) ^
                           uVar32 << 8;
                case -3:
                  uVar32 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar13 >> 0x20 & 0xff ^ (ulong)(uVar32 >> 8 & 0xff)) * 2) ^
                           uVar32 << 8;
                case -4:
                  uVar32 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar13 >> 0x18 & 0xff ^ (ulong)(uVar32 >> 8 & 0xff)) * 2) ^
                           uVar32 << 8;
                case -5:
                  uVar32 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar13 >> 0x10 & 0xff ^ (ulong)(uVar32 >> 8 & 0xff)) * 2) ^
                           uVar32 << 8;
                case -6:
                  uVar32 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar13 >> 8 & 0xff ^ (ulong)(uVar32 >> 8 & 0xff)) * 2) ^
                           uVar32 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar13 & 0xff ^ (ulong)(uVar32 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar32 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              iVar15 = 0;
              *(uint *)(param_1 + 0x28) = uVar19 + 1;
              uVar13 = *(ulong *)(param_1 + (ulong)uVar19 * 8 + 0x30);
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar13;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar13 = *(ulong *)(param_1 + 0x1030);
              iVar15 = *(int *)(param_1 + 0x2c);
            }
            if (uVar13 == 0) {
              uVar16 = uVar16 + 0x40;
              goto LAB_00b899f4;
            }
            if (uVar13 >> 0x3c == 0) {
              bVar8 = uVar13 >> 0x20 == 0;
              uVar14 = uVar13 << 0x20;
              if (!bVar8) {
                uVar14 = uVar13;
              }
              uVar32 = (uint)bVar8;
              uVar19 = uVar32 << 5 | 0x10;
              uVar10 = uVar14 << 0x10;
              if (uVar14 >> 0x30 != 0) {
                uVar19 = uVar32 << 5;
                uVar10 = uVar14;
              }
              uVar32 = uVar19 | 8;
              uVar14 = uVar10 << 8;
              if (uVar10 >> 0x38 != 0) {
                uVar32 = uVar19;
                uVar14 = uVar10;
              }
              uVar19 = uVar32 | 4;
              uVar10 = uVar14 << 4;
              if (uVar14 >> 0x3c != 0) {
                uVar19 = uVar32;
                uVar10 = uVar14;
              }
              uVar19 = (*(int *)(&DAT_00295654 + (uVar10 >> 0x3a & 0x3c)) + uVar19) - 1;
              uVar14 = (ulong)uVar19;
              uVar16 = uVar19 + uVar16;
              if (uVar19 < 0x40) break;
              goto LAB_00b899f4;
            }
            uVar19 = *(int *)(&DAT_00295654 + (uVar13 >> 0x3c) * 4) - 1;
            uVar14 = (ulong)uVar19;
            uVar16 = uVar19 + uVar16;
          } while (0x3f < uVar19);
        }
        else {
          if (uVar13 >> 0x3c == 0) {
            bVar8 = uVar13 >> 0x20 == 0;
            uVar14 = uVar13 << 0x20;
            if (!bVar8) {
              uVar14 = uVar13;
            }
            uVar19 = (uint)bVar8;
            uVar16 = uVar19 << 5 | 0x10;
            uVar10 = uVar14 << 0x10;
            if (uVar14 >> 0x30 != 0) {
              uVar16 = uVar19 << 5;
              uVar10 = uVar14;
            }
            uVar19 = uVar16 | 8;
            uVar14 = uVar10 << 8;
            if (uVar10 >> 0x38 != 0) {
              uVar19 = uVar16;
              uVar14 = uVar10;
            }
            uVar16 = uVar19 | 4;
            uVar10 = uVar14 << 4;
            if (uVar14 >> 0x3c != 0) {
              uVar16 = uVar19;
              uVar10 = uVar14;
            }
            iVar17 = *(int *)(&DAT_00295654 + (uVar10 >> 0x3a & 0x3c)) + uVar16;
          }
          else {
            iVar17 = *(int *)(&DAT_00295654 + (uVar13 >> 0x3c) * 4);
          }
          uVar16 = iVar17 - 1;
          if (0x3f < uVar16) goto LAB_00b899d8;
          uVar14 = (ulong)uVar16;
        }
        uVar13 = uVar13 << (uVar14 & 0x3f);
        uVar19 = iVar15 + (int)uVar14;
        uVar32 = (uint)(uVar13 >> ((ulong)uVar2 & 0x3f));
        if (uVar2 < uVar19) {
          uVar19 = uVar19 - uVar2;
          uVar14 = (ulong)uVar19;
          uVar24 = *(uint *)(param_1 + 0x28);
          if (uVar24 < 0x200) {
            uVar18 = *(ushort *)(param_1 + 0x1038);
            uVar20 = (uint)uVar18;
            uVar13 = *(ulong *)(param_1 + 0x1040);
            if (*(int *)(param_1 + 0x1048) == 0) {
              *(ushort *)(param_1 + 0x1038) =
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar13 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar13 >> 8 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar13 >> 0x10 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar13 >> 0x18 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar13 >> 0x20
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar13 >> 0x28 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar13 >> 0x30 & 0xff ^
                                                                            (ulong)(((uint)*(ushort 
                                                  *)(&DAT_00295454 +
                                                    (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar13 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar13 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar13 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar13 >> 0x10 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar13 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar13 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar13 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar13 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar13 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                          0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar13 >> 8 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar13 >> 0x10 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar13 >> 0x18 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar13 >> 0x20 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar13 >> 0x28
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar13 >> 0x30 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar13 >> 0x38 ^
                                                                            (ulong)(uVar18 >> 8)) *
                                                                            2) ^ (uint)uVar18 << 8)
                                                                    >> 8 & 0xff)) * 2) ^
                                                    (uint)*(ushort *)
                                                           (&DAT_00295454 +
                                                           (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) *
                                                           2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar13 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar13 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar13 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                           0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar13 >> 0x18 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar13 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar13 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar13 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar13 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar13 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar13 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar13 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar13 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar13 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) << 8) >> 8 & 0xff)) * 2)
                            << 8) >> 8 & 0xff)) * 2) << 8;
            }
            else {
              switch(-*(int *)(param_1 + 0x1048)) {
              case -1:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 + (uVar13 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2)
                         ^ (uint)uVar18 << 8;
              case -2:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar13 >> 0x28 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -3:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar13 >> 0x20 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -4:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar13 >> 0x18 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -5:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar13 >> 0x10 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -6:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar13 >> 8 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -7:
                uVar18 = *(ushort *)
                          (&DAT_00295454 + (uVar13 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         (ushort)(uVar20 << 8);
              default:
                *(ushort *)(param_1 + 0x1038) = uVar18;
                *(undefined4 *)(param_1 + 0x1048) = 0;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar24 + 1;
            uVar13 = *(ulong *)(param_1 + (ulong)uVar24 * 8 + 0x30);
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
            *(ulong *)(param_1 + 0x1040) = uVar13;
          }
          else {
            uVar9 = FUN_00b86b20(param_1);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            uVar13 = *(ulong *)(param_1 + 0x1030);
            uVar19 = *(int *)(param_1 + 0x2c) + uVar19;
          }
          uVar32 = (uint)(uVar13 >> (-uVar14 & 0x3f)) | uVar32;
          uVar13 = uVar13 << (uVar14 & 0x3f);
        }
        else {
          uVar13 = uVar13 << ((ulong)(uVar5 + 1) & 0x3f);
          uVar19 = uVar19 + uVar5 + 1;
        }
        *(ulong *)(param_1 + 0x1030) = uVar13;
        *(uint *)(param_1 + 0x2c) = uVar19;
        uVar16 = uVar32 & uVar6 | uVar16 << (ulong)(uVar11 & 0x1f);
        param_8[uVar12] = *(uint *)(&DAT_00230f68 + (ulong)(uVar16 & 1) * 4) ^ uVar16 >> 1;
        uVar12 = uVar12 + 1;
        if (uVar12 == param_3) {
          return 1;
        }
      } while( true );
    }
  }
  else {
    uVar16 = param_3 & 0xfffffffc;
    uVar2 = uVar5 + 1;
    uVar12 = (ulong)uVar2;
    piVar1 = param_8 + uVar16;
    uVar5 = 0x3f - uVar5;
    uVar13 = (ulong)uVar5;
    puVar4 = (ulong *)(param_1 + 0x1030);
    puVar3 = (uint *)(param_1 + 0x2c);
    if (param_6 + param_2 < 0x21) {
      if (uVar16 != 0) {
        uVar14 = *puVar4;
        do {
          uVar19 = *puVar3;
          if (uVar14 == 0) {
LAB_00b89efc:
            uVar32 = 0x40 - uVar19;
LAB_00b89f18:
            do {
              uVar24 = *(uint *)(param_1 + 0x28);
              if (uVar24 < 0x200) {
                uVar18 = *(ushort *)(param_1 + 0x1038);
                uVar19 = (uint)uVar18;
                uVar14 = *(ulong *)(param_1 + 0x1040);
                if (*(int *)(param_1 + 0x1048) == 0) {
                  *(ushort *)(param_1 + 0x1038) =
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 8 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x10 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x18 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x10 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x20 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x28 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 >> 8 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 0x10 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x18 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x20 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                               0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x18 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x28 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x30 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) << 8;
                }
                else {
                  switch(-*(int *)(param_1 + 0x1048)) {
                  case -1:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                             (uint)uVar18 << 8;
                  case -2:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -3:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -4:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -5:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -6:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -7:
                    uVar18 = *(ushort *)
                              (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             (ushort)(uVar19 << 8);
                  default:
                    *(ushort *)(param_1 + 0x1038) = uVar18;
                    *(undefined4 *)(param_1 + 0x1048) = 0;
                  }
                }
                uVar19 = 0;
                *(uint *)(param_1 + 0x28) = uVar24 + 1;
                uVar14 = *(ulong *)(param_1 + (ulong)uVar24 * 8 + 0x30);
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
                *(ulong *)(param_1 + 0x1040) = uVar14;
              }
              else {
                uVar9 = FUN_00b86b20(param_1);
                if ((int)uVar9 == 0) {
                  return uVar9;
                }
                uVar14 = *puVar4;
                uVar19 = *puVar3;
              }
              if (uVar14 == 0) {
                uVar32 = uVar32 + 0x40;
                goto LAB_00b89f18;
              }
              if (uVar14 >> 0x3c == 0) {
                bVar8 = uVar14 >> 0x20 == 0;
                uVar10 = uVar14 << 0x20;
                if (!bVar8) {
                  uVar10 = uVar14;
                }
                uVar20 = (uint)bVar8;
                uVar24 = uVar20 << 5 | 0x10;
                uVar25 = uVar10 << 0x10;
                if (uVar10 >> 0x30 != 0) {
                  uVar24 = uVar20 << 5;
                  uVar25 = uVar10;
                }
                uVar20 = uVar24 | 8;
                uVar10 = uVar25 << 8;
                if (uVar25 >> 0x38 != 0) {
                  uVar20 = uVar24;
                  uVar10 = uVar25;
                }
                uVar24 = uVar20 | 4;
                uVar25 = uVar10 << 4;
                if (uVar10 >> 0x3c != 0) {
                  uVar24 = uVar20;
                  uVar25 = uVar10;
                }
                uVar24 = (*(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar24) - 1;
                uVar10 = (ulong)uVar24;
                uVar32 = uVar24 + uVar32;
                if (uVar24 < 0x40) break;
                goto LAB_00b89f18;
              }
              uVar24 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
              uVar10 = (ulong)uVar24;
              uVar32 = uVar24 + uVar32;
            } while (0x3f < uVar24);
          }
          else {
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar10 = uVar14 << 0x20;
              if (!bVar8) {
                uVar10 = uVar14;
              }
              uVar24 = (uint)bVar8;
              uVar32 = uVar24 << 5 | 0x10;
              uVar25 = uVar10 << 0x10;
              if (uVar10 >> 0x30 != 0) {
                uVar32 = uVar24 << 5;
                uVar25 = uVar10;
              }
              uVar24 = uVar32 | 8;
              uVar10 = uVar25 << 8;
              if (uVar25 >> 0x38 != 0) {
                uVar24 = uVar32;
                uVar10 = uVar25;
              }
              uVar32 = uVar24 | 4;
              uVar25 = uVar10 << 4;
              if (uVar10 >> 0x3c != 0) {
                uVar32 = uVar24;
                uVar25 = uVar10;
              }
              iVar15 = *(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar32;
            }
            else {
              iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
            }
            uVar32 = iVar15 - 1;
            if (0x3f < uVar32) goto LAB_00b89efc;
            uVar10 = (ulong)uVar32;
          }
          uVar14 = uVar14 << (uVar10 & 0x3f);
          uVar19 = uVar19 + (int)uVar10;
          local_b8 = (uint)(uVar14 >> (uVar13 & 0x3f));
          if (uVar5 < uVar19) {
            uVar19 = uVar19 - uVar5;
            uVar10 = (ulong)uVar19;
            uVar24 = *(uint *)(param_1 + 0x28);
            if (uVar24 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar20 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar20 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar20 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                           uVar20 << 8;
                case -3:
                  uVar20 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                           uVar20 << 8;
                case -4:
                  uVar20 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                           uVar20 << 8;
                case -5:
                  uVar20 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                           uVar20 << 8;
                case -6:
                  uVar20 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                           uVar20 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar20 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              *(uint *)(param_1 + 0x28) = uVar24 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar24 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3 + uVar19;
            }
            local_b8 = (uint)(uVar14 >> (-uVar10 & 0x3f)) | local_b8;
            uVar14 = uVar14 << (uVar10 & 0x3f);
          }
          else {
            uVar14 = uVar14 << (uVar12 & 0x3f);
            uVar19 = uVar19 + uVar2;
          }
          *puVar4 = uVar14;
          *puVar3 = uVar19;
          if (uVar14 == 0) {
LAB_00b8a450:
            uVar24 = 0x40 - uVar19;
LAB_00b8a46c:
            do {
              uVar20 = *(uint *)(param_1 + 0x28);
              if (uVar20 < 0x200) {
                uVar18 = *(ushort *)(param_1 + 0x1038);
                uVar19 = (uint)uVar18;
                uVar14 = *(ulong *)(param_1 + 0x1040);
                if (*(int *)(param_1 + 0x1048) == 0) {
                  *(ushort *)(param_1 + 0x1038) =
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 8 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x10 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x18 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x10 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x20 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x28 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 >> 8 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 0x10 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x18 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x20 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                               0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x18 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x28 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x30 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) << 8;
                }
                else {
                  switch(-*(int *)(param_1 + 0x1048)) {
                  case -1:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                             (uint)uVar18 << 8;
                  case -2:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -3:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -4:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -5:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -6:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -7:
                    uVar18 = *(ushort *)
                              (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             (ushort)(uVar19 << 8);
                  default:
                    *(ushort *)(param_1 + 0x1038) = uVar18;
                    *(undefined4 *)(param_1 + 0x1048) = 0;
                  }
                }
                uVar19 = 0;
                *(uint *)(param_1 + 0x28) = uVar20 + 1;
                uVar14 = *(ulong *)(param_1 + (ulong)uVar20 * 8 + 0x30);
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
                *(ulong *)(param_1 + 0x1040) = uVar14;
              }
              else {
                uVar9 = FUN_00b86b20(param_1);
                if ((int)uVar9 == 0) {
                  return uVar9;
                }
                uVar14 = *puVar4;
                uVar19 = *puVar3;
              }
              if (uVar14 == 0) {
                uVar24 = uVar24 + 0x40;
                goto LAB_00b8a46c;
              }
              if (uVar14 >> 0x3c == 0) {
                bVar8 = uVar14 >> 0x20 == 0;
                uVar10 = uVar14 << 0x20;
                if (!bVar8) {
                  uVar10 = uVar14;
                }
                uVar21 = (uint)bVar8;
                uVar20 = uVar21 << 5 | 0x10;
                uVar25 = uVar10 << 0x10;
                if (uVar10 >> 0x30 != 0) {
                  uVar20 = uVar21 << 5;
                  uVar25 = uVar10;
                }
                uVar21 = uVar20 | 8;
                uVar10 = uVar25 << 8;
                if (uVar25 >> 0x38 != 0) {
                  uVar21 = uVar20;
                  uVar10 = uVar25;
                }
                uVar20 = uVar21 | 4;
                uVar25 = uVar10 << 4;
                if (uVar10 >> 0x3c != 0) {
                  uVar20 = uVar21;
                  uVar25 = uVar10;
                }
                uVar20 = (*(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar20) - 1;
                uVar10 = (ulong)uVar20;
                uVar24 = uVar20 + uVar24;
                if (uVar20 < 0x40) break;
                goto LAB_00b8a46c;
              }
              uVar20 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
              uVar10 = (ulong)uVar20;
              uVar24 = uVar20 + uVar24;
            } while (0x3f < uVar20);
          }
          else {
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar10 = uVar14 << 0x20;
              if (!bVar8) {
                uVar10 = uVar14;
              }
              uVar20 = (uint)bVar8;
              uVar24 = uVar20 << 5 | 0x10;
              uVar25 = uVar10 << 0x10;
              if (uVar10 >> 0x30 != 0) {
                uVar24 = uVar20 << 5;
                uVar25 = uVar10;
              }
              uVar20 = uVar24 | 8;
              uVar10 = uVar25 << 8;
              if (uVar25 >> 0x38 != 0) {
                uVar20 = uVar24;
                uVar10 = uVar25;
              }
              uVar24 = uVar20 | 4;
              uVar25 = uVar10 << 4;
              if (uVar10 >> 0x3c != 0) {
                uVar24 = uVar20;
                uVar25 = uVar10;
              }
              iVar15 = *(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar24;
            }
            else {
              iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
            }
            uVar24 = iVar15 - 1;
            if (0x3f < uVar24) goto LAB_00b8a450;
            uVar10 = (ulong)uVar24;
          }
          uVar14 = uVar14 << (uVar10 & 0x3f);
          uVar19 = uVar19 + (int)uVar10;
          local_c0 = (uint)(uVar14 >> (uVar13 & 0x3f));
          if (uVar5 < uVar19) {
            uVar19 = uVar19 - uVar5;
            uVar10 = (ulong)uVar19;
            uVar20 = *(uint *)(param_1 + 0x28);
            if (uVar20 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar21 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                           uVar21 << 8;
                case -3:
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                           uVar21 << 8;
                case -4:
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                           uVar21 << 8;
                case -5:
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                           uVar21 << 8;
                case -6:
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                           uVar21 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar21 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              *(uint *)(param_1 + 0x28) = uVar20 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar20 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3 + uVar19;
            }
            local_c0 = (uint)(uVar14 >> (-uVar10 & 0x3f)) | local_c0;
            uVar14 = uVar14 << (uVar10 & 0x3f);
            *puVar4 = uVar14;
            *puVar3 = uVar19;
            if (uVar14 == 0) goto LAB_00b8a9c8;
LAB_00b8a938:
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar10 = uVar14 << 0x20;
              if (!bVar8) {
                uVar10 = uVar14;
              }
              uVar21 = (uint)bVar8;
              uVar20 = uVar21 << 5 | 0x10;
              uVar25 = uVar10 << 0x10;
              if (uVar10 >> 0x30 != 0) {
                uVar20 = uVar21 << 5;
                uVar25 = uVar10;
              }
              uVar21 = uVar20 | 8;
              uVar10 = uVar25 << 8;
              if (uVar25 >> 0x38 != 0) {
                uVar21 = uVar20;
                uVar10 = uVar25;
              }
              uVar20 = uVar21 | 4;
              uVar25 = uVar10 << 4;
              if (uVar10 >> 0x3c != 0) {
                uVar20 = uVar21;
                uVar25 = uVar10;
              }
              iVar15 = *(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar20;
            }
            else {
              iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
            }
            uVar20 = iVar15 - 1;
            if (0x3f < uVar20) goto LAB_00b8a9c8;
            uVar10 = (ulong)uVar20;
          }
          else {
            uVar14 = uVar14 << (uVar12 & 0x3f);
            uVar19 = uVar19 + uVar2;
            *puVar4 = uVar14;
            *puVar3 = uVar19;
            if (uVar14 != 0) goto LAB_00b8a938;
LAB_00b8a9c8:
            uVar20 = 0x40 - uVar19;
LAB_00b8a9e4:
            do {
              uVar21 = *(uint *)(param_1 + 0x28);
              if (uVar21 < 0x200) {
                uVar18 = *(ushort *)(param_1 + 0x1038);
                uVar19 = (uint)uVar18;
                uVar14 = *(ulong *)(param_1 + 0x1040);
                if (*(int *)(param_1 + 0x1048) == 0) {
                  *(ushort *)(param_1 + 0x1038) =
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 8 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x10 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x18 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x10 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x20 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x28 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 >> 8 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 0x10 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x18 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x20 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                               0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x18 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x28 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x30 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) << 8;
                }
                else {
                  switch(-*(int *)(param_1 + 0x1048)) {
                  case -1:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                             (uint)uVar18 << 8;
                  case -2:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -3:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -4:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -5:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -6:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -7:
                    uVar18 = *(ushort *)
                              (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             (ushort)(uVar19 << 8);
                  default:
                    *(ushort *)(param_1 + 0x1038) = uVar18;
                    *(undefined4 *)(param_1 + 0x1048) = 0;
                  }
                }
                uVar19 = 0;
                *(uint *)(param_1 + 0x28) = uVar21 + 1;
                uVar14 = *(ulong *)(param_1 + (ulong)uVar21 * 8 + 0x30);
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
                *(ulong *)(param_1 + 0x1040) = uVar14;
              }
              else {
                uVar9 = FUN_00b86b20(param_1);
                if ((int)uVar9 == 0) {
                  return uVar9;
                }
                uVar14 = *puVar4;
                uVar19 = *puVar3;
              }
              if (uVar14 == 0) {
                uVar20 = uVar20 + 0x40;
                goto LAB_00b8a9e4;
              }
              if (uVar14 >> 0x3c == 0) {
                bVar8 = uVar14 >> 0x20 == 0;
                uVar10 = uVar14 << 0x20;
                if (!bVar8) {
                  uVar10 = uVar14;
                }
                uVar22 = (uint)bVar8;
                uVar21 = uVar22 << 5 | 0x10;
                uVar25 = uVar10 << 0x10;
                if (uVar10 >> 0x30 != 0) {
                  uVar21 = uVar22 << 5;
                  uVar25 = uVar10;
                }
                uVar22 = uVar21 | 8;
                uVar10 = uVar25 << 8;
                if (uVar25 >> 0x38 != 0) {
                  uVar22 = uVar21;
                  uVar10 = uVar25;
                }
                uVar21 = uVar22 | 4;
                uVar25 = uVar10 << 4;
                if (uVar10 >> 0x3c != 0) {
                  uVar21 = uVar22;
                  uVar25 = uVar10;
                }
                uVar21 = (*(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar21) - 1;
                uVar10 = (ulong)uVar21;
                uVar20 = uVar21 + uVar20;
                if (uVar21 < 0x40) break;
                goto LAB_00b8a9e4;
              }
              uVar21 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
              uVar10 = (ulong)uVar21;
              uVar20 = uVar21 + uVar20;
            } while (0x3f < uVar21);
          }
          uVar14 = uVar14 << (uVar10 & 0x3f);
          uVar19 = uVar19 + (int)uVar10;
          local_c8 = (uint)(uVar14 >> (uVar13 & 0x3f));
          if (uVar5 < uVar19) {
            uVar19 = uVar19 - uVar5;
            uVar10 = (ulong)uVar19;
            uVar21 = *(uint *)(param_1 + 0x28);
            if (uVar21 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar22 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar22 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar22 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                           uVar22 << 8;
                case -3:
                  uVar22 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                           uVar22 << 8;
                case -4:
                  uVar22 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                           uVar22 << 8;
                case -5:
                  uVar22 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                           uVar22 << 8;
                case -6:
                  uVar22 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                           uVar22 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar22 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              *(uint *)(param_1 + 0x28) = uVar21 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar21 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3 + uVar19;
            }
            local_c8 = (uint)(uVar14 >> (-uVar10 & 0x3f)) | local_c8;
            uVar14 = uVar14 << (uVar10 & 0x3f);
            *puVar4 = uVar14;
            *puVar3 = uVar19;
            if (uVar14 == 0) goto LAB_00b8af24;
LAB_00b8ae94:
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar10 = uVar14 << 0x20;
              if (!bVar8) {
                uVar10 = uVar14;
              }
              uVar22 = (uint)bVar8;
              uVar21 = uVar22 << 5 | 0x10;
              uVar25 = uVar10 << 0x10;
              if (uVar10 >> 0x30 != 0) {
                uVar21 = uVar22 << 5;
                uVar25 = uVar10;
              }
              uVar22 = uVar21 | 8;
              uVar10 = uVar25 << 8;
              if (uVar25 >> 0x38 != 0) {
                uVar22 = uVar21;
                uVar10 = uVar25;
              }
              uVar21 = uVar22 | 4;
              uVar25 = uVar10 << 4;
              if (uVar10 >> 0x3c != 0) {
                uVar21 = uVar22;
                uVar25 = uVar10;
              }
              iVar15 = *(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar21;
            }
            else {
              iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
            }
            uVar21 = iVar15 - 1;
            if (0x3f < uVar21) goto LAB_00b8af24;
            uVar10 = (ulong)uVar21;
          }
          else {
            uVar14 = uVar14 << (uVar12 & 0x3f);
            uVar19 = uVar19 + uVar2;
            *puVar4 = uVar14;
            *puVar3 = uVar19;
            if (uVar14 != 0) goto LAB_00b8ae94;
LAB_00b8af24:
            uVar21 = 0x40 - uVar19;
LAB_00b8af40:
            do {
              uVar22 = *(uint *)(param_1 + 0x28);
              if (uVar22 < 0x200) {
                uVar18 = *(ushort *)(param_1 + 0x1038);
                uVar19 = (uint)uVar18;
                uVar14 = *(ulong *)(param_1 + 0x1040);
                if (*(int *)(param_1 + 0x1048) == 0) {
                  *(ushort *)(param_1 + 0x1038) =
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 8 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x10 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x18 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x10 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x18 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x20 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x20 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x28 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                       *(ushort *)
                        (&DAT_00295454 +
                        (uVar14 >> 8 & 0xff ^
                        (ulong)(((uint)*(ushort *)
                                        (&DAT_00295454 +
                                        (uVar14 >> 0x10 & 0xff ^
                                        (ulong)(((uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x18 & 0xff ^
                                                        (ulong)(((uint)*(ushort *)
                                                                        (&DAT_00295454 +
                                                                        (uVar14 >> 0x20 & 0xff ^
                                                                        (ulong)(((uint)*(ushort *)
                                                                                        (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                (uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                               0xff)) * 2) ^
                                (uint)*(ushort *)
                                       (&DAT_00295454 +
                                       (uVar14 >> 0x18 & 0xff ^
                                       (ulong)(((uint)*(ushort *)
                                                       (&DAT_00295454 +
                                                       (uVar14 >> 0x20 & 0xff ^
                                                       (ulong)(((uint)*(ushort *)
                                                                       (&DAT_00295454 +
                                                                       (uVar14 >> 0x28 & 0xff ^
                                                                       (ulong)(((uint)*(ushort *)
                                                                                       (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                               (uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x28 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x30 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                              0xff)) * 2) << 8) >> 8 & 0xff)) * 2) << 8;
                }
                else {
                  switch(-*(int *)(param_1 + 0x1048)) {
                  case -1:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                             (uint)uVar18 << 8;
                  case -2:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -3:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -4:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -5:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -6:
                    uVar19 = (uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             uVar19 << 8;
                  case -7:
                    uVar18 = *(ushort *)
                              (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                             (ushort)(uVar19 << 8);
                  default:
                    *(ushort *)(param_1 + 0x1038) = uVar18;
                    *(undefined4 *)(param_1 + 0x1048) = 0;
                  }
                }
                uVar19 = 0;
                *(uint *)(param_1 + 0x28) = uVar22 + 1;
                uVar14 = *(ulong *)(param_1 + (ulong)uVar22 * 8 + 0x30);
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
                *(ulong *)(param_1 + 0x1040) = uVar14;
              }
              else {
                uVar9 = FUN_00b86b20(param_1);
                if ((int)uVar9 == 0) {
                  return uVar9;
                }
                uVar14 = *puVar4;
                uVar19 = *puVar3;
              }
              if (uVar14 == 0) {
                uVar21 = uVar21 + 0x40;
                goto LAB_00b8af40;
              }
              if (uVar14 >> 0x3c == 0) {
                bVar8 = uVar14 >> 0x20 == 0;
                uVar10 = uVar14 << 0x20;
                if (!bVar8) {
                  uVar10 = uVar14;
                }
                uVar27 = (uint)bVar8;
                uVar22 = uVar27 << 5 | 0x10;
                uVar25 = uVar10 << 0x10;
                if (uVar10 >> 0x30 != 0) {
                  uVar22 = uVar27 << 5;
                  uVar25 = uVar10;
                }
                uVar27 = uVar22 | 8;
                uVar10 = uVar25 << 8;
                if (uVar25 >> 0x38 != 0) {
                  uVar27 = uVar22;
                  uVar10 = uVar25;
                }
                uVar22 = uVar27 | 4;
                uVar25 = uVar10 << 4;
                if (uVar10 >> 0x3c != 0) {
                  uVar22 = uVar27;
                  uVar25 = uVar10;
                }
                uVar22 = (*(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar22) - 1;
                uVar10 = (ulong)uVar22;
                uVar21 = uVar22 + uVar21;
                if (uVar22 < 0x40) break;
                goto LAB_00b8af40;
              }
              uVar22 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
              uVar10 = (ulong)uVar22;
              uVar21 = uVar22 + uVar21;
            } while (0x3f < uVar22);
          }
          uVar14 = uVar14 << (uVar10 & 0x3f);
          uVar19 = uVar19 + (int)uVar10;
          uVar22 = (uint)(uVar14 >> (uVar13 & 0x3f));
          if (uVar5 < uVar19) {
            uVar19 = uVar19 - uVar5;
            uVar10 = (ulong)uVar19;
            uVar27 = *(uint *)(param_1 + 0x28);
            if (uVar27 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar23 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar23 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar23 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                           uVar23 << 8;
                case -3:
                  uVar23 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                           uVar23 << 8;
                case -4:
                  uVar23 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                           uVar23 << 8;
                case -5:
                  uVar23 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                           uVar23 << 8;
                case -6:
                  uVar23 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                           uVar23 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar23 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              *(uint *)(param_1 + 0x28) = uVar27 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar27 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3 + uVar19;
            }
            uVar22 = (uint)(uVar14 >> (-uVar10 & 0x3f)) | uVar22;
            uVar14 = uVar14 << (uVar10 & 0x3f);
          }
          else {
            uVar14 = uVar14 << (uVar12 & 0x3f);
            uVar19 = uVar19 + uVar2;
          }
          iVar15 = 0;
          *puVar4 = uVar14;
          *puVar3 = uVar19;
          iVar17 = param_5 + -1;
          switch(iVar17) {
          case 0x1f:
            iVar15 = param_8[-0x20] * param_7[0x1f];
          case 0x1e:
            iVar15 = iVar15 + param_8[-0x1f] * param_7[0x1e];
          case 0x1d:
            iVar15 = iVar15 + param_8[-0x1e] * param_7[0x1d];
          case 0x1c:
            iVar15 = iVar15 + param_8[-0x1d] * param_7[0x1c];
          case 0x1b:
            iVar15 = iVar15 + param_8[-0x1c] * param_7[0x1b];
          case 0x1a:
            iVar15 = iVar15 + param_8[-0x1b] * param_7[0x1a];
          case 0x19:
            iVar15 = iVar15 + param_8[-0x1a] * param_7[0x19];
          case 0x18:
            iVar15 = iVar15 + param_8[-0x19] * param_7[0x18];
          case 0x17:
            iVar15 = iVar15 + param_8[-0x18] * param_7[0x17];
          case 0x16:
            iVar15 = iVar15 + param_8[-0x17] * param_7[0x16];
          case 0x15:
            iVar15 = iVar15 + param_8[-0x16] * param_7[0x15];
          case 0x14:
            iVar15 = iVar15 + param_8[-0x15] * param_7[0x14];
          case 0x13:
            iVar15 = iVar15 + param_8[-0x14] * param_7[0x13];
          case 0x12:
            iVar15 = iVar15 + param_8[-0x13] * param_7[0x12];
          case 0x11:
            iVar15 = iVar15 + param_8[-0x12] * param_7[0x11];
          case 0x10:
            iVar15 = iVar15 + param_8[-0x11] * param_7[0x10];
          case 0xf:
            iVar15 = iVar15 + param_8[-0x10] * param_7[0xf];
          case 0xe:
            iVar15 = iVar15 + param_8[-0xf] * param_7[0xe];
          case 0xd:
            iVar15 = iVar15 + param_8[-0xe] * param_7[0xd];
          case 0xc:
            iVar15 = iVar15 + param_8[-0xd] * param_7[0xc];
          case 0xb:
            iVar15 = iVar15 + param_8[-0xc] * param_7[0xb];
          case 10:
            iVar15 = iVar15 + param_8[-0xb] * param_7[10];
          case 9:
            iVar15 = iVar15 + param_8[-10] * param_7[9];
          case 8:
            iVar15 = iVar15 + param_8[-9] * param_7[8];
          case 7:
            iVar15 = iVar15 + param_8[-8] * param_7[7];
          case 6:
            iVar15 = iVar15 + param_8[-7] * param_7[6];
          case 5:
            iVar15 = iVar15 + param_8[-6] * param_7[5];
          case 4:
            iVar15 = iVar15 + param_8[-5] * param_7[4];
          case 3:
            iVar15 = iVar15 + param_8[-4] * param_7[3];
          case 2:
            iVar15 = iVar15 + param_8[-3] * param_7[2];
          case 1:
            iVar15 = iVar15 + param_8[-2] * param_7[1];
          case 0:
            iVar15 = iVar15 + param_8[-1] * *param_7;
          }
          iVar28 = 0;
          uVar19 = local_b8 & uVar6 | uVar32 << (ulong)(uVar11 & 0x1f);
          iVar15 = (iVar15 >> (param_6 & 0x1f)) +
                   (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1);
          *param_8 = iVar15;
          switch(iVar17) {
          case 0x1f:
            iVar28 = param_8[-0x1f] * param_7[0x1f];
          case 0x1e:
            iVar28 = iVar28 + param_8[-0x1e] * param_7[0x1e];
          case 0x1d:
            iVar28 = iVar28 + param_8[-0x1d] * param_7[0x1d];
          case 0x1c:
            iVar28 = iVar28 + param_8[-0x1c] * param_7[0x1c];
          case 0x1b:
            iVar28 = iVar28 + param_8[-0x1b] * param_7[0x1b];
          case 0x1a:
            iVar28 = iVar28 + param_8[-0x1a] * param_7[0x1a];
          case 0x19:
            iVar28 = iVar28 + param_8[-0x19] * param_7[0x19];
          case 0x18:
            iVar28 = iVar28 + param_8[-0x18] * param_7[0x18];
          case 0x17:
            iVar28 = iVar28 + param_8[-0x17] * param_7[0x17];
          case 0x16:
            iVar28 = iVar28 + param_8[-0x16] * param_7[0x16];
          case 0x15:
            iVar28 = iVar28 + param_8[-0x15] * param_7[0x15];
          case 0x14:
            iVar28 = iVar28 + param_8[-0x14] * param_7[0x14];
          case 0x13:
            iVar28 = iVar28 + param_8[-0x13] * param_7[0x13];
          case 0x12:
            iVar28 = iVar28 + param_8[-0x12] * param_7[0x12];
          case 0x11:
            iVar28 = iVar28 + param_8[-0x11] * param_7[0x11];
          case 0x10:
            iVar28 = iVar28 + param_8[-0x10] * param_7[0x10];
          case 0xf:
            iVar28 = iVar28 + param_8[-0xf] * param_7[0xf];
          case 0xe:
            iVar28 = iVar28 + param_8[-0xe] * param_7[0xe];
          case 0xd:
            iVar28 = iVar28 + param_8[-0xd] * param_7[0xd];
          case 0xc:
            iVar28 = iVar28 + param_8[-0xc] * param_7[0xc];
          case 0xb:
            iVar28 = iVar28 + param_8[-0xb] * param_7[0xb];
          case 10:
            iVar28 = iVar28 + param_8[-10] * param_7[10];
          case 9:
            iVar28 = iVar28 + param_8[-9] * param_7[9];
          case 8:
            iVar28 = iVar28 + param_8[-8] * param_7[8];
          case 7:
            iVar28 = iVar28 + param_8[-7] * param_7[7];
          case 6:
            iVar28 = iVar28 + param_8[-6] * param_7[6];
          case 5:
            iVar28 = iVar28 + param_8[-5] * param_7[5];
          case 4:
            iVar28 = iVar28 + param_8[-4] * param_7[4];
          case 3:
            iVar28 = iVar28 + param_8[-3] * param_7[3];
          case 2:
            iVar28 = iVar28 + param_8[-2] * param_7[2];
          case 1:
            iVar28 = iVar28 + param_8[-1] * param_7[1];
          case 0:
            iVar28 = iVar28 + *param_7 * iVar15;
          }
          iVar30 = 0;
          uVar19 = local_c0 & uVar6 | uVar24 << (ulong)(uVar11 & 0x1f);
          iVar28 = (iVar28 >> (param_6 & 0x1f)) +
                   (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1);
          param_8[1] = iVar28;
          switch(iVar17) {
          case 0x1f:
            iVar30 = param_8[-0x1e] * param_7[0x1f];
          case 0x1e:
            iVar30 = iVar30 + param_8[-0x1d] * param_7[0x1e];
          case 0x1d:
            iVar30 = iVar30 + param_8[-0x1c] * param_7[0x1d];
          case 0x1c:
            iVar30 = iVar30 + param_8[-0x1b] * param_7[0x1c];
          case 0x1b:
            iVar30 = iVar30 + param_8[-0x1a] * param_7[0x1b];
          case 0x1a:
            iVar30 = iVar30 + param_8[-0x19] * param_7[0x1a];
          case 0x19:
            iVar30 = iVar30 + param_8[-0x18] * param_7[0x19];
          case 0x18:
            iVar30 = iVar30 + param_8[-0x17] * param_7[0x18];
          case 0x17:
            iVar30 = iVar30 + param_8[-0x16] * param_7[0x17];
          case 0x16:
            iVar30 = iVar30 + param_8[-0x15] * param_7[0x16];
          case 0x15:
            iVar30 = iVar30 + param_8[-0x14] * param_7[0x15];
          case 0x14:
            iVar30 = iVar30 + param_8[-0x13] * param_7[0x14];
          case 0x13:
            iVar30 = iVar30 + param_8[-0x12] * param_7[0x13];
          case 0x12:
            iVar30 = iVar30 + param_8[-0x11] * param_7[0x12];
          case 0x11:
            iVar30 = iVar30 + param_8[-0x10] * param_7[0x11];
          case 0x10:
            iVar30 = iVar30 + param_8[-0xf] * param_7[0x10];
          case 0xf:
            iVar30 = iVar30 + param_8[-0xe] * param_7[0xf];
          case 0xe:
            iVar30 = iVar30 + param_8[-0xd] * param_7[0xe];
          case 0xd:
            iVar30 = iVar30 + param_8[-0xc] * param_7[0xd];
          case 0xc:
            iVar30 = iVar30 + param_8[-0xb] * param_7[0xc];
          case 0xb:
            iVar30 = iVar30 + param_8[-10] * param_7[0xb];
          case 10:
            iVar30 = iVar30 + param_8[-9] * param_7[10];
          case 9:
            iVar30 = iVar30 + param_8[-8] * param_7[9];
          case 8:
            iVar30 = iVar30 + param_8[-7] * param_7[8];
          case 7:
            iVar30 = iVar30 + param_8[-6] * param_7[7];
          case 6:
            iVar30 = iVar30 + param_8[-5] * param_7[6];
          case 5:
            iVar30 = iVar30 + param_8[-4] * param_7[5];
          case 4:
            iVar30 = iVar30 + param_8[-3] * param_7[4];
          case 3:
            iVar30 = iVar30 + param_8[-2] * param_7[3];
          case 2:
            iVar30 = iVar30 + param_8[-1] * param_7[2];
          case 1:
            iVar30 = iVar30 + param_7[1] * iVar15;
          case 0:
            iVar30 = iVar30 + *param_7 * iVar28;
          }
          iVar31 = 0;
          uVar19 = local_c8 & uVar6 | uVar20 << (ulong)(uVar11 & 0x1f);
          iVar30 = (iVar30 >> (param_6 & 0x1f)) +
                   (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1);
          param_8[2] = iVar30;
          switch(iVar17) {
          case 0x1f:
            iVar31 = param_8[-0x1d] * param_7[0x1f];
          case 0x1e:
            iVar31 = iVar31 + param_8[-0x1c] * param_7[0x1e];
          case 0x1d:
            iVar31 = iVar31 + param_8[-0x1b] * param_7[0x1d];
          case 0x1c:
            iVar31 = iVar31 + param_8[-0x1a] * param_7[0x1c];
          case 0x1b:
            iVar31 = iVar31 + param_8[-0x19] * param_7[0x1b];
          case 0x1a:
            iVar31 = iVar31 + param_8[-0x18] * param_7[0x1a];
          case 0x19:
            iVar31 = iVar31 + param_8[-0x17] * param_7[0x19];
          case 0x18:
            iVar31 = iVar31 + param_8[-0x16] * param_7[0x18];
          case 0x17:
            iVar31 = iVar31 + param_8[-0x15] * param_7[0x17];
          case 0x16:
            iVar31 = iVar31 + param_8[-0x14] * param_7[0x16];
          case 0x15:
            iVar31 = iVar31 + param_8[-0x13] * param_7[0x15];
          case 0x14:
            iVar31 = iVar31 + param_8[-0x12] * param_7[0x14];
          case 0x13:
            iVar31 = iVar31 + param_8[-0x11] * param_7[0x13];
          case 0x12:
            iVar31 = iVar31 + param_8[-0x10] * param_7[0x12];
          case 0x11:
            iVar31 = iVar31 + param_8[-0xf] * param_7[0x11];
          case 0x10:
            iVar31 = iVar31 + param_8[-0xe] * param_7[0x10];
          case 0xf:
            iVar31 = iVar31 + param_8[-0xd] * param_7[0xf];
          case 0xe:
            iVar31 = iVar31 + param_8[-0xc] * param_7[0xe];
          case 0xd:
            iVar31 = iVar31 + param_8[-0xb] * param_7[0xd];
          case 0xc:
            iVar31 = iVar31 + param_8[-10] * param_7[0xc];
          case 0xb:
            iVar31 = iVar31 + param_8[-9] * param_7[0xb];
          case 10:
            iVar31 = iVar31 + param_8[-8] * param_7[10];
          case 9:
            iVar31 = iVar31 + param_8[-7] * param_7[9];
          case 8:
            iVar31 = iVar31 + param_8[-6] * param_7[8];
          case 7:
            iVar31 = iVar31 + param_8[-5] * param_7[7];
          case 6:
            iVar31 = iVar31 + param_8[-4] * param_7[6];
          case 5:
            iVar31 = iVar31 + param_8[-3] * param_7[5];
          case 4:
            iVar31 = iVar31 + param_8[-2] * param_7[4];
          case 3:
            iVar31 = iVar31 + param_8[-1] * param_7[3];
          case 2:
            iVar31 = iVar31 + param_7[2] * iVar15;
          case 1:
            iVar31 = iVar31 + param_7[1] * iVar28;
          case 0:
            iVar31 = iVar31 + *param_7 * iVar30;
          }
          uVar19 = uVar22 & uVar6 | uVar21 << (ulong)(uVar11 & 0x1f);
          param_8[3] = (iVar31 >> (param_6 & 0x1f)) +
                       (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1);
          param_8 = param_8 + 4;
        } while (param_8 < piVar1);
      }
    }
    else if (uVar16 != 0) {
      uVar10 = (ulong)param_6;
      uVar14 = *puVar4;
      do {
        uVar19 = *puVar3;
        if (uVar14 == 0) {
LAB_00b87a80:
          uVar32 = 0x40 - uVar19;
LAB_00b87a9c:
          do {
            uVar24 = *(uint *)(param_1 + 0x28);
            if (uVar24 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar19 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -3:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -4:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -5:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -6:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar19 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              uVar19 = 0;
              *(uint *)(param_1 + 0x28) = uVar24 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar24 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3;
            }
            if (uVar14 == 0) {
              uVar32 = uVar32 + 0x40;
              goto LAB_00b87a9c;
            }
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar25 = uVar14 << 0x20;
              if (!bVar8) {
                uVar25 = uVar14;
              }
              uVar20 = (uint)bVar8;
              uVar24 = uVar20 << 5 | 0x10;
              uVar7 = uVar25 << 0x10;
              if (uVar25 >> 0x30 != 0) {
                uVar24 = uVar20 << 5;
                uVar7 = uVar25;
              }
              uVar20 = uVar24 | 8;
              uVar25 = uVar7 << 8;
              if (uVar7 >> 0x38 != 0) {
                uVar20 = uVar24;
                uVar25 = uVar7;
              }
              uVar24 = uVar20 | 4;
              uVar7 = uVar25 << 4;
              if (uVar25 >> 0x3c != 0) {
                uVar24 = uVar20;
                uVar7 = uVar25;
              }
              uVar24 = (*(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar24) - 1;
              uVar25 = (ulong)uVar24;
              uVar32 = uVar24 + uVar32;
              if (uVar24 < 0x40) break;
              goto LAB_00b87a9c;
            }
            uVar24 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
            uVar25 = (ulong)uVar24;
            uVar32 = uVar24 + uVar32;
          } while (0x3f < uVar24);
        }
        else {
          if (uVar14 >> 0x3c == 0) {
            bVar8 = uVar14 >> 0x20 == 0;
            uVar25 = uVar14 << 0x20;
            if (!bVar8) {
              uVar25 = uVar14;
            }
            uVar24 = (uint)bVar8;
            uVar32 = uVar24 << 5 | 0x10;
            uVar7 = uVar25 << 0x10;
            if (uVar25 >> 0x30 != 0) {
              uVar32 = uVar24 << 5;
              uVar7 = uVar25;
            }
            uVar24 = uVar32 | 8;
            uVar25 = uVar7 << 8;
            if (uVar7 >> 0x38 != 0) {
              uVar24 = uVar32;
              uVar25 = uVar7;
            }
            uVar32 = uVar24 | 4;
            uVar7 = uVar25 << 4;
            if (uVar25 >> 0x3c != 0) {
              uVar32 = uVar24;
              uVar7 = uVar25;
            }
            iVar15 = *(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar32;
          }
          else {
            iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
          }
          uVar32 = iVar15 - 1;
          if (0x3f < uVar32) goto LAB_00b87a80;
          uVar25 = (ulong)uVar32;
        }
        uVar14 = uVar14 << (uVar25 & 0x3f);
        uVar19 = uVar19 + (int)uVar25;
        local_b8 = (uint)(uVar14 >> (uVar13 & 0x3f));
        if (uVar5 < uVar19) {
          uVar19 = uVar19 - uVar5;
          uVar25 = (ulong)uVar19;
          uVar24 = *(uint *)(param_1 + 0x28);
          if (uVar24 < 0x200) {
            uVar18 = *(ushort *)(param_1 + 0x1038);
            uVar20 = (uint)uVar18;
            uVar14 = *(ulong *)(param_1 + 0x1040);
            if (*(int *)(param_1 + 0x1048) == 0) {
              *(ushort *)(param_1 + 0x1038) =
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x10 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x18 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x20
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x28 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x30 & 0xff ^
                                                                            (ulong)(((uint)*(ushort 
                                                  *)(&DAT_00295454 +
                                                    (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x10 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                          0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 >> 8 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x18 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x20 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x28
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x30 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x38 ^
                                                                            (ulong)(uVar18 >> 8)) *
                                                                            2) ^ (uint)uVar18 << 8)
                                                                    >> 8 & 0xff)) * 2) ^
                                                    (uint)*(ushort *)
                                                           (&DAT_00295454 +
                                                           (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) *
                                                           2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                           0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x18 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) << 8) >> 8 & 0xff)) * 2)
                            << 8) >> 8 & 0xff)) * 2) << 8;
            }
            else {
              switch(-*(int *)(param_1 + 0x1048)) {
              case -1:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 + (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2)
                         ^ (uint)uVar18 << 8;
              case -2:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -3:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -4:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -5:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -6:
                uVar20 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 8 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         uVar20 << 8;
              case -7:
                uVar18 = *(ushort *)
                          (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar20 >> 8 & 0xff)) * 2) ^
                         (ushort)(uVar20 << 8);
              default:
                *(ushort *)(param_1 + 0x1038) = uVar18;
                *(undefined4 *)(param_1 + 0x1048) = 0;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar24 + 1;
            uVar14 = *(ulong *)(param_1 + (ulong)uVar24 * 8 + 0x30);
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            *(ulong *)(param_1 + 0x1040) = uVar14;
          }
          else {
            uVar9 = FUN_00b86b20(param_1);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            uVar14 = *puVar4;
            uVar19 = *puVar3 + uVar19;
          }
          local_b8 = (uint)(uVar14 >> (-uVar25 & 0x3f)) | local_b8;
          uVar14 = uVar14 << (uVar25 & 0x3f);
        }
        else {
          uVar14 = uVar14 << (uVar12 & 0x3f);
          uVar19 = uVar19 + uVar2;
        }
        *puVar4 = uVar14;
        *puVar3 = uVar19;
        if (uVar14 == 0) {
LAB_00b87fcc:
          uVar24 = 0x40 - uVar19;
LAB_00b87fe8:
          do {
            uVar20 = *(uint *)(param_1 + 0x28);
            if (uVar20 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar19 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -3:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -4:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -5:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -6:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar19 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              uVar19 = 0;
              *(uint *)(param_1 + 0x28) = uVar20 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar20 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3;
            }
            if (uVar14 == 0) {
              uVar24 = uVar24 + 0x40;
              goto LAB_00b87fe8;
            }
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar25 = uVar14 << 0x20;
              if (!bVar8) {
                uVar25 = uVar14;
              }
              uVar21 = (uint)bVar8;
              uVar20 = uVar21 << 5 | 0x10;
              uVar7 = uVar25 << 0x10;
              if (uVar25 >> 0x30 != 0) {
                uVar20 = uVar21 << 5;
                uVar7 = uVar25;
              }
              uVar21 = uVar20 | 8;
              uVar25 = uVar7 << 8;
              if (uVar7 >> 0x38 != 0) {
                uVar21 = uVar20;
                uVar25 = uVar7;
              }
              uVar20 = uVar21 | 4;
              uVar7 = uVar25 << 4;
              if (uVar25 >> 0x3c != 0) {
                uVar20 = uVar21;
                uVar7 = uVar25;
              }
              uVar20 = (*(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar20) - 1;
              uVar25 = (ulong)uVar20;
              uVar24 = uVar20 + uVar24;
              if (uVar20 < 0x40) break;
              goto LAB_00b87fe8;
            }
            uVar20 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
            uVar25 = (ulong)uVar20;
            uVar24 = uVar20 + uVar24;
          } while (0x3f < uVar20);
        }
        else {
          if (uVar14 >> 0x3c == 0) {
            bVar8 = uVar14 >> 0x20 == 0;
            uVar25 = uVar14 << 0x20;
            if (!bVar8) {
              uVar25 = uVar14;
            }
            uVar20 = (uint)bVar8;
            uVar24 = uVar20 << 5 | 0x10;
            uVar7 = uVar25 << 0x10;
            if (uVar25 >> 0x30 != 0) {
              uVar24 = uVar20 << 5;
              uVar7 = uVar25;
            }
            uVar20 = uVar24 | 8;
            uVar25 = uVar7 << 8;
            if (uVar7 >> 0x38 != 0) {
              uVar20 = uVar24;
              uVar25 = uVar7;
            }
            uVar24 = uVar20 | 4;
            uVar7 = uVar25 << 4;
            if (uVar25 >> 0x3c != 0) {
              uVar24 = uVar20;
              uVar7 = uVar25;
            }
            iVar15 = *(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar24;
          }
          else {
            iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
          }
          uVar24 = iVar15 - 1;
          if (0x3f < uVar24) goto LAB_00b87fcc;
          uVar25 = (ulong)uVar24;
        }
        uVar14 = uVar14 << (uVar25 & 0x3f);
        uVar19 = uVar19 + (int)uVar25;
        local_c0 = (uint)(uVar14 >> (uVar13 & 0x3f));
        if (uVar5 < uVar19) {
          uVar19 = uVar19 - uVar5;
          uVar25 = (ulong)uVar19;
          uVar20 = *(uint *)(param_1 + 0x28);
          if (uVar20 < 0x200) {
            uVar18 = *(ushort *)(param_1 + 0x1038);
            uVar21 = (uint)uVar18;
            uVar14 = *(ulong *)(param_1 + 0x1040);
            if (*(int *)(param_1 + 0x1048) == 0) {
              *(ushort *)(param_1 + 0x1038) =
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x10 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x18 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x20
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x28 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x30 & 0xff ^
                                                                            (ulong)(((uint)*(ushort 
                                                  *)(&DAT_00295454 +
                                                    (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x10 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                          0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 >> 8 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x18 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x20 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x28
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x30 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x38 ^
                                                                            (ulong)(uVar18 >> 8)) *
                                                                            2) ^ (uint)uVar18 << 8)
                                                                    >> 8 & 0xff)) * 2) ^
                                                    (uint)*(ushort *)
                                                           (&DAT_00295454 +
                                                           (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) *
                                                           2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                           0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x18 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) << 8) >> 8 & 0xff)) * 2)
                            << 8) >> 8 & 0xff)) * 2) << 8;
            }
            else {
              switch(-*(int *)(param_1 + 0x1048)) {
              case -1:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 + (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2)
                         ^ (uint)uVar18 << 8;
              case -2:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -3:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -4:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -5:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -6:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 8 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -7:
                uVar18 = *(ushort *)
                          (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         (ushort)(uVar21 << 8);
              default:
                *(ushort *)(param_1 + 0x1038) = uVar18;
                *(undefined4 *)(param_1 + 0x1048) = 0;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar20 + 1;
            uVar14 = *(ulong *)(param_1 + (ulong)uVar20 * 8 + 0x30);
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            *(ulong *)(param_1 + 0x1040) = uVar14;
          }
          else {
            uVar9 = FUN_00b86b20(param_1);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            uVar14 = *puVar4;
            uVar19 = *puVar3 + uVar19;
          }
          local_c0 = (uint)(uVar14 >> (-uVar25 & 0x3f)) | local_c0;
          uVar14 = uVar14 << (uVar25 & 0x3f);
        }
        else {
          uVar14 = uVar14 << (uVar12 & 0x3f);
          uVar19 = uVar19 + uVar2;
        }
        *puVar4 = uVar14;
        *puVar3 = uVar19;
        if (uVar14 == 0) {
LAB_00b88520:
          uVar20 = 0x40 - uVar19;
LAB_00b8853c:
          do {
            uVar21 = *(uint *)(param_1 + 0x28);
            if (uVar21 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar19 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -3:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -4:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -5:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -6:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar19 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              uVar19 = 0;
              *(uint *)(param_1 + 0x28) = uVar21 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar21 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3;
            }
            if (uVar14 == 0) {
              uVar20 = uVar20 + 0x40;
              goto LAB_00b8853c;
            }
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar25 = uVar14 << 0x20;
              if (!bVar8) {
                uVar25 = uVar14;
              }
              uVar22 = (uint)bVar8;
              uVar21 = uVar22 << 5 | 0x10;
              uVar7 = uVar25 << 0x10;
              if (uVar25 >> 0x30 != 0) {
                uVar21 = uVar22 << 5;
                uVar7 = uVar25;
              }
              uVar22 = uVar21 | 8;
              uVar25 = uVar7 << 8;
              if (uVar7 >> 0x38 != 0) {
                uVar22 = uVar21;
                uVar25 = uVar7;
              }
              uVar21 = uVar22 | 4;
              uVar7 = uVar25 << 4;
              if (uVar25 >> 0x3c != 0) {
                uVar21 = uVar22;
                uVar7 = uVar25;
              }
              uVar21 = (*(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar21) - 1;
              uVar25 = (ulong)uVar21;
              uVar20 = uVar21 + uVar20;
              if (uVar21 < 0x40) break;
              goto LAB_00b8853c;
            }
            uVar21 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
            uVar25 = (ulong)uVar21;
            uVar20 = uVar21 + uVar20;
          } while (0x3f < uVar21);
        }
        else {
          if (uVar14 >> 0x3c == 0) {
            bVar8 = uVar14 >> 0x20 == 0;
            uVar25 = uVar14 << 0x20;
            if (!bVar8) {
              uVar25 = uVar14;
            }
            uVar21 = (uint)bVar8;
            uVar20 = uVar21 << 5 | 0x10;
            uVar7 = uVar25 << 0x10;
            if (uVar25 >> 0x30 != 0) {
              uVar20 = uVar21 << 5;
              uVar7 = uVar25;
            }
            uVar21 = uVar20 | 8;
            uVar25 = uVar7 << 8;
            if (uVar7 >> 0x38 != 0) {
              uVar21 = uVar20;
              uVar25 = uVar7;
            }
            uVar20 = uVar21 | 4;
            uVar7 = uVar25 << 4;
            if (uVar25 >> 0x3c != 0) {
              uVar20 = uVar21;
              uVar7 = uVar25;
            }
            iVar15 = *(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar20;
          }
          else {
            iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
          }
          uVar20 = iVar15 - 1;
          if (0x3f < uVar20) goto LAB_00b88520;
          uVar25 = (ulong)uVar20;
        }
        uVar14 = uVar14 << (uVar25 & 0x3f);
        uVar19 = uVar19 + (int)uVar25;
        local_c8 = (uint)(uVar14 >> (uVar13 & 0x3f));
        if (uVar5 < uVar19) {
          uVar19 = uVar19 - uVar5;
          uVar25 = (ulong)uVar19;
          uVar21 = *(uint *)(param_1 + 0x28);
          if (uVar21 < 0x200) {
            uVar18 = *(ushort *)(param_1 + 0x1038);
            uVar22 = (uint)uVar18;
            uVar14 = *(ulong *)(param_1 + 0x1040);
            if (*(int *)(param_1 + 0x1048) == 0) {
              *(ushort *)(param_1 + 0x1038) =
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x10 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x18 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x20
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x28 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x30 & 0xff ^
                                                                            (ulong)(((uint)*(ushort 
                                                  *)(&DAT_00295454 +
                                                    (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x10 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                          0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 >> 8 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x18 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x20 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x28
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x30 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x38 ^
                                                                            (ulong)(uVar18 >> 8)) *
                                                                            2) ^ (uint)uVar18 << 8)
                                                                    >> 8 & 0xff)) * 2) ^
                                                    (uint)*(ushort *)
                                                           (&DAT_00295454 +
                                                           (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) *
                                                           2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                           0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x18 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) << 8) >> 8 & 0xff)) * 2)
                            << 8) >> 8 & 0xff)) * 2) << 8;
            }
            else {
              switch(-*(int *)(param_1 + 0x1048)) {
              case -1:
                uVar22 = (uint)*(ushort *)
                                (&DAT_00295454 + (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2)
                         ^ (uint)uVar18 << 8;
              case -2:
                uVar22 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                         uVar22 << 8;
              case -3:
                uVar22 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                         uVar22 << 8;
              case -4:
                uVar22 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                         uVar22 << 8;
              case -5:
                uVar22 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                         uVar22 << 8;
              case -6:
                uVar22 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 8 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                         uVar22 << 8;
              case -7:
                uVar18 = *(ushort *)
                          (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar22 >> 8 & 0xff)) * 2) ^
                         (ushort)(uVar22 << 8);
              default:
                *(ushort *)(param_1 + 0x1038) = uVar18;
                *(undefined4 *)(param_1 + 0x1048) = 0;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar21 + 1;
            uVar14 = *(ulong *)(param_1 + (ulong)uVar21 * 8 + 0x30);
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            *(ulong *)(param_1 + 0x1040) = uVar14;
          }
          else {
            uVar9 = FUN_00b86b20(param_1);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            uVar14 = *puVar4;
            uVar19 = *puVar3 + uVar19;
          }
          local_c8 = (uint)(uVar14 >> (-uVar25 & 0x3f)) | local_c8;
          uVar14 = uVar14 << (uVar25 & 0x3f);
          *puVar4 = uVar14;
          *puVar3 = uVar19;
          if (uVar14 == 0) goto LAB_00b88a7c;
LAB_00b889ec:
          if (uVar14 >> 0x3c == 0) {
            bVar8 = uVar14 >> 0x20 == 0;
            uVar25 = uVar14 << 0x20;
            if (!bVar8) {
              uVar25 = uVar14;
            }
            uVar22 = (uint)bVar8;
            uVar21 = uVar22 << 5 | 0x10;
            uVar7 = uVar25 << 0x10;
            if (uVar25 >> 0x30 != 0) {
              uVar21 = uVar22 << 5;
              uVar7 = uVar25;
            }
            uVar22 = uVar21 | 8;
            uVar25 = uVar7 << 8;
            if (uVar7 >> 0x38 != 0) {
              uVar22 = uVar21;
              uVar25 = uVar7;
            }
            uVar21 = uVar22 | 4;
            uVar7 = uVar25 << 4;
            if (uVar25 >> 0x3c != 0) {
              uVar21 = uVar22;
              uVar7 = uVar25;
            }
            iVar15 = *(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar21;
          }
          else {
            iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
          }
          uVar21 = iVar15 - 1;
          if (0x3f < uVar21) goto LAB_00b88a7c;
          uVar25 = (ulong)uVar21;
        }
        else {
          uVar14 = uVar14 << (uVar12 & 0x3f);
          uVar19 = uVar19 + uVar2;
          *puVar4 = uVar14;
          *puVar3 = uVar19;
          if (uVar14 != 0) goto LAB_00b889ec;
LAB_00b88a7c:
          uVar21 = 0x40 - uVar19;
LAB_00b88a98:
          do {
            uVar22 = *(uint *)(param_1 + 0x28);
            if (uVar22 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar19 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -3:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -4:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -5:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -6:
                  uVar19 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           uVar19 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar19 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar19 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              uVar19 = 0;
              *(uint *)(param_1 + 0x28) = uVar22 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar22 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar19 = *puVar3;
            }
            if (uVar14 == 0) {
              uVar21 = uVar21 + 0x40;
              goto LAB_00b88a98;
            }
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar25 = uVar14 << 0x20;
              if (!bVar8) {
                uVar25 = uVar14;
              }
              uVar27 = (uint)bVar8;
              uVar22 = uVar27 << 5 | 0x10;
              uVar7 = uVar25 << 0x10;
              if (uVar25 >> 0x30 != 0) {
                uVar22 = uVar27 << 5;
                uVar7 = uVar25;
              }
              uVar27 = uVar22 | 8;
              uVar25 = uVar7 << 8;
              if (uVar7 >> 0x38 != 0) {
                uVar27 = uVar22;
                uVar25 = uVar7;
              }
              uVar22 = uVar27 | 4;
              uVar7 = uVar25 << 4;
              if (uVar25 >> 0x3c != 0) {
                uVar22 = uVar27;
                uVar7 = uVar25;
              }
              uVar22 = (*(int *)(&DAT_00295654 + (uVar7 >> 0x3a & 0x3c)) + uVar22) - 1;
              uVar25 = (ulong)uVar22;
              uVar21 = uVar22 + uVar21;
              if (uVar22 < 0x40) break;
              goto LAB_00b88a98;
            }
            uVar22 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
            uVar25 = (ulong)uVar22;
            uVar21 = uVar22 + uVar21;
          } while (0x3f < uVar22);
        }
        uVar14 = uVar14 << (uVar25 & 0x3f);
        uVar19 = uVar19 + (int)uVar25;
        uVar22 = (uint)(uVar14 >> (uVar13 & 0x3f));
        if (uVar5 < uVar19) {
          uVar19 = uVar19 - uVar5;
          uVar25 = (ulong)uVar19;
          uVar27 = *(uint *)(param_1 + 0x28);
          if (uVar27 < 0x200) {
            uVar18 = *(ushort *)(param_1 + 0x1038);
            uVar23 = (uint)uVar18;
            uVar14 = *(ulong *)(param_1 + 0x1040);
            if (*(int *)(param_1 + 0x1048) == 0) {
              *(ushort *)(param_1 + 0x1038) =
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x10 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x18 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x20
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x28 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x30 & 0xff ^
                                                                            (ulong)(((uint)*(ushort 
                                                  *)(&DAT_00295454 +
                                                    (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x10 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                          0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 >> 8 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x18 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x20 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x28
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x30 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x38 ^
                                                                            (ulong)(uVar18 >> 8)) *
                                                                            2) ^ (uint)uVar18 << 8)
                                                                    >> 8 & 0xff)) * 2) ^
                                                    (uint)*(ushort *)
                                                           (&DAT_00295454 +
                                                           (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) *
                                                           2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                           0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x18 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) << 8) >> 8 & 0xff)) * 2)
                            << 8) >> 8 & 0xff)) * 2) << 8;
            }
            else {
              switch(-*(int *)(param_1 + 0x1048)) {
              case -1:
                uVar23 = (uint)*(ushort *)
                                (&DAT_00295454 + (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2)
                         ^ (uint)uVar18 << 8;
              case -2:
                uVar23 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                         uVar23 << 8;
              case -3:
                uVar23 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                         uVar23 << 8;
              case -4:
                uVar23 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                         uVar23 << 8;
              case -5:
                uVar23 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                         uVar23 << 8;
              case -6:
                uVar23 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 8 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                         uVar23 << 8;
              case -7:
                uVar18 = *(ushort *)
                          (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar23 >> 8 & 0xff)) * 2) ^
                         (ushort)(uVar23 << 8);
              default:
                *(ushort *)(param_1 + 0x1038) = uVar18;
                *(undefined4 *)(param_1 + 0x1048) = 0;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar27 + 1;
            uVar14 = *(ulong *)(param_1 + (ulong)uVar27 * 8 + 0x30);
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            *(ulong *)(param_1 + 0x1040) = uVar14;
          }
          else {
            uVar9 = FUN_00b86b20(param_1);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            uVar14 = *puVar4;
            uVar19 = *puVar3 + uVar19;
          }
          uVar22 = (uint)(uVar14 >> (-uVar25 & 0x3f)) | uVar22;
          uVar14 = uVar14 << (uVar25 & 0x3f);
        }
        else {
          uVar14 = uVar14 << (uVar12 & 0x3f);
          uVar19 = uVar19 + uVar2;
        }
        lVar26 = 0;
        *puVar4 = uVar14;
        *puVar3 = uVar19;
        iVar15 = param_5 + -1;
        switch(iVar15) {
        case 0x1f:
          lVar26 = (long)param_8[-0x20] * (long)param_7[0x1f];
        case 0x1e:
          lVar26 = lVar26 + (long)param_8[-0x1f] * (long)param_7[0x1e];
        case 0x1d:
          lVar26 = lVar26 + (long)param_8[-0x1e] * (long)param_7[0x1d];
        case 0x1c:
          lVar26 = lVar26 + (long)param_8[-0x1d] * (long)param_7[0x1c];
        case 0x1b:
          lVar26 = lVar26 + (long)param_8[-0x1c] * (long)param_7[0x1b];
        case 0x1a:
          lVar26 = lVar26 + (long)param_8[-0x1b] * (long)param_7[0x1a];
        case 0x19:
          lVar26 = lVar26 + (long)param_8[-0x1a] * (long)param_7[0x19];
        case 0x18:
          lVar26 = lVar26 + (long)param_8[-0x19] * (long)param_7[0x18];
        case 0x17:
          lVar26 = lVar26 + (long)param_8[-0x18] * (long)param_7[0x17];
        case 0x16:
          lVar26 = lVar26 + (long)param_8[-0x17] * (long)param_7[0x16];
        case 0x15:
          lVar26 = lVar26 + (long)param_8[-0x16] * (long)param_7[0x15];
        case 0x14:
          lVar26 = lVar26 + (long)param_8[-0x15] * (long)param_7[0x14];
        case 0x13:
          lVar26 = lVar26 + (long)param_8[-0x14] * (long)param_7[0x13];
        case 0x12:
          lVar26 = lVar26 + (long)param_8[-0x13] * (long)param_7[0x12];
        case 0x11:
          lVar26 = lVar26 + (long)param_8[-0x12] * (long)param_7[0x11];
        case 0x10:
          lVar26 = lVar26 + (long)param_8[-0x11] * (long)param_7[0x10];
        case 0xf:
          lVar26 = lVar26 + (long)param_8[-0x10] * (long)param_7[0xf];
        case 0xe:
          lVar26 = lVar26 + (long)param_8[-0xf] * (long)param_7[0xe];
        case 0xd:
          lVar26 = lVar26 + (long)param_8[-0xe] * (long)param_7[0xd];
        case 0xc:
          lVar26 = lVar26 + (long)param_8[-0xd] * (long)param_7[0xc];
        case 0xb:
          lVar26 = lVar26 + (long)param_8[-0xc] * (long)param_7[0xb];
        case 10:
          lVar26 = lVar26 + (long)param_8[-0xb] * (long)param_7[10];
        case 9:
          lVar26 = lVar26 + (long)param_8[-10] * (long)param_7[9];
        case 8:
          lVar26 = lVar26 + (long)param_8[-9] * (long)param_7[8];
        case 7:
          lVar26 = lVar26 + (long)param_8[-8] * (long)param_7[7];
        case 6:
          lVar26 = lVar26 + (long)param_8[-7] * (long)param_7[6];
        case 5:
          lVar26 = lVar26 + (long)param_8[-6] * (long)param_7[5];
        case 4:
          lVar26 = lVar26 + (long)param_8[-5] * (long)param_7[4];
        case 3:
          lVar26 = lVar26 + (long)param_8[-4] * (long)param_7[3];
        case 2:
          lVar26 = lVar26 + (long)param_8[-3] * (long)param_7[2];
        case 1:
          lVar26 = lVar26 + (long)param_8[-2] * (long)param_7[1];
        case 0:
          lVar26 = lVar26 + (long)param_8[-1] * (long)*param_7;
        }
        lVar29 = 0;
        uVar19 = local_b8 & uVar6 | uVar32 << (ulong)(uVar11 & 0x1f);
        iVar17 = (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1) +
                 (int)(lVar26 >> (uVar10 & 0x3f));
        *param_8 = iVar17;
        switch(iVar15) {
        case 0x1f:
          lVar29 = (long)param_8[-0x1f] * (long)param_7[0x1f];
        case 0x1e:
          lVar29 = lVar29 + (long)param_8[-0x1e] * (long)param_7[0x1e];
        case 0x1d:
          lVar29 = lVar29 + (long)param_8[-0x1d] * (long)param_7[0x1d];
        case 0x1c:
          lVar29 = lVar29 + (long)param_8[-0x1c] * (long)param_7[0x1c];
        case 0x1b:
          lVar29 = lVar29 + (long)param_8[-0x1b] * (long)param_7[0x1b];
        case 0x1a:
          lVar29 = lVar29 + (long)param_8[-0x1a] * (long)param_7[0x1a];
        case 0x19:
          lVar29 = lVar29 + (long)param_8[-0x19] * (long)param_7[0x19];
        case 0x18:
          lVar29 = lVar29 + (long)param_8[-0x18] * (long)param_7[0x18];
        case 0x17:
          lVar29 = lVar29 + (long)param_8[-0x17] * (long)param_7[0x17];
        case 0x16:
          lVar29 = lVar29 + (long)param_8[-0x16] * (long)param_7[0x16];
        case 0x15:
          lVar29 = lVar29 + (long)param_8[-0x15] * (long)param_7[0x15];
        case 0x14:
          lVar29 = lVar29 + (long)param_8[-0x14] * (long)param_7[0x14];
        case 0x13:
          lVar29 = lVar29 + (long)param_8[-0x13] * (long)param_7[0x13];
        case 0x12:
          lVar29 = lVar29 + (long)param_8[-0x12] * (long)param_7[0x12];
        case 0x11:
          lVar29 = lVar29 + (long)param_8[-0x11] * (long)param_7[0x11];
        case 0x10:
          lVar29 = lVar29 + (long)param_8[-0x10] * (long)param_7[0x10];
        case 0xf:
          lVar29 = lVar29 + (long)param_8[-0xf] * (long)param_7[0xf];
        case 0xe:
          lVar29 = lVar29 + (long)param_8[-0xe] * (long)param_7[0xe];
        case 0xd:
          lVar29 = lVar29 + (long)param_8[-0xd] * (long)param_7[0xd];
        case 0xc:
          lVar29 = lVar29 + (long)param_8[-0xc] * (long)param_7[0xc];
        case 0xb:
          lVar29 = lVar29 + (long)param_8[-0xb] * (long)param_7[0xb];
        case 10:
          lVar29 = lVar29 + (long)param_8[-10] * (long)param_7[10];
        case 9:
          lVar29 = lVar29 + (long)param_8[-9] * (long)param_7[9];
        case 8:
          lVar29 = lVar29 + (long)param_8[-8] * (long)param_7[8];
        case 7:
          lVar29 = lVar29 + (long)param_8[-7] * (long)param_7[7];
        case 6:
          lVar29 = lVar29 + (long)param_8[-6] * (long)param_7[6];
        case 5:
          lVar29 = lVar29 + (long)param_8[-5] * (long)param_7[5];
        case 4:
          lVar29 = lVar29 + (long)param_8[-4] * (long)param_7[4];
        case 3:
          lVar29 = lVar29 + (long)param_8[-3] * (long)param_7[3];
        case 2:
          lVar29 = lVar29 + (long)param_8[-2] * (long)param_7[2];
        case 1:
          lVar29 = lVar29 + (long)param_8[-1] * (long)param_7[1];
        case 0:
          lVar29 = lVar29 + (long)*param_7 * (long)iVar17;
        }
        lVar26 = 0;
        uVar19 = local_c0 & uVar6 | uVar24 << (ulong)(uVar11 & 0x1f);
        iVar28 = (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1) +
                 (int)(lVar29 >> (uVar10 & 0x3f));
        param_8[1] = iVar28;
        switch(iVar15) {
        case 0x1f:
          lVar26 = (long)param_8[-0x1e] * (long)param_7[0x1f];
        case 0x1e:
          lVar26 = lVar26 + (long)param_8[-0x1d] * (long)param_7[0x1e];
        case 0x1d:
          lVar26 = lVar26 + (long)param_8[-0x1c] * (long)param_7[0x1d];
        case 0x1c:
          lVar26 = lVar26 + (long)param_8[-0x1b] * (long)param_7[0x1c];
        case 0x1b:
          lVar26 = lVar26 + (long)param_8[-0x1a] * (long)param_7[0x1b];
        case 0x1a:
          lVar26 = lVar26 + (long)param_8[-0x19] * (long)param_7[0x1a];
        case 0x19:
          lVar26 = lVar26 + (long)param_8[-0x18] * (long)param_7[0x19];
        case 0x18:
          lVar26 = lVar26 + (long)param_8[-0x17] * (long)param_7[0x18];
        case 0x17:
          lVar26 = lVar26 + (long)param_8[-0x16] * (long)param_7[0x17];
        case 0x16:
          lVar26 = lVar26 + (long)param_8[-0x15] * (long)param_7[0x16];
        case 0x15:
          lVar26 = lVar26 + (long)param_8[-0x14] * (long)param_7[0x15];
        case 0x14:
          lVar26 = lVar26 + (long)param_8[-0x13] * (long)param_7[0x14];
        case 0x13:
          lVar26 = lVar26 + (long)param_8[-0x12] * (long)param_7[0x13];
        case 0x12:
          lVar26 = lVar26 + (long)param_8[-0x11] * (long)param_7[0x12];
        case 0x11:
          lVar26 = lVar26 + (long)param_8[-0x10] * (long)param_7[0x11];
        case 0x10:
          lVar26 = lVar26 + (long)param_8[-0xf] * (long)param_7[0x10];
        case 0xf:
          lVar26 = lVar26 + (long)param_8[-0xe] * (long)param_7[0xf];
        case 0xe:
          lVar26 = lVar26 + (long)param_8[-0xd] * (long)param_7[0xe];
        case 0xd:
          lVar26 = lVar26 + (long)param_8[-0xc] * (long)param_7[0xd];
        case 0xc:
          lVar26 = lVar26 + (long)param_8[-0xb] * (long)param_7[0xc];
        case 0xb:
          lVar26 = lVar26 + (long)param_8[-10] * (long)param_7[0xb];
        case 10:
          lVar26 = lVar26 + (long)param_8[-9] * (long)param_7[10];
        case 9:
          lVar26 = lVar26 + (long)param_8[-8] * (long)param_7[9];
        case 8:
          lVar26 = lVar26 + (long)param_8[-7] * (long)param_7[8];
        case 7:
          lVar26 = lVar26 + (long)param_8[-6] * (long)param_7[7];
        case 6:
          lVar26 = lVar26 + (long)param_8[-5] * (long)param_7[6];
        case 5:
          lVar26 = lVar26 + (long)param_8[-4] * (long)param_7[5];
        case 4:
          lVar26 = lVar26 + (long)param_8[-3] * (long)param_7[4];
        case 3:
          lVar26 = lVar26 + (long)param_8[-2] * (long)param_7[3];
        case 2:
          lVar26 = lVar26 + (long)param_8[-1] * (long)param_7[2];
        case 1:
          lVar26 = lVar26 + (long)param_7[1] * (long)iVar17;
        case 0:
          lVar26 = lVar26 + (long)*param_7 * (long)iVar28;
        }
        lVar29 = 0;
        uVar19 = local_c8 & uVar6 | uVar20 << (ulong)(uVar11 & 0x1f);
        iVar30 = (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1) +
                 (int)(lVar26 >> (uVar10 & 0x3f));
        param_8[2] = iVar30;
        switch(iVar15) {
        case 0x1f:
          lVar29 = (long)param_8[-0x1d] * (long)param_7[0x1f];
        case 0x1e:
          lVar29 = lVar29 + (long)param_8[-0x1c] * (long)param_7[0x1e];
        case 0x1d:
          lVar29 = lVar29 + (long)param_8[-0x1b] * (long)param_7[0x1d];
        case 0x1c:
          lVar29 = lVar29 + (long)param_8[-0x1a] * (long)param_7[0x1c];
        case 0x1b:
          lVar29 = lVar29 + (long)param_8[-0x19] * (long)param_7[0x1b];
        case 0x1a:
          lVar29 = lVar29 + (long)param_8[-0x18] * (long)param_7[0x1a];
        case 0x19:
          lVar29 = lVar29 + (long)param_8[-0x17] * (long)param_7[0x19];
        case 0x18:
          lVar29 = lVar29 + (long)param_8[-0x16] * (long)param_7[0x18];
        case 0x17:
          lVar29 = lVar29 + (long)param_8[-0x15] * (long)param_7[0x17];
        case 0x16:
          lVar29 = lVar29 + (long)param_8[-0x14] * (long)param_7[0x16];
        case 0x15:
          lVar29 = lVar29 + (long)param_8[-0x13] * (long)param_7[0x15];
        case 0x14:
          lVar29 = lVar29 + (long)param_8[-0x12] * (long)param_7[0x14];
        case 0x13:
          lVar29 = lVar29 + (long)param_8[-0x11] * (long)param_7[0x13];
        case 0x12:
          lVar29 = lVar29 + (long)param_8[-0x10] * (long)param_7[0x12];
        case 0x11:
          lVar29 = lVar29 + (long)param_8[-0xf] * (long)param_7[0x11];
        case 0x10:
          lVar29 = lVar29 + (long)param_8[-0xe] * (long)param_7[0x10];
        case 0xf:
          lVar29 = lVar29 + (long)param_8[-0xd] * (long)param_7[0xf];
        case 0xe:
          lVar29 = lVar29 + (long)param_8[-0xc] * (long)param_7[0xe];
        case 0xd:
          lVar29 = lVar29 + (long)param_8[-0xb] * (long)param_7[0xd];
        case 0xc:
          lVar29 = lVar29 + (long)param_8[-10] * (long)param_7[0xc];
        case 0xb:
          lVar29 = lVar29 + (long)param_8[-9] * (long)param_7[0xb];
        case 10:
          lVar29 = lVar29 + (long)param_8[-8] * (long)param_7[10];
        case 9:
          lVar29 = lVar29 + (long)param_8[-7] * (long)param_7[9];
        case 8:
          lVar29 = lVar29 + (long)param_8[-6] * (long)param_7[8];
        case 7:
          lVar29 = lVar29 + (long)param_8[-5] * (long)param_7[7];
        case 6:
          lVar29 = lVar29 + (long)param_8[-4] * (long)param_7[6];
        case 5:
          lVar29 = lVar29 + (long)param_8[-3] * (long)param_7[5];
        case 4:
          lVar29 = lVar29 + (long)param_8[-2] * (long)param_7[4];
        case 3:
          lVar29 = lVar29 + (long)param_8[-1] * (long)param_7[3];
        case 2:
          lVar29 = lVar29 + (long)param_7[2] * (long)iVar17;
        case 1:
          lVar29 = lVar29 + (long)param_7[1] * (long)iVar28;
        case 0:
          lVar29 = lVar29 + (long)*param_7 * (long)iVar30;
        }
        uVar19 = uVar22 & uVar6 | uVar21 << (ulong)(uVar11 & 0x1f);
        param_8[3] = (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1) +
                     (int)(lVar29 >> (uVar10 & 0x3f));
        param_8 = param_8 + 4;
      } while (param_8 < piVar1);
    }
    if (uVar16 < param_3) {
      uVar14 = *puVar4;
      do {
        if (uVar14 == 0) {
LAB_00b8be0c:
          uVar19 = 0x40 - *puVar3;
LAB_00b8be28:
          do {
            uVar32 = *(uint *)(param_1 + 0x28);
            if (uVar32 < 0x200) {
              uVar18 = *(ushort *)(param_1 + 0x1038);
              uVar24 = (uint)uVar18;
              uVar14 = *(ulong *)(param_1 + 0x1040);
              if (*(int *)(param_1 + 0x1048) == 0) {
                *(ushort *)(param_1 + 0x1038) =
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 8 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x10 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x18 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x10 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x18 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x20 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x20 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x28 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x30
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8))
                                                            * 2) ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                  * 2) ^ (uint)*(ushort *)
                                                                (&DAT_00295454 +
                                                                (uVar14 >> 0x38 ^
                                                                (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                  8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                            0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                     *(ushort *)
                      (&DAT_00295454 +
                      (uVar14 >> 8 & 0xff ^
                      (ulong)(((uint)*(ushort *)
                                      (&DAT_00295454 +
                                      (uVar14 >> 0x10 & 0xff ^
                                      (ulong)(((uint)*(ushort *)
                                                      (&DAT_00295454 +
                                                      (uVar14 >> 0x18 & 0xff ^
                                                      (ulong)(((uint)*(ushort *)
                                                                      (&DAT_00295454 +
                                                                      (uVar14 >> 0x20 & 0xff ^
                                                                      (ulong)(((uint)*(ushort *)
                                                                                      (&DAT_00295454
                                                                                      + (uVar14 >> 
                                                  0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                              (uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                             0xff)) * 2) ^
                              (uint)*(ushort *)
                                     (&DAT_00295454 +
                                     (uVar14 >> 0x18 & 0xff ^
                                     (ulong)(((uint)*(ushort *)
                                                     (&DAT_00295454 +
                                                     (uVar14 >> 0x20 & 0xff ^
                                                     (ulong)(((uint)*(ushort *)
                                                                     (&DAT_00295454 +
                                                                     (uVar14 >> 0x28 & 0xff ^
                                                                     (ulong)(((uint)*(ushort *)
                                                                                     (&DAT_00295454
                                                                                     + (uVar14 >> 
                                                  0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                             (uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x28 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x30 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x38
                                                                                    ^ (ulong)(uVar18
                                                                                             >> 8))
                                                                                    * 2) ^
                                                                            (uint)uVar18 << 8) >> 8
                                                                           & 0xff)) * 2) ^
                                                            (uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x38 ^
                                                                   (ulong)(uVar18 >> 8)) * 2) << 8)
                                                            >> 8 & 0xff)) * 2) << 8) >> 8 & 0xff)) *
                                     2) << 8) >> 8 & 0xff)) * 2) << 8;
              }
              else {
                switch(-*(int *)(param_1 + 0x1048)) {
                case -1:
                  uVar24 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2) ^
                           (uint)uVar18 << 8;
                case -2:
                  uVar24 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar24 >> 8 & 0xff)) * 2) ^
                           uVar24 << 8;
                case -3:
                  uVar24 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar24 >> 8 & 0xff)) * 2) ^
                           uVar24 << 8;
                case -4:
                  uVar24 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar24 >> 8 & 0xff)) * 2) ^
                           uVar24 << 8;
                case -5:
                  uVar24 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar24 >> 8 & 0xff)) * 2) ^
                           uVar24 << 8;
                case -6:
                  uVar24 = (uint)*(ushort *)
                                  (&DAT_00295454 +
                                  (uVar14 >> 8 & 0xff ^ (ulong)(uVar24 >> 8 & 0xff)) * 2) ^
                           uVar24 << 8;
                case -7:
                  uVar18 = *(ushort *)
                            (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar24 >> 8 & 0xff)) * 2) ^
                           (ushort)(uVar24 << 8);
                default:
                  *(ushort *)(param_1 + 0x1038) = uVar18;
                  *(undefined4 *)(param_1 + 0x1048) = 0;
                }
              }
              uVar24 = 0;
              *(uint *)(param_1 + 0x28) = uVar32 + 1;
              uVar14 = *(ulong *)(param_1 + (ulong)uVar32 * 8 + 0x30);
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              *(ulong *)(param_1 + 0x1040) = uVar14;
            }
            else {
              uVar9 = FUN_00b86b20(param_1);
              if ((int)uVar9 == 0) {
                return uVar9;
              }
              uVar14 = *puVar4;
              uVar24 = *puVar3;
            }
            if (uVar14 == 0) {
              uVar19 = uVar19 + 0x40;
              goto LAB_00b8be28;
            }
            if (uVar14 >> 0x3c == 0) {
              bVar8 = uVar14 >> 0x20 == 0;
              uVar10 = uVar14 << 0x20;
              if (!bVar8) {
                uVar10 = uVar14;
              }
              uVar20 = (uint)bVar8;
              uVar32 = uVar20 << 5 | 0x10;
              uVar25 = uVar10 << 0x10;
              if (uVar10 >> 0x30 != 0) {
                uVar32 = uVar20 << 5;
                uVar25 = uVar10;
              }
              uVar20 = uVar32 | 8;
              uVar10 = uVar25 << 8;
              if (uVar25 >> 0x38 != 0) {
                uVar20 = uVar32;
                uVar10 = uVar25;
              }
              uVar32 = uVar20 | 4;
              uVar25 = uVar10 << 4;
              if (uVar10 >> 0x3c != 0) {
                uVar32 = uVar20;
                uVar25 = uVar10;
              }
              uVar32 = (*(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar32) - 1;
              uVar19 = uVar32 + uVar19;
              if (uVar32 < 0x40) break;
              goto LAB_00b8be28;
            }
            uVar32 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4) - 1;
            uVar19 = uVar32 + uVar19;
          } while (0x3f < uVar32);
          uVar14 = uVar14 << ((ulong)uVar32 & 0x3f);
          uVar24 = uVar24 + uVar32;
          uVar32 = (uint)(uVar14 >> (uVar13 & 0x3f));
          if (uVar24 <= uVar5) goto LAB_00b8c19c;
LAB_00b8c094:
          uVar24 = uVar24 - uVar5;
          uVar10 = (ulong)uVar24;
          uVar20 = *(uint *)(param_1 + 0x28);
          if (uVar20 < 0x200) {
            uVar18 = *(ushort *)(param_1 + 0x1038);
            uVar21 = (uint)uVar18;
            uVar14 = *(ulong *)(param_1 + 0x1040);
            if (*(int *)(param_1 + 0x1048) == 0) {
              *(ushort *)(param_1 + 0x1038) =
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 8 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x10 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x18 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x20
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x28 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x30 & 0xff ^
                                                                            (ulong)(((uint)*(ushort 
                                                  *)(&DAT_00295454 +
                                                    (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x20 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x28 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x30 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x38 ^
                                                                  (ulong)(uVar18 >> 8)) * 2) ^
                                                          (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x10 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x18 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x20 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x28 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x20 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x28 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x30 &
                                                                                   0xff ^ (ulong)(((
                                                  uint)*(ushort *)
                                                        (&DAT_00295454 +
                                                        (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2)
                                                  ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                          0xff)) * 2) << 8) >> 8 & 0xff)) * 2) ^
                   *(ushort *)
                    (&DAT_00295454 +
                    (uVar14 >> 8 & 0xff ^
                    (ulong)(((uint)*(ushort *)
                                    (&DAT_00295454 +
                                    (uVar14 >> 0x10 & 0xff ^
                                    (ulong)(((uint)*(ushort *)
                                                    (&DAT_00295454 +
                                                    (uVar14 >> 0x18 & 0xff ^
                                                    (ulong)(((uint)*(ushort *)
                                                                    (&DAT_00295454 +
                                                                    (uVar14 >> 0x20 & 0xff ^
                                                                    (ulong)(((uint)*(ushort *)
                                                                                    (&DAT_00295454 +
                                                                                    (uVar14 >> 0x28
                                                                                     & 0xff ^ (ulong
                                                  )(((uint)*(ushort *)
                                                            (&DAT_00295454 +
                                                            (uVar14 >> 0x30 & 0xff ^
                                                            (ulong)(((uint)*(ushort *)
                                                                            (&DAT_00295454 +
                                                                            (uVar14 >> 0x38 ^
                                                                            (ulong)(uVar18 >> 8)) *
                                                                            2) ^ (uint)uVar18 << 8)
                                                                    >> 8 & 0xff)) * 2) ^
                                                    (uint)*(ushort *)
                                                           (&DAT_00295454 +
                                                           (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) *
                                                           2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x28 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x30 & 0xff ^
                                                                         (ulong)(((uint)*(ushort *)
                                                                                         (&
                                                  DAT_00295454 +
                                                  (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2) ^
                                                  (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                                  0xff)) * 2) ^
                                            (uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) << 8) >> 8 &
                                           0xff)) * 2) ^
                            (uint)*(ushort *)
                                   (&DAT_00295454 +
                                   (uVar14 >> 0x18 & 0xff ^
                                   (ulong)(((uint)*(ushort *)
                                                   (&DAT_00295454 +
                                                   (uVar14 >> 0x20 & 0xff ^
                                                   (ulong)(((uint)*(ushort *)
                                                                   (&DAT_00295454 +
                                                                   (uVar14 >> 0x28 & 0xff ^
                                                                   (ulong)(((uint)*(ushort *)
                                                                                   (&DAT_00295454 +
                                                                                   (uVar14 >> 0x30 &
                                                                                    0xff ^ (ulong)((
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) ^ (uint)uVar18 << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x38 ^ (ulong)(uVar18 >> 8)) * 2
                                                         ) << 8) >> 8 & 0xff)) * 2) ^
                                                  (uint)*(ushort *)
                                                         (&DAT_00295454 +
                                                         (uVar14 >> 0x30 & 0xff ^
                                                         (ulong)(((uint)*(ushort *)
                                                                         (&DAT_00295454 +
                                                                         (uVar14 >> 0x38 ^
                                                                         (ulong)(uVar18 >> 8)) * 2)
                                                                 ^ (uint)uVar18 << 8) >> 8 & 0xff))
                                                         * 2) << 8) >> 8 & 0xff)) * 2) ^
                                           (uint)*(ushort *)
                                                  (&DAT_00295454 +
                                                  (uVar14 >> 0x28 & 0xff ^
                                                  (ulong)(((uint)*(ushort *)
                                                                  (&DAT_00295454 +
                                                                  (uVar14 >> 0x30 & 0xff ^
                                                                  (ulong)(((uint)*(ushort *)
                                                                                  (&DAT_00295454 +
                                                                                  (uVar14 >> 0x38 ^
                                                                                  (ulong)(uVar18 >>
                                                                                         8)) * 2) ^
                                                                          (uint)uVar18 << 8) >> 8 &
                                                                         0xff)) * 2) ^
                                                          (uint)*(ushort *)
                                                                 (&DAT_00295454 +
                                                                 (uVar14 >> 0x38 ^
                                                                 (ulong)(uVar18 >> 8)) * 2) << 8) >>
                                                          8 & 0xff)) * 2) << 8) >> 8 & 0xff)) * 2)
                            << 8) >> 8 & 0xff)) * 2) << 8;
            }
            else {
              switch(-*(int *)(param_1 + 0x1048)) {
              case -1:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 + (uVar14 >> 0x30 & 0xff ^ (ulong)(uVar18 >> 8)) * 2)
                         ^ (uint)uVar18 << 8;
              case -2:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x28 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -3:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x20 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -4:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x18 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -5:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 0x10 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -6:
                uVar21 = (uint)*(ushort *)
                                (&DAT_00295454 +
                                (uVar14 >> 8 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         uVar21 << 8;
              case -7:
                uVar18 = *(ushort *)
                          (&DAT_00295454 + (uVar14 & 0xff ^ (ulong)(uVar21 >> 8 & 0xff)) * 2) ^
                         (ushort)(uVar21 << 8);
              default:
                *(ushort *)(param_1 + 0x1038) = uVar18;
                *(undefined4 *)(param_1 + 0x1048) = 0;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar20 + 1;
            uVar14 = *(ulong *)(param_1 + (ulong)uVar20 * 8 + 0x30);
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            *(ulong *)(param_1 + 0x1040) = uVar14;
          }
          else {
            uVar9 = FUN_00b86b20(param_1);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            uVar14 = *puVar4;
            uVar24 = *puVar3 + uVar24;
          }
          uVar32 = (uint)(uVar14 >> (-uVar10 & 0x3f)) | uVar32;
          uVar14 = uVar14 << (uVar10 & 0x3f);
        }
        else {
          if (uVar14 >> 0x3c == 0) {
            bVar8 = uVar14 >> 0x20 == 0;
            uVar10 = uVar14 << 0x20;
            if (!bVar8) {
              uVar10 = uVar14;
            }
            uVar32 = (uint)bVar8;
            uVar19 = uVar32 << 5 | 0x10;
            uVar25 = uVar10 << 0x10;
            if (uVar10 >> 0x30 != 0) {
              uVar19 = uVar32 << 5;
              uVar25 = uVar10;
            }
            uVar32 = uVar19 | 8;
            uVar10 = uVar25 << 8;
            if (uVar25 >> 0x38 != 0) {
              uVar32 = uVar19;
              uVar10 = uVar25;
            }
            uVar19 = uVar32 | 4;
            uVar25 = uVar10 << 4;
            if (uVar10 >> 0x3c != 0) {
              uVar19 = uVar32;
              uVar25 = uVar10;
            }
            iVar15 = *(int *)(&DAT_00295654 + (uVar25 >> 0x3a & 0x3c)) + uVar19;
          }
          else {
            iVar15 = *(int *)(&DAT_00295654 + (uVar14 >> 0x3c) * 4);
          }
          uVar19 = iVar15 - 1;
          if (0x3f < uVar19) goto LAB_00b8be0c;
          uVar14 = uVar14 << ((ulong)uVar19 & 0x3f);
          uVar24 = *puVar3 + uVar19;
          uVar32 = (uint)(uVar14 >> (uVar13 & 0x3f));
          if (uVar5 < uVar24) goto LAB_00b8c094;
LAB_00b8c19c:
          uVar14 = uVar14 << (uVar12 & 0x3f);
          uVar24 = uVar24 + uVar2;
        }
        *puVar4 = uVar14;
        *puVar3 = uVar24;
        if (param_6 + param_2 < 0x21) {
          iVar15 = 0;
          iVar17 = 0;
          switch(param_5) {
          case 0x20:
            iVar17 = param_8[-0x20] * param_7[0x1f];
          case 0x1f:
            iVar15 = iVar17 + param_8[-0x1f] * param_7[0x1e];
          case 0x1e:
            iVar15 = iVar15 + param_8[-0x1e] * param_7[0x1d];
          case 0x1d:
            iVar15 = iVar15 + param_8[-0x1d] * param_7[0x1c];
          case 0x1c:
            iVar15 = iVar15 + param_8[-0x1c] * param_7[0x1b];
          case 0x1b:
            iVar15 = iVar15 + param_8[-0x1b] * param_7[0x1a];
          case 0x1a:
            iVar15 = iVar15 + param_8[-0x1a] * param_7[0x19];
          case 0x19:
            iVar15 = iVar15 + param_8[-0x19] * param_7[0x18];
          case 0x18:
            iVar15 = iVar15 + param_8[-0x18] * param_7[0x17];
          case 0x17:
            iVar15 = iVar15 + param_8[-0x17] * param_7[0x16];
          case 0x16:
            iVar15 = iVar15 + param_8[-0x16] * param_7[0x15];
          case 0x15:
            iVar15 = iVar15 + param_8[-0x15] * param_7[0x14];
          case 0x14:
            iVar15 = iVar15 + param_8[-0x14] * param_7[0x13];
          case 0x13:
            iVar15 = iVar15 + param_8[-0x13] * param_7[0x12];
          case 0x12:
            iVar15 = iVar15 + param_8[-0x12] * param_7[0x11];
          case 0x11:
            iVar15 = iVar15 + param_8[-0x11] * param_7[0x10];
          case 0x10:
            iVar15 = iVar15 + param_8[-0x10] * param_7[0xf];
          case 0xf:
            iVar15 = iVar15 + param_8[-0xf] * param_7[0xe];
          case 0xe:
            iVar15 = iVar15 + param_8[-0xe] * param_7[0xd];
          case 0xd:
            iVar15 = iVar15 + param_8[-0xd] * param_7[0xc];
          case 0xc:
            iVar15 = iVar15 + param_8[-0xc] * param_7[0xb];
          case 0xb:
            iVar15 = iVar15 + param_8[-0xb] * param_7[10];
          case 10:
            iVar15 = iVar15 + param_8[-10] * param_7[9];
          case 9:
            iVar15 = iVar15 + param_8[-9] * param_7[8];
          case 8:
            iVar15 = iVar15 + param_8[-8] * param_7[7];
          case 7:
            iVar15 = iVar15 + param_8[-7] * param_7[6];
          case 6:
            iVar15 = iVar15 + param_8[-6] * param_7[5];
          case 5:
            iVar15 = iVar15 + param_8[-5] * param_7[4];
          case 4:
            iVar15 = iVar15 + param_8[-4] * param_7[3];
          case 3:
            iVar15 = iVar15 + param_8[-3] * param_7[2];
          case 2:
            iVar15 = iVar15 + param_8[-2] * param_7[1];
          case 1:
            iVar15 = iVar15 + param_8[-1] * *param_7;
          default:
            iVar15 = iVar15 >> (param_6 & 0x1f);
          }
        }
        else {
          lVar26 = 0;
          switch(param_5) {
          case 0x20:
            lVar26 = (long)param_8[-0x20] * (long)param_7[0x1f];
          case 0x1f:
            lVar26 = lVar26 + (long)param_8[-0x1f] * (long)param_7[0x1e];
          case 0x1e:
            lVar26 = lVar26 + (long)param_8[-0x1e] * (long)param_7[0x1d];
          case 0x1d:
            lVar26 = lVar26 + (long)param_8[-0x1d] * (long)param_7[0x1c];
          case 0x1c:
            lVar26 = lVar26 + (long)param_8[-0x1c] * (long)param_7[0x1b];
          case 0x1b:
            lVar26 = lVar26 + (long)param_8[-0x1b] * (long)param_7[0x1a];
          case 0x1a:
            lVar26 = lVar26 + (long)param_8[-0x1a] * (long)param_7[0x19];
          case 0x19:
            lVar26 = lVar26 + (long)param_8[-0x19] * (long)param_7[0x18];
          case 0x18:
            lVar26 = lVar26 + (long)param_8[-0x18] * (long)param_7[0x17];
          case 0x17:
            lVar26 = lVar26 + (long)param_8[-0x17] * (long)param_7[0x16];
          case 0x16:
            lVar26 = lVar26 + (long)param_8[-0x16] * (long)param_7[0x15];
          case 0x15:
            lVar26 = lVar26 + (long)param_8[-0x15] * (long)param_7[0x14];
          case 0x14:
            lVar26 = lVar26 + (long)param_8[-0x14] * (long)param_7[0x13];
          case 0x13:
            lVar26 = lVar26 + (long)param_8[-0x13] * (long)param_7[0x12];
          case 0x12:
            lVar26 = lVar26 + (long)param_8[-0x12] * (long)param_7[0x11];
          case 0x11:
            lVar26 = lVar26 + (long)param_8[-0x11] * (long)param_7[0x10];
          case 0x10:
            lVar26 = lVar26 + (long)param_8[-0x10] * (long)param_7[0xf];
          case 0xf:
            lVar26 = lVar26 + (long)param_8[-0xf] * (long)param_7[0xe];
          case 0xe:
            lVar26 = lVar26 + (long)param_8[-0xe] * (long)param_7[0xd];
          case 0xd:
            lVar26 = lVar26 + (long)param_8[-0xd] * (long)param_7[0xc];
          case 0xc:
            lVar26 = lVar26 + (long)param_8[-0xc] * (long)param_7[0xb];
          case 0xb:
            lVar26 = lVar26 + (long)param_8[-0xb] * (long)param_7[10];
          case 10:
            lVar26 = lVar26 + (long)param_8[-10] * (long)param_7[9];
          case 9:
            lVar26 = lVar26 + (long)param_8[-9] * (long)param_7[8];
          case 8:
            lVar26 = lVar26 + (long)param_8[-8] * (long)param_7[7];
          case 7:
            lVar26 = lVar26 + (long)param_8[-7] * (long)param_7[6];
          case 6:
            lVar26 = lVar26 + (long)param_8[-6] * (long)param_7[5];
          case 5:
            lVar26 = lVar26 + (long)param_8[-5] * (long)param_7[4];
          case 4:
            lVar26 = lVar26 + (long)param_8[-4] * (long)param_7[3];
          case 3:
            lVar26 = lVar26 + (long)param_8[-3] * (long)param_7[2];
          case 2:
            lVar26 = lVar26 + (long)param_8[-2] * (long)param_7[1];
          case 1:
            lVar26 = lVar26 + (long)param_8[-1] * (long)*param_7;
          default:
            iVar15 = (int)(lVar26 >> ((ulong)param_6 & 0x3f));
          }
        }
        uVar19 = uVar32 & uVar6 | uVar19 << (ulong)(uVar11 & 0x1f);
        *param_8 = iVar15 + (*(uint *)(&DAT_00230f68 + (ulong)(uVar19 & 1) * 4) ^ uVar19 >> 1);
        uVar16 = uVar16 + 1;
        param_8 = param_8 + 1;
        if (uVar16 == param_3) {
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}

