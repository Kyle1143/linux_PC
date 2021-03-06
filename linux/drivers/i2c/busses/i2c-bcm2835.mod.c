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
	{ 0x895d8194, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x898d67f8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x93b71cf6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5c50a61e, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x948cf4ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x9aae3c7a, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x7dd937b5, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x5da089e8, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x29dec96f, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2996a1fb, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "38907F65B8435D2F0D77CED");
