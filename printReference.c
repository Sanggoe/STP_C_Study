#include<stdio.h>

void print_reference(int n);

void main() {
	int num = 100;
	int* ptr = &num;

	print_reference(num);
	print_reference(ptr);
	
	printf("num 16진수 : %p\t\t\tnum의 주소 : %p\n", num, &num);
	printf("num 10진수 : %d\t\t\tnum의 주소 : %d\n", num, &num);

	return 0;
}
void print_reference(int n) {
	printf("넘겨받은 값 16진수 : %p\t\t매개변수 n의 주소 : %p\n", n, &n);
	printf("넘겨받은 값 10진수 : %d\t\t매개변수 n의 주소 :  %d\n\n", n, &n);
}