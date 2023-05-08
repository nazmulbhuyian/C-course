// Given a string S. Determine how many times does each letter occurred in S.

// Input
// Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

// Output
// For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

// Note: you must print letters in ascending order.

// Examples
// inputCopy
// aaabbc
// outputCopy
// a : 3
// b : 2
// c : 1
// inputCopy
// regff
// outputCopy
// e : 1
// f : 2
// g : 1
// r : 1

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[100];
//     scanf("%s", s);
//     int cnt[26] = {0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int value = s[i] - 'a';
//         cnt[value]++;
//     }
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int value = s[i] - 97;
//         if (cnt[value] != 0)
//         {
//             printf("%c : %d\n", value + 'a', cnt[value]);
//             cnt[value] = 0;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main(){
    char c;
    int cnt[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        cnt[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if(cnt[i - 'a'] > 0){
        printf("%c : %d", i, cnt[i - 'a']);
        }
    }  
}