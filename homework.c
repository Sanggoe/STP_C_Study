#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void main() {
	int num, sum=0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	while (num) {
		sum += num % 10;
		num /= 10;
	}

	printf("각 자리수의 합은 %d 입니다.\n", sum);
}
