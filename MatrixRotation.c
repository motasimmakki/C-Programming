#include<stdio.h>
// #define R 3
// #define C 3

#define R 4
#define C 4

void printMatrix(int arr[R][C]){
	int i,j;

	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("[%d]\t",arr[i][j]);
		}
		printf("\n\n");
	} 
}

void swap(int *x,int *y){
	*x=(*x+*y)-(*y=*x);
}

void rotate180(int arr[R][C],int size){
	int i,j;
	
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			swap(&arr[i][j],&arr[(R-1)-i][(C-1)-j]);
			
			if(size%2!=0){
				if((i==(R-1)-i)&&(j==(C-1)-j))
					return;
			}
			else
				if((i+1==(R-1)-i)&&((C-1)-j==0))
					return;
		}
	} 
}

int main(){
	// int arr[R][C]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };

	int arr[R][C]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	printf("Matrix Is :\n\n");
	printMatrix(arr);

	printf("Matrix After Rotaion 180 Is :\n\n");
	rotate180(arr,4);
	printMatrix(arr);

	return 0;
}