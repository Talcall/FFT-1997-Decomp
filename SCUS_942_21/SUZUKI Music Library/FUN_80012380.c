
void FUN_80012380(MusDataAll *param_1)

{
  uint uVar1;
  
  if (param_1 != (MusDataAll *)0x0) {
    (param_1->HeaderData)._0_cmdfield =
         (param_1->HeaderData)._0_cmdfield & ~music_playing | recalculate_reverb;
    uVar1 = getActiveChannels(param_1);
    inactiveChannels = uVar1 | inactiveChannels;
  }
  return;
}

