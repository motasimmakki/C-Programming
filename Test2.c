#include<stdio.h>

int main(){
	int *a,x=10;

	a=&x;
	*a=40;

	printf("%d\n",*a);

	return 0;
}