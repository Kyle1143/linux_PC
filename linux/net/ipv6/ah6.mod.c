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
	{ 0x2a6e8c49, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x241d5612, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xa8a87d4a, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xf5899921, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x8838c9fc, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x9c88b607, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x67ca994c, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x2b7289d4, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4cefa73d, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb1ae154b, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x1355656d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xbfbc9a94, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb4c6db64, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xc15eeb7, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x5b870bdb, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x578eca1f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x174a3810, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf5ae3253, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x93837de4, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xe880e356, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x29867c1, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x54b69749, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x925028ec, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "FA17E648F46A228A5359776");
