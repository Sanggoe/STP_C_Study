#include <stdio.h>// 외부 파일 참조
#include "test.c"

void test() {
    printf("hello");
}

int addNumbers(int num1, int num2) { // 매개변수
    test();
    return num1 + num2;
}

int main() {
    //int sum = addNumbers(10, 20); // 인자
    printf("%d", test);
    //printf("%d\n", sum);
    //test();
    return 0;
}