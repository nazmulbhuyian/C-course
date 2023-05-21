// Problem Statement

// You will be given a string S consisting of small alphabets, capital alphabets and spaces. You need to count number of small alphabets, capital alphabets and spaces in the string S.

// Input Format

// Input will contain a string S.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of S.
// Output Format

// Output in the format given in the sample output.
// Sample Input 0

// Hello Everyone
// Sample Output 0

// Capital - 2
// Small - 11
// Spaces - 1
// Sample Input 1

// I Hope You Have Been Enjoying
// Sample Output 1

// Capital - 6
// Small - 18
// Spaces - 5

#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000];
    fgets(input, sizeof(input), stdin);

    int capital = 0, small = 0, space = 0;

    for (int i = 0; i <= strlen(input); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            capital++;
        }
        else if (input[i] >= 'a' && input[i] <= 'z')
        {
            small++;
        }
        else if (input[i] == ' ')
        {
            space++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}
