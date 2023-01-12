//PROGRAM TO READ AND PRINT ELEMENTS OF AN ARRAY
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
       printf("THE INPUT ELEMENTS OF THE ARRAY ARE -\n");
     
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}