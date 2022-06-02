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
	{ 0xbaac22b1, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd14ff605, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf238791d, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x426b950b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x40f61b96, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xfe90c4a6, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xaedd8dc5, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x9870029b, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x69c2a64f, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x872455ee, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9358f8ee, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfc317c7f, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xa10b5c11, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf7d95541, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0x822d68f1, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x4b922dce, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x62b59d7e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x89bc9c07, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc0287f17, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x4d8e5472, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xfe2a1706, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xbf94e944, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x3b7dbfaa, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x83b51a85, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x45d1c1d8, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x536e1944, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x78293b1e, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x2406754, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc1fb5247, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x5a45c812, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x9adfd0bb, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x618b9bb7, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xffb3ae7a, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x9ffc35d4, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x13c74553, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xf7008c99, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "D54BFD67ABD298FDAED4ADB");
