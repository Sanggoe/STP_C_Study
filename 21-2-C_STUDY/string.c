#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printAllChars(char*); // 문자 하나하나 출력해보기

void main() {
    // 선언 및 초기화 후 출력
    char str[] = "Hello, String!\0";
    char* strPtr = NULL;
    strPtr = "Hello, String Pointer!";

    printf("%s\n", str);
    printf("%s\n", strPtr);
    /*
    // format %s로 입력받아 출력
    scanf("%s", str); // hello
    printf("%s\n", str); // hello\0

    // gets 함수로 입력받아 출력
    gets(str);
    puts(str);*/

    printAllChars(str);
}

void printAllChars(char* arr) {
    while (*arr != NULL) {
        printf("%c\n", *arr);
        arr++;
    }
}