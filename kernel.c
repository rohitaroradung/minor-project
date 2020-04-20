#include<linux/init.h>
#include<linux/moduleh>
#include<linux/kernel.h>

static int hello_init(void)
{
 printk("<l>hello world!\n");
 return 0;
}
static void hello_exit(void)
{

  printk("<l>Bye,cruelworld\n");
}
module_init(hello_init);
module_exit(hello_exit);
