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
	{ 0x18ac34c8, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x76fa2a24, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0xbccd086e, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x49b7ced7, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0x69733734, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0xe7b7913b, __VMLINUX_SYMBOL_STR(rtnl_delete_link) },
	{ 0x93352fd2, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x1215052d, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x9569f20d, __VMLINUX_SYMBOL_STR(vxlan_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdeb9a1f0, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,vxlan";


MODULE_INFO(srcversion, "F9DD22B4265A04D0529E115");
