#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
    srand((unsigned)time(NULL));

    printf("%d\n", rand() % 10); // 10���� ���� ������ ���� �߿� �������� �ϳ� ��ȯ (0~9)
    printf("%d", rand() % 50); // 0~49
}