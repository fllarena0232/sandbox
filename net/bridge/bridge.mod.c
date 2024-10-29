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
	{ 0x5c547620, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x830bffc4, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xd5a9bcf8, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe2c6aaab, __VMLINUX_SYMBOL_STR(stp_proto_unregister) },
	{ 0x7cae7e66, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xb10c551f, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x7b52e38, __VMLINUX_SYMBOL_STR(rtnl_unregister) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x410cdef9, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4bb29549, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x4bef9275, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x8466a7eb, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x83073d8b, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6c833e13, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0xd94c17ba, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xd83729db, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6bce3d0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x274f7f77, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xc05a8bd3, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x2a6d2290, __VMLINUX_SYMBOL_STR(rtnl_notify) },
	{ 0x1a7890a7, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x356236b4, __VMLINUX_SYMBOL_STR(is_skb_forwardable) },
	{ 0x65a32b76, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x99b60267, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x75c5e75a, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xf499fdb2, __VMLINUX_SYMBOL_STR(rcu_barrier_bh) },
	{ 0xc520876c, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xdad8056d, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x240a67b, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x112b2ada, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0xdab80732, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x588826ae, __VMLINUX_SYMBOL_STR(ip_mc_check_igmp) },
	{ 0xcf64bb82, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9da5b4b, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xd01bff09, __VMLINUX_SYMBOL_STR(sysfs_rename_link_ns) },
	{ 0x455dd81c, __VMLINUX_SYMBOL_STR(stp_proto_register) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5b9d93c7, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x6d294e43, __VMLINUX_SYMBOL_STR(clock_t_to_jiffies) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x30a8bd57, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7615483d, __VMLINUX_SYMBOL_STR(inet_select_addr) },
	{ 0x5280b7ab, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xba2f2165, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xb41a4d7c, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x929a7829, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x365d0709, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x227c1551, __VMLINUX_SYMBOL_STR(llc_mac_hdr_init) },
	{ 0x59858835, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x3d4f42e5, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x12eb5a9, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x42f22367, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4abe06da, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6c637878, __VMLINUX_SYMBOL_STR(rtnl_register) },
	{ 0x7d5e576f, __VMLINUX_SYMBOL_STR(arp_send) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe3ea0162, __VMLINUX_SYMBOL_STR(rtnl_af_unregister) },
	{ 0x65d0afce, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x7f324f4d, __VMLINUX_SYMBOL_STR(try_to_del_timer_sync) },
	{ 0x70db683e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x4594abd2, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6067164e, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xab869f54, __VMLINUX_SYMBOL_STR(ipv6_dev_get_saddr) },
	{ 0xb7245a0, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x7616d7f9, __VMLINUX_SYMBOL_STR(rtnl_set_sk_err) },
	{ 0xf596e7b6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x59338568, __VMLINUX_SYMBOL_STR(rtnl_af_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xaf7f372, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb96a82e7, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x6d70bd7e, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x2927e17c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x4710e87f, __VMLINUX_SYMBOL_STR(brioctl_set) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xe8c39d22, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0x9b8518b6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfcb855f9, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x7ae38a6b, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xbb963abc, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x232f7fd2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x7e927f92, __VMLINUX_SYMBOL_STR(call_rcu_bh) },
	{ 0x61563b46, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x710596ae, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4d116009, __VMLINUX_SYMBOL_STR(dev_get_iflink) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xd2d17465, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xc6d832b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xea81a13d, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc8a06585, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x4b8ed0f0, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_construct) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xdc6883d2, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x18ac34c8, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x26cf0680, __VMLINUX_SYMBOL_STR(ipv6_mc_check_mld) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x151e8a61, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xf806b319, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_destroy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x2a60a6d, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=stp,llc,ipv6";


MODULE_INFO(srcversion, "4F481A5A495431F2FDBB378");
