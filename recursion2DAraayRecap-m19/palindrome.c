// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// inputCopy
// abba
// outputCopy
// YES
// inputCopy
// icpcassiut
// outputCopy
// NO
// inputCopy
// mam
// outputCopy
// YES



#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",&a);
    strcpy(b,a);
    int i=0,j=strlen(b)-1;
    while(i<j)
    {
        char tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
        i++;
        j--;
    }
    if(strcmp(a,b)==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}