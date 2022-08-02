#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0xa3ee9e12, "remove_proc_entry" },
	{ 0x72f5e3b3, "input_unregister_handler" },
	{ 0x3b01e8bd, "input_unregister_device" },
	{ 0xdb59a12d, "proc_create" },
	{ 0x5d908c63, "input_register_handler" },
	{ 0xb89c078c, "input_free_device" },
	{ 0xaa7ff199, "input_register_device" },
	{ 0x768a332c, "input_allocate_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1b1e0d0a, "input_open_device" },
	{ 0x1870a103, "input_register_handle" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x37a0cba, "kfree" },
	{ 0xb89ba8d, "input_unregister_handle" },
	{ 0x4b4ad351, "input_close_device" },
	{ 0x61651be, "strcat" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf5cb25c8, "kmem_cache_alloc_trace" },
	{ 0x35216b26, "kmalloc_caches" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B7ED42A0F8E5E338E3FB46");
