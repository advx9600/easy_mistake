/******
 *
 * use ioctl,module not call shf_unlock_ioctl
 *
 *
 * see kernel/fs/ioctl.c do_vfs_ioctl
 * some cmd already used for system
 *
 *
 ****/
#include <linux/module.h>
#include <linux/init.h>
#include <linux/mii.h>
#include <linux/phy.h>
#include <linux/miscdevice.h>


// module
static long shf_unlocked_ioctrl(struct file *file, unsigned int cmd,
                            unsigned long arg)
{
	printk("shf_unlocked_ioctrl\n");
	return 0;
}

struct file_operations shf_fops = {
        .owner = THIS_MODULE,
        .unlocked_ioctl = shf_unlocked_ioctrl,
};

static struct miscdevice shf_device = {
    .minor = MISC_DYNAMIC_MINOR,
    .name = "my_shf",
    .fops = &shf_fops,
};

// app

int main(int argc ,char* argv[])
{
        int ret = 0;
        int fd = -1;
        unsigned long val;
        int i;


do{


        printf("pid:%d\n",getpid());
        getchar();

        fd = open("/dev/my_shf",O_RDWR);
        if (fd < 0){
                perror("open");
                break;
        }


        if (ioctl(fd, 0x5451,&val)){
        //if (ioctl(fd, 2,&val)){
		perror("ioctl");
		break;
        }

}while(0);

        if (fd > -1){
                close(fd);
                fd = -1;
        }
        return ret;
}


