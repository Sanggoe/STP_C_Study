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

	printf("���� ������ �Է��ϼ��� >> \n");
	gets(ch);

	for (int i = 0; *ch != '\0'; i++) { // ���� �߸�«!
		printf("%c", my_toupper(ch[i]));
	}

	return 0;
}