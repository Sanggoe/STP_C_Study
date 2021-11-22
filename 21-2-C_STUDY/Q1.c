#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <ctype.h>

int main(void)
{
    char ch[100];
    int i = 0;

    printf("영어 문장을 입력하세요 >> \n");
    gets(ch);

    puts("");
    printf("입력한 문자열에서 대문자와 소문자를 반대로 변환하면 >> \n");

    while (ch[i] != '\0')
    {
        if (65 <= (int)ch[i] && (int)ch[i] <= 90)
        {
            ch[i] = tolower(ch[i]);
            printf("to lower 수행중\n");
        }
        else if (97 <= (int)ch[i] && (int)ch[i] <= 122)
        {
            ch[i] = toupper(ch[i]);
            printf("to upper 수행중\n");
        }
        i++;
        printf("i++ 해줬음 \n");
    }

    i = 0;
    while (ch[i] != '\0')
        printf("%c", ch[i++]);

    return 0;
}