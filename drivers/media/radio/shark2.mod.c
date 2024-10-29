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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13b9fd06, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7947db56, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45c14691, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x676c1e94, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xa477f95b, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x60253f67, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7c68b5a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x199be303, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb5a54135, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd40e693, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x596a1235, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3f250670, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91447dbd, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x87a49965, __VMLINUX_SYMBOL_STR(v4l2_device_set_name) },
	{ 0x983b00c, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xff8e5ce, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x77fcaa76, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6687d971, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x2dfc5f27, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1212506d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x2d34e7d2, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x414f0e49, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x40b81df9, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("usb:v077Dp627Ad0010dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "18F043680D596BA44F1BF21");
