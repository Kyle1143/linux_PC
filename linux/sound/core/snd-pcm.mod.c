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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xe708fff2, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xac9c7145, __VMLINUX_SYMBOL_STR(dma_release_from_dev_coherent) },
	{ 0x665007e4, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xbef710b9, __VMLINUX_SYMBOL_STR(snd_register_device) },
	{ 0x2b28cca8, __VMLINUX_SYMBOL_STR(snd_device_register) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x426b950b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x1f99db46, __VMLINUX_SYMBOL_STR(snd_card_file_remove) },
	{ 0xfca9ae83, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0x8f0cb089, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x64ea301c, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x822a33f5, __VMLINUX_SYMBOL_STR(snd_power_wait) },
	{ 0xbd66f9d4, __VMLINUX_SYMBOL_STR(snd_device_initialize) },
	{ 0x9baec43b, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xf8c1d828, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xf3cd0d92, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0xb8972014, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb2e5ae4a, __VMLINUX_SYMBOL_STR(snd_lookup_minor_data) },
	{ 0x45b4c1f6, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd4f58b36, __VMLINUX_SYMBOL_STR(of_gen_pool_get) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x987bb48c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe5bd22c1, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xb6e47100, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xe3d361cf, __VMLINUX_SYMBOL_STR(dma_alloc_from_dev_coherent) },
	{ 0xa00f4a24, __VMLINUX_SYMBOL_STR(snd_ctl_unregister_ioctl) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x806fe35c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xea623992, __VMLINUX_SYMBOL_STR(snd_timer_new) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x858739e0, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x7ee00d14, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f595b11, __VMLINUX_SYMBOL_STR(snd_major) },
	{ 0xbc576ce5, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x6b5a546d, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xa61e767e, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc9e80f0e, __VMLINUX_SYMBOL_STR(snd_card_file_add) },
	{ 0xa70ef6c5, __VMLINUX_SYMBOL_STR(snd_ctl_register_ioctl) },
	{ 0x7696ffd9, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x880cb6a3, __VMLINUX_SYMBOL_STR(pm_qos_request_active) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd1ad9762, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x11dc0fdf, __VMLINUX_SYMBOL_STR(gen_pool_dma_alloc) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0x31380354, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xff9f7945, __VMLINUX_SYMBOL_STR(snd_ctl_remove) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9e6d79f8, __VMLINUX_SYMBOL_STR(snd_info_get_str) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x54496b4, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78ed4fa3, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3698e972, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x634c6208, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x1d10a08, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x62a4e95b, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0xf6b0c552, __VMLINUX_SYMBOL_STR(snd_ctl_get_preferred_subdevice) },
	{ 0xbe0be781, __VMLINUX_SYMBOL_STR(snd_timer_notify) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x90af87c7, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x4e5fbabe, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x9455dbdf, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x68640290, __VMLINUX_SYMBOL_STR(gen_pool_free) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xd19a0c2e, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0xfc7c754a, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x4a74c285, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-timer";


MODULE_INFO(srcversion, "A3305C0FDE999D487ACD1E7");
