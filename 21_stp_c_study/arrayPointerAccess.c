#include <stdio.h>

void printArray(int*, int);

void main() {
    int nums[5] = { 10,20,30,40,50 };

    printArray(nums, sizeof(nums) / sizeof(nums[0])); // (&nums) 또는 (&nums[0])
}

void printArray(int* arr, int size) {

    // 인덱스 접근 방식
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 주소 접근 방식
    for (int i = 0; i < size; i++) {
        printf("*(arr+%d) = %d\n", i, *(arr + i));
    }
}