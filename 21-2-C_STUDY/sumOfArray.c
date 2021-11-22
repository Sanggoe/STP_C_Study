#include <stdio.h>
#define SIZE 3
double sumOfNumbers(int[], int); // 선언

void main() {
    int arr[3] = { 99, 98, 100 };

    printf("평균은 %lf\n", sumOfNumbers(arr, SIZE));
    // 배열의 이름은, 배열의 첫 번째 주소  / 배열의 원소 개수 3을 넘겨줌
}

double sumOfNumbers(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / 3;
}