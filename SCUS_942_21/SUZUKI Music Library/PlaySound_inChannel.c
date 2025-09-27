
void PlaySound_inChannel(uint sfx_ID,ushort channel_ID)

{
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    always2 = 2;
    Play_Sound_Worker((int)(short)(channel_ID & 0xfffe | 0x2000),sfx_ID,0x6000,0x4000);
  }
  return;
}

