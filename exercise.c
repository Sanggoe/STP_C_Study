#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
    srand((unsigned)time(NULL));

    printf("%d\n", rand() % 10); // 10으로 나눈 나머지 숫자 중에 랜덤으로 하나 반환 (0~9)
    printf("%d", rand() % 50); // 0~49
}