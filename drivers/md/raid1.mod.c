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
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc473a870, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x601734f0, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8c0d895e, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x18728122, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x7dbb70f7, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xc9d970e9, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x96b5a618, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe0230518, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x9899180a, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x937d65c8, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xa88dc67a, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x673b3201, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x9c684972, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x45b75867, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xec199055, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x47f00bb7, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x94e54a3, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3a9fdd63, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xcd8b9052, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xc44bb1cf, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc3c71b02, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x137dbf74, __VMLINUX_SYMBOL_STR(bio_free_pages) },
	{ 0x5869c3ba, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0xcf028260, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd6712e2b, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x2665f60c, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x65735165, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x276cc86d, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x178f2c57, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x1262cddf, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x776a179c, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0x78d5542d, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x41485cdd, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xd0f316f3, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x37d21f58, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0xb7245a0, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x65d0afce, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb4b59798, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x564948ee, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x5cf7ffd0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb36d6497, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xf1ea381e, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xb9e79acf, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xeda292e0, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe4e525c1, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x391f685d, __VMLINUX_SYMBOL_STR(md_cluster_ops) },
	{ 0x2e98649b, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xaf5401ff, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x21bafedb, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xb1db076a, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8c8c87ba, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "C6D54E0FBB86E5D1EA17323");
