#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int s = n-1;
    for(int i=n;i>=1;i--)
    {
        for(int j=s;j>=1;j--)
        {
            printf(" ");
        }
        // line print
        for(int j=k;j>=1;j--)
        {
            printf("%d",k);
        }
        // line sesh
        printf("\n");
        k++;
        s--;
    }
    return 0;
}