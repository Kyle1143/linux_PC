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
	{ 0x895d8194, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x426b950b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc5c4ab08, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x9c15539a, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x28e3e7d5, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0xc5e626f7, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x26db0187, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xe8397a55, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x160b8ad1, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0xe8c7e0d0, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x777231aa, __VMLINUX_SYMBOL_STR(iscsi_eh_cmd_timed_out) },
	{ 0x17319291, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xc429be4, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xe6d7f1b4, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x92fd63a9, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xe4a3c667, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x40987c3b, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x3e0138c8, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xdea4e5a5, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x5a55bff5, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xcac8e876, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e344907, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x12fe0806, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x72f73c08, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x88ae88bb, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xe1c5384e, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xcf263902, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x6f583217, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xcd2bf5a8, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0xaea5596b, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2b7289d4, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xa916e209, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x7e169588, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x416ca5f4, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xafc4c802, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xfc0df3f6, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x96f11965, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x102429d7, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xae196d, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xc0080acb, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xf7ee38a8, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfc360520, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x4cefa73d, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x8cbe100e, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6b5a546d, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2ba6c09e, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe33d9d9, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xf7ab09ae, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xc3570ed5, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x9fac0a4a, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x995006dd, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9555744, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5704c260, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xb0078c2b, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x7d7ecb3c, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x79a4a3aa, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x7f289e7f, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb3d07ed3, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x12e291e1, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x5692d0d9, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2f25a4df, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "0B3E84A41B24AC4DED0DF28");
