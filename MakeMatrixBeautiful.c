#include<stdio.h>
#include <string.h>

#define n 2
// #define n 3

int findMinOpeartion(int matrix[n][n])
{
    int rowSum[n], colSum[n];
    memset(rowSum, 0, n*sizeof(int));
    memset(colSum, 0, n*sizeof(int));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            rowSum[i] += matrix[i][j];
            colSum[i] += matrix[j][i];
        }   
    }
    
    // printf("\nRow Array Is :\n");
    // for(int i = 0; i < n; i++)
    //     printf("%d\t", rowSum[i]);
    // printf("\nColumn Array Is :\n");
    // for(int i = 0; i < n; i++)
    //     printf("%d\t", colSum[i]);
        
    int rowMax  = rowSum[0], colMax = colSum[0];
    for(int i = 1; i < n; i++){
        if(rowMax < rowSum[i])
            rowMax = rowSum[i];
    }
    for(int i = 1; i < n; i++){
        if(colMax < colSum[i])
            colMax = colSum[i];
    }
    // printf("\nRowMax & ColMax = %d, %d \n", rowMax, colMax);
    int max = (rowMax > colMax)?rowMax: colMax;
    // printf("\nOverall Max = %d\n", max);
    
    int opr = 0;
    for(int i = 0; i < n; i++)
        opr += (max - colSum[i]);
    // printf("\n");
    
    return opr;
}

int main(){

	int matrix[n][n] = { {1, 2}, {3, 4} };
	// int matrix[n][n] = { {1, 2, 3}, {4, 2, 3}, {3, 2, 1} };

    printf("\nMinimum Number of operations : %d\n", findMinOpeartion(matrix));

	return 0;
}