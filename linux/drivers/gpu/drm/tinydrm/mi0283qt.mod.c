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
	{ 0xa99b1e6d, __VMLINUX_SYMBOL_STR(drm_gem_cma_vm_ops) },
	{ 0x742cde00, __VMLINUX_SYMBOL_STR(drm_gem_cma_dumb_create) },
	{ 0xc0ebd0a8, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_mmap) },
	{ 0x21e3d82d, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_vunmap) },
	{ 0x877d7727, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_vmap) },
	{ 0x6ee6e44, __VMLINUX_SYMBOL_STR(tinydrm_gem_cma_prime_import_sg_table) },
	{ 0x1cdb6ceb, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_get_sg_table) },
	{ 0x1dfdc844, __VMLINUX_SYMBOL_STR(drm_gem_prime_import) },
	{ 0xafd762a6, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x178d17f9, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x63c9ed50, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x1775d5f4, __VMLINUX_SYMBOL_STR(tinydrm_gem_cma_free_object) },
	{ 0x3cb74bcf, __VMLINUX_SYMBOL_STR(mipi_dbi_debugfs_init) },
	{ 0xcacdd3e6, __VMLINUX_SYMBOL_STR(tinydrm_lastclose) },
	{ 0xde41cd83, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xe5b1a382, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x11fe4117, __VMLINUX_SYMBOL_STR(drm_gem_cma_mmap) },
	{ 0x3f0d430b, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xd5c720b, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x119f7144, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xf8231b08, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xd5e51763, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_prepare_fb) },
	{ 0x9ffa6e9, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_update) },
	{ 0x5e8bc717, __VMLINUX_SYMBOL_STR(mipi_dbi_pipe_disable) },
	{ 0xdcd503f7, __VMLINUX_SYMBOL_STR(mipi_dbi_pipe_enable) },
	{ 0x62b59d7e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xca007fb9, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9e38c3bd, __VMLINUX_SYMBOL_STR(mipi_dbi_command_buf) },
	{ 0x2a92ee4b, __VMLINUX_SYMBOL_STR(mipi_dbi_hw_reset) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9e0ab0ba, __VMLINUX_SYMBOL_STR(devm_tinydrm_register) },
	{ 0x842bc5d7, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x7c5b621b, __VMLINUX_SYMBOL_STR(mipi_dbi_display_is_on) },
	{ 0xa0cc99c8, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf1b56d4, __VMLINUX_SYMBOL_STR(mipi_dbi_init) },
	{ 0xb5838a7, __VMLINUX_SYMBOL_STR(mipi_dbi_spi_init) },
	{ 0x540a4d2, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xd6ce9af1, __VMLINUX_SYMBOL_STR(tinydrm_of_find_backlight) },
	{ 0xf4d1c31b, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xe1fc7800, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3c6e76d5, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf3f5fb8, __VMLINUX_SYMBOL_STR(tinydrm_shutdown) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,mipi-dbi";

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "89DEB5ED8ECD0827F362CC0");
