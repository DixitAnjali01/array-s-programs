//PROGRAM TO CHECK IF THE GIVEN MATRIX IS SPARSE MATRIX OR NOT 
#include<stdio.h>
int main()
{
    int row,column,count0=0,countnum=0,counttotal=0;
    printf("Enter row and column of the matrxix ");
    scanf("%d %d",&row,&column);
    int a[row][column];
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                count0=count0+1;
            }
            else{
                countnum=countnum+1;
            }
        }
        printf("\n");
    }
    counttotal=count0+countnum;
    if(count0>counttotal/2)
    {
        printf("SPARSE MATRIX!!");
    }
    else{
        printf("NOT A SPARSE MATRIX!!");
    }

return 0;
}