#include<stdio.h>
int main()
{
    // declare 2d array
    // 5 hocce row and 3 hocce column
    int a[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    return 0;
}