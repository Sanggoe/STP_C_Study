#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void main() {
	int num, sum=0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	while (num) {
		sum += num % 10;
		num /= 10;
	}

	printf("�� �ڸ����� ���� %d �Դϴ�.\n", sum);
}
