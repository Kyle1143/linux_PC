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
	{ 0x898d67f8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x93b71cf6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9b3522f8, __VMLINUX_SYMBOL_STR(watchdog_register_device) },
	{ 0xc34752a2, __VMLINUX_SYMBOL_STR(watchdog_init_timeout) },
	{ 0xdac8e0c9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x948cf4ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x37f7151, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x75dffb0d, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x2ccf0318, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x20246240, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xe145495b, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xa048ffcf, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x3ee15874, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf94451ba, __VMLINUX_SYMBOL_STR(watchdog_unregister_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "64CE60B8F12FBAA3FA370FA");
