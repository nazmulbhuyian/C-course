// Given a string S. Print number of vowels in the string.

// Note:

// Vowel letters: ['a', 'e', 'i', 'o', 'u'].
// Vowel letters could be capital or small.
// Solve this problem using recursion.
// Input
// Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

// Output
// Print number of vowels in string S.

// Example
// inputCopy
// Data Structure Lab
// outputCopy
// 6



#include<stdio.h>

int fun(char s[],int i)
{
    // base case
    if(s[i]=='\0') 
    {
        return 0;
    }
    int ans=fun(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
    {
        return ans+1;
    }
    else 
    {
        return ans;
    }
}
int main()
{
    char s[205];
    fgets(s,205,stdin);
    int cnt=fun(s,0);
    printf("%d\n",cnt);
    return 0;
}