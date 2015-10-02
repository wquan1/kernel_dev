/*
 * Task 01 of the Eudyptula Challenge
 *
 * refer to http://www.tldp.org/LDP/lkmpg/2.6/lkmpg.pdf hello-4.c
 *
 */

#include <linux/module.h>    // Needed by all kernel modules
#include <linux/kernel.h>    // Needed for KERN_DEBUG
#include <linux/init.h>      // Needed for __init and __exit macros

static int __init task01_init(void)
{
    printk(KERN_DEBUG "Hello world!\n");
    return 0;
}

static void __exit task01_exit(void)
{
    printk(KERN_DEBUG "exit task01 kernel module.\n");
}

module_init(task01_init);
module_exit(task01_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("fakewing");
MODULE_DESCRIPTION("Task 01 of the Eudyptula Challenge");
