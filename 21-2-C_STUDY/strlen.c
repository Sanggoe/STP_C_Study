#include <stdio.h>
#include <string.h>

void main() {
    char* str1 = "hello"; // 6. �������� \0
    char str2[10] = "hello";
    int len;

    len = strlen(str1); // &str1[0]
    puts(str1);
    printf("str1�� ���� : %d\n", len);

    len = strlen(str2);
    puts(str2);
    printf("str2�� ���� : %d\n", len);

    str2[2] = '\0';

    len = strlen(str2);
    puts(str2);
    printf("\\0�� �߰��� str2�� ���� : %d\n", len);
}