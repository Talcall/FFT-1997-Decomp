
void FUN_800123cc(void)

{
  mus_10 mVar1;
  uint uVar2;
  MusDataAll *musData;
  
  musData = CurrentlyPlayingMus;
  if (CurrentlyPlayingMus != (MusDataAll *)0x0) {
    do {
      mVar1 = (musData->HeaderData)._0_cmdfield;
      if ((mVar1 & actionflag1) != 0) {
        (musData->HeaderData)._0_cmdfield = mVar1 & ~music_playing;
        uVar2 = getActiveChannels(musData);
        inactiveChannels = uVar2 | inactiveChannels;
      }
      musData = (musData->HeaderData).PrevPlayedMus;
    } while (musData != (MusDataAll *)0x0);
  }
  return;
}

