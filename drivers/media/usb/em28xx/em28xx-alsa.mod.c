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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x94474949, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xf097c726, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6770c12f, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x752d5dba, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x54fb975a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x5cc2794a, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x1ddc581d, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x728cb178, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x298194ef, __VMLINUX_SYMBOL_STR(em28xx_read_ac97) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xa578319f, __VMLINUX_SYMBOL_STR(em28xx_write_ac97) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17d0e254, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x8e0451f3, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x6c8a13f0, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5d5b9c98, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xb3345f81, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xa0195a8c, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x496f6fb, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x5fbea82, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3e372736, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x1515bef8, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ea6b722, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xef376e2a, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x28667e34, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8620471b, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd222973d, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x17d72d99, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xca4ad5b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7d472526, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x13467acc, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x2b6a2531, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xde10e87b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,snd";


MODULE_INFO(srcversion, "339AB4E234AC2BF667ADF65");
