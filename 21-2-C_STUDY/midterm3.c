#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int dan = 1;

	while (dan > 0 && dan < 10) {
		printf("´Ü : ");
		scanf("%d", &dan);

		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %-2d\t", dan, i, dan*i);
			if (!(i % 3)) {
				puts("");
			}
		}
		puts("");
	}
}