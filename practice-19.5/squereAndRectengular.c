// Given the width and the height of a shape determine whether it's for a square or a rectangle?

// Input
// The first line contains a single integer t(1≤t≤1000)
//  the number of test cases.

// The first and only line of each test case contains two integers w,h(1≤w,h≤106)
//  representing the width and the height, respectively.

// Output
// For each test case print 'Square' if the shape is a square otherwise print 'Rectangle';

// Example
// inputCopy
// 3
// 10 10
// 13 200
// 300 300
// outputCopy
// Square
// Rectangle
// Square



#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("Square");
        }
        else{
            printf("Rectangle");
        }
        
    }
    
    return 0;
}