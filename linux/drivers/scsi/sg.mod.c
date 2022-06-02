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
	{ 0x426b950b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9baec43b, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd6387855, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xf7b0cc8e, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xdb7c2b58, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x4a233288, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0x7e20ba1d, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x1648d66, __VMLINUX_SYMBOL_STR(sg_scsi_ioctl) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0x6a6e580a, __VMLINUX_SYMBOL_STR(blk_trace_startstop) },
	{ 0x9db2f223, __VMLINUX_SYMBOL_STR(blk_trace_setup) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x78954817, __VMLINUX_SYMBOL_STR(blk_trace_remove) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x3b7dbfaa, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xaedd8dc5, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xf5eb86ea, __VMLINUX_SYMBOL_STR(blk_verify_command) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xb8d7f128, __VMLINUX_SYMBOL_STR(blk_rq_map_user_iov) },
	{ 0xeef528d0, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xdf08bbae, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0x7fa7a71e, __VMLINUX_SYMBOL_STR(import_iovec) },
	{ 0xea0008a4, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xf1bcf9d8, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x89bc9c07, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xf2510079, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xcbbf3ca9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x12d86225, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93bf7c0e, __VMLINUX_SYMBOL_STR(idr_alloc_cmn) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0xb3f5c92f, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xf238791d, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x5d55cfc5, __VMLINUX_SYMBOL_STR(__task_pid_nr_ns) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x35148116, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xf1f0a1ff, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaa1a5ce7, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x536e1944, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xa10b5c11, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xffb3ae7a, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x987bb48c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xb6d6b3dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9ffc35d4, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa61e767e, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbf94e944, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x136b73f8, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x7403d21f, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f7a0304, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7ee00d14, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1a96fe1c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x5eaebe1a, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9d7d2517, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x1d10a08, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x83b51a85, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x38c9d41c, __VMLINUX_SYMBOL_STR(radix_tree_delete_item) },
	{ 0xceed7f85, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x97ec1ff, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "40175A9F32870EE4F48553B");
