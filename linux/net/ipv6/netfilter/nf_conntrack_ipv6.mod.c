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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xad41b701, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x69df19f7, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xf5b5f613, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_sctp6) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1ff83b01, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x938d6074, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x9f017f32, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x2e46a60, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf14198d7, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xdfe41e02, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x87ce7da1, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xf36ea9f4, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x4bda367f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xc4f96350, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x63720c72, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc99cb417, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x86b7ff07, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xcecc9d96, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0xfe77c6b, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2abc289a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9617e0e6, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x7aeb25ce, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xaa192c2e, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x5376db09, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x9ec93e84, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0x2ee5e7dc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x301d08c0, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2a962884, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_dccp6) },
	{ 0xbf3c682b, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x7aa9a68d, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x28e8e50d, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x9dfd6042, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xcc5291be, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udplite6) },
	{ 0xb0db4bee, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xe0f58eea, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x434387db, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90502ffc, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6,ipv6";


MODULE_INFO(srcversion, "5152E7E48AA561F2B5BE684");
