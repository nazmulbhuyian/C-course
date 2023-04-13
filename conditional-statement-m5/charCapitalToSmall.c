
// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

// Input
// Only one line containing a character X which will be a capital or small letter.

// Output
// Print the answer to this problem.

// Examples
// inputCopy
// a
// outputCopy
// A
// inputCopy
// A
// outputCopy
// a

#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch>='a' && ch<='z'){
        int ans;
        ans = ch-32;
        // printf("%d", ans);
        printf("%c", ans);
    }
    else if(ch>='A' && ch<='Z'){
        int ans;
        ans = ch+32;
        // printf("%d", ans);
        printf("%c", ans);
    }
    else{
        printf("Please provide a character");
    }
    return 0;
}