#include <stdio.h>

int sumOfoneToNum(int num);

void main() {
    printf("%d\n", sumOfoneToNum(10)); // 1~5
}

int sumOfoneToNum(int num) {
    if (num > 1)
        return num + sumOfoneToNum(num - 1);
    else
        return 1;
}