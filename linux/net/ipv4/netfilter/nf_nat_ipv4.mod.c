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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x76a82bb2, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0xc771e1e6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2be03690, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7ccaf6fd, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x4b0be696, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x408f3d56, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xc9b5fac3, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5b7e6290, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x20377e38, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x18b8abcf, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0x8382492e, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x73811d8c, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x9c7ae946, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xdb727385, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0xee5c7314, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x3046e79b, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "7F84FE5C8149F35CF3EDB23");
