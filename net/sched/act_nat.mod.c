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
	{ 0x161af05c, __VMLINUX_SYMBOL_STR(tcf_unregister_action) },
	{ 0xbe15707, __VMLINUX_SYMBOL_STR(tcf_register_action) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7de729f8, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd84224f2, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7e9090c6, __VMLINUX_SYMBOL_STR(tcf_hash_search) },
	{ 0x51e2ae27, __VMLINUX_SYMBOL_STR(tcf_hash_insert) },
	{ 0x52febd73, __VMLINUX_SYMBOL_STR(tcf_hash_create) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3ff7002, __VMLINUX_SYMBOL_STR(__tcf_hash_release) },
	{ 0x4020b24, __VMLINUX_SYMBOL_STR(tcf_hash_check) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xbebe78b4, __VMLINUX_SYMBOL_STR(tcf_generic_walker) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2bd19471, __VMLINUX_SYMBOL_STR(tcf_hashinfo_destroy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5A12BE674505F1043A8FA80");
