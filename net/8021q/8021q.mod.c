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
	{ 0x9ea3598f, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5a0731bf, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0x1215052d, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x49d044a2, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0xf68fb2c4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4bb29549, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x42abfa14, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0xd7d736b8, __VMLINUX_SYMBOL_STR(garp_uninit_applicant) },
	{ 0x1a32dd6e, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x8466a7eb, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xdb2c955b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x13f6e5da, __VMLINUX_SYMBOL_STR(garp_request_join) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6b90996d, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xd83729db, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xc05a8bd3, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x63f45fb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x1a7890a7, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x451f4eac, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x65a32b76, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x12c9975d, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0xb972fbdc, __VMLINUX_SYMBOL_STR(dev_add_offload) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xa4a4c9ac, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc520876c, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x27d19f11, __VMLINUX_SYMBOL_STR(garp_init_applicant) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb4305ddc, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x45d7ca54, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9da5b4b, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x6144d162, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x5b9d93c7, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x30a8bd57, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x5280b7ab, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x929a7829, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x365d0709, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xe1726fea, __VMLINUX_SYMBOL_STR(garp_register_application) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x12eb5a9, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe260a7d6, __VMLINUX_SYMBOL_STR(dev_remove_offload) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x84306586, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x27db7dc5, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x5fbbc671, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x9c5870a, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0x70db683e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x4594abd2, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xeb76278c, __VMLINUX_SYMBOL_STR(garp_request_leave) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xce222766, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2927e17c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xc7f5527d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xfcb855f9, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x85871cc0, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x7ae38a6b, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfa8ef475, __VMLINUX_SYMBOL_STR(garp_unregister_application) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x61563b46, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2bd07710, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x96da6ed9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x8ba41b9e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x710596ae, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa76f1e79, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x49f71442, __VMLINUX_SYMBOL_STR(dev_close_many) },
	{ 0xc6d832b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xea81a13d, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0xbe4323c6, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xc8a06585, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x4b8ed0f0, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_construct) },
	{ 0x18ac34c8, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x4f1a8a79, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xf806b319, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_destroy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x89178b5, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x2a60a6d, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=garp";


MODULE_INFO(srcversion, "2339713D7BED31FBB7040BD");
