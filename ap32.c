//program to check identity matrix
#include<stdio.h>
int main()
{  
     printf("enter no. of  row and column of the matrix");
    int n,c=0;
    scanf("%d",&n);
    printf("enter the matrix");
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
            if((a[i][i]!=1)&&(a[i][j]!=0))
            {
                c=1;
                break;
            }
        }
        printf("\n");
    }
    if (c==1)
    {
        printf("not a identity matrix");

    }
    else{
        printf("identity matrix");
    }
    return 0;
}
