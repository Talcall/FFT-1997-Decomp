00011e38: 27bdffe0 addiu r29,r29,0xffe0
00011e3c: afb00018 sw r16,0x0018(r29)
00011e40: 00808021 addu r16,r4,r0                     # file open descriptor
00011e44: afbf001c sw r31,0x001c(r29)
00011e48: 8e030004 lw r3,0x0004(r16)                  # check if a file is currently queued to load
00011e4c: 00000000 nop
00011e50: 2c620007 sltiu r2,r3,0x0007
00011e54: 10400067 beq r2,r0,0x00011ff4               # branch if not valid type for this function?
00011e58: 00031080 sll r2,r3,0x02
00011e5c: 3c018001 lui r1,0x8001
00011e60: 24210014 addiu r1,r1,0x0014                 # 80011ff4
00011e64: 00220821 addu r1,r1,r2
00011e68: 8c220000 lw r2,0x0000(r1)                   # func to run while opening file?
00011e6c: 00000000 nop
00011e70: 00400008 jr r2
00011e74: 00000000 nop
           00010014: 80011ff4 0
           00010018: 80011e78 1
           0001001c: 80011ea4 2
           00010020: 80011ec8 3
           00010024: 80011ee0 4
           00010028: 80011f28 5
           0001002c: 80011f68 6
1

00011e78: 3404000e ori r4,r0,0x000e                   # CdlSetmode
00011e7c: 27a50010 addiu r5,r29,0x0010
00011e80: 00003021 addu r6,r0,r0                      # normal speed
00011e84: 34020080 ori r2,r0,0x0080
00011e88: 0c007ae2 jal 0x0001eb88                     # CdControl
00011e8c: a3a20010 sb r2,0x0010(r29)                  # CdlModeSpeed
00011e90: 8e020004 lw r2,0x0004(r16)                  # load file opening check?
00011e94: 3c018005 lui r1,0x8005
00011e98: ac207718 sw r0,0x7718(r1)                   # time played this session == 0
00011e9c: 080047d8 j 0x00011f60
00011ea0: 24420001 addiu r2,r2,0x0001                 # +1
2

00011ea4: 3c028005 lui r2,0x8005
00011ea8: 8c427718 lw r2,0x7718(r2)                   # load play time
00011eac: 00000000 nop
00011eb0: 28420004 slti r2,r2,0x0004
00011eb4: 1440004f bne r2,r0,0x00011ff4               # skip if has not been at least 4 frames since last called
00011eb8: 00000000 nop
00011ebc: 8e020004 lw r2,0x0004(r16)
00011ec0: 080047d8 j 0x00011f60
00011ec4: 24420001 addiu r2,r2,0x0001                 # else increment to next
3

00011ec8: 34040015 ori r4,r0,0x0015                   # CdlSeekL
00011ecc: 0c007b30 jal 0x0001ecc0                     # CdControlf like CdControl but non blocking and fast.
00011ed0: 2605001c addiu r5,r16,0x001c                # seek the current CdlLoc
00011ed4: 8e020004 lw r2,0x0004(r16)
00011ed8: 080047d8 j 0x00011f60
00011edc: 24420001 addiu r2,r2,0x0001                 # increment to next
4

00011ee0: 34040001 ori r4,r0,0x0001                   # determine current CD status
00011ee4: 0c007ac6 jal 0x0001eb18                     # CdSync 
00011ee8: 00002821 addu r5,r0,r0                      # don't give pointer
00011eec: 00401821 addu r3,r2,r0
00011ef0: 34020002 ori r2,r0,0x0002
00011ef4: 14620008 bne r3,r2,0x00011f18               # branch if status not "?" documentation is not helpful. 
00011ef8: 34020005 ori r2,r0,0x0005
00011efc: 8e020004 lw r2,0x0004(r16)                  # counter?
00011f00: 8e030020 lw r3,0x0020(r16)                  # destPtr
00011f04: 24420001 addiu r2,r2,0x0001
00011f08: 1460003a bne r3,r0,0x00011ff4               # end if already has destination pointer
00011f0c: ae020004 sw r2,0x0004(r16)                  # increment to next
00011f10: 080047fd j 0x00011ff4                       # end
00011f14: ae000004 sw r0,0x0004(r16)                  # if no destination pointer, stop opening file.
00011f18: 10620028 beq r3,r2,0x00011fbc               # branch if status "?"
00011f1c: 00000000 nop
00011f20: 080047fd j 0x00011ff4                       # else end, do not increment
00011f24: 00000000 nop
5

