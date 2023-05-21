// Given a number N and an array A of N numbers. Print the maximum value in this array.

// Note: Solve this problem using recursion.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print the maximum value in this array.

// Example
// inputCopy
// 5
// 1 -3 5 4 -6
// outputCopy
// 5


#include<stdio.h>
#include<limits.h>
int fun(int a[],int n,int i)
{
    if(i==n)
    {
        return INT_MIN;
    }
    int mx=fun(a,n,i+1);
    if(a[i] > mx)
    {
        return a[i];
    }
    else 
    {
        return mx;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mx=fun(a,n,0);
    printf("%d\n",mx);
    return 0;
}