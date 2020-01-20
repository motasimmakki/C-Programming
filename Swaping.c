#include<stdio.h>

int main(){
	int x,y;
	printf("Enter two numbers :\n");
	scanf("%d %d",&x,&y);
	printf("Entered value are :\n X : %d\n Y : %d\n",x,y);
	// x=x+y;
	// y=x-y;
	// x=x-y;
	x=(x+y)-(y=x);
	printf("Swaped value are :\n X : %d\n Y : %d\n",x,y);

	return 0;
}