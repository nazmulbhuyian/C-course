//  Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

#include <stdio.h>
int my_abs(int num){
    if(num < 0){
        num = num * -1;
        printf("%d", num);
    }
    else{
        printf("%d", num);
    }
}
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int num = num1 + num2;
    my_abs(num);
    return 0;
}