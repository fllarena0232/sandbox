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
	{ 0x465cab34, __VMLINUX_SYMBOL_STR(secure_ipv6_port_ephemeral) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcf56a2d2, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x791408f4, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0x6bce3d0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb7671fa2, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4f700479, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x7de729f8, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x2aa4b3a0, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x5189b999, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xff459ad2, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xa699afe7, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xe09ec408, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x891378d, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xb00a09ec, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x7c955112, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x165c541a, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x6ddd8464, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0xbc12ffba, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x880fd986, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack,ipv6";


MODULE_INFO(srcversion, "1CDCEBCE6D4926BE58A526F");
