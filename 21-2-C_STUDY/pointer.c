#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int count = 10;
    int age = 25;
    int* intPtr = &age;

    printf("count   : %d\n", count);
    printf("age     : %d\n", age);
    printf("*intPtr : %d\n", *intPtr);

    printf("&count  : %p\n", &count);
    printf("&age    : %p\n", &age);
    printf("intPtr  : %p\n", intPtr);

    ++(*intPtr);
    intPtr = &count;
    --count;

    printf("count   : %d\n", count);
    printf("age     : %d\n", age);
    printf("*intPtr : %d\n", *intPtr);

    printf("&count  : %p\n", &count);
    printf("&age    : %p\n", &age);
    printf("intPtr  : %p\n", intPtr);
}