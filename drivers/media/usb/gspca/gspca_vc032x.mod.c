#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x745e6bdc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x36c14528, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf28e3a6, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x426368cf, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x7c68b5a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x19475e24, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x98df12dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9adc66c, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0xeb592dc5, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x1212506d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v041Ep405Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0892d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0896d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0897d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp4802d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0BCCB2E6EB699BF0D9FEA23");
