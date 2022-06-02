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
	{ 0x758d93dd, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xfd2f67b4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfe403160, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x3363c4ca, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xd94d4cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x834d1eb, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xab99ff34, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xcea62e97, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xa166aa24, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xc7148b48, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x32b890e3, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd488aa72, __VMLINUX_SYMBOL_STR(iptun_encaps) },
	{ 0xb1c238f1, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xa839fa12, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xad793c04, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xccdc2ac6, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x695b4e7, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x609440bf, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0xe4ee0bd3, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xbe5267bb, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe137a90f, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x73fcd872, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xc59a32ff, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x2f71ae4, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xa161114a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x62849ac7, __VMLINUX_SYMBOL_STR(dev_valid_name) },
	{ 0xdc85bba8, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2b7b5b11, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x1c7b483e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x57773b5, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x5c81b5cc, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x16ca6703, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x229154a5, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x644dffe3, __VMLINUX_SYMBOL_STR(ip6_err_gen_icmpv6_unreach) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x17de3d5, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe9474bde, __VMLINUX_SYMBOL_STR(dst_cache_init) },
	{ 0x4e810d22, __VMLINUX_SYMBOL_STR(cpumask_next) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xada38766, __VMLINUX_SYMBOL_STR(dst_cache_destroy) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ac1feb8, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x772a07e5, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xc771e1e6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x96837959, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x54b69749, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x680fdeae, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xfe77c6b, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "C755A27ACD24FB8B7E6F9A5");
