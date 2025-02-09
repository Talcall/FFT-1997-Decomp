00012020: 27bdffe8 addiu r29,r29,0xffe8
00012024: afb00010 sw r16,0x0010(r29)
00012028: 3c108003 lui r16,0x8003
0001202c: 8e108b08 lw r16,-0x74f8(r16)                # frame counter
00012030: 2402ffff addiu r2,r0,0xffff
00012034: 1202002a beq r16,r2,0x000120e0              # end if -1
00012038: afbf0014 sw r31,0x0014(r29)
0001203c: 26100001 addiu r16,r16,0x0001
00012040: 3c018003 lui r1,0x8003
00012044: ac308b08 sw r16,-0x74f8(r1)                 # increment
00012048: 2a020040 slti r2,r16,0x0040
0001204c: 14400024 bne r2,r0,0x000120e0               # skip if still less than 0x40
00012050: 32100001 andi r16,r16,0x0001                # check even/odd
00012054: 00102040 sll r4,r16,0x01
00012058: 00902021 addu r4,r4,r16
0001205c: 000420c0 sll r4,r4,0x03
00012060: 00902023 subu r4,r4,r16
00012064: 00042080 sll r4,r4,0x02
00012068: 3c028005 lui r2,0x8005
0001206c: 2442ea14 addiu r2,r2,0xea14
00012070: 0c00932b jal 0x00024cac                     # SYS PutDrawEnv set top/bottom draw screen
00012074: 00822021 addu r4,r4,r2
00012078: 00102080 sll r4,r16,0x02
0001207c: 00902021 addu r4,r4,r16
00012080: 00042080 sll r4,r4,0x02
00012084: 3c028005 lui r2,0x8005
00012088: 2442eacc addiu r2,r2,0xeacc
0001208c: 0c0093a1 jal 0x00024e84                     # SYS PutDispEnv set top/bottom display screen
00012090: 00822021 addu r4,r4,r2
00012094: 001080c0 sll r16,r16,0x03
00012098: 3c028003 lui r2,0x8003
0001209c: 24422a68 addiu r2,r2,0x2a68                 # OTAG list
000120a0: 02028021 addu r16,r16,r2
000120a4: 02002021 addu r4,r16,r0                     # current frame's OTAG list
000120a8: 0c0092a2 jal 0x00024a88                     # SYS ClearOtag clear 2 entries in OTAG list
000120ac: 34050002 ori r5,r0,0x0002
000120b0: 0c0104ea jal 0x000413a8                     # Add Now Loading Message to OTAG List
000120b4: 02002021 addu r4,r16,r0                     # current OTAG list
000120b8: 0c00930e jal 0x00024c38                     # SYS DrawOtag
000120bc: 02002021 addu r4,r16,r0                     # current OTAG list
000120c0: 0c00918e jal 0x00024638                     # SYS SetDispMask
000120c4: 34040001 ori r4,r0,0x0001                   # set display mask on
000120c8: 3c028003 lui r2,0x8003
000120cc: 8c428b08 lw r2,-0x74f8(r2)                  # frame counter
000120d0: 00000000 nop
000120d4: 30420041 andi r2,r2,0x0041                  # loop every 41 frames
000120d8: 3c018003 lui r1,0x8003
000120dc: ac228b08 sw r2,-0x74f8(r1)                  # store again
000120e0: 8fbf0014 lw r31,0x0014(r29)
000120e4: 8fb00010 lw r16,0x0010(r29)
000120e8: 27bd0018 addiu r29,r29,0x0018
000120ec: 03e00008 jr r31
000120f0: 00000000 nop