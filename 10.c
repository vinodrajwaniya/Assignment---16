#include<stdio.h>
int main()
{
    int a[3][3]={0,0,1,1,0,1,1,1,1};
    int i,j,sum=0,max=0,index;
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            sum=sum+a[i][j];
        }
        if(sum>max)
            {   index=i+1;
                 max=sum; 
            } 
            //index i;
    }
    printf("Row no is %d and \nmax is %d",index,  max);
    return 0;
}