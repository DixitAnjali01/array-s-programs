//PROGRAM TO PRINT EVEN AND ODD ELMENTS OF ARRAY INTO TWO DIFFERENT ARRAYS
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    int b[n],c[n];
    int k=0;
      int l=0;
                  
    for(int j =0;j<n;j++){
        if (a[j]%2==0)
        {
            b[k]=a[j];
            k++;
        }
        else
        {
            c[l]=a[j];
            l++;
        
        }
    }
        printf("THE ARRAY WITH EVEN ELEMNTS IS = ");
        for(int i=0;i<n;i++){
            printf("%d",b[i]);
        }
        printf("THE ARRAY WITH ODD ELEMNTS IS = ");
        for(int i=0;i<n;i++){
            printf("%d",c[i]);
        }
        
    
    return 0;
}
