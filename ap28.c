//PROGRAM TO PRINT LOWER TRIANGULAR MATRIX ELEMENTS AND THEIR SUM
#include<stdio.h>
int main()
{   
    int n,sum=0;
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
            if(i>=j)
            {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        }
        printf("\n");
        int k=i;
        while(k)
        {
            printf(" ");
            k--;
        }
    }
    printf("the sum of all lower triangular elemnts is = %d",sum);
    return 0;
}