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
	{ 0x55b14b7, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x2639d553, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x381b5b7c, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x35186fac, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xa64dda13, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xf5a52a2, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x7666b9d0, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x15080a47, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe0a81c33, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfe27fd33, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xb9c23100, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x94ca6b52, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x57918890, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xac3f2804, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe1284bab, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xae3678c3, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x6b55ebf1, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xbb059a83, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xd473ed8b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xbab86555, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x25ff5ef9, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6908563e, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xf82b4fee, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x61a2ded7, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x3d0dbbcd, __VMLINUX_SYMBOL_STR(filp_clone_open) },
	{ 0xf2960b7c, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x8788c67d, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xd9613067, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xa8ba2704, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xe049fbf2, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xe921f4e, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd06e99c1, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xd1548096, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0xeb48b111, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x8690d426, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4D9D8681EA9F879FF19D3EC");
