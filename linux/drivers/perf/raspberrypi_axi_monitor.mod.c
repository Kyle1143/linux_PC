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
	{ 0x742f24d4, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x898d67f8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x93b71cf6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4f930e22, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa4ea8452, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x11b976b4, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x114dfab1, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x96005ad1, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7dd937b5, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x5da089e8, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5873de95, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x1c4f56be, __VMLINUX_SYMBOL_STR(rpi_firmware_get) },
	{ 0xfd2dbcd8, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf4e97b1a, __VMLINUX_SYMBOL_STR(rpi_firmware_property) },
	{ 0xa34e2825, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x3ec543c6, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperfC*");

MODULE_INFO(srcversion, "F5D3C3F86D41823E3F2971A");
