#include<stdio.h>

int main(){
    int sum = 0;
    // long long int sum = 0;
    for (int i = 0; i <= 10; i = i + 1)
    {
        sum += i;
    }
    printf("%d\n", sum);
    // printf("%lld\n", sum);
    
    return 0;
}