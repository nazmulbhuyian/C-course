#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100%% dedication to learn!\tI will succeed one day.");
    return 0;

    // You will be given two integers A and B. You need to give output their multiplication.
    long long A, B, Sum;
    scanf("%lld", &A);
    scanf("%lld", &B);
    Sum = A * B;
    printf("%lld", Sum);
    return 0;

    // You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.
    int N;
    scanf("%d", &N);
    if (N % 3 == 0)
    {
        printf("YES");
    }
    else if (N < 0)
    {
        printf("Enter a non negative number");
    }
    else
    {
        printf("NO");
    }
    return 0;


// You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.

    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        if(i%3==0 && i%7==0){
            printf("%d\n", i);
        }
    }
    return 0;


    // Alisa and you have gone out for shopping, and Alisa wants to buy a new pair of shoes for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.

// You have decided that you will buy a Punjabi only if you have more than 1000 Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.

// Then you will only buy shoes if you have 500 Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.

// Now if I inform you the amount N Taka that your mother will give you, can you tell me what will happen next?

// If you buy a punjabi print "I will buy Punjabi".

// If you buy a pair of shoes print "I will buy new shoes"

// If Alisa buy a pair of shoes print "Alisa will buy new shoes"

// If no one can buy anything print "Bad luck!"

int N, rest;
    scanf("%d", &N);
    if(N>1000){
        printf("I will buy Punjabi\n");
        rest = N - 1000;
        if(rest>=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }
    return 0;

    
}