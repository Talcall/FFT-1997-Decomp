
void force_recalculateReverb(MusDataAll *musData,short shiftTime,short changeVol)

{
  ulong Event;
  
  if (musData != (MusDataAll *)0x0) {
    DisableEvent(rootCounter2Event);
    (musData->HeaderData).volset1.hasVolume.field0_0x0 = 0;
    (musData->HeaderData).volset1.hasVolume.Volume = 0;
    Calc_Mus_VolChange(musData,(int)shiftTime,changeVol);
    SetReverbParam((musData->HeaderData).ReverbMode,(musData->HeaderData).volumeDepth,
                   (musData->HeaderData).reverbDelay,(musData->HeaderData).reverbFeedback);
    ForceChannelFunc(musData,0x71ff);
    get_activeChannels(musData);
    Event = rootCounter2Event;
    (musData->HeaderData)._0_cmdfield =
         (musData->HeaderData)._0_cmdfield & ~recalculate_reverb | music_playing;
    EnableEvent(Event);
  }
  return;
}

