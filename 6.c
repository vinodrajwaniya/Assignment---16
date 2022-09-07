#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum=0,index=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
            index=i;
        }
        printf("%d Row sum is %d\n",index+1,sum);
        sum=0;
    }
    printf("\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
            index=i;
        }
        printf("%d Colum sum is %d\n",index+1,sum);
        sum=0;
    }
    printf("\n");
}