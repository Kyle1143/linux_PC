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
	{ 0x2b7b5b11, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xb1c238f1, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x499c9ed7, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_deregister) },
	{ 0xab99ff34, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x61a0c68a, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc771e1e6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2b9bb9cc, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x49602765, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x7cdd013a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x17aee705, __VMLINUX_SYMBOL_STR(dst_cache_set_ip6) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfd2f67b4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xccdc2ac6, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0xa839fa12, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x695b4e7, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x27391c3a, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x4e810d22, __VMLINUX_SYMBOL_STR(cpumask_next) },
	{ 0x1355656d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5c81b5cc, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x17de3d5, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcea62e97, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x32b890e3, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x62849ac7, __VMLINUX_SYMBOL_STR(dev_valid_name) },
	{ 0xa161114a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc59a32ff, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfe77c6b, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf1bdb356, __VMLINUX_SYMBOL_STR(dst_cache_get) },
	{ 0x578eca1f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x25bcc099, __VMLINUX_SYMBOL_STR(gro_cells_receive) },
	{ 0xbb99238a, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x21cb6238, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc7148b48, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xf16bc830, __VMLINUX_SYMBOL_STR(ipv6_dev_get_saddr) },
	{ 0x437eb1df, __VMLINUX_SYMBOL_STR(ipv6_mod_enabled) },
	{ 0xe98d9d05, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xe9474bde, __VMLINUX_SYMBOL_STR(dst_cache_init) },
	{ 0xa95dd9f0, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0x54b69749, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xada38766, __VMLINUX_SYMBOL_STR(dst_cache_destroy) },
	{ 0xdc85bba8, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xcf96af1b, __VMLINUX_SYMBOL_STR(__get_hash_from_flowi6) },
	{ 0x4a054469, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x5ac1feb8, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x9f54ead7, __VMLINUX_SYMBOL_STR(gro_cells_destroy) },
	{ 0x73fcd872, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680fdeae, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x96837959, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1b95ee6f, __VMLINUX_SYMBOL_STR(gro_cells_init) },
	{ 0x1c7b483e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x956b5898, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe57526f3, __VMLINUX_SYMBOL_STR(ip6tun_encaps) },
	{ 0xd94d4cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8e7388a5, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x189a0a53, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x8bdd3696, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_register) },
	{ 0x612963f6, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x6013d761, __VMLINUX_SYMBOL_STR(ipv6_push_frag_opts) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "180A014C3A77DBE8A12F894");
