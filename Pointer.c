#include <stdio.h>

int main()
{
    int i=10;
    float f=10.0;
    int *j;
    float *p;
    j=&i;
    p=&f;
    
    printf("Value Of i : %d",i);
    printf("\nValue Of i : %d",*(&i));
    
    printf("\nValue Of i : %d",*j);
    printf("\nValue Of j : %lu",j);

    printf("\nValue Of f : %d",*p);
    printf("\nValue Of p : %lu",p);
    
    printf("\nSize Of i : %lu",sizeof(i));
    printf("\nSize Of j : %lu",sizeof(j));
    printf("\nSize Of f : %lu",sizeof(f));
    printf("\nSize Of p : %lu",sizeof(p));
    
    return 0;
}