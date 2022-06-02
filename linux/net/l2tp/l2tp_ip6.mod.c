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
	{ 0xf82b5473, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x20b9088e, __VMLINUX_SYMBOL_STR(inet6_hash) },
	{ 0x69c074c3, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x89cfd60c, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xc5a73064, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0x2ba6c09e, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xede9ad95, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4c8fc0c5, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xe98f8b63, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x2c2c9c1, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xf319e6d8, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x1e074105, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x60d3f091, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xd799da9c, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x109a9353, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xdbece8ed, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x1148ec95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x386c182a, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x5f3bd908, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xa3cd7e7d, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x753ec3ee, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x17bce8c7, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xb2a30a12, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x703875ee, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xaff0f912, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xe01919d0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xbccd161c, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xba21f078, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xdd063af3, __VMLINUX_SYMBOL_STR(__ip6_datagram_connect) },
	{ 0xc381efd8, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0x66e01e2b, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x5df0ef78, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x989db8f9, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x189a0a53, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x1fa215c8, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x48a0b01b, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf4c7912d, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x56a94f1f, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xc771e1e6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xdcc61ec3, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xf0a43b15, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x293a9ef6, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x573b5453, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x770cce7e, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xab9b8ede, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xc3e1aa51, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x353624e7, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xd1931d58, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x2fa25e4a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x28093ec4, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xd71efba9, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x61a0c68a, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xbb99238a, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xad41b701, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc99cb417, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2aa94960, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1355656d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8cbe100e, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x1c7b483e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x50193f8f, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x14164701, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x79d098fe, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "7728D5EADBD50EB7BF21105");
