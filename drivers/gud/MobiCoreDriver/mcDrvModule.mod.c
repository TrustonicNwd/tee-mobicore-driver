#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1977089d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xcf866711, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2b29f348, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x900b8c27, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x262f20a8, __VMLINUX_SYMBOL_STR(local_clock) },
	{ 0xdf916354, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x9f03906b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xec0fc39c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x57e717ef, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb391fd24, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x561e4b77, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xb5989570, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x35c03aa0, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x67a71e2a, __VMLINUX_SYMBOL_STR(scm_call) },
	{ 0x650bb6fa, __VMLINUX_SYMBOL_STR(is_scm_armv8) },
	{ 0x17e36764, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xa234e8b5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6ec77520, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x22a67f49, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xc71208a5, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc6adceb5, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xbd323548, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x45486fb2, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x877bc9e8, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd9f08a72, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x3af3df0e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe9b9453f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf4a0091d, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xbfd79488, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xf8e398fc, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc38efdd9, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9277598c, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x85ace9aa, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7b6edd4, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0xdeeb47f7, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xc88966c, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0x15e34667, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x47ef038f, __VMLINUX_SYMBOL_STR(scm_call2) },
	{ 0x4d4e5331, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x866356f9, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x29bb2d9, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x979ee240, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xd0e8c9b1, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcdc6db5b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb3b6260c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x75bb44bf, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xe05e5afe, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2beb418e, __VMLINUX_SYMBOL_STR(might_fault) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3302cf5b, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3b27f962, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x6baea49d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x53250daa, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe864a0cb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1c9b4666, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x5485a49d, __VMLINUX_SYMBOL_STR(__dma_flush_range) },
	{ 0xd198110f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xb543dbf9, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x19a085e7, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xa310025c, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x93377a24, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x15ccd6f2, __VMLINUX_SYMBOL_STR(is_vmalloc_addr) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

