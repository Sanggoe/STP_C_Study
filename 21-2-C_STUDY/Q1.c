#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <ctype.h>

int main(void)
{
    char ch[100];
    int i = 0;

    printf("���� ������ �Է��ϼ��� >> \n");
    gets(ch);

    puts("");
    printf("�Է��� ���ڿ����� �빮�ڿ� �ҹ��ڸ� �ݴ�� ��ȯ�ϸ� >> \n");

    while (ch[i] != '\0')
    {
        if (65 <= (int)ch[i] && (int)ch[i] <= 90)
        {
            ch[i] = tolower(ch[i]);
            printf("to lower ������\n");
        }
        else if (97 <= (int)ch[i] && (int)ch[i] <= 122)
        {
            ch[i] = toupper(ch[i]);
            printf("to upper ������\n");
        }
        i++;
        printf("i++ ������ \n");
    }

    i = 0;
    while (ch[i] != '\0')
        printf("%c", ch[i++]);

    return 0;
}