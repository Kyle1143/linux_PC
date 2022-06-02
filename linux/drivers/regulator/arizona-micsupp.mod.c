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
	{ 0xaaf273c6, __VMLINUX_SYMBOL_STR(regulator_is_enabled_regmap) },
	{ 0x2201af98, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0x34f084e2, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0xee4ef15f, __VMLINUX_SYMBOL_STR(regulator_map_voltage_linear_range) },
	{ 0x77c7a3b8, __VMLINUX_SYMBOL_STR(regulator_list_voltage_linear_range) },
	{ 0x898d67f8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x93b71cf6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa232f42, __VMLINUX_SYMBOL_STR(of_get_regulator_init_data) },
	{ 0x9ad56783, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xf08621fd, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x200c2e88, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0x21fc34be, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x30922ebb, __VMLINUX_SYMBOL_STR(snd_soc_component_force_enable_pin) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1eafd493, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xff6c594f, __VMLINUX_SYMBOL_STR(snd_soc_component_disable_pin) },
	{ 0xbc69df05, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xf2750853, __VMLINUX_SYMBOL_STR(regulator_enable_regmap) },
	{ 0xa6413e59, __VMLINUX_SYMBOL_STR(regulator_disable_regmap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2301d8f7, __VMLINUX_SYMBOL_STR(regulator_set_bypass_regmap) },
	{ 0xb9f681e2, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "CB43FC7DFF11ECADBACDC40");