00011f28: 8e040010 lw r4,0x0010(r16)                  # num sectors
00011f2c: 8e050020 lw r5,0x0020(r16)                  # destPtr
00011f30: 0c00830f jal 0x00020c3c                     # CdRead
00011f34: 34060080 ori r6,r0,0x0080                   # CdRom subsystem mode = double speed
00011f38: 14400004 bne r2,r0,0x00011f4c               # branch if command executed successfully
00011f3c: 00000000 nop
00011f40: 8e020008 lw r2,0x0008(r16)                  # ?
00011f44: 080047f5 j 0x00011fd4
00011f48: 24420001 addiu r2,r2,0x0001                 # ++? fail count?
00011f4c: 8e020004 lw r2,0x0004(r16)                  # 
00011f50: 3c018005 lui r1,0x8005
00011f54: ac207718 sw r0,0x7718(r1)                   # reset playtime
00011f58: ae00000c sw r0,0x000c(r16)                  # zero
00011f5c: 24420001 addiu r2,r2,0x0001                 # increment
00011f60: 080047fd j 0x00011ff4
00011f64: ae020004 sw r2,0x0004(r16)                  # store incremented
6

00011f68: 34040001 ori r4,r0,0x0001
00011f6c: 0c008351 jal 0x00020d44                     # CdReadSync check read completion, don't wait for it to complete
00011f70: 00002821 addu r5,r0,r0                      # don't store result
00011f74: 00401821 addu r3,r2,r0
00011f78: 1060ffe5 beq r3,r0,0x00011f10               # branch if CdRead is done (clear destination pointer & end)
00011f7c: 00000000 nop
00011f80: 8e020010 lw r2,0x0010(r16)                  # load number of sectors left to load (according to RAM.)
00011f84: 00000000 nop
00011f88: 10620003 beq r3,r2,0x00011f98               # branch if they're equal
00011f8c: 2402ffff addiu r2,r0,0xffff
00011f90: 14620017 bne r3,r2,0x00011ff0               # branch if cd read returned an error
00011f94: 00000000 nop
00011f98: 3c028005 lui r2,0x8005
00011f9c: 8c427718 lw r2,0x7718(r2)                   # playtime
00011fa0: 00000000 nop
00011fa4: 28420101 slti r2,r2,0x0101
00011fa8: 1440000c bne r2,r0,0x00011fdc               # branch if not stalling yet?
00011fac: 00000000 nop
00011fb0: 3c018005 lui r1,0x8005
00011fb4: ac207718 sw r0,0x7718(r1)                   # store no playtime
00011fb8: ae00000c sw r0,0x000c(r16)                  # zero
00011fbc: 0c004786 jal 0x00011e18                     # Reset CD Subsystems
00011fc0: 00000000 nop
00011fc4: 8e020008 lw r2,0x0008(r16)                  # 
00011fc8: 34030001 ori r3,r0,0x0001
00011fcc: ae030004 sw r3,0x0004(r16)                  # retry from beginning
00011fd0: 24420001 addiu r2,r2,0x0001
00011fd4: 080047fd j 0x00011ff4
00011fd8: ae020008 sw r2,0x0008(r16)                  # increment fail count
00011fdc: 8e02000c lw r2,0x000c(r16)
00011fe0: 00000000 nop
00011fe4: 24420001 addiu r2,r2,0x0001
00011fe8: 080047fd j 0x00011ff4
00011fec: ae02000c sw r2,0x000c(r16)                  # +1 for every pass where we're not stalling?
no file/return

00011ff0: ae00000c sw r0,0x000c(r16)
00011ff4: 8e020004 lw r2,0x0004(r16)
00011ff8: 00000000 nop
00011ffc: 10400003 beq r2,r0,0x0001200c              # skip if current instruction is 0
00012000: 00000000 nop
00012004: 0c004808 jal 0x00012020                    # Draw Now Loading Message
00012008: 00000000 nop
0001200c: 8fbf001c lw r31,0x001c(r29)
00012010: 8fb00018 lw r16,0x0018(r29)
00012014: 27bd0020 addiu r29,r29,0x0020
00012018: 03e00008 jr r31
0001201c: 00000000 nop