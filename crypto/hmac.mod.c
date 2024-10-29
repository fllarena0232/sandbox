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
	{ 0xae5bad0, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x2772e1dc, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x51e0816f, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0x3cb91fad, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0x88b64805, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x8b3a2a8b, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0xf136d8d3, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x21e89fa4, __VMLINUX_SYMBOL_STR(shash_no_setkey) },
	{ 0x5251a547, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x921d581a, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x4c33559b, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xa77091a9, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x498f8d96, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0xe56cfe34, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F2543F34A87C69BBBF42DD");
