
// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// Examples
// inputCopy
// 1 2 3
// outputCopy
// 1 3
// inputCopy
// -1 -2 -3
// outputCopy
// -3 -1
// inputCopy
// 10 20 -5
// outputCopy
// -5 20



#include <stdio.h>

int main() {
    int A, B, C;
    int max, min;
    scanf("%d %d %d", &A, &B, &C);

    max = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
    min = (A < B) ? ((A < C) ? A : C) : ((B < C) ? B : C);

    printf("%d %d", min, max);

    return 0;
}
