// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

// Examples
// inputCopy
// 3 -2 1
// outputCopy
// -2
// 1
// 3

// 3
// -2
// 1
// inputCopy
// -2 10 0
// outputCopy
// -2
// 0
// 10

// -2
// 10
// 0


#include <stdio.h>
int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ptr = *arr;
    
    for (int i = 0; i < 3; i++)
    {
        /* code */
    }
    
    
    return 0;
}