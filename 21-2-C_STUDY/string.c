#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printAllChars(char*); // ���� �ϳ��ϳ� ����غ���

void main() {
    // ���� �� �ʱ�ȭ �� ���
    char str[] = "Hello, String!\0";
    char* strPtr = NULL;
    strPtr = "Hello, String Pointer!";

    printf("%s\n", str);
    printf("%s\n", strPtr);
    /*
    // format %s�� �Է¹޾� ���
    scanf("%s", str); // hello
    printf("%s\n", str); // hello\0

    // gets �Լ��� �Է¹޾� ���
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