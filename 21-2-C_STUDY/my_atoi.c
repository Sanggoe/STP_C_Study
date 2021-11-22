#include <stdio.h>

int my_toInt(char *str) {
	int num = 0;

	// '\0' 기준으로 문자열의 끝을 확인
	while (*str != '\0') {
		num *= 10;
		num += *(str++) - '0';
	}
	// 12345\0
	return num;
}

void main() {
	// atoi(문자) 숫자로 아스키코드를 이용해서...
	// '0' -> 아스키코드로 48
	// printf("%c, %d\n", '0', '0');
	// printf("%d", '1' - '0');
	char str[10];

	gets(str);
	printf("%s는 변환하면 %d\n", str, my_toInt(str));
}