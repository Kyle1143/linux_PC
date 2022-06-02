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
	{ 0xd1783a65, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{ 0x1d416842, __VMLINUX_SYMBOL_STR(pnfs_nfs_generic_sync) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x827399dd, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0x9f282e8, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_connect) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xcd50be3, __VMLINUX_SYMBOL_STR(pnfs_generic_clear_request_commit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xba4f7fb3, __VMLINUX_SYMBOL_STR(nfs4_setup_sequence) },
	{ 0xebb182ab, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x673361e8, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xf54b3628, __VMLINUX_SYMBOL_STR(pnfs_error_mark_layout_for_return) },
	{ 0x25ade575, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_put) },
	{ 0xd4a11874, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x54bef45, __VMLINUX_SYMBOL_STR(layoutstats_timer) },
	{ 0x6c195f4d, __VMLINUX_SYMBOL_STR(nfs4_delete_deviceid) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa486600d, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x643d9ba1, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x7ef01af9, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_commit_ds) },
	{ 0x700b162f, __VMLINUX_SYMBOL_STR(nfs4_decode_mp_ds_addr) },
	{ 0x2f40387a, __VMLINUX_SYMBOL_STR(nfs_initiate_pgio) },
	{ 0x2a5a2d5f, __VMLINUX_SYMBOL_STR(nfs4_set_rw_stateid) },
	{ 0x172edb6, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_pagelist) },
	{ 0xb6d6b3dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe5c6127d, __VMLINUX_SYMBOL_STR(pnfs_generic_recover_commit_reqs) },
	{ 0x47b2aa52, __VMLINUX_SYMBOL_STR(nfs4_sequence_done) },
	{ 0x2d9cd71d, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x807dbd43, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x9d59145a, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0xccf86c85, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xca8e4dd2, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0x41adc221, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0xb4747415, __VMLINUX_SYMBOL_STR(pnfs_generic_write_commit_done) },
	{ 0xcf29c0dd, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xed1ab467, __VMLINUX_SYMBOL_STR(pnfs_generic_layout_insert_lseg) },
	{ 0x461a2277, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0xbac3cbf2, __VMLINUX_SYMBOL_STR(ns_to_timespec64) },
	{ 0x8c48f6e0, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa1c0ad7, __VMLINUX_SYMBOL_STR(pnfs_read_resend_pnfs) },
	{ 0x4e4df931, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x55c2558a, __VMLINUX_SYMBOL_STR(nfs4_find_or_create_ds_client) },
	{ 0xd697ab37, __VMLINUX_SYMBOL_STR(rpc_max_payload) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8e4a5d3f, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x4165baf1, __VMLINUX_SYMBOL_STR(pnfs_layout_mark_request_commit) },
	{ 0x657f77c8, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0x830c2566, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_add) },
	{ 0xb2b22f51, __VMLINUX_SYMBOL_STR(pnfs_layoutcommit_inode) },
	{ 0x80b90cb8, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0x13f200e4, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x56dc091, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0x1bfc8cfb, __VMLINUX_SYMBOL_STR(pnfs_generic_scan_commit_lists) },
	{ 0x69d3558d, __VMLINUX_SYMBOL_STR(pnfs_generic_rw_release) },
	{ 0x4f7a0304, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x54b69749, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x3090b861, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0xa02df320, __VMLINUX_SYMBOL_STR(nfs_map_string_to_numeric) },
	{ 0xf999267e, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_release) },
	{ 0xd08f31de, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x9adf4389, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x8530c123, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x3e2b0ba6, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x7aa597da, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xcd9e9ea5, __VMLINUX_SYMBOL_STR(pnfs_generic_prepare_to_resend_writes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd9345257, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_check_layout) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe156d165, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_read) },
	{ 0x8a73e42f, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0x1640a25f, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x98062571, __VMLINUX_SYMBOL_STR(rpc_count_iostats_metrics) },
	{ 0x30233743, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x2c4e6bd, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_write) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x96876421, __VMLINUX_SYMBOL_STR(rpc_lookup_generic_cred) },
	{ 0xe39c9886, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0xb8cd533d, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x943d5044, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x895d8194, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5f776d1a, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x706801ab, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x65acf8bd, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xe22faf2f, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "46877C81D8018617731BD08");
