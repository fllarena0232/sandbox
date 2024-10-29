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
	{ 0x45072cd, __VMLINUX_SYMBOL_STR(nf_ct_port_nla_policy) },
	{ 0x3f5b1415, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_to_tuple) },
	{ 0x62813e5c, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_tuple_size) },
	{ 0xb66a843b, __VMLINUX_SYMBOL_STR(nf_ct_port_tuple_to_nlattr) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x847e6486, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x3b39b766, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e9e4c20, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x85df5fc5, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x791408f4, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4997c26c, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xe028fa7a, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0xe064a267, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x3dfb2b65, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "C6FB186EFDD3DCA4861F450");
