#include <stdio.h>

int main() {
    int sum = addNumbers(10, 20); // ����
    printf("%d\n", sum);
    test();
    return 0;
}

int addNumbers(int num1, int num2) { // �Ű�����
    test();
    return num1 + num2;
}

void test() {
    printf("hello");
}