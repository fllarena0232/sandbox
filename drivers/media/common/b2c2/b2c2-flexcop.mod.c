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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x90145ee8, __VMLINUX_SYMBOL_STR(s5h1420_get_tuner_i2c_adapter) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdabfef88, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe4efe46b, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xccb50804, __VMLINUX_SYMBOL_STR(cx24113_agc_callback) },
	{ 0xe68cd4c4, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xf6a3a34, __VMLINUX_SYMBOL_STR(cx24123_get_tuner_i2c_adapter) },
	{ 0xf8ef7243, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7e7a2e92, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xc2e8ee7a, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x684e52a3, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xee728beb, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x9a11b62d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x5308a261, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x825fd87b, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x15963025, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6914b728, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x13656c22, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xcc5e312c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x5962a4cd, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x14e44816, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x68e2b935, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xa4656913, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=s5h1420,dvb-core,cx24113,cx24123";


MODULE_INFO(srcversion, "A09C41C079B8E4524B8B5C4");
