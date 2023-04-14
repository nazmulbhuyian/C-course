// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of even numbers and the sum of odd numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.
// Constraints

// 1 <= N <= 10^5
// 1 <= V <= 100
// Output Format

// Output the sum of even numbers first, then sum of odd numbers.
// Sample Input 0

// 5
// 5 1 4 7 2
// Sample Output 0

// 6 13
// Sample Input 1

// 5
// 2 4 6 8 10
// Sample Output 1

// 30 0
// Sample Input 2

// 5
// 1 3 5 7 9
// Sample Output 2

// 0 25

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            sum = sum + arr[i];
        }
        else{
            odd = odd + arr[i];
        }
    }
    printf("%d %d", sum, odd);
    
    
    return 0;
}