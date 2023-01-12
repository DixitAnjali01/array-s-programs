//PROGRAM TO COUNT EVEN AND ODD ELEMENTS IN ARRAY 
#include<stdio.h>
int main(){
    int n,count_even=0,count_odd=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    for(int j =0;j<n;j++){
        if (a[j]%2==0)
        {
            count_even = count_even+1;
        }
        else
        {
            count_odd = count_odd+1;
        }
    } 
    printf("THE  COUNT OF EVEN NUMBERS OF ELEMENTS IN ARRAY IS = %d\n",count_even);
    printf("THE  COUNT OF ODD NUMBERS OF ELEMENTS IN ARRAY IS = %d",count_odd);
return 0;


}