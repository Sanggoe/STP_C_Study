#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int randNums[9];
    srand((unsigned)time(NULL));

    // randNums[] 0 ~ 9���� random ���� ����
    for (int i = 0; i < 10; i++) {
        randNums[i] = rand() % 100 + 1;
    }

    // randNums[] 0 ~ 9���� ���� ���
    for (int i = 0; i < 10; i++) {
        printf("%d", randNums[i]);
        if (i != 9)
            printf(", ");
    }

    return 0;
}