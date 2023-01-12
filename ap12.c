//PROGRAM TO INSERT AN ELEMENT IN AN ARRAY
#include<stdio.h>
int main()
{
    int n,ele,pos,temp;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     }
    printf("Entered the element that you want to insert");
    scanf("%d",&ele);
    printf("Entered the position at which you want to insert the elements");
    scanf("%d",&pos);
    for(int j=n;j>=pos;j--)
    {
        if(j==pos)
        {
            a[j]=ele;
            break;
        }
         a[j]=a[j-1];
       
    }

    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
     }
    


}