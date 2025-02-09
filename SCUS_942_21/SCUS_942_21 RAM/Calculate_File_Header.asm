#   ROUTINE: LOAD DATA FROM DISC (0x11bf4)
#       Parameters:
#           r4          = (ptr1) ptr to file to be opened data (often 8004eaf4)
#           r5          = (lba) LBA Sector of data
#           r6          = (numSectors) Number of sectors to load
#           r7          = (locationPtr) Location to load the data into RAM
#           *(sp + 10)  = (p5) Sometimes -1 (whether to display "now loading")
#       Returns:
#           r2          = (0, if load was successful; 1, otherwise) ?

#additional notes: seems to do some prep work for loading files, such as finding its CDlLOC but nothing I can see explicitly determines that it requests the DMA to actually load any files.

80011bf4: 27bdffb8 addiu r29,r29,-0x0048
80011bf8: afb3002c sw r19,0x002c(r29)
80011bfc: 00809821 addu r19,r4,r0                   #   ptr1
80011c00: afb40030 sw r20,0x0030(r29)
80011c04: 00a0a021 addu r20,r5,r0                   #   lba
80011c08: afb50034 sw r21,0x0034(r29)
80011c0c: 00c0a821 addu r21,r6,r0                   #   numSectors
80011c10: afb60038 sw r22,0x0038(r29)
80011c14: afbf0040 sw r31,0x0040(r29)
80011c18: afb7003c sw r23,0x003c(r29)
80011c1c: afb20028 sw r18,0x0028(r29)
80011c20: afb10024 sw r17,0x0024(r29)
80011c24: afb00020 sw r16,0x0020(r29)
80011c28: 8e620004 lw r2,0x0004(r19)                #   *(ptr1 + 4)
80011c2c: 8fa30058 lw r3,0x0058(r29)                #   p5
80011c30: 10400003 beq r2,r0,0x80011c40
80011c34: 00e0b021 addu r22,r7,r0                   #   locationPtr
                                                    #   if (*(ptr1 + 4) != 0) { // if file already queued to open, fail
80011c38: 0800476a j 0x80011da8                     #       return 1;
80011c3c: 34020001 ori r2,r0,0x0001
                                                    #   }
80011c40: 34170001 ori r23,r0,0x0001                #   1
80011c44: 10770003 beq r3,r23,0x80011c54            #   if (p5 != 1) {         // 
80011c48: 00000000 nop
80011c4c: 3c018003 lui r1,0x8003
80011c50: ac238b08 sw r3,-0x74f8(r1)                #       *0x80028b08 = p5
                                                    #   }
