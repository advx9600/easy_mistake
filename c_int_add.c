#include <stdio.h>

int main()
{
	int a =1;
	a= (a++)%3;
	printf("a:%d\n",a);
	a= (a++)%3;
	printf("a:%d\n",a);
	return 0;
}
