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
	{ 0x5c547620, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x8d42b0b9, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3dd3f751, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x151b15c6, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x7ad0660a, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3d8cbe6d, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x240a67b, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x72a768c6, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_mask64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc2d71b3d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x4e41033d, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x137c3884, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xd5f6863d, __VMLINUX_SYMBOL_STR(spi_bus_type) },
	{ 0x75696d0a, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x70b81619, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xa5d86ee0, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x1ae000fe, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x91c892f3, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0xd099183c, __VMLINUX_SYMBOL_STR(gpiod_unexport) },
	{ 0xd1f60e20, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1515bef8, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9c76e387, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x871bbb3f, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xc3213a01, __VMLINUX_SYMBOL_STR(gpiod_export) },
	{ 0x64b35483, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x4ea6b722, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x35e52604, __VMLINUX_SYMBOL_STR(gpiod_get_index) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7d472526, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xe8e09107, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xb45a0b3c, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x5b453559, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xf1b24731, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "842F41C45B5705214C86495");
