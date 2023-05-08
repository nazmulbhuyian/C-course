// Given two strings X and Y . Print the smallest lexicographical one.

// Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

// Input
// Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

// Output
// Print the smallest lexicographical string.

// Note: If both of X and Y are equal, print any of them.

// Example
// inputCopy
// acm
// acpc
// outputCopy
// acm
// Note
// For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order



#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    if(v<0)
    {
        printf("%s", a);
    }
    else if(v>0)
    {
        printf("%s", b);
    }
    else 
    {
        printf("%s same %s", a, b);
    }
    return 0;
}