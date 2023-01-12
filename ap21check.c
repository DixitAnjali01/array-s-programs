//PROGRAM TO MULTIPLY TWO MATRICES
#include<stdio.h>
int main(){
    
    
    int row1,column1;
    printf("Enter row and column of first matrix");
    scanf("%d %d",&row1,&column1);
    int a[row1][column1];
    printf("Enter first matrix");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int row2,column2;
    printf("Enter the row and column of second matrix");
    scanf("%d %d",&row2,&column2);
    int b[row2][column2];
    printf("Enter second matrix ");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<column2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    } 
    if(column1==row2)
    {
        int c[row1][column2];
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                int d=0;
                for(int k=0;k<column2;k++)
                {
                     d=a[i][i]*b[i][k]+d;
               
                }
                c[i][j]=d;
            }
        }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            printf("%d ",&c[i][j]);
        }
        printf("\n");
    }
    
    }
    else{
        printf("SORRY!!THE MULTIPLICATION CAN NOT BE PERFORMED:)");
    }
    return 0;
}