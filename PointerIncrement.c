#include<stdio.h>

int main(){

	int arr[]={1,2,3,4,5};
	int *ptr[5],i;

	for(i=0;i<5;i++){
		ptr[i]=&arr[i];
	}

	for(i=0;i<5;i++){
		printf("%d\n",*(*(ptr+i)));
	}	

	return 0;
}