// Hints: একটি এরে এবং তার সাইজ দেওয়া থাকবে। তোমাকে ঐ এরে এর যেই ভ্যেলু গুলো ১০ বা এর চেয়ে ছোট সেগুলো কে এই ফরম্যাট এ প্রিন্ট করতে হবে।
// A[index] = value 

// Sample Input
// Sample Output
// 5
// 1 2 100 0 30
// A[0] = 1
// A[1] = 2
// A[3] = 0

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(A[i] <= 10){
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
    
    return 0;
}
