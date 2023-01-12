//PROGRAM TO SUBTRACT TWO MATRICES
#include<stdio.h>
int main(){
    int row,column;
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
    printf("Enter the another matrix ");
    int b[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("The matrix after subtraction is \n ");
    int c[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d",c[i][j]);
            
        }
        printf(" \n");
    }
    
}