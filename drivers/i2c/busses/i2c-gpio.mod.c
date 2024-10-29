#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x137c3884, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x882b0900, __VMLINUX_SYMBOL_STR(i2c_bit_add_numbered_bus) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6687bfa, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x3e9d3734, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xc5844d6f, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4a06bade, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x149259a, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x608cbfb8, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x88260901, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xcf08282d, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x3d9835a6, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x13656c22, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit";

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "3AB6AD091C116F4F8EAE6C4");
