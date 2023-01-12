//PROGRAM TO INTERCHANGE DIAGONAL ELEMENTS OF A MATRIX
#include<stdio.h>
int main()
{   
    int n;
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
    int N=n-1;
    for(int i=0;i<n;i++)
    {
        int temp;
        temp=a[i][i];
        a[i][i]=a[i][N];
        a[i][N]=temp;
        N--;
    }
    printf("matrix after exchnage is =\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    
}
return 0;
}