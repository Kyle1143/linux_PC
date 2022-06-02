#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xc4248ad2, __VMLINUX_SYMBOL_STR(tinydrm_swab16) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdef5dff9, __VMLINUX_SYMBOL_STR(drm_fb_cma_destroy) },
	{ 0xa216cb58, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe1595c1a, __VMLINUX_SYMBOL_STR(tinydrm_xrgb8888_to_rgb565) },
	{ 0x1199b01e, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0x8f0cb089, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xdf3cc2e5, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xbae27cb5, __VMLINUX_SYMBOL_STR(tinydrm_spi_max_transfer_size) },
	{ 0xacc51031, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xf71074ce, __VMLINUX_SYMBOL_STR(devm_tinydrm_init) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x97106714, __VMLINUX_SYMBOL_STR(memdup_user_nul) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x93c9712e, __VMLINUX_SYMBOL_STR(tinydrm_spi_transfer) },
	{ 0x114dfab1, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3c4f0cff, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3710b6ea, __VMLINUX_SYMBOL_STR(drm_fb_cma_debugfs_show) },
	{ 0x65024e78, __VMLINUX_SYMBOL_STR(tinydrm_disable_backlight) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfa5935b2, __VMLINUX_SYMBOL_STR(tinydrm_merge_clips) },
	{ 0x8d3bde78, __VMLINUX_SYMBOL_STR(drm_fb_cma_get_gem_obj) },
	{ 0xf8bac78e, __VMLINUX_SYMBOL_STR(tinydrm_spi_bpw_supported) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x99ea22c8, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x8e897994, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x131f21bd, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0xb05a1fb9, __VMLINUX_SYMBOL_STR(tinydrm_memcpy) },
	{ 0xb65f1cdf, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_init) },
	{ 0x549e77dd, __VMLINUX_SYMBOL_STR(drm_fb_cma_create_handle) },
	{ 0xe4dc77b2, __VMLINUX_SYMBOL_STR(drm_get_format_name) },
	{ 0x62a32724, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x982b6776, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x42828a9b, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0x65b11e18, __VMLINUX_SYMBOL_STR(tinydrm_enable_backlight) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tinydrm,drm_kms_helper,drm";


MODULE_INFO(srcversion, "BA13CC01576B7F8130030C7");
