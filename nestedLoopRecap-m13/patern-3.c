#include<stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // line print
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        // line sesh
        k++;
        printf("\n");
    }
    return 0;
}



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int k=n;
//     for(int i=n;i>=1;i--)
//     {
//         // line print
//         for(int j=k;j>=1;j--)
//         {
//             printf("%d ",j);
//         }
//         // line sesh
//         printf("\n");
//         k--;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int k=n;
//     for(int i=n;i>=1;i--)
//     {
//         // line print
//         for(int j=1;j<=k;j++)
//         {
//             printf("%d ",j);
//         }
//         // line sesh
//         printf("\n");
//         k--;
//     }
//     return 0;
// }