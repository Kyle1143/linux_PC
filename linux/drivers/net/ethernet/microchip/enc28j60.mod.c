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
	{ 0xce8765f4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x62b59d7e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xca007fb9, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x53354ae3, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc59a32ff, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x28889eb, __VMLINUX_SYMBOL_STR(of_get_mac_address) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9c33b36d, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfb41ce78, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x4a054469, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x71ca80b1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x880156d0, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbb1dc304, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x70aa18e9, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x80e4ea63, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdf2d5728, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x25e74eb2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e897994, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe49a8c4e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb995cc87, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x795b774c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa161114a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x48b6f909, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "F389A0D8E9CCE15A43DFBA8");
