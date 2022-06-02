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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9c84311b, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3270563c, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x806fe35c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x55b9cb7c, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x62b59d7e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcb27c92d, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x91e883d4, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x4cb9ff14, __VMLINUX_SYMBOL_STR(bus_for_each_dev) },
	{ 0x7696ffd9, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999a07a1, __VMLINUX_SYMBOL_STR(snd_seq_root) },
	{ 0x3698e972, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x348af00d, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9455dbdf, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd19a0c2e, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0xfc7c754a, __VMLINUX_SYMBOL_STR(snd_info_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "4563576F5BC63C96D9EFBFF");
