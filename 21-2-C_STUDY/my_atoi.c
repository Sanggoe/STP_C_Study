#include <stdio.h>

int my_toInt(char *str) {
	int num = 0;

	// '\0' �������� ���ڿ��� ���� Ȯ��
	while (*str != '\0') {
		num *= 10;
		num += *(str++) - '0';
	}
	// 12345\0
	return num;
}

void main() {
	// atoi(����) ���ڷ� �ƽ�Ű�ڵ带 �̿��ؼ�...
	// '0' -> �ƽ�Ű�ڵ�� 48
	// printf("%c, %d\n", '0', '0');
	// printf("%d", '1' - '0');
	char str[10];

	gets(str);
	printf("%s�� ��ȯ�ϸ� %d\n", str, my_toInt(str));
}