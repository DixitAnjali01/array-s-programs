//PROGRAM TO FIND SUM OF EACH ROW AND COLUMN OF  MATRIX
#include<stdio.h>
int main()
{   printf("enter no. of  row and column of the marix");
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
    printf("enter the no. of row for which you want the sum of elements");
    int r,sumrow=0;
    scanf("%d",&r);

        for(int j=0;j<column;j++)
        {
            sumrow=sumrow+a[r][j];

        }
    printf("the sum of the entered row elemnts is = %d\n",sumrow);
    printf("enter the no. of column for which you want the sum of elements");
    int c,sumcolumn=0;
    scanf("%d",&c);

        for(int j=0;j<row;j++)
        {
            sumcolumn=sumcolumn+a[j][c];

        }
    printf("the sum of the entered row elemnts is = %d",sumcolumn);
    return 0;
}