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
	{ 0xa4b86400, "module_layout" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bb74392, "filp_close" },
	{ 0xd538ed46, "kernel_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfef8cf74, "vfs_statx" },
	{ 0x1b44c663, "current_task" },
	{ 0x209d914e, "filp_open" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc5850110, "printk" },
	{ 0xb3a666c0, "kmem_cache_alloc_trace" },
	{ 0x31ca542f, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CBCF0588C147FCD820B7DD2");
