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
	{ 0xd6a34bed, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd12e5c20, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x8dea6ad6, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x8a533618, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x39f0126b, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf3e6402e, __VMLINUX_SYMBOL_STR(__bitmap_equal) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa962ce39, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x32fed8fb, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3550970d, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x2551038c, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x4885f60c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xf83d876b, __VMLINUX_SYMBOL_STR(input_class) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x6d37e1d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x49a20877, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf7f16b3f, __VMLINUX_SYMBOL_STR(input_get_new_minor) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5308a261, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xff4dc997, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xd1f60e20, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb04d1f01, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x5cf53ce2, __VMLINUX_SYMBOL_STR(input_free_minor) },
	{ 0x803be97d, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xc2c95af6, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0xa3d00cec, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc294382a, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "1A067EEEC15ABE9F29BFD3D");
