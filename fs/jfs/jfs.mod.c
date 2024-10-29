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
	{ 0x75e68304, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x830bffc4, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x14d23534, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xf3ec2fda, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbab86555, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x6ae62bdb, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe47c4856, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xcf028260, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2991c382, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x25da7076, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x859097f6, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xeae2a91d, __VMLINUX_SYMBOL_STR(dquot_writeback_dquots) },
	{ 0x1f8e8376, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf68fb2c4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc1cd96cf, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xf63bbca4, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x69d4f630, __VMLINUX_SYMBOL_STR(dquot_quotactl_ops) },
	{ 0x4a580b27, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xefc767e2, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0x3233c376, __VMLINUX_SYMBOL_STR(dquot_file_open) },
	{ 0xdb2c955b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe23a84, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xbf7e39d9, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xa8719b4c, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xd0cace31, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x60d9f8d3, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xb9afa70f, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x5460d239, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x83d3c28f, __VMLINUX_SYMBOL_STR(nobh_write_begin) },
	{ 0x63f45fb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x99012b8, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3dfb2b65, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3d42f5bc, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x673b1c0e, __VMLINUX_SYMBOL_STR(__dquot_free_space) },
	{ 0x4272ffac, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x13cadc3d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d7f7b19, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0xa9004dea, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xf2384ab6, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x24f1eb13, __VMLINUX_SYMBOL_STR(__dquot_alloc_space) },
	{ 0x9d9469e8, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xb9e79acf, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5abf6eb1, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0xdf49127f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xbfad001b, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x728cb178, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xab271178, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x4bc8a364, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xfc98b53f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x4c44a251, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x6cda5d1, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc29a9042, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xc541754f, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xf66969ff, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0xf05bb6ad, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc6c936de, __VMLINUX_SYMBOL_STR(dquot_alloc_inode) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4f50d201, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x58ca435c, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfc8f865a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa02e27e8, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0xb37d645a, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x2665f60c, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x3a58d174, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb5e43be5, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x4abe06da, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x43685bfb, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x1f1a4602, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x50610a3b, __VMLINUX_SYMBOL_STR(dquot_resume) },
	{ 0x2e6d5121, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0xd99273b7, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x33c62363, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xcb06cc2d, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x646fcd00, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x2c4225f4, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xb34c55c6, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xcb402f2a, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xe1284bab, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xae3678c3, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x471fe3ea, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0xbd44b2dd, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xb74a5fa, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x5cf7ffd0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb1db076a, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xe984fa93, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xcd585e31, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x68d2cf37, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe6d638c, __VMLINUX_SYMBOL_STR(xattr_full_name) },
	{ 0xf596e7b6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe1549d7, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xcea3b8f7, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xa569dcab, __VMLINUX_SYMBOL_STR(dquot_operations) },
	{ 0x78c7fd66, __VMLINUX_SYMBOL_STR(dquot_initialize) },
	{ 0x71f5c79b, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xe5e43a26, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x2dfe1a39, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x7d3ce1f6, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x10583a5b, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x7e65c526, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1eab10a0, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x61f8c586, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x78f65ecc, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x2a76d517, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2be7f380, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbb004d68, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xd0f33540, __VMLINUX_SYMBOL_STR(simple_get_link) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4d265743, __VMLINUX_SYMBOL_STR(dquot_drop) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x232f7fd2, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x15080a47, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x3960ec47, __VMLINUX_SYMBOL_STR(dquot_transfer) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xba5415cf, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xdabc19aa, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x96da6ed9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdd59cc62, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0a81c33, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xe2d987c6, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xa8c72df5, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x6d5cd105, __VMLINUX_SYMBOL_STR(page_get_link) },
	{ 0x111077c5, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x94ca6b52, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xf7332da9, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xac6df99e, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xa414882d, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0xfb7240f0, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x64a6d51e, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x65fda1cb, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0x82451950, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x91591e05, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x57f20ff6, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0x85fd14e6, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0x1797241a, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xa64dda13, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x19676b1a, __VMLINUX_SYMBOL_STR(nobh_write_end) },
	{ 0xad6f433d, __VMLINUX_SYMBOL_STR(write_one_page) },
	{ 0xcdc7abc7, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x57918890, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc0ace9fa, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x8400c26, __VMLINUX_SYMBOL_STR(dquot_free_inode) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x70a2555e, __VMLINUX_SYMBOL_STR(dquot_disable) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4fa11fdb, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0x6908563e, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xfe27fd33, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xca683108, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x82c3c061, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x9e6ac95e, __VMLINUX_SYMBOL_STR(nobh_truncate_page) },
	{ 0xb36d6497, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x91bd1af2, __VMLINUX_SYMBOL_STR(filemap_flush) },
	{ 0xfcd36ea, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xaa77a370, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x6798ca37, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x75a7e17a, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0xf113576, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0x934e683, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x40a361af, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1A211E692F68E1AD4473A05");
