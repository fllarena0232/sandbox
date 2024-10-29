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
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xaacc8031, __VMLINUX_SYMBOL_STR(touchscreen_report_pos) },
	{ 0xa597ee71, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1c23156f, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x94a477ba, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xe43d4594, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf95913f2, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8c6765af, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xd117cade, __VMLINUX_SYMBOL_STR(touchscreen_parse_properties) },
	{ 0x307920e6, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb299cc9b, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fcd3fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xcab57c00, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("i2c:exc3000");

MODULE_INFO(srcversion, "7FED486B86C7279C10C8E62");
