#include <stdio.h>

double sumOfNumbers(int[], int);

void main() {
    int arr[3] = { 99, 98, 100 };

    printf("����� %lf\n", sumOfNumbers(arr, sizeof(arr) / sizeof(arr[0]))); // �迭�� �̸���, �迭�� ù ��° �ּ��̴�!  / �迭�� ���� ���� 3�� �Ѱ���
}

double sumOfNumbers(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / 3;
}