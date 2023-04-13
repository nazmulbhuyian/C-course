// Hints: তোমাকে একটি এরে এবং তার সাইজ দেওয়া হবে। তোমাকে এরে এর ভ্যেলু গুলোর যোগফল বের করতে হবে। সবার শেষে চেক করতে হবে যোগফল কি নেগেটিভ কিনা। যদি নেগেটিভ হয় তাহলে সেটাকে পজিটিভ করে ফেলতে হবে। পজিটিভ করার জন্য যোগফল কে -1 দিয়ে গুন দিলেই হয়ে যাবে। 
// যেহেতু এরে এর ভ্যেলু গুলো 10^9 পর্যন্ত হতে পারে তাহলে নিশ্চই এতোগুলো ভ্যেলু এর যোগফল ইন্টিজার এর মধ্যে জায়গা হবে না। তাই যোগফল অবশ্যই long long int নিতে হবে। 



// Sample Input
// Sample Output
// 4
// 7 2 1 3
// 13
// 3
// -1 2 -3
// 2


#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    if(sum > 0){
        printf("%lld", sum);
    }
    else{
        sum = sum *(-1);
        printf("%lld", sum);
    }
    
    
    return 0;
}