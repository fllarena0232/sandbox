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
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4951ecaa, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7ec8c215, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xb0a68e97, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x9221e043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xe8e09107, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cgoogle,voicehat");
MODULE_ALIAS("of:N*T*Cgoogle,voicehatC*");

MODULE_INFO(srcversion, "9CBE889037EF3F4F4958705");
