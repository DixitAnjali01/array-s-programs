//PROGRAM TO FIND SUM OF MINOR DIAGONAL ELEMTS OF THE MARIX
#include<stdio.h>
int main()
{    int n,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("the sum of the minor diagonal elements of the matrix is = %d",sum);
    return 0;
    
}