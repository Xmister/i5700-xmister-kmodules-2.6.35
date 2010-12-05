cmd_/home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.o := /opt/ctng-5700/bin/arm-spica-linux-uclibcgnueabi-gcc -Wp,-MD,/home/spica/i5700.2/modules_cyanogen/mfc/.MfcSfr.o.d  -nostdinc -isystem /opt/ctng/lib/gcc/arm-spica-linux-uclibcgnueabi/4.4.3/include -I/home/spica/i5700.2/kernel/cyanogen/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c64xx/include -Iarch/arm/plat-samsung/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O3 -marm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DLINUX -DDIVX_ENABLE  -DMODULE -O3 -marm -mfpu=vfp -mtune=arm1176jzf-s -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(MfcSfr)"  -D"KBUILD_MODNAME=KBUILD_STR(s3c_mfc)"  -c -o /home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.o /home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.c

deps_/home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.o := \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.c \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcTypes.h \
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
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/posix_types.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/Mfc.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcMemory.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/LogMsg.h \
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
  /home/spica/i5700.2/modules_cyanogen/mfc/Prism_S.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcMutex.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcIntrNotification.h \
  include/linux/delay.h \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /opt/ctng/lib/gcc/arm-spica-linux-uclibcgnueabi/4.4.3/include/stdarg.h \
  include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/bitops.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/dynamic_debug.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/div64.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/delay.h \
  /home/spica/i5700.2/kernel/cyanogen/arch/arm/include/asm/param.h \
    $(wildcard include/config/hz.h) \

/home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.o: $(deps_/home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.o)

$(deps_/home/spica/i5700.2/modules_cyanogen/mfc/MfcSfr.o):
