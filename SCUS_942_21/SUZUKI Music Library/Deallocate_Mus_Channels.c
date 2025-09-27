
void Deallocate_Mus_Channels(MusDataAll *musData)

{
  uint _channelFlags;
  
  if (musData != (MusDataAll *)0x0) {
    (musData->HeaderData)._0_cmdfield = (musData->HeaderData)._0_cmdfield & ~music_playing;
    _channelFlags = getActiveChannels(musData);
    inactiveChannels = _channelFlags | inactiveChannels;
  }
  return;
}

