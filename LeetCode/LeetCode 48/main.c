#include <stdio.h>
#include <stdlib.h>

void rotate(int** matrix, int matrixSize, int* matrixColSize){
    int i,j,temp,n=matrixSize;
    for(i=0;i<n;i++){
        for(j=i;j<n-i-1;j++){//����Ԫ��
            temp=matrix[i][j];
            matrix[i][j]=matrix[n-j-1][i];
            matrix[n-j-1][i]=matrix[n-i-1][n-j-1];
            matrix[n-i-1][n-j-1]=matrix[j][n-i-1];
            matrix[j][n-i-1]=temp;
        }
    }
}
