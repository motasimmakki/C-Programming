#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;

	printf("%u\n",p);
	printf("%u\n",(int)p);

	return 0;
}