#include<stdio.h>
void fun()
{
    printf("Fun\n");
    // fun();   infinity loop hoye jabe
}
int main()
{
    fun();
    return 0;
}