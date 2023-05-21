// Problem Statement

// Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.

// Input Format

// The first line will contain T, number of test cases.
// For every test case, the input will contain one integer S (the sum of the four numbers), A, B, C (three of those four numbers).
// Constraints

// 0 < T <= 100
// 0 <= S, A, B, C <= 2^32
// Output Format

// Print the missing number. Don't forget to print a new line after it.
// Sample Input 0

// 1
// 10 1 2 3
// Sample Output 0

// 4
// Sample Input 1

// 3
// 20 2 4 1
// 15 5 5 5
// 30 10 5 3
// Sample Output 1

// 13
// 0
// 12


#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        int sum = a + b + c;
        int minus = s - sum;
        printf("%d\n", minus);
    }
    
    return 0;
}