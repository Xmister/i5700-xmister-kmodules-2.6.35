cmd_/home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.o := /opt/ctng-5700/bin/arm-spica-linux-uclibcgnueabi-gcc -Wp,-MD,/home/spica/i5700.2/modules_cyanogen/mfc/.MFC_Inst_Pool.o.d  -nostdinc -isystem /opt/ctng/lib/gcc/arm-spica-linux-uclibcgnueabi/4.4.3/include -I/home/spica/i5700.2/kernel/cyanogen/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c64xx/include -Iarch/arm/plat-samsung/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O3 -marm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DLINUX -DDIVX_ENABLE  -DMODULE -O3 -marm -mfpu=vfp -mtune=arm1176jzf-s -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(MFC_Inst_Pool)"  -D"KBUILD_MODNAME=KBUILD_STR(s3c_mfc)"  -c -o /home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.o /home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.c

deps_/home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.o := \
  /home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.c \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcConfig.h \
    $(wildcard include/config/h//.h) \
  include/linux/version.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/memory.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/discontigmem.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  include/linux/const.h \
  arch/arm/mach-s3c64xx/include/mach/memory.h \
    $(wildcard include/config/reserved/mem/jpeg/mfc/post/camera.h) \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  arch/arm/mach-s3c64xx/include/mach/hardware.h \
  arch/arm/plat-samsung/include/plat/reserved_mem.h \
    $(wildcard include/config/sec/log/buf.h) \
    $(wildcard include/config/log/buf/shift.h) \
    $(wildcard include/config/reserved/mem/cmm/jpeg/mfc/post/camera.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/posix_types.h \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  include/linux/prefetch.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/processor.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/smp.h) \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/hwcap.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/system.h \
    $(wildcard include/config/microp/common.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  include/linux/linkage.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/linkage.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/irqflags.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/asm-generic/cmpxchg-local.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/setup.h \
    $(wildcard include/config/arch/lh7a40x.h) \
  /home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.h \

/home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.o: $(deps_/home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.o)

$(deps_/home/spica/i5700.2/modules_cyanogen/mfc/MFC_Inst_Pool.o):