80011c54: 14600049 bne r3,r0,0x80011d7c             #   if (p5 == 0) {         // if displaying now loading,
80011c58: 00000000 nop
80011c5c: 0c00918e jal 0x80024638                   SYS SetDispMask        // don't draw screen mask
80011c60: 00002021 addu r4,r0,r0                    mask = 0
80011c64: 34040001 ori r4,r0,0x0001                 display
80011c68: 00002821 addu r5,r0,r0
80011c6c: 0c0102f6 jal 0x80040bd8                   Build Image Data for Now Loading message
80011c70: 00003021 addu r6,r0,r0                    x=0, y=0
80011c74: 27a40018 addiu r4,r29,0x0018
80011c78: 00002821 addu r5,r0,r0
80011c7c: 00003021 addu r6,r0,r0
80011c80: 00003821 addu r7,r0,r0
80011c84: 34020100 ori r2,r0,0x0100
80011c88: a7a2001c sh r2,0x001c(r29)
80011c8c: 340201e0 ori r2,r0,0x01e0
80011c90: a7a00018 sh r0,0x0018(r29)
80011c94: a7a0001a sh r0,0x001a(r29)
80011c98: 0c00921a jal 0x80024868                     SYS ClearImage
80011c9c: a7a2001e sh r2,0x001e(r29)
80011ca0: 0c0091b5 jal 0x800246d4                     SYS DrawSync
80011ca4: 00002021 addu r4,r0,r0
80011ca8: 3c118005 lui r17,0x8005
80011cac: 2631ea14 addiu r17,r17,-0x15ec              'now loading' draw environment
80011cb0: 02202021 addu r4,r17,r0                     
80011cb4: 00002821 addu r5,r0,r0                      x = 0
80011cb8: 00003021 addu r6,r0,r0                      y = 0
80011cbc: 34070100 ori r7,r0,0x0100                   w = 0x100
80011cc0: 341000f0 ori r16,r0,0x00f0                  h = 0xf0
80011cc4: 0c008b78 jal 0x80022de0                     E03 SetDefDrawEnv - define the draw environment for now loading (top screen)
80011cc8: afb00010 sw r16,0x0010(r29)
80011ccc: 3c128005 lui r18,0x8005
80011cd0: 2652eacc addiu r18,r18,-0x1534              'now loading' display environment
80011cd4: 02402021 addu r4,r18,r0                     
80011cd8: 00002821 addu r5,r0,r0                      x = 0
80011cdc: 340600f0 ori r6,r0,0x00f0                   y = 0xf0
80011ce0: 34070100 ori r7,r0,0x0100                   w = 0x100
80011ce4: 0c008bac jal 0x80022eb0                     E04 SetDefDispEnv - define the display environment for now loading (bottom screen)
80011ce8: afb00010 sw r16,0x0010(r29)                 h = 0xf0
80011cec: 2631005c addiu r17,r17,0x005c
80011cf0: 02202021 addu r4,r17,r0
80011cf4: 00002821 addu r5,r0,r0
80011cf8: 340600f0 ori r6,r0,0x00f0
80011cfc: 34070100 ori r7,r0,0x0100
80011d00: 0c008b78 jal 0x80022de0                     E03 SetDefDrawEnv (DRAWENV * 8004EA70, 0, 240, 256, 240) (bottom screen)
80011d04: afb00010 sw r16,0x0010(r29)
80011d08: 26520014 addiu r18,r18,0x0014
80011d0c: 02402021 addu r4,r18,r0
80011d10: 00002821 addu r5,r0,r0
80011d14: 00003021 addu r6,r0,r0
80011d18: 34070100 ori r7,r0,0x0100
80011d1c: 0c008bac jal 0x80022eb0                     E04 SetDefDispEnv (DISPENV * 8004EAE0, 0, 0, 256, 240) (top screen)
80011d20: afb00010 sw r16,0x0010(r29)
80011d24: 340200f0 ori r2,r0,0x00f0                   update draw environment:
80011d28: 3c018005 lui r1,0x8005
80011d2c: a422ea7a sh r2,-0x1586(r1)                  DRAWENV2.ofs[1] == 0xf0
80011d30: 34020001 ori r2,r0,0x0001
80011d34: 3c018005 lui r1,0x8005
80011d38: a420ea78 sh r0,-0x1588(r1)                  DRAWENV2.ofs[0] == 0x00
80011d3c: 3c018005 lui r1,0x8005
80011d40: a420ea1e sh r0,-0x15e2(r1)                  DRAWENV1.ofs[1] == 0x00
80011d44: 3c018005 lui r1,0x8005
80011d48: a420ea1c sh r0,-0x15e4(r1)                  DRAWENV1.ofs[0] == 0x00
80011d4c: 3c018005 lui r1,0x8005
80011d50: a022ea87 sb r2,-0x1579(r1)                  DRAWENV2.dfe == TRUE (enable drawing in this region.)
80011d54: 3c018005 lui r1,0x8005
80011d58: a022ea88 sb r2,-0x1578(r1)                  DRAWENV2.isbg == TRUE
80011d5c: 3c018005 lui r1,0x8005
80011d60: a022ea2b sb r2,-0x15d5(r1)                  DRAWENV1.dfe == TRUE
80011d64: 3c018005 lui r1,0x8005
80011d68: a022ea2c sb r2,-0x15d4(r1)                  DRAWENV1.isbg == TRUE
80011d6c: 0c00932b jal 0x80024cac                   SYS PutDrawEnv DRAWENV2
80011d70: 02202021 addu r4,r17,r0                   
80011d74: 0c0093a1 jal 0x80024e84                   SYS PutDispEnv DISPENV2
80011d78: 02402021 addu r4,r18,r0
                                                    #   }
80011d7c: 02802021 addu r4,r20,r0
80011d80: 2665001c addiu r5,r19,0x001c              #
80011d84: ae600000 sw r0,0x0000(r19)                #   file.00 == 0
80011d88: ae600018 sw r0,0x0018(r19)                #   file.18 == 0
80011d8c: ae600008 sw r0,0x0008(r19)                #   file.08 == 0
80011d90: ae770004 sw r23,0x0004(r19)               #   file.occ == 1
80011d94: 0c007bef jal 0x8001efbc                   #   S 002 CDIntToPos (LBA lba, CDlLoc * file.CDlLoc)
80011d98: ae640014 sw r4,0x0014(r19)                #   file.lba = lba
80011d9c: 00001021 addu r2,r0,r0                    #   result = 0
80011da0: ae750010 sw r21,0x0010(r19)               #   file.nosec = numSectors
80011da4: ae760020 sw r22,0x0020(r19)               #   file.dst = locationPtr
                                                    #   return result;
80011da8: 8fbf0040 lw r31,0x0040(r29)               
80011dac: 8fb7003c lw r23,0x003c(r29)
80011db0: 8fb60038 lw r22,0x0038(r29)
80011db4: 8fb50034 lw r21,0x0034(r29)
80011db8: 8fb40030 lw r20,0x0030(r29)
80011dbc: 8fb3002c lw r19,0x002c(r29)
80011dc0: 8fb20028 lw r18,0x0028(r29)
80011dc4: 8fb10024 lw r17,0x0024(r29)
80011dc8: 8fb00020 lw r16,0x0020(r29)
80011dcc: 27bd0048 addiu r29,r29,0x0048
80011dd0: 03e00008 jr r31
80011dd4: 00000000 nop