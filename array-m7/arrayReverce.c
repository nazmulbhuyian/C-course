#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);
    for (int i = 0; i < n; i++)
    {
        if(i == x){
            arr[i] = v;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}