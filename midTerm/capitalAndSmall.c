// You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.

// Input Format

// Input will contain only S.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of S.
// Output Format

// Output the count of capital alphabets first, then the count of small alphabets
// Sample Input 0

// tHeBRoWnFoX
// Sample Output 0

// 6 5
// Sample Input 1

// MADAM
// Sample Output 1

// 5 0
// Sample Input 2

// hello
// Sample Output 2

// 0 5

#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int capital_number = 0, small_number = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            capital_number++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            small_number++;
        }
    }

    printf("%d %d", capital_number, small_number);
    return 0;
}
