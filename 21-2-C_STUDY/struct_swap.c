#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct data {
	int num1;
	int num2;
}data;

void input(data* p); // �ּҸ� �Ѱ� ���� �����ϴ� call by reference
data swap(data t); // ������ ���� �����ؼ� �ѱ�� call by value
void print(data t); // call by value


void main() {
	data t;

	input(&t); // ���ڷ� �ּ� �ѱ�
	printf("���� ��:");
	print(t);

	t = swap(t); // 10, 20

	printf("�ٲ� ��:");
	print(t);
}

void input(data* p) {
	printf("�� ���� ������ �Է�:");
	scanf("%d %d", &p->num1, &p->num2);
}

data swap(data t) {
	int temp;

	temp = t.num1;
	t.num1 = t.num2;
	t.num2 = temp;

	return t; // ���� ��ȯ
}
void print(data t) {
	printf("%d %d\n", t.num1, t.num2);
}