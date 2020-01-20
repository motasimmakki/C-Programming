#include<stdio.h>

int main(int argC,int *argS[]){
	int i;

	printf("%d\n",argC);

	for(i=1;i<argC;i++){
		printf("[%s]",argS[i]);
	}

	return 0;
}