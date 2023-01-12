//PROGRAM TO LEFT ROTATE AN ARRAY
#include<stdio.h>
int main(){
    int n;         //n is the size of array
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("THE REVERSED ARRAY IS = \n");
    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}