#include <stdio.h>

int main()
{
	int a[10],i,j,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);

    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=n-1;i>=0;i--)
	{
	    for(j=0;j<n;j++)
	    {
		    if(i-a[j]<0)	
		       printf("*");
            else
		       printf(" ");
	    }
	    printf("\n");
	}
	
    return 0;
}