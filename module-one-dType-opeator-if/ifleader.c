#include<stdio.h>

int main(){
    int num;
    printf("Enter your amount: ");
    scanf("%d", &num);

    if(num >= 10000){
        if(num >= 20000){
        printf("buy a Gucci Bag and buy a Gucci Belt");
        }
        else{
            printf("Only buy a Gucci Bag");
        }
    }
    else if(num >= 5000){
        printf("buy a Levis Bag");
    }
    else{
        printf("buy Something from New Market");
    }
    return 0;
}