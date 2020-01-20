#include<stdio.h>

int main()
{
	int sub[5],total=0,i;
	printf("Enter The Marks Of Five Subjects:\n");
	
	// scanf("%d",&sub[0]);
	// scanf("%d",&sub[1]);
	// scanf("%d",&sub[2]);
	// scanf("%d",&sub[3]);
	// scanf("%d",&sub[4]);

	for(i=0;i<5;i++){
		scanf("%d",&sub[i]);
	}

	// total=sub[0]+sub[1]+sub[2]+sub[3]+sub[4];

	for(i=0;i<5;i++){
		total=total+sub[i];
		printf("\n{%u}---->[%d]",&sub[i],sub[i]);	
	}

	printf("\nTotal Marks : %d",total);
	printf("\nGolden Rule : %u",sub);

	return 0;
}