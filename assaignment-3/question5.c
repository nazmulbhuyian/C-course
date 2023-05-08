#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int i, j, len;
    len = strlen(str);
    for (i = 0, j = len - 2; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[10];
    int result;
    fgets(str, 10, stdin);
    result = is_palindrome(str);
    if (result == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
