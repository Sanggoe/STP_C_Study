#include <stdio.h>

int* add(int x, int y);

int main() {
	int a = 30, b = 50;
	int* sum;

	sum = add(a, b);

	printf("*sum == result == %d\n", *sum); // ��Ģ�����δ� ������ ���� �Ѵ�!
							  // �Լ� ȣ�� ���� ������������ �ּ��̱� ����
	*sum = 10;
	printf("*sum == result == %d\n", *sum); // ��Ģ�����δ� ������ ���� �Ѵ�!

	return 0;
}

int* add(int x, int y) {
	int result = x + y;
	return (&result);
}