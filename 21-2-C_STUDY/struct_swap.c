#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct data {
	int num1;
	int num2;
}data;

void input(data* p); // 주소를 넘겨 직접 접근하는 call by reference
data swap(data t); // 변수의 값을 복사해서 넘기는 call by value
void print(data t); // call by value


void main() {
	data t;

	input(&t); // 인자로 주소 넘김
	printf("원래 값:");
	print(t);

	t = swap(t); // 10, 20

	printf("바뀐 후:");
	print(t);
}

void input(data* p) {
	printf("두 개의 정수를 입력:");
	scanf("%d %d", &p->num1, &p->num2);
}

data swap(data t) {
	int temp;

	temp = t.num1;
	t.num1 = t.num2;
	t.num2 = temp;

	return t; // 값을 반환
}
void print(data t) {
	printf("%d %d\n", t.num1, t.num2);
}