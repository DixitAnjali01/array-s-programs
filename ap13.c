//PROGRAM TO DELETE ELEMENT OF ARRAY FROM SPECIFIED POSITION
#include<stdio.h>
int main()
{
    int n,ele,pos,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     }
    printf("Entered the element that you want to delete");
    scanf("%d",&ele);
    printf("Entered the position of the element which you want to delete the elements");
    scanf("%d",&pos);
    for(int j=pos;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    for(int k=0;k<n-1;k++)
    {
        printf("%d ",a[k]);
    }
return 0;

}

