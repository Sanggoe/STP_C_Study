#include <stdio.h>
#include <stdarg.h>

void printvar(char* types, ...);

int main(void)
{
	printvar("scdiii", "Hello, World", '!', 4.5, 100, 200, 300); // ���� ���� ����
	return 0;
}

// ���� �Ű�����
void printvar(char* types, ...) {
	va_list argp; // �� ���� ���ڸ� �����ϴµ� ���� Ÿ��
	
	va_start(argp, types); // va_list�� �ʱ�ȭ�ϴ� ��ũ��. types�� ũ��
	while (*types != '\0') {

		switch (*(types++)) {
		case 's':
			printf("%s ", va_arg(argp, char*)); // argp�� ������ �ִ� �� or ����Ű�� �ּҸ� ������ ���� �������� ��ũ��
			break;
		case 'c':
			printf("%c ", va_arg(argp, char));
			break;
		case 'd':
			printf("%.1lf ", va_arg(argp, double));
			break;
		case 'i':
			printf("%d ", va_arg(argp, int));
			break;
		default:
			break;
		}
	}
	va_end(argp); // ����� ������ �μ� ����Ʈ�� �����ϴ� ��ũ��
}