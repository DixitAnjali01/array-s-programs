//PROGRAM TO COPY ALL ELEMTS OF AN ARRAY TO ANOTHER IN ARRAY
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    printf("AFTER COPYING  -\n");
    for (int j=0;j<n;j++){
        b[j]=a[j];
        printf("%d ",b[j]);
    }
    

}

