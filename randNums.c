#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int randNums[10]; // ũ�� 10 int�� �迭 randNums[] ����
    int sum = 0; // �ӽ÷� ��� ���� ���� ����
    double avg = 0;    // �߰������� �ʿ��� ���� ����

    srand((unsigned)time(NULL));

    // randNums[] 0 ~ 9���� random ���� ����, ���ؼ� ��� ���ϱ�
    for (int i = 0; i < 10; i++) {
        randNums[i] = rand() % 20 + 1; // 1 ~ 20
        sum += randNums[i];
        printf("%d ", randNums[i]);
    }
    avg = sum / 10; // ��� ���ϱ�
    printf("\n����� : %lf \n", avg);

    return 0;
}