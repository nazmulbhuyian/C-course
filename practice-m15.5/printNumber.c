// Given a number N. Print all numbers from 1 to N.

// Note: Solve this problem using function.

// Input
// Only one line contains a number N (1 ≤ N ≤ 103).

// Output
// print numbers form 1 to N separated by a single space.

// Example
// inputCopy
// 5
// outputCopy
// 1 2 3 4 5
// Note
// Don't use any leading or trilling spaces.

#include <stdio.h>
void printing(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printing(num);
    return 0;
}