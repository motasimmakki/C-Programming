#include<stdio.h>

int main(){
	int num,i,flag=0;
	printf("Enter a number to check weather it is prime or not :\n");
	scanf("%d",&num);
	for(i=num-1;i>1;i--){
		if(num%i==0){
			flag++;
		}
	}
	if(flag!=0){
		printf("Number is Not Prime .\n");
	}
	else{
		printf("Number is Prime .\n");
	}
	
	return 0;
}