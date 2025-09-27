
void PlaySound_findChannel_withSettings(uint sfx_id,uint param_2,uint volume_balance)

{
  uint channel_ID;
  
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    channel_ID = get_channel_for_sfx(sfx_id,2);
    always2 = 2;
    Play_Sound_Worker((int)(short)((ushort)channel_ID | 0x2000),sfx_id,
                      (short)((param_2 << 0x18) >> 0x10),(short)((volume_balance << 0x18) >> 0x10));
  }
  return;
}

