// Given two strings S and T. Print 2 lines that contain the following in the same order:

// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.
// For more clarification see the example below.

// Input
// The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

// The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

// Output
// Print the answer required above.

// Examples
// inputCopy
// LEVEL
// ONE
// outputCopy
// 5 3
// LEVEL ONE
// inputCopy
// Programming
// contest
// outputCopy
// 11 7
// Programming contest

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    int lenS=strlen(s);
    int lenT = strlen(t);
    printf("%d %d\n",lenS,lenT);
    printf("%s %s\n",s,t);
    return 0;
}