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
	{ 0xa7d53eae, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xd8d998f0, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf3e8cd8d, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xf3e8c2c1, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x4d3e8d78, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x4b9abd92, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x45379ad0, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xacc51031, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x56414597, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x825068db, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa486600d, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x49ffa62f, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x828310d6, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xe66dfa03, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x84719ff, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb6d6b3dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7fb8d8c6, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xccf86c85, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xd396108a, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x62afe319, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xa0b399e, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e2eb19f, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb9d9698d, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x23be5a8f, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe2dee591, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x45da3305, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x7018048, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x7952e99a, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x90f424fb, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x153797e4, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x5ab2b814, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4f7a0304, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x54b69749, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xaa6f383, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x5095f50a, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x27b3803c, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7a4a8063, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4ee89ba3, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x555259ef, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x49bbe1ae, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xde9b1b51, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x45e9de2a, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x30154f2d, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x7014f751, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x5c2d53d7, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xe640a603, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x3ffe20f1, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1f9c8e0e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x65acf8bd, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xd6f9b3ec, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CC0EA1B84F57EA1DA03135D");
