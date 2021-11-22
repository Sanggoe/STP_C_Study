#include <stdio.h>

int* add(int x, int y);

int main() {
	int a = 30, b = 50;
	int* sum;

	sum = add(a, b);

	printf("*sum == result == %d\n", *sum); // 원칙적으로는 오류가 나야 한다!
							  // 함수 호출 이후 없어져버리는 주소이기 때문
	*sum = 10;
	printf("*sum == result == %d\n", *sum); // 원칙적으로는 오류가 나야 한다!

	return 0;
}

int* add(int x, int y) {
	int result = x + y;
	return (&result);
}