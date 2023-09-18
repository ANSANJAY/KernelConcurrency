#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/delay.h>

MODULE_LICENSE("GPL");

LIST_HEAD(listhead);

static int __init test_hello_init(void)
{
    pr_info("Module is running on processor:%d\n", smp_processor_id());
    msleep(60000L);
    return -1;
}

static void __exit test_hello_exit(void)
{
    pr_info("%s: In exit\n", __func__);
}

module_init(test_hello_init);
module_exit(test_hello_exit);
