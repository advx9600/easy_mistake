#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k;

    for (i = 1;i< 200; i++ )
    {
        char file[1024]= "%d";
        sprintf(file,file,i);
        printf("%s\n",file);
    }

    return 0;
}
