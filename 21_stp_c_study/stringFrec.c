#include <stdio.h>

int numberOfChar(char*, char ch); // or char []

void main() {
	int count;
	char ch;
	char str[1000] = "English is a West";

	printf("찾을 문자를 하나 입력하세요 : ");
	ch = getche();
	
	count = numberOfChar(str, ch);
	printf("가 %d개 들어있습니다.\n", count);
}

int numberOfChar(char *str, char ch) {
	// \0 널문자는 문자열의 끝을 의미한다.
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