cmd_/home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.o := /opt/ctng-5700/bin/arm-spica-linux-uclibcgnueabi-gcc -Wp,-MD,/home/spica/i5700.2/modules_cyanogen/mfc/.FramBufMgr.o.d  -nostdinc -isystem /opt/ctng/lib/gcc/arm-spica-linux-uclibcgnueabi/4.4.3/include -I/home/spica/i5700.2/kernel/cyanogen/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c64xx/include -Iarch/arm/plat-samsung/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O3 -marm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DLINUX -DDIVX_ENABLE  -DMODULE -O3 -marm -mfpu=vfp -mtune=arm1176jzf-s -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(FramBufMgr)"  -D"KBUILD_MODNAME=KBUILD_STR(s3c_mfc)"  -c -o /home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.o /home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.c

deps_/home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.o := \
  /home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.c \
  /home/spica/i5700.2/modules_cyanogen/mfc/MfcMemory.h \
  /home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.h \
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
  /home/spica/i5700.2/modules_cyanogen/mfc/LogMsg.h \

/home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.o: $(deps_/home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.o)

$(deps_/home/spica/i5700.2/modules_cyanogen/mfc/FramBufMgr.o):
