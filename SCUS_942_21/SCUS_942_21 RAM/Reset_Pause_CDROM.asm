00011dd8: 27bdffe8 addiu r29,r29,0xffe8
00011ddc: afbf0010 sw r31,0x0010(r29)
00011de0: 0c007a9e jal 0x0001ea78                 CdFlush
00011de4: ac800004 sw r0,0x0004(r4)
00011de8: 34040009 ori r4,r0,0x0009               CdlPause
00011dec: 00002821 addu r5,r0,r0
00011df0: 0c007b7b jal 0x0001edec                 CdControlb 
00011df4: 00003021 addu r6,r0,r0
00011df8: 1040fffc beq r2,r0,0x00011dec           end if successful
00011dfc: 34040009 ori r4,r0,0x0009
00011e00: 0c0076ea jal 0x0001dba8                 VSync call otherwise wait 3 frames
00011e04: 34040003 ori r4,r0,0x0003
00011e08: 8fbf0010 lw r31,0x0010(r29)
00011e0c: 27bd0018 addiu r29,r29,0x0018
00011e10: 03e00008 jr r31
00011e14: 00000000 nop