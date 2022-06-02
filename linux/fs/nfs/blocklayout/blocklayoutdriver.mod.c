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
	{ 0x1dfc5224, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4d0f3d9c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0xe76ed207, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x31d66e8a, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xddc08748, __VMLINUX_SYMBOL_STR(page_cache_next_hole) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc4c67b9c, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x304a1668, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x54afb144, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xc3a2be67, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x114e19b3, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x9274664a, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0xb6d6b3dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x807dbd43, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x86f27f79, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x41adc221, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x86b2a54, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x461a2277, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x90b7f1b1, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x4bda367f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7febace, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x4e4df931, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xee1879a7, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8e4a5d3f, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbb43ddcc, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0xf772fd34, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xaa4ba07f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x13f200e4, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xa61e767e, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x95cd3e60, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x35fdec48, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x4f7a0304, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x6e5408f4, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xb5495eb0, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2ee5e7dc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x304e33da, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0xd08f31de, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x7aa597da, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x98a79dac, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x30233743, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x90af87c7, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xb8cd533d, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x943d5044, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x9fca274b, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x5f776d1a, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x1f9c8e0e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x73091973, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x65acf8bd, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x4a74c285, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe22faf2f, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76232CC1B77BF2E7F66ABEB");
