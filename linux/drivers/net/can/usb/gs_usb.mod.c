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
	{ 0x4ba0fd2f, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x7f873ed8, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xebdc0b9a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8b485ddf, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x992a18fd, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xbe5267bb, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xd47c24c4, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xdf2d5728, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x8362b46f, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x17dbc83d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xb3564bc4, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x171337af, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xc0abf063, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x197dbc64, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x3f653b74, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd68b2f4d, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x7c98ded5, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc2dfa496, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x23974023, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xcee6191d, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x9174a2a3, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x54e17459, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x60e556df, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x6f4b491b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xf7dbebd5, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x3284819e, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x93ea417, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xaa402b49, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xc9c0732f, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb995cc87, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7f9f07e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62fd3ede, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7a9f42fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "3CA8ECC7B17889CDB11879A");
