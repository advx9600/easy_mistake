#include <stdio.h>

char* gForceVidNegDir=NULL;
void setForceVidDir(int dir)
{
    char* set=gForceVidNegDir;
    switch(dir)
    {
        case 1:set="sendonly";break;
        case 2:set="recvonly";break;
        case 3:set=NULL;break;
    }
}

int main()
{
    setForceVidDir(1);
    printf("%s\n",gForceVidNegDir);
    return 0;
}

/*
char* set =gForceVidNegDir; 只是传值调用,即set=NULL,无法改变gForceVidNegDir的值
should be char** set =&gForceVidNegDir;
*/
