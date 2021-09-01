#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <unistd.h>

#include <pthread.h>
#include <semaphore.h>
#include <time.h>
#include <sys/time.h>

 #include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>


static int time_count = 0;
static struct itimerval oldtv;

void set_timer()
{
    struct itimerval itv;
    itv.it_interval.tv_sec = 1;
    itv.it_interval.tv_usec = 0;
    itv.it_value.tv_sec = 1;
    itv.it_value.tv_usec = 0;
    setitimer(ITIMER_REAL, &itv, &oldtv);
}

void signal_handler(int m)
{
    time_count ++;
    printf("%d\n", time_count);
    sleep(1);
}

int main()
{
    signal(SIGALRM, signal_handler);
    set_timer();
    while(1){
	    printf("0 ");
        if(time_count==5)
        {
            printf("time_count = 5\n");
            time_count=0;
        }

    }
    return 0;
}
