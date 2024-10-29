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
	{ 0xc50c2217, __VMLINUX_SYMBOL_STR(crypto_unregister_rngs) },
	{ 0x5db63c76, __VMLINUX_SYMBOL_STR(crypto_register_rngs) },
	{ 0x9f74f76b, __VMLINUX_SYMBOL_STR(crypto_alloc_rng) },
	{ 0xfeb78a1d, __VMLINUX_SYMBOL_STR(add_random_ready_callback) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe1dc1b03, __VMLINUX_SYMBOL_STR(del_random_ready_callback) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6d93bfcc, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfae4ce30, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x4c33559b, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xe56cfe34, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "70B68E5057C3565B4B2FC68");
