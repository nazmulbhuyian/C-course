// Given an array A of size N. Print the minimum and the maximum number in the array.

// Note: Solve this problem using function.

// Input
// First line will contain a number N (1 ≤ N ≤ 103) number of elements.

// Second line will contain N numbers (0 ≤ Xi ≤ 105).

// Output
// Print the minimum and the maximum number separated by a space.

// Example
// inputCopy
// 5
// 10 13 95 1 3
// outputCopy
// 1 95


#include <stdio.h>

void maxMin(int arr[], int num){
    int max=0, min=arr[0];
     for (int i = 0; i < num; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d ", min);
    printf("%d", max);
}

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxMin(arr, num);
    
    return 0;
}