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
	{ 0xab6c68ac, __VMLINUX_SYMBOL_STR(fsg_config_from_params) },
	{ 0x1ccb58f7, __VMLINUX_SYMBOL_STR(fsg_common_set_num_buffers) },
	{ 0x6acb4179, __VMLINUX_SYMBOL_STR(fsg_common_set_inquiry_string) },
	{ 0xa4c7c8ba, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x141fce2a, __VMLINUX_SYMBOL_STR(fsg_common_remove_luns) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfd2f67b4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9a0221c7, __VMLINUX_SYMBOL_STR(fsg_common_free_buffers) },
	{ 0x103d3c1f, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd7d3390c, __VMLINUX_SYMBOL_STR(fsg_common_set_cdev) },
	{ 0xc1bf9b2d, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x221d4e4a, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xb995cc87, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4781a5d0, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x981053fa, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xd1a3e8e0, __VMLINUX_SYMBOL_STR(fsg_common_create_luns) },
	{ 0x187896f9, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xe43b0b6b, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x1f527380, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe070a8a2, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x6dce4f4e, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x3e06aeea, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x7e26d4a5, __VMLINUX_SYMBOL_STR(fsg_common_set_sysfs) },
	{ 0x7b5b052d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x895d8194, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1fed760e, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_mass_storage,libcomposite";


MODULE_INFO(srcversion, "C5EB1E273D16BA53B93607B");
