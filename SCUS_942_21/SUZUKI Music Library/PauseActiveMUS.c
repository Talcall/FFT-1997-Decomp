
void PauseActiveMUS(void)

{
  uint uVar1;
  MusicChannelData *ChannelData;
  int numChannels;
  uint acc_OwnedChannels;
  MusDataAll *MusicData;
  ulong gpuInterruptedEvent;
  
  MusicData = FirstMUS;
  acc_OwnedChannels = 0;
  numChannels = 8;
  ChannelData = FirstMUS->ChannelData;
  do {
    numChannels = numChannels + -1;
    if ((ChannelData->channelflags & action1) != 0) {
      uVar1 = (ChannelData->channel_inter).channelSecondary.channel_notedata.using_channels;
      ChannelData->channelflags = 0;
      acc_OwnedChannels = acc_OwnedChannels | uVar1;
    }
    ChannelData = ChannelData + 1;
  } while (numChannels != 0);
  DisableEvent(rootCounter2Event);
  gpuInterruptedEvent = rootCounter2Event;
  (MusicData->HeaderData).OwnedChannels = 0;
  (MusicData->HeaderData).ModifiedChannels = 0;
  (MusicData->HeaderData).LFOVoiceBits = 0;
  (MusicData->HeaderData).NoiseVoiceBits = 0;
  (MusicData->HeaderData).ReverbVoiceBits = 0;
  PitchLFO_onlyInclude = 0;
  PausedMusicChannels = acc_OwnedChannels | PausedMusicChannels;
  EnableEvent(gpuInterruptedEvent);
  return;
}

