//PROGRAM TO FIND THE SUM AND COUNT ALL NEGATIVE ELEMNTS IN ARRAY
#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]<0)
        {
            sum=sum+a[i];
            count=count+1;
        }

    }
    printf("THE SUM OF ALL NEGATIVE NUMBERS IN THE ARRAY IS = %d\n",sum);
    printf("THE count OF ALL NEGATIVE NUMBERS IN THE ARRAY IS = %d",count);
   return 0;
}