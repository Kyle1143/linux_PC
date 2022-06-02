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
	{ 0x92a26442, __VMLINUX_SYMBOL_STR(of_find_backlight_by_node) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6306d909, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xb6faf8a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_suspend) },
	{ 0xf9ded91c, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x73a13c37, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_init_with_funcs) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x94df6423, __VMLINUX_SYMBOL_STR(drm_atomic_helper_resume) },
	{ 0x684525a9, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_set_suspend_unlocked) },
	{ 0x3314bb3a, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0xfd2dbcd8, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x45f57cd1, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x1833ce53, __VMLINUX_SYMBOL_STR(drm_fb_cma_prepare_fb) },
	{ 0xd4abfbee, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x98618b77, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x6c5ec758, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x6c8de651, __VMLINUX_SYMBOL_STR(drm_simple_display_pipe_init) },
	{ 0x5d88742d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0xe029ffb5, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfae026cd, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0xcc337fd5, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_restore_mode) },
	{ 0x3454ba40, __VMLINUX_SYMBOL_STR(drm_fb_cma_create_with_funcs) },
	{ 0xe25d4b2e, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9ab12ea0, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7c24d500, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x8e897994, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x842bc5d7, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x7da62109, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xc2acc033, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x986dc1, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check) },
	{ 0xe7f143db, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfa65616f, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd154378d, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_import_sg_table) },
	{ 0x8beb5c68, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf0e6b55f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_shutdown) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd7e0a7d9, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x1148b623, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_fini) },
	{ 0x46d65d8b, __VMLINUX_SYMBOL_STR(drm_gem_cma_free_object) },
	{ 0x484ee0ae, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0xf08621fd, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x84a203c6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x895d8194, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x97d07eb9, __VMLINUX_SYMBOL_STR(drm_atomic_helper_best_encoder) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";


MODULE_INFO(srcversion, "E5EACFCCF53B10E31260020");
