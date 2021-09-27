#a.c file

void* test()
{
	void* p= malloc(10)
	printf("p1:%p\n",p);
	return p;
}



# b.c file
#include <stdio.h>
#include <stdlib.h>

int main()
{
	void* p = test();
	printf("p2:%p\n",p);
	return 0;
}


# compile in ubuntu 
gcc a.c b.c && ./a.out

/*
	p1 may 0x1111111111111111
	but 
	p2 is 0x11111111
	
	need  declare void*test()
	default is 4 byte return 

*/