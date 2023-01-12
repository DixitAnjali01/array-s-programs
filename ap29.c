//PROGRAM TO FIND TRANSPOSE OF A MATRIX
#include<stdio.h>
int main()
{  
     printf("enter no. of  row and column of the matrix");
    int row,column;
    scanf("%d %d",&row,&column);
    printf("enter the matrix");
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("the transposed matrix is =\n");
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}