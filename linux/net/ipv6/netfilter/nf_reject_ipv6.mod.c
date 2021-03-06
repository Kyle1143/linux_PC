#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xb1c238f1, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc771e1e6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x26a3baca, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9dcfb155, __VMLINUX_SYMBOL_STR(l3mdev_master_ifindex_rcu) },
	{ 0xc6de4215, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xa95dd9f0, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xaa192c2e, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8e7388a5, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x189a0a53, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xe4c23e47, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x71ca80b1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x612963f6, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x9dfd6042, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xb0db4bee, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "B77478A5AFAC08AA8480625");
