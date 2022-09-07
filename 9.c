#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,0,1,6,8,0,1};
    int i,j,count=0,cocunt2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=0)
                count++;
        }
    }
    if(((3*3)/2)>count)
        printf("It is a sparse matrix.");
    else
        printf("It is a Dense matrix.");    
    return 0;
}