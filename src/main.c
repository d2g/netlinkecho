#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/skbuff.h>

#include "echo.h"

int init_module()
{
    int returnCode = 0;
    
    printk(KERN_DEBUG "Starting Netlink Echo\n");
    returnCode = init_nlecho();
    
    if(returnCode == 0) {
        printk(KERN_DEBUG "Netlink Echo Started\n");
    } 
        
    return returnCode;
}


void cleanup_module()
{
    dest_nlecho();
    return;    
}

