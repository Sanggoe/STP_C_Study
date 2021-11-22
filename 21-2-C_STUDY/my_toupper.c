#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char my_toupper(char ch) {
	if (97 <= ch && ch <= 122) {
		return ch - 32;
	}
	return ch;
}

int main(void) {
	char ch[100];
	int i = 0;

	printf("영어 문장을 입력하세요 >> \n");
	gets(ch);

	for (int i = 0; *ch != '\0'; i++) { // 로직 잘못짬!
		printf("%c", my_toupper(ch[i]));
	}

	return 0;
}