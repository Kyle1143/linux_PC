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
	{ 0x50193f8f, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x4d4e8006, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0xf6bf57ba, __VMLINUX_SYMBOL_STR(genl_register_family) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa1688a49, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa9acb529, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfe77c6b, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xce156f76, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x1e47ab94, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x549bb841, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xc8ce9fe, __VMLINUX_SYMBOL_STR(l2tp_tunnel_get) },
	{ 0xc6de4215, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb414048f, __VMLINUX_SYMBOL_STR(l2tp_session_get_nth) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0xa08e612d, __VMLINUX_SYMBOL_STR(l2tp_session_get_by_ifname) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1581acb2, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x700ab71, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x2bcbafc4, __VMLINUX_SYMBOL_STR(l2tp_tunnel_delete) },
	{ 0x468d7731, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x79d098fe, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xad4d9f22, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "ED727E824C2AA049C511B22");
