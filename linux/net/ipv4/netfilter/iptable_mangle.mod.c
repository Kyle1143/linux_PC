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
	{ 0x6c9c29f2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4bda367f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2ee5e7dc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x448897a0, __VMLINUX_SYMBOL_STR(xt_hook_ops_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xed615340, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xdd6e39ed, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x5b7e6290, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x8fdd755a, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0ddcd4d, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "D17E940FCB4AF4B312BB160");
