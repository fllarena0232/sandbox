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
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x96a4f490, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9accfd59, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x3f46f79, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x5f2d1a7c, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0xc0095ff6, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x962805c3, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x85b0a272, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x53ce4035, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x2e74c1ed, __VMLINUX_SYMBOL_STR(rpisense_get_dev) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x525e9d4f, __VMLINUX_SYMBOL_STR(rpisense_block_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4189eef0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x3ec905b5, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x4dce1fb2, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core";

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "FC554BC5F2903919A643A1E");
