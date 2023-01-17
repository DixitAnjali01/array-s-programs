//PROGRAM TO MERGE TWO ARRAYS TO THIRD ARRAY 
#include<stdio.h>
int main(){
    int n1,n=0,k;
    scanf("%d",&n1);
    printf("FIRST ARRAY ");
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("SECOND ARRAY");
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for(int j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    int c[n1+n2];
    for (k=0;k<n1;k++){
        c[k]=a[k];
    }
    for (int l=k;l<n2;l++){
        
        c[l]=b[n];
        n++;
    }
    printf("THE ELEMNTS OF THE ARRAY AFTER MERGING ARE = \n");
    for(int m=0;m<n1+n2;m++){
        printf("%d ",c[m]);
    }
    return 0;
}