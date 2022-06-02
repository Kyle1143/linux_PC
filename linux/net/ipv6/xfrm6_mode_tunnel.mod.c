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
	{ 0x1d7ed329, __VMLINUX_SYMBOL_STR(xfrm6_prepare_output) },
	{ 0x9da8f79c, __VMLINUX_SYMBOL_STR(xfrm_prepare_input) },
	{ 0xc91f2722, __VMLINUX_SYMBOL_STR(xfrm_unregister_mode) },
	{ 0xd652415b, __VMLINUX_SYMBOL_STR(xfrm_register_mode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbfbc9a94, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x189a0a53, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x20cf0f8b, __VMLINUX_SYMBOL_STR(skb_mac_gso_segment) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1355656d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "9BD1F80853C776561F8630E");
