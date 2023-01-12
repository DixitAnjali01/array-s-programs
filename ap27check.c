//PROGRAM TO FIND UPPER TRIANGULAR MATRIX ELEMeNTS AND THEIR SUMS 
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
            if(j>=i)
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
    printf("the sum of upper triangular matrix elements is= %d",sum);
    return 0;
}