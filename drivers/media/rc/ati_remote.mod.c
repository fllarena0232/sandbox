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
	{ 0xb978d5b0, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x459a97d6, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xf95913f2, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1dc6d519, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xe74ec553, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xde10e87b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xca4ad5b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xe47f082d, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xb6323b5e, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcb45ca0f, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x519468b1, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x7c933ba3, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0x6d4e582f, __VMLINUX_SYMBOL_STR(rc_keydown_notimeout) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x94b1e81b, __VMLINUX_SYMBOL_STR(rc_g_keycode_from_table) },
	{ 0xa0fcd3fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5fbea82, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf097c726, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3345f81, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2b6a2531, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FAE3813C75D074AA11B720D");
