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