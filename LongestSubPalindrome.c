#include<stdio.h>
#include<ctype.h>
#include<string.h>

typedef enum {false,true}Boolean;

Boolean isPalindrome(char strArr[]){

	int i,j,count;

	for(i=0,j=strlen(strArr)-1;i<=j;i++,j--){
		if(toupper(strArr[i])!=toupper(strArr[j])){
			return false;
		}
	}

	return true;
}

int* isSubPalindrome(char strArr[]){

	int i,j,count;
	static int indexes[2]={};
	char longPal[strlen(strArr)];

	for(i=0;i<=j; ){
		for(j=strlen(strArr)-1;i<=j;j--){
			if(toupper(strArr[i])==toupper(strArr[j])){
				if((indexes[0]==i)||(indexes[1]!=j)){
					indexes[0]=i;
					indexes[1]=j;
				}
				if(i==j){
					return indexes;
				}
				i++;
			}
		}
		indexes[0]=0;
		indexes[1]=0;
	}

	//return indexes;
}

int main(){

	char strArr[20];

	printf("Enter a String : \n");
	scanf("%s",strArr);

	printf("Result is : %d\n",isPalindrome(strArr));

	int *indexes=isSubPalindrome(strArr);
	printf("[%d]---[%d]\n",indexes[0],indexes[1]);

	return 0;
}