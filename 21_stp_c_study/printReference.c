#include<stdio.h>

void print_reference(int n);

void main() {
	int num = 100;
	int* ptr = &num;

	print_reference(num);
	print_reference(ptr);
	
	printf("num 16���� : %p\t\t\tnum�� �ּ� : %p\n", num, &num);
	printf("num 10���� : %d\t\t\tnum�� �ּ� : %d\n", num, &num);

	return 0;
}
void print_reference(int n) {
	printf("�Ѱܹ��� �� 16���� : %p\t\t�Ű����� n�� �ּ� : %p\n", n, &n);
	printf("�Ѱܹ��� �� 10���� : %d\t\t�Ű����� n�� �ּ� :  %d\n\n", n, &n);
}