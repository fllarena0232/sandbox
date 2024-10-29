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
	{ 0x27db7dc5, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x7457322, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfbee593d, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x881a7c25, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x2a4e2e8e, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xed6600bc, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x29ac1a02, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x71a2f4cf, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x55ec2100, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a0ad27, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf3982182, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x3882674, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x246fb98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x8496d0e, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x38a1a54, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xc27b731a, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xa55e2463, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb73008b, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x96da6ed9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa76f1e79, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x63f45fb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xce83ca5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x2dce27e, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x674771c0, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x81490103, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5de0bfeb, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x7dbf9238, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xe31d561c, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xe42b493f, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x89ceec11, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xd84224f2, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x18ac34c8, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x2e2df140, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x9092b838, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8c57e841, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb4ee5d2e, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xcfe1e04f, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x5ecc99ae, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x274f7f77, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xafe984b7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xdc107125, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "227955B4DB5B88675CC8971");
