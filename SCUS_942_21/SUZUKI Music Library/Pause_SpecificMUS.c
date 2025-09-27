
void Pause_SpecificMUS(int param_1)

{
  short sVar1;
  int param1;
  MusicChannelData *ChannelData;
  int numChannels;
  
  numChannels = 8;
  sVar1 = *(short *)(param_1 + 10);
  ChannelData = FirstMUS->ChannelData;
  do {
    numChannels = numChannels + -1;
    if (((ChannelData->channelflags & action1) != 0) &&
       (param1 = *(int *)&(ChannelData->channel_inter).channelSecondary.field_0x4,
       param1 >> 0x10 == (int)sVar1)) {
      AccumulateChannelsToPause(param1);
    }
    ChannelData = ChannelData + 1;
  } while (numChannels != 0);
  return;
}

