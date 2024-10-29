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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xafe984b7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8e3ad2e7, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x2e2df140, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x82ac97e2, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0x2f5f2a57, __VMLINUX_SYMBOL_STR(rps_sock_flow_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x39461d6a, __VMLINUX_SYMBOL_STR(in_egroup_p) },
	{ 0xc853222d, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8a63a3a7, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x977fe313, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xd6a34bed, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd83729db, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x81490103, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xc05a8bd3, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xf5db63c2, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xad7b7b22, __VMLINUX_SYMBOL_STR(sk_detach_filter) },
	{ 0xc8aa8d5b, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x6f8e6b35, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x6fe6a3f0, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x4184c4ea, __VMLINUX_SYMBOL_STR(skb_copy_ubufs) },
	{ 0xfc98b53f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x670a965d, __VMLINUX_SYMBOL_STR(__f_setown) },
	{ 0x1ccdab42, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xce83ca5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xf87da9d6, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x64673ef5, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x57d79c65, __VMLINUX_SYMBOL_STR(dev_get_valid_name) },
	{ 0x639ad625, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x9092b838, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x73876e14, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7dbf9238, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x30a8bd57, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5280b7ab, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x3d65a308, __VMLINUX_SYMBOL_STR(sock_recv_errqueue) },
	{ 0xe2f425e7, __VMLINUX_SYMBOL_STR(rps_cpu_mask) },
	{ 0x365d0709, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xff4dc997, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xeab4a993, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0xc88a4b7d, __VMLINUX_SYMBOL_STR(sk_attach_filter) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbc935b08, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x2000d9aa, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x70db683e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x721663db, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xe95c0394, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x315ea566, __VMLINUX_SYMBOL_STR(rps_needed) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x10583a5b, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6d70bd7e, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x2927e17c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xfceaf141, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0xfcb855f9, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x7ae38a6b, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x61563b46, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x3a038a5a, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x8ba41b9e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6d832b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xc294382a, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x4dbb773c, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1e400890, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc8a06585, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x539d9963, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x727ccd7, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x9ea4b1e9, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0x1d3e7692, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F916B5F926CA33EA9EB923D");
