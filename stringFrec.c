#include <stdio.h>

int numberOfChar(char*, char ch); // or char []

void main() {
	int count;
	char ch;
	char str[1000] = "English is a West";

	printf("ã�� ���ڸ� �ϳ� �Է��ϼ��� : ");
	ch = getche();
	
	count = numberOfChar(str, ch);
	printf("�� %d�� ����ֽ��ϴ�.\n", count);
}

int numberOfChar(char *str, char ch) {
	// \0 �ι��ڴ� ���ڿ��� ���� �ǹ��Ѵ�.
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++);

	while (*str !='\0') {
		if (*str == ch) {
			count++;
		}
		str++;
	}

	return count;
}