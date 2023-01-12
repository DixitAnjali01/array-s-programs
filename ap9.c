//LINEAR SEARCH IN AN ARRAY
#include<stdio.h>
int main(){
     int n,ele;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("ENTER ELEMENT THAT YOU WANT TO SEARCH FOR =");
    scanf("%d",&ele);
    for(int j=0;j<n;j++){
        if(a[j]==ele){
            printf("ELEMNT FOUND!!");
            break;
        }
        else{
            printf("ELEMENT NOT FOUND!!");
        }
    }
    return 0;
}