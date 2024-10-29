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
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91447dbd, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x6687d971, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x414f0e49, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x40b81df9, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x13b9fd06, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x3f250670, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x676c1e94, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x7947db56, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x5d1d71ea, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x31f5e72b, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x199be303, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7c68b5a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x1212506d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb5a54135, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x983b00c, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa477f95b, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x60253f67, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x596a1235, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4bdd5b02, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("i2c:radio-tea5764");

MODULE_INFO(srcversion, "3491002431FC9F3296891B5");
