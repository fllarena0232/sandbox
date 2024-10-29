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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbc0d71c3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa3126341, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xa85f0232, __VMLINUX_SYMBOL_STR(fbtft_unregister_backlight) },
	{ 0x492ae403, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x57a0068d, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x254fcaaf, __VMLINUX_SYMBOL_STR(fbtft_probe_common) },
	{ 0x35c244b5, __VMLINUX_SYMBOL_STR(fbtft_remove_common) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Csolomon,ssd1351");
MODULE_ALIAS("of:N*T*Csolomon,ssd1351C*");

MODULE_INFO(srcversion, "45F9F59E9F8803DBD4A6DA7");
