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
	{ 0xde41cd83, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xe5b1a382, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x11fe4117, __VMLINUX_SYMBOL_STR(drm_gem_cma_mmap) },
	{ 0x3f0d430b, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xd5c720b, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x119f7144, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xf8231b08, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xd5e51763, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_prepare_fb) },
	{ 0x9ffa6e9, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_update) },
	{ 0x549e77dd, __VMLINUX_SYMBOL_STR(drm_fb_cma_create_handle) },
	{ 0xdef5dff9, __VMLINUX_SYMBOL_STR(drm_fb_cma_destroy) },
	{ 0x62b59d7e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xca007fb9, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x8691888, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x42828a9b, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0x94562379, __VMLINUX_SYMBOL_STR(tinydrm_xrgb8888_to_gray8) },
	{ 0x131f21bd, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0x97497f0d, __VMLINUX_SYMBOL_STR(thermal_zone_get_temp) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8d3bde78, __VMLINUX_SYMBOL_STR(drm_fb_cma_get_gem_obj) },
	{ 0x3a26ed11, __VMLINUX_SYMBOL_STR(sched_clock) },
	{ 0x8f0cb089, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xe8b29c8a, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x9e0ab0ba, __VMLINUX_SYMBOL_STR(devm_tinydrm_register) },
	{ 0x1199b01e, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xb65f1cdf, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_init) },
	{ 0xf71074ce, __VMLINUX_SYMBOL_STR(devm_tinydrm_init) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xafce7311, __VMLINUX_SYMBOL_STR(thermal_zone_get_zone_by_name) },
	{ 0x2e0216f9, __VMLINUX_SYMBOL_STR(device_property_read_string) },
	{ 0x3b04fcf4, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xed440a4b, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x982b6776, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x8e897994, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf3f5fb8, __VMLINUX_SYMBOL_STR(tinydrm_shutdown) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,drm_kms_helper";

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "327BE4B1746881E56F1F543");
