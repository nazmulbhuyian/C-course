#include<stdio.h>

int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("This number in positive");
    }
    else if(num < 0){
        printf("This number is negative");
    }
    else{
        printf("This number is Zero");
    }
    return 0;
}