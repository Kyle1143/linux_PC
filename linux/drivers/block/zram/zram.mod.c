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
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc341ae6d, __VMLINUX_SYMBOL_STR(zs_map_object) },
	{ 0xf238791d, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x75d87f97, __VMLINUX_SYMBOL_STR(__cpuhp_remove_state) },
	{ 0x665007e4, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x6a688464, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2ce2225, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x93bf7c0e, __VMLINUX_SYMBOL_STR(idr_alloc_cmn) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27864d57, __VMLINUX_SYMBOL_STR(memparse) },
	{ 0xb0612721, __VMLINUX_SYMBOL_STR(__memset32) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc69b7ee5, __VMLINUX_SYMBOL_STR(zs_destroy_pool) },
	{ 0xb8514910, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0xf1ea3013, __VMLINUX_SYMBOL_STR(zs_malloc) },
	{ 0x38c9d41c, __VMLINUX_SYMBOL_STR(radix_tree_delete_item) },
	{ 0x5a22612e, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2544a610, __VMLINUX_SYMBOL_STR(blk_queue_max_write_zeroes_sectors) },
	{ 0x5da67adc, __VMLINUX_SYMBOL_STR(zs_compact) },
	{ 0x699669c1, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xbf181181, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x456913ac, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe5bd22c1, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x4e810d22, __VMLINUX_SYMBOL_STR(cpumask_next) },
	{ 0x53da5844, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x958df3ac, __VMLINUX_SYMBOL_STR(zs_free) },
	{ 0x17de3d5, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x40b51c05, __VMLINUX_SYMBOL_STR(__sysfs_match_string) },
	{ 0xd788b6a0, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xd6387855, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdcab5c07, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x5699078c, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x4b922dce, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xaa013a48, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x8450b494, __VMLINUX_SYMBOL_STR(__cpuhp_state_add_instance) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbcf1f0e6, __VMLINUX_SYMBOL_STR(zs_create_pool) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xe299b8ed, __VMLINUX_SYMBOL_STR(__cpuhp_setup_state) },
	{ 0xbc576ce5, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x5903fc77, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xb92e7736, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0xf7d05587, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xae2b8e3c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x740f3780, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x81c06b1f, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x83b51a85, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x9fd3a319, __VMLINUX_SYMBOL_STR(__cpuhp_state_remove_instance) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x4cefa73d, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcbe56bc2, __VMLINUX_SYMBOL_STR(zs_get_total_pages) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe071d05d, __VMLINUX_SYMBOL_STR(zs_pool_stats) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x90a1004a, __VMLINUX_SYMBOL_STR(crypto_has_alg) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x618b9bb7, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb8792c4c, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x13c74553, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x895d8194, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1ca46eb5, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x208c77b4, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x924c46f8, __VMLINUX_SYMBOL_STR(zs_unmap_object) },
	{ 0x2b9bae74, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x1f9c8e0e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x9f6bfd5e, __VMLINUX_SYMBOL_STR(page_endio) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zsmalloc";


MODULE_INFO(srcversion, "16537A2D91790CA72DEE250");
