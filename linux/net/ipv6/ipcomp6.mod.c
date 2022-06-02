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
	{ 0x2a6e8c49, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x241d5612, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x8a633bf7, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xbb996b3d, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0xca60413, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xa8a87d4a, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xf5899921, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x8838c9fc, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9c88b607, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xae2913f, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xb869af3d, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x8d26f605, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x7094af56, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x54baaa14, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x9b516a3b, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x93837de4, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xe880e356, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x29867c1, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x54b69749, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x925028ec, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "C15B2E736BD66F150276AF9");
