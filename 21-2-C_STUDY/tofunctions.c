#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char str[] = "Hello C World!";
    char* s = str;
    int len;

    printf("���� ���ڿ� : %s\n", str);
    len = strlen(str);
    /*
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
        // tolower(str[i]);
    }
    */

    while (*s != EOF) { // *(str++) : Error!
        // str�� �迭�� ù ��° �ּҸ� ����Ű�� ��� �������̱� ������ ���� ������ �� ����!!
        *(s++) = toupper(*s);
        // tolower(str[i]);
    }
 
    printf("�ٲ� ���ڿ� : %s\n", str);
}