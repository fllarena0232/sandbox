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
	{ 0xffb94ef0, __VMLINUX_SYMBOL_STR(_test_and_change_bit) },
	{ 0x75e68304, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0x830bffc4, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x14d23534, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x4a50149b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xc35a3d9b, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xcf028260, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0xbe89333, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xaf16907c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6d93bfcc, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf68fb2c4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xf6acec20, __VMLINUX_SYMBOL_STR(lc_find) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x56fc3ea0, __VMLINUX_SYMBOL_STR(lc_put) },
	{ 0x6b20e9ee, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x85b03c8a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x777bc288, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x771a7b2b, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0xdb2c955b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xccf19128, __VMLINUX_SYMBOL_STR(bd_link_disk_holder) },
	{ 0x58cb41b5, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xd94c17ba, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x164f9e65, __VMLINUX_SYMBOL_STR(blk_queue_split) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x63f45fb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe544ddec, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa08e4562, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5014eeb7, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xcf4b6577, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe5ab24f9, __VMLINUX_SYMBOL_STR(lc_seq_dump_details) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xb9e79acf, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xf460a486, __VMLINUX_SYMBOL_STR(lc_is_used) },
	{ 0xdf49127f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x728cb178, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x1baf3817, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xa9b67371, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xc6e4cd46, __VMLINUX_SYMBOL_STR(lc_reset) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x214edfed, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xcea6747e, __VMLINUX_SYMBOL_STR(lc_destroy) },
	{ 0xcfe08659, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xcb990a55, __VMLINUX_SYMBOL_STR(lc_try_lock) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x1d5d1802, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xe8ec7b1e, __VMLINUX_SYMBOL_STR(bd_unlink_disk_holder) },
	{ 0x4492d4ac, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x950e56ce, __VMLINUX_SYMBOL_STR(blk_set_stacking_limits) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4feade4b, __VMLINUX_SYMBOL_STR(lc_create) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x53a3e53a, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xdfdc14fa, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2665f60c, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x18ceb8cf, __VMLINUX_SYMBOL_STR(blkdev_issue_zeroout) },
	{ 0xb2ec5c3a, __VMLINUX_SYMBOL_STR(blk_queue_segment_boundary) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x498f8d96, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x779ae711, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x18eb0d78, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0x2034c74a, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd404e9b6, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x120b336a, __VMLINUX_SYMBOL_STR(__rb_insert_augmented) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x39d642d2, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7fa87c51, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xbbe7c23c, __VMLINUX_SYMBOL_STR(lc_element_by_index) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xaf5401ff, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xfae4ce30, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0xe1284bab, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x7e54fad7, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0xae3678c3, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5cf7ffd0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8c8c87ba, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb1db076a, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xe813f3bc, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x619ed575, __VMLINUX_SYMBOL_STR(lc_try_get) },
	{ 0x804aabdf, __VMLINUX_SYMBOL_STR(idr_is_empty) },
	{ 0xe95c0394, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x980a8591, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x68d2cf37, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe1549d7, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcea3b8f7, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3316845e, __VMLINUX_SYMBOL_STR(idr_get_next) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xc95437c6, __VMLINUX_SYMBOL_STR(blkdev_issue_write_same) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd212c9f0, __VMLINUX_SYMBOL_STR(lc_get) },
	{ 0x84e0214b, __VMLINUX_SYMBOL_STR(lc_committed) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0xeda292e0, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x329bd8af, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x8d4adc27, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2175b691, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x56525583, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb96a82e7, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xeb13128b, __VMLINUX_SYMBOL_STR(lc_del) },
	{ 0xd0ac4dc7, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbb004d68, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6fd1955a, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x232f7fd2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x6c3adbe6, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x2943a21f, __VMLINUX_SYMBOL_STR(kernel_accept) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x5a5ba6b3, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x96da6ed9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe9fdc258, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb4ab0ee3, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x2d2b7f4a, __VMLINUX_SYMBOL_STR(debugfs_create_symlink) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9b823afa, __VMLINUX_SYMBOL_STR(bdget) },
	{ 0x85d14197, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3f599c7, __VMLINUX_SYMBOL_STR(lc_get_cumulative) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x92d3cbf7, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x7fe27d9d, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd34d8630, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x551bd071, __VMLINUX_SYMBOL_STR(__rb_erase_color) },
	{ 0x7c842ebe, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x94e54a3, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x4df119fa, __VMLINUX_SYMBOL_STR(__bitmap_parse) },
	{ 0xb36d6497, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x7c0c003a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3e82e388, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x1e3b0b67, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xb373b69f, __VMLINUX_SYMBOL_STR(lc_seq_printf_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lru_cache";


MODULE_INFO(srcversion, "0904DF2CCF7283ACE07D07A");
