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
	{ 0xdf3cc2e5, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x3c4f0cff, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x62a32724, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xa1688a49, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xd6387855, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xf6bf57ba, __VMLINUX_SYMBOL_STR(genl_register_family) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xb287537b, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9b8cf3f8, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xa48584a1, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfd1b65ac, __VMLINUX_SYMBOL_STR(blk_mq_unique_tag) },
	{ 0xbb9935a2, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xeedd9187, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0xb3d87aea, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0x11b976b4, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x32104ce5, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x114dfab1, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x96005ad1, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7fafcb5a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x41290fb5, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x24a2f282, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xa4011712, __VMLINUX_SYMBOL_STR(blk_mq_update_nr_hw_queues) },
	{ 0xb995cc87, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x96f11965, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85ded073, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd14ff605, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x9ed920bb, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0xd33f4f47, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xa61e767e, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbbcbfbed, __VMLINUX_SYMBOL_STR(blk_mq_unquiesce_queue) },
	{ 0x2a510915, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0x911865b3, __VMLINUX_SYMBOL_STR(blk_mq_quiesce_queue) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xa34e2825, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf49c9925, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x6a688464, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x4b922dce, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x6ca9db54, __VMLINUX_SYMBOL_STR(refcount_dec_and_mutex_lock) },
	{ 0x83b51a85, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x38c9d41c, __VMLINUX_SYMBOL_STR(radix_tree_delete_item) },
	{ 0x3ffcdd3d, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x618b9bb7, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x8e4b624c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xff9373e0, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x4e25b59b, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x5699078c, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x949acffd, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xda492fdb, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x93bf7c0e, __VMLINUX_SYMBOL_STR(idr_alloc_cmn) },
	{ 0xf238791d, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x72d65623, __VMLINUX_SYMBOL_STR(blk_mq_requeue_request) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe509aab1, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0xacc51031, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa216cb58, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x6b5a546d, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xae196d, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x4bfc3083, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x208c77b4, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x629061c7, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0x81c06b1f, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x13c74553, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x1ca46eb5, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4a74c285, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6c9c29f2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x93c5561d, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x7b9789f2, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf0646534, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x963e3d46, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0x5d9d8f6a, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x882cca5a, __VMLINUX_SYMBOL_STR(blk_mq_request_started) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x699669c1, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xce156f76, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x700ab71, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xc6de4215, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfe77c6b, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8D1C1E3110E89D7A8F1C9B7");
