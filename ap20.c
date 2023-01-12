//PROGRAM TO PERFORM SCALAR MULTIPLICATION OF MATRIX
#include<stdio.h>
int main(){
    int row,column,num;
    printf("Enter no. of row and column");
    scanf("%d %d",&row,&column);
    int a[row][column];
    printf("Enter matrix");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("ENTER THE NUMBER BY WHICH YOU WANT TO MULTPILY THE MATRIX");
    scanf("%d",&num);
    printf("THE MATRIX AFTER SCALAR MULTIPLICATION IS ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",num*a[i][j]);
        }
        printf("\n");
    }
    return 0;
}