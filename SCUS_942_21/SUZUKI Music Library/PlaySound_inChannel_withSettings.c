
void PlaySound_inChannel_withSettings
               (uint sfx_ID,ushort channel_id,uint param_3,uint volume_balance)

{
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    always2 = 2;
    Play_Sound_Worker((int)(short)(channel_id & 0xfffe | 0x2000),sfx_ID,
                      (short)((param_3 << 0x18) >> 0x10),(short)((volume_balance << 0x18) >> 0x10));
  }
  return;
}

