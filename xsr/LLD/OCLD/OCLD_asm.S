@
@ OneNAND Related Routines
@
@TEXTAREA

/*
	EXPORT OneNand4burstPageRead
	EXPORT OneNand4burstPageWrite
	EXPORT OneNand4burstPageEmptyWrite
	EXPORT OneNand8burstPageRead
	EXPORT OneNand8burstPageWrite
	EXPORT OneNand8burstPageEmptyWrite
*/

#include <linux/linkage.h>
#include <asm/assembler.h>


	ENTRY(OneNand4burstPageRead)
		@ Read, 4 burst Page Read
		@ r0 : OneNand Device Source Address
		@ r1 : Destination Address(DRAM)
		@ r2 : Transfer Size(4Byte unit)
		stmfd	r13!, {r0-r3,r9-r12}
		mov		r3, r2			@ Count to move (0x80*4burst*4byte + 0x4*4burst*4byte = 2KB + 64B)

read_page:
		ldmia	r0, {r9-r12}			@
		stmia	r1!, {r9-r12}			@
		subs	r3, r3, #0x1			@ Count decrement
		bne		read_page

		ldmfd	r13!, {r0-r3,r9-r12}

		mov		pc, lr
	@ENTRY_END

	ENTRY(OneNand4burstPageWrite)
		@ Write, 4 burst Page Write
		@ r0 : Source Address(DRAM)
		@ r1 : OneNand Device Destination Address
		@ r2 : Transfer Size(4Byte unit)
		stmfd	r13!, {r0-r3,r9-r12}
		mov		r3, r2			@ Count to move (0x80*4burst*4byte + 0x4*4burst*4byte = 2KB + 64B)

write_page:
		ldmia	r0!, {r9-r12}			@
		stmia	r1, {r9-r12}			@
		subs	r3, r3, #0x1			@ Count decrement
		bne		write_page

		ldmfd	r13!, {r0-r3,r9-r12}

		mov		pc, lr

	@ENTRY_END

	ENTRY(OneNand4burstPageEmptyWrite)
		@ Write, 4 burst Page Empty Write
		@ r0 : Source Address(DRAM)
		@ r1 : OneNand Device Destination Address
		@ r2 : Transfer Size(4Byte unit)
		stmfd	r13!, {r0-r3,r9-r12}
		mov		r3, r2			@ Count to move (0x80*4burst*4byte + 0x4*4burst*4byte = 2KB + 64B)

		mvn	r9, #0
		mvn	r10, #0
		mvn	r11, #0
		mvn	r12, #0
write_page4e:
		stmia	r1, {r9-r12}			@
		subs	r3, r3, #0x1			@ Count decrement
		bne		write_page4e

		ldmfd	r13!, {r0-r3,r9-r12}

		mov		pc, lr

	@ENTRY_END

 	ENTRY(OneNand8burstPageRead)
		@ Read, 8 burst Page Read, use map01 only
		@ r0 : OneNand Device Source Address
		@ r1 : Destination Address(DRAM)
		@ r2 : Transfer Size(4Byte unit)
		stmfd	r13!, {r0-r3,r5-r12}
		mov		r3, r2			@ Count to move (0x40*8burst*4byte + 0x2*8burst*4byte = 2KB + 64B)

read_page_8:
		ldmia	r0, {r5-r12}			@
		stmia	r1!, {r5-r12}			@
		subs	r3, r3, #0x1			@ Count decrement
		bne		read_page_8

		ldmfd	r13!, {r0-r3,r5-r12}

		mov		pc, lr
	@ENTRY_END

	ENTRY(OneNand8burstPageWrite)
		@ Write, 8 burst Page Write, use map01 only
		@ r0 : Source Address(DRAM)
		@ r1 : OneNand Device Destination Address
		@ r2 : Transfer Size(4Byte unit)
		stmfd	r13!, {r0-r3,r5-r12}
		mov		r3, r2			@ Count to move (0x40*8burst*4byte + 0x2*8burst*4byte = 2KB + 64B)

write_page_8:
		ldmia	r0!, {r5-r12}			@
		stmia	r1, {r5-r12}			@
		subs	r3, r3, #0x1			@ Count decrement
		bne		write_page_8

		ldmfd	r13!, {r0-r3,r5-r12}

		mov		pc, lr

	@ENTRY_END

	ENTRY(OneNand8burstPageEmptyWrite)
		@ Write, 8 burst Page Empty Write, use map01 only
		@ r0 : Source Address(DRAM)
		@ r1 : OneNand Device Destination Address
		@ r2 : Transfer Size(4Byte unit)
		stmfd	r13!, {r0-r3,r5-r12}
		mov		r3, r2			@ Count to move (0x40*8burst*4byte + 0x2*8burst*4byte = 2KB + 64B)

		mvn	r5, #0
		mvn	r6, #0
		mvn	r7, #0
		mvn	r8, #0
		mvn	r9, #0
		mvn	r10, #0
		mvn	r11, #0
		mvn	r12, #0
write_page_8e:
		stmia	r1, {r5-r12}			@
		subs	r3, r3, #0x1			@ Count decrement
		bne		write_page_8e

		ldmfd	r13!, {r0-r3,r5-r12}

		mov		pc, lr

	@ENTRY_END

	.ltorg
