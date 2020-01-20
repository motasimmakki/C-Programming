#include <stdio.h> 
#define R 4 
#define C 4 
  
void slashPrint(int row, int col, int arr[R][C]) 
{ 
    int i=0,j=0,m,n;

        for(j=col-1;j>=0;j--){
            
            printf("[%d]\t",arr[i][j]);
            
            for(m=i,n=j;m!=col-1&&n!=row-1; ){
                printf("[%d]\t",arr[++m][++n]);
            }
            printf("\n\n");
        }
        // printf("\n");
        j=0;

        for(i=1;i<=row-1;i++){
            
            printf("[%d]\t",arr[i][j]);
            
            for(m=i,n=j;m!=col-1&&n!=row-1; ){
                printf("[%d]\t",arr[++m][++n]);
            }
            printf("\n\n");
        }
        printf("\n");
} 
  
void printMatrix(int row,int col,int arr[R][C])
{
    int i,j;

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("[%d]\t",arr[i][j]);
        }
        printf("\n\n");
    }
}

int main() 
{ 
    int arr[R][C]={ 
                    { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16 }
                }; 
    
    printf("Matrix Is : \n\n");
    printMatrix(R,C,arr);

    printf("\n\n");

    printf("Slash Printing Of Matrix Is : \n\n");
    slashPrint(R,C,arr); 

    return 0; 
} 