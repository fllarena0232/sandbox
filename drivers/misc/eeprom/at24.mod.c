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
	{ 0x7fe27d9d, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5d1d71ea, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x31f5e72b, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3be668e0, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfae0c433, __VMLINUX_SYMBOL_STR(nvmem_register) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7729fe26, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc9656096, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe907cf13, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data_or_emulated) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x118883c8, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x2e678d51, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x4bdd5b02, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6fc29b59, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x4e5e2b08, __VMLINUX_SYMBOL_STR(nvmem_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvmem_core";

MODULE_ALIAS("acpi*:INT3499:*");
MODULE_ALIAS("i2c:24c00");
MODULE_ALIAS("i2c:24c01");
MODULE_ALIAS("i2c:24cs01");
MODULE_ALIAS("i2c:24c02");
MODULE_ALIAS("i2c:24cs02");
MODULE_ALIAS("i2c:24mac402");
MODULE_ALIAS("i2c:24mac602");
MODULE_ALIAS("i2c:spd");
MODULE_ALIAS("i2c:24c04");
MODULE_ALIAS("i2c:24cs04");
MODULE_ALIAS("i2c:24c08");
MODULE_ALIAS("i2c:24cs08");
MODULE_ALIAS("i2c:24c16");
MODULE_ALIAS("i2c:24cs16");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24cs32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24cs64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");
MODULE_ALIAS("i2c:24c1024");
MODULE_ALIAS("i2c:at24");

MODULE_INFO(srcversion, "4BE34BFDC1A8AF5E486706D");
