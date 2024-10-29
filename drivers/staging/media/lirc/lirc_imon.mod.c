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
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2639d553, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa7acf0f1, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x2c0402d5, __VMLINUX_SYMBOL_STR(lirc_register_driver) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xde10e87b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x8e9a688b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3eb0a460, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x82ff7d15, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x2b6a2531, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x4dca738, __VMLINUX_SYMBOL_STR(lirc_unregister_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xad735a10, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf097c726, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5fbea82, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lirc_dev";

MODULE_ALIAS("usb:v0AA8p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pFF30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AA8pFFDAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2pFFDAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "290A3A6A2B139B4AB51AA69");
