#include <stdio.h>// �ܺ� ���� ����
#include "test.c"

void test() {
    printf("hello");
}

int addNumbers(int num1, int num2) { // �Ű�����
    test();
    return num1 + num2;
}

int main() {
    //int sum = addNumbers(10, 20); // ����
    printf("%d", test);
    //printf("%d\n", sum);
    //test();
    return 0;
}