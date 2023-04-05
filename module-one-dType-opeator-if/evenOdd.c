#include<stdio.h>

int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("This number in even");
    }
    else if(num % 2 == 1){
        printf("This number is odd");
    }
    else{
        printf("Enter a valid number");
    }
    return 0;
}