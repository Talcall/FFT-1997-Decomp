
void PlaySound_findChannel(uint sfx_ID)

{
  uint channel_ID;
  
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    channel_ID = get_channel_for_sfx(sfx_ID,2);
    always2 = 2;
    Play_Sound_Worker((int)(short)((ushort)channel_ID | 0x2000),sfx_ID,0x6000,0x4000);
  }
  return;
}

