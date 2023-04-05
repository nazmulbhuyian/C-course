#include <stdio.h>

int main(){
    int a, b, sum, minus, mul;
    float div;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a + b;
    minus = a - b;
    mul = a * b;
    div = (float)a / (float)b;
    printf("sum: %d\nminus : %d\nmultiply: %d\ndivided: %.2f", sum, minus, mul, div);
    return 0;
}