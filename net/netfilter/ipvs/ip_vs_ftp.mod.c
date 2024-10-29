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
	{ 0x14e44816, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1e92f6ec, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xa8d293b3, __VMLINUX_SYMBOL_STR(ip_vs_conn_in_get) },
	{ 0xb00a09ec, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x3edf33d7, __VMLINUX_SYMBOL_STR(ip_vs_nfct_expect_related) },
	{ 0x636a1454, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb1eb2e1e, __VMLINUX_SYMBOL_STR(ip_vs_conn_new) },
	{ 0x6586919a, __VMLINUX_SYMBOL_STR(ip_vs_conn_put) },
	{ 0xe4565af1, __VMLINUX_SYMBOL_STR(ip_vs_tcp_conn_listen) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7266fc6f, __VMLINUX_SYMBOL_STR(ip_vs_conn_out_get) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcc8a013c, __VMLINUX_SYMBOL_STR(register_ip_vs_app_inc) },
	{ 0xd63830c9, __VMLINUX_SYMBOL_STR(register_ip_vs_app) },
	{ 0x21fe94b1, __VMLINUX_SYMBOL_STR(unregister_ip_vs_app) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";


MODULE_INFO(srcversion, "19AC3C92E29D3A98D091E16");
