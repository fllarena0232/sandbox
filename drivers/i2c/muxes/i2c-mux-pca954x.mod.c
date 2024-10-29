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
	{ 0x5d1d71ea, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x31f5e72b, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc4bf2905, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcaf6cced, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0x3e9d3734, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x85ecddb9, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0x5f9712da, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x900d5676, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xbeea083, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x256d39eb, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa75efda3, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux";

MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");

MODULE_INFO(srcversion, "B00FE9E8AC44DED8D224DFE");
