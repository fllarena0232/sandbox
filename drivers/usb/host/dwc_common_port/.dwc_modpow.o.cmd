cmd_drivers/usb/host/dwc_common_port/dwc_modpow.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/usb/host/dwc_common_port/.dwc_modpow.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/9/include -I./arch/arm/include -I./arch/arm/include/generated/uapi -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -DDWC_LINUX -DDWC_LIBMODULE -DDWC_CCLIB -DDWC_NOTIFYLIB -DDWC_UTFLIB    -DKBUILD_BASENAME='"dwc_modpow"'  -DKBUILD_MODNAME='"dwc_common_port_lib"' -c -o drivers/usb/host/dwc_common_port/.tmp_dwc_modpow.o drivers/usb/host/dwc_common_port/dwc_modpow.c

source_drivers/usb/host/dwc_common_port/dwc_modpow.o := drivers/usb/host/dwc_common_port/dwc_modpow.c

deps_drivers/usb/host/dwc_common_port/dwc_modpow.o := \
    $(wildcard include/config/mach/ipmate.h) \

drivers/usb/host/dwc_common_port/dwc_modpow.o: $(deps_drivers/usb/host/dwc_common_port/dwc_modpow.o)

$(deps_drivers/usb/host/dwc_common_port/dwc_modpow.o):
