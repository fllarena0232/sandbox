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
	{ 0x7ae17a9, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5856eafc, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9f567401, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbbece876, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa0fcd3fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000005ACp00000304");
MODULE_ALIAS("hid:b0003g*v000005ACp0000020E");
MODULE_ALIAS("hid:b0003g*v000005ACp0000020F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000214");
MODULE_ALIAS("hid:b0003g*v000005ACp00000215");
MODULE_ALIAS("hid:b0003g*v000005ACp00000216");
MODULE_ALIAS("hid:b0003g*v000005ACp00000217");
MODULE_ALIAS("hid:b0003g*v000005ACp00000218");
MODULE_ALIAS("hid:b0003g*v000005ACp00000219");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021B");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021C");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021D");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021E");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000220");
MODULE_ALIAS("hid:b0003g*v000005ACp00000221");
MODULE_ALIAS("hid:b0003g*v000005ACp00000222");
MODULE_ALIAS("hid:b0003g*v000005ACp00000229");
MODULE_ALIAS("hid:b0003g*v000005ACp0000022A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000022B");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000250");
MODULE_ALIAS("hid:b0003g*v000005ACp00000251");
MODULE_ALIAS("hid:b0005g*v000005ACp0000022C");
MODULE_ALIAS("hid:b0005g*v000005ACp0000022D");
MODULE_ALIAS("hid:b0005g*v000005ACp00000256");
MODULE_ALIAS("hid:b0005g*v000005ACp00000255");
MODULE_ALIAS("hid:b0005g*v000005ACp00000257");
MODULE_ALIAS("hid:b0005g*v000005ACp0000022E");
MODULE_ALIAS("hid:b0003g*v000005ACp00000267");
MODULE_ALIAS("hid:b0003g*v000005ACp00000223");
MODULE_ALIAS("hid:b0003g*v000005ACp00000224");
MODULE_ALIAS("hid:b0003g*v000005ACp00000225");
MODULE_ALIAS("hid:b0003g*v000005ACp00000230");
MODULE_ALIAS("hid:b0003g*v000005ACp00000231");
MODULE_ALIAS("hid:b0003g*v000005ACp00000232");
MODULE_ALIAS("hid:b0003g*v000005ACp00000236");
MODULE_ALIAS("hid:b0003g*v000005ACp00000237");
MODULE_ALIAS("hid:b0003g*v000005ACp00000238");
MODULE_ALIAS("hid:b0003g*v000005ACp0000023F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000240");
MODULE_ALIAS("hid:b0003g*v000005ACp00000241");
MODULE_ALIAS("hid:b0003g*v000005ACp00000242");
MODULE_ALIAS("hid:b0003g*v000005ACp00000243");
MODULE_ALIAS("hid:b0003g*v000005ACp00000244");
MODULE_ALIAS("hid:b0003g*v000005ACp00000245");
MODULE_ALIAS("hid:b0003g*v000005ACp00000246");
MODULE_ALIAS("hid:b0003g*v000005ACp00000247");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024C");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024D");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024E");
MODULE_ALIAS("hid:b0003g*v000005ACp00000249");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024B");
MODULE_ALIAS("hid:b0003g*v000005ACp00000252");
MODULE_ALIAS("hid:b0003g*v000005ACp00000253");
MODULE_ALIAS("hid:b0003g*v000005ACp00000254");
MODULE_ALIAS("hid:b0003g*v000005ACp00000262");
MODULE_ALIAS("hid:b0003g*v000005ACp00000263");
MODULE_ALIAS("hid:b0003g*v000005ACp00000264");
MODULE_ALIAS("hid:b0003g*v000005ACp00000259");
MODULE_ALIAS("hid:b0003g*v000005ACp0000025A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000025B");
MODULE_ALIAS("hid:b0003g*v000005ACp00000290");
MODULE_ALIAS("hid:b0003g*v000005ACp00000291");
MODULE_ALIAS("hid:b0003g*v000005ACp00000292");
MODULE_ALIAS("hid:b0003g*v000005ACp00000272");
MODULE_ALIAS("hid:b0003g*v000005ACp00000273");
MODULE_ALIAS("hid:b0003g*v000005ACp00000274");
MODULE_ALIAS("hid:b0005g*v000005ACp00000239");
MODULE_ALIAS("hid:b0005g*v000005ACp0000023A");
MODULE_ALIAS("hid:b0005g*v000005ACp0000023B");
MODULE_ALIAS("hid:b0003g*v000005ACp0000030A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000030B");

MODULE_INFO(srcversion, "82B0BB122AED1003C4EF45E");
