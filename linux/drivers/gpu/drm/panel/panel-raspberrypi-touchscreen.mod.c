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
	{ 0xfd130cba, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_unregister) },
	{ 0x7ef2cb4c, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_register_full) },
	{ 0xbd927722, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xc4695e0e, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0xd862f1a4, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0xf08621fd, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x77e087d8, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0xfd2dbcd8, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdc9e0a6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xd7e0a7d9, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0xe25d4b2e, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x9ab12ea0, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x7696ffd9, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x4c74c70c, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0xef3c1cf0, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0x9edbb769, __VMLINUX_SYMBOL_STR(mipi_dsi_detach) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27526b77, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

MODULE_ALIAS("of:N*T*Craspberrypi,touchscreen");
MODULE_ALIAS("of:N*T*Craspberrypi,touchscreenC*");

MODULE_INFO(srcversion, "93911506D0FD6586963F8B1");
