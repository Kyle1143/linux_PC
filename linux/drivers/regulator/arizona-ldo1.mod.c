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
	{ 0x283cd412, __VMLINUX_SYMBOL_STR(regulator_get_bypass_regmap) },
	{ 0x2301d8f7, __VMLINUX_SYMBOL_STR(regulator_set_bypass_regmap) },
	{ 0x2201af98, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0x34f084e2, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0xee0238e5, __VMLINUX_SYMBOL_STR(regulator_map_voltage_linear) },
	{ 0xb42f7a9, __VMLINUX_SYMBOL_STR(regulator_list_voltage_linear) },
	{ 0x898d67f8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x93b71cf6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa232f42, __VMLINUX_SYMBOL_STR(of_get_regulator_init_data) },
	{ 0xfd2dbcd8, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x9ad56783, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x2ccf0318, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xf08621fd, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x200c2e88, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x21fc34be, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xbc69df05, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb9f681e2, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FA8B9C7E94F3156D0F60C35");
