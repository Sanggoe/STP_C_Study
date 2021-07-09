#include <stdio.h>

int main() {
    int sum = addNumbers(10, 20); // 인자
    printf("%d\n", sum);
    test();
    return 0;
}

int addNumbers(int num1, int num2) { // 매개변수
    test();
    return num1 + num2;
}

void test() {
    printf("hello");
}