// Problem Statement

// Write a C program that will take an integer N and creates this pattern for the corresponding inputs.

// For example,

// If N=3, the pattern look like this,
// image

// If N=6, the pattern look like this,
// image

// Input Format

// You will be given a positive integer N as input.
// Constraints

// 1 <= N <= 20
// Output Format

// Output the pattern
// Sample Input 0

// 1
// Sample Output 0

// ^
// Sample Input 1

// 3
// Sample Output 1

//   ^
//  ***
// ^^^^^
// Sample Input 2

// 6
// Sample Output 2

//      ^
//     ***
//    ^^^^^
//   *******
//  ^^^^^^^^^
// ***********

#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        if (i % 2 == 1)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("^");
            }
        }
        else{
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
        }

        // line sesh
        s--;
        k = k + 2;
        printf("\n");
    }

    return 0;
}