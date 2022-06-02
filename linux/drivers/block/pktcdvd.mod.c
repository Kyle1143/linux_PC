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
	{ 0x987bb48c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x9baec43b, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xdf3cc2e5, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x3c4f0cff, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x62a32724, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x20d32847, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xaf64adda, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x9b6f6fa9, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xdb7c2b58, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xaabeaa17, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x5903fc77, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xed1ce195, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb6d6b3dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x31d66e8a, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x629061c7, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xab74fd72, __VMLINUX_SYMBOL_STR(__blkdev_driver_ioctl) },
	{ 0x4f7a0304, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xaa4ba07f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xea2be5cd, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xb9f89c1c, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x8bf576d, __VMLINUX_SYMBOL_STR(clear_wb_congested) },
	{ 0xd48dd489, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x10ed43f0, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xf4f141ee, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x4a74c285, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x114dfab1, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x96005ad1, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xcbbf3ca9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x618b9bb7, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x2ae1afaf, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4f930e22, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa4ea8452, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x8e4b624c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x13c74553, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x740f3780, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x202a94a2, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xaa1a5ce7, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x3711d1b0, __VMLINUX_SYMBOL_STR(blkdev_get) },
	{ 0x3c0d83cd, __VMLINUX_SYMBOL_STR(bdget) },
	{ 0xd788b6a0, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf238791d, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe1dff2d, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xa61e767e, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd5b03b51, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x83b51a85, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x6a688464, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x4b922dce, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x5083de1b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb5495eb0, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xe6652210, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xae6cc85e, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x3ec543c6, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4e251c31, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x4bfc3083, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xa4922285, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xae2b8e3c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce57491a, __VMLINUX_SYMBOL_STR(bio_devname) },
	{ 0x176ccf68, __VMLINUX_SYMBOL_STR(bio_clone_fast) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0x1d5ce527, __VMLINUX_SYMBOL_STR(set_wb_congested) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xbda2195, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x290fa074, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x7f272987, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xaffe9383, __VMLINUX_SYMBOL_STR(blk_queue_split) },
	{ 0xb7febace, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x7194d91b, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x25686062, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xa216cb58, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xab090b5e, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f476e96, __VMLINUX_SYMBOL_STR(init_cdrom_command) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x136b73f8, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x10bf2f90, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xe7093b72, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xf1bcf9d8, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "05B056CC509E727E24E8E99");
