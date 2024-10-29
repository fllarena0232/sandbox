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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0xd2651e46, __VMLINUX_SYMBOL_STR(get_net_ns_by_fd) },
	{ 0xb73008b, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xaf16907c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x85b03c8a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6e08865, __VMLINUX_SYMBOL_STR(dev_change_net_namespace) },
	{ 0x58cb41b5, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5014eeb7, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x4daeadc5, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x2622141c, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x7d07517b, __VMLINUX_SYMBOL_STR(debugfs_rename) },
	{ 0xddbaef48, __VMLINUX_SYMBOL_STR(get_net_ns_by_pid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3060491f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x2ffc383a, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdab80732, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x69173b47, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5264fe60, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x803be97d, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa77cde19, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x246fb98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x884409d2, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x8c675af8, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xf7a3cd9a, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1c628f2f, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x2034c74a, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xcc19ecfe, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xbfbc32d1, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x7fa87c51, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xf0442a7c, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x93f0761a, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0x3939f8f0, __VMLINUX_SYMBOL_STR(rfkill_pause_polling) },
	{ 0x65d0afce, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xa962ce39, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6e2eda46, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x1c54897b, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x4594abd2, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xaaecf75d, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1dff880c, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x4804b2a1, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0xc781bd9f, __VMLINUX_SYMBOL_STR(rfkill_resume_polling) },
	{ 0xb7245a0, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7f7c34b, __VMLINUX_SYMBOL_STR(net_ns_type_operations) },
	{ 0x8d4adc27, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xa5319c5, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xd1f60e20, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1e8fac8e, __VMLINUX_SYMBOL_STR(wireless_nlevent_flush) },
	{ 0xbc8fc952, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xd84224f2, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x8533eddb, __VMLINUX_SYMBOL_STR(device_rename) },
	{ 0x9b8518b6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5e701a0e, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xeff1a541, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x67fe08fd, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xb4ab0ee3, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x987da390, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x4885f60c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x8f0da45, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49a20877, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x228353ae, __VMLINUX_SYMBOL_STR(__sock_create) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "A0F58D458E02CAA3DF12155");
