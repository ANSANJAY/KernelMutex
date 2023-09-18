#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/mutex.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");

DEFINE_MUTEX(mylock);

static int __init test_hello_init(void)
{
    mutex_lock(&mylock);
    pr_info("Starting critical region\n");
    pr_info("Ending critical region\n");
    mutex_unlock(&mylock);
    return -1;
}

static void __exit test_hello_exit(void)
{
}

module_init(test_hello_init);
module_exit(test_hello_exit);
