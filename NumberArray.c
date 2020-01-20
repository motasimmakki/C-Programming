#include<stdio.h>

int main()
{
	long num,arr[20],j,i,count;

	printf("Enter Number to form a Array : \n");
	scanf("%d",&num);

	for(i=0;num!=0;i++)
	{
		arr[i]=num%100;
		num=num/100;
	}
	count=i;

	for(i=0,j=count-1;i!=j;i++,j--){
		arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]);
	}

	printf("Array is :\n");
	for(i=0;i<count;i++){
		printf("[%d]\t",arr[i]);
	}

	return 0;
}