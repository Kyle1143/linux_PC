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
	{ 0xc0fec0d4, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x1d765da5, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xad41b701, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdd69cdfc, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xcc7ca37c, __VMLINUX_SYMBOL_STR(skb_append) },
	{ 0x426b950b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x4502c65a, __VMLINUX_SYMBOL_STR(asc2ax) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6cb79391, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xad73041f, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xcdfe35a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x48bcf98d, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0xacc51031, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7cdd013a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x5083de1b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x46891f1c, __VMLINUX_SYMBOL_STR(ax25_linkfail_release) },
	{ 0xd71efba9, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xccdc2ac6, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x1ca247af, __VMLINUX_SYMBOL_STR(ax25_register_pid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3c4f0cff, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x2ba6c09e, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xfd64abdb, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xede9ad95, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe9c76581, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x1148ec95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x6049c272, __VMLINUX_SYMBOL_STR(__sock_queue_rcv_skb) },
	{ 0x755ab8c7, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x65382930, __VMLINUX_SYMBOL_STR(ax25_find_cb) },
	{ 0x28093ec4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc99cb417, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5e159535, __VMLINUX_SYMBOL_STR(ax25_listen_release) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0xa161114a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd43ecbf1, __VMLINUX_SYMBOL_STR(null_ax25_address) },
	{ 0xc59a32ff, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x578eca1f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8cbe100e, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x242852b9, __VMLINUX_SYMBOL_STR(ax25_uid_policy) },
	{ 0x62451f4, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x21cb6238, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6c9c29f2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x9fd86d33, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0x29ea2ec7, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x21f054c7, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2f1422e3, __VMLINUX_SYMBOL_STR(ax25_send_frame) },
	{ 0xe01919d0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc6de4215, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6ef5b13, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x109a9353, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf49218b3, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb2a30a12, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb9f59303, __VMLINUX_SYMBOL_STR(_copy_from_iter_full) },
	{ 0xdc85bba8, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x1cc4acc0, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x8ec1f0f6, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62a32724, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x8ede9e26, __VMLINUX_SYMBOL_STR(ax25_protocol_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6f5696fb, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc0292822, __VMLINUX_SYMBOL_STR(ax25_listen_register) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbea50261, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x48b6f909, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa250d3b8, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x325e2acf, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xe5774658, __VMLINUX_SYMBOL_STR(ax25_display_timer) },
	{ 0xc1444946, __VMLINUX_SYMBOL_STR(ax25cmp) },
	{ 0x62e4ed0b, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x71ca80b1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xee02e420, __VMLINUX_SYMBOL_STR(ax25_findbyuid) },
	{ 0xf4f140ef, __VMLINUX_SYMBOL_STR(ax25_linkfail_register) },
	{ 0x53dea1ff, __VMLINUX_SYMBOL_STR(ax2asc) },
	{ 0x2fa25e4a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "ED9A8B45739CE3B255775CC");
