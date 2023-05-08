// Given two numbers X and Y, Print their summation.

// Note: Solve this problem using function.

// Input
// Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

// Output
// Print the summation value.

// Example
// inputCopy
// 5 2
// outputCopy
// 7


#include <stdio.h>
int my_abs(int num1, int num2){
        int num = num1 + num2;
        printf("%d", num);
}
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    my_abs(num1, num2);
    return 0;
}