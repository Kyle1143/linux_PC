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
	{ 0xb5668dd9, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7679a4f, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0xcdfe35a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xc771e1e6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7cdd013a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8364d249, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x1355656d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4bda367f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcecc9d96, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x628a32d1, __VMLINUX_SYMBOL_STR(proc_doulongvec_minmax) },
	{ 0x5c1bdf21, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x685d8490, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x578eca1f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6c9c29f2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc6de4215, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7aeb25ce, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x10234b3b, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x2ee5e7dc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbfbc9a94, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xd040fa55, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0x25f44a4b, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c3322a3, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x13d7b3bc, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x62e4ed0b, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x28e8e50d, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x9dfd6042, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xd593241b, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0xb87b616f, __VMLINUX_SYMBOL_STR(ip6_rhash_params) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "44FF9ADBC1297F1AB9C9681");
