cmd_/home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.o := /opt/ctng/bin/arm-spica-linux-uclibcgnueabi-gcc -Wp,-MD,/home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/.OCLD_asm.o.d  -nostdinc -isystem /opt/ctng/lib/gcc/arm-spica-linux-uclibcgnueabi/4.4.3/include -Iinclude  -I/home/spica/i5700.2/kernel/cri/arch/arm/include -include include/linux/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c6400/include -Iarch/arm/mach-s3c6410/include -Iarch/arm/plat-s3c64xx/include -Iarch/arm/plat-s3c/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float    -DMODULE -c -o /home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.o /home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.S

deps_/home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.o := \
  /home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.S \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/spica/i5700.2/kernel/cri/arch/arm/include/asm/linkage.h \
  /home/spica/i5700.2/kernel/cri/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
  /home/spica/i5700.2/kernel/cri/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/smp.h) \
  /home/spica/i5700.2/kernel/cri/arch/arm/include/asm/hwcap.h \

/home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.o: $(deps_/home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.o)

$(deps_/home/spica/i5700/kernel/cri/../../modules/xsr/LLD/OCLD/OCLD_asm.o):
