#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

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

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x367398b6, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xad41b701, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdd69cdfc, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x97ed02b8, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45379ad0, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x6cb79391, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x8fbcaf63, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0x7935dd6b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xcdfe35a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe7f7b040, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xacc51031, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa1ef4e73, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x7cdd013a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x399894a4, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x5083de1b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xbccd161c, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xd71efba9, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x695b4e7, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x3c4f0cff, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xa9acb529, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2ba6c09e, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x1355656d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfd64abdb, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xede9ad95, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe9c76581, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x1148ec95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xaf64adda, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x755ab8c7, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x28093ec4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc99cb417, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0x60d3f091, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x578eca1f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xdbece8ed, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x8cbe100e, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc87e1067, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x62451f4, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x21cb6238, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6c9c29f2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xd8c5c633, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0x29ea2ec7, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x21f054c7, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe01919d0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc6de4215, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf6ef5b13, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x109a9353, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf49218b3, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb2a30a12, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb9f59303, __VMLINUX_SYMBOL_STR(_copy_from_iter_full) },
	{ 0xdc85bba8, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x1cc4acc0, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x8ec1f0f6, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62a32724, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x66d07ffc, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbea50261, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x27799064, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xa250d3b8, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x325e2acf, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0xe4c23e47, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x62e4ed0b, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x71ca80b1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x28e8e50d, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x4f431aa, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xe9ff287d, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0x2fa25e4a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "588443B9046DA2DE44455C2");
