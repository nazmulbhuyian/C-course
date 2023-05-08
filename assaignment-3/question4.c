
#include<stdio.h>
int returnPara(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",returnPara(x,y));
    return 0;
}


#include<stdio.h>
int noRetNoPara()
{
    int a[1001];
    scanf("%s",&a);
    printf("%s", a);
}
int main()
{
    noRetNoPara();
    return 0;
}


#include<stdio.h>
void noRetWithPara(int arr[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);
    noRetWithPara(arr, size);
    return 0;
}


#include <stdio.h>

int retNoPara()
{
    int n, i, flag = 0;

    scanf("%d", &n);

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    int flag = retNoPara();
    if (flag == 1)
        printf("is not a prime number.");
    else
        printf("is a prime number.");
    return 0;
}
