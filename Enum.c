#include<stdio.h>

typedef enum Boolean{false,true}Boolean;

Boolean isGreater(int a,int b){
	if(a>b)
		return true;
	return false;
}

int main(){

	int a=40,b=20;

	if(isGreater(a,b))
		printf("A is Greater\n");
	else
		printf("B is Greater\n");

	return 0;
}