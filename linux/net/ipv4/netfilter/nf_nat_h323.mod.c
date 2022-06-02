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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x11c6323f, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xbbf89c9f, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x38eee2f6, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0x85d98983, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xf0fc7995, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x5d5a633e, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0xf75f67cd, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x96b7beed, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x62d90c5, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xf4060496, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x87c84e4, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xb8deecb3, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x8278fec7, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x1f3080e7, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x9dfd6042, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb5025939, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x138e03d4, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xd34c2f5a, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2e1e2096, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "A3470AC7ED658EDEEC18B0B");
