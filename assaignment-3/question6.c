// call by value means by The value we pass from the main function to another functon then in another function if we change this value the main function value is not change.

#include <stdio.h>

void increment(int x) {
    x++;
    printf("num = %d\n", x++); // Output: num = 11
}

int main() {
    int num = 10;
    increment(num);
    printf("num = %d\n", num); // Output: num = 10
    return 0;
}

// call by reference means by The value we pass from the main function to another functon then in another function if we change this value the main function value is change.

#include <stdio.h>

void increment(int *x) {
    (*x)++;
}

int main() {
    int num = 10;
    increment(&num);
    printf("num = %d\n", num); // Output: num = 11
    return 0;
}