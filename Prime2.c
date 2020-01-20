#include<stdio.h>

int main(){
	int num,i;
	printf("Enter a Number to check Weather it is Prime or Not !\n");
	scanf("%d",&num);
	for(i=num-1;i>1;i--){
		if(num%i==0){
			printf("Number Is Not Prime .\n");
			return 0;
		}
	}
	printf("Number Is Prime .\n");

	return 0;
}