//PROGRAM TO FIND SUM OF MAIN DIAGONAL ELEMENTS OF THE MATRIX
#include<stdio.h>
int main()
{
    int row,column,sum=0;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        sum=sum+a[i][i];
    }
    printf("the sum of the main diagonal elements of the matrix is = %d",sum);
    return 0;
}