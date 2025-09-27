
void Reset_Mus(MusDataAll *MusData,short shift_time,short change_vol)

{
  ulong spuInterruptTemp;
  
  spuInterruptTemp = rootCounter2Event;
  if (MusData != (MusDataAll *)0x0) {
    (MusData->HeaderData)._0_cmdfield = (MusData->HeaderData)._0_cmdfield & ~music_playing;
    DisableEvent(spuInterruptTemp);
    TransferMusicData(&MusData->HeaderData);
    FUN_800138ac(MusData);
    (MusData->HeaderData).volset1.hasVolume.field0_0x0 = 0;
    (MusData->HeaderData).volset1.hasVolume.Volume = 0;
    Calc_Mus_VolChange(MusData,(int)shift_time,change_vol);
    ForceChannelFunc(MusData,0x7000);
    spuInterruptTemp = rootCounter2Event;
    (MusData->HeaderData)._0_cmdfield = (MusData->HeaderData)._0_cmdfield | music_playing;
    EnableEvent(spuInterruptTemp);
  }
  return;
}

