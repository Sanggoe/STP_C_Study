#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    FILE* fp;
    char str[100];
    char ans[100] = "fopen";
    int num = 0;
    int len = 5;

    printf("ã�� �ܾ� : %s, ", argv[2]);
    printf("ã�� �ܾ��� ���� : %d\n\n", len);

    printf("�˻� ��� -----------");

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("���� �б��� ���⿡ �����߽��ϴ�");
        return -1;
    }

    while (!feof(fp)) {
        num++;
        fgets(str, 100, fp);

        if (strstr(str, argv[2]) != NULL) {
            puts("");
            printf("%d : %s", num, str);
        }
    }
    fclose(fp);

    return 0;
}