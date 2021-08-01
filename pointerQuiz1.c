#include <stdio.h>

int main() {
    int arr[5] = { 90,97,99,98,100 };
    int* ptr = arr;

    printf("%p\n", &arr[0]);	// 0x1110 라고 한다면

    printf("%p\n", arr);		// 1) ____
    printf("%p\n", &arr);		// 2) ____
    printf("%p\n", ptr);		// 3) ____
    printf("%p\n", &ptr);		// 4) ____
    printf("%p\n", ptr + 1);		// 5) ____

    printf("%d\n", ptr[3]);		// 6) ____
    printf("%d\n", *ptr);		// 7) ____
    printf("%d\n", (*ptr)++);	// 8) ____
    printf("%d\n", ++(*ptr));	// 9) ____
    printf("%d\n", *(ptr++));	// 10) ____
    printf("%d\n", *(++ptr));	// 11) ____

    return 0;
}