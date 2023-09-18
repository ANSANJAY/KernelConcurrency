#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init test_hello_init(void)
{
    pr_info("%s: In init NR_CPUs=%d\n", __func__, NR_CPUS);
    pr_info("Number of cpus available:%d\n", num_online_cpus());
    return -1;
}

static void __exit test_hello_exit(void)
{
    pr_info("%s: In exit\n", __func__);
}

module_init(test_hello_init);
module_exit(test_hello_exit);
