//PROGRAM TO CHECK WHETHER THE TWO MATRICES ARE EQUAL OR NOT
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
    int c;
    if((row1==row2)&&(column1==column2)) // matrices are equal when row and columns are same
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                if(a[i][j]==b[i][j])
                {
                    c==1;
                    goto check;
                }
                
            }
        }
    }
    check:
    if(c==0)
    {
        printf("MATRICES ARE EQUAL");
    }
    else{
        printf("MATRICES ARE EQUAL");
    }
}