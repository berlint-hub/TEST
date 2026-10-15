# SCRIPT_ERROR

```
Traceback (most recent call last):
  File "/home/runner/work/TEST/TEST/ci/ghidra/nsx_decompile_targets.py", line 190, in <module>
    main()
  File "/home/runner/work/TEST/TEST/ci/ghidra/nsx_decompile_targets.py", line 120, in main
    cur = findBytes(textblock.getStart(), Y, textblock.getEnd(), 1)
TypeError: findBytes(): 1st arg can't be coerced to ghidra.program.model.address.AddressSetView, ghidra.program.model.address.Address

```
