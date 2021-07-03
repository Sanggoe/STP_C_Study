#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void main() {
	int num;
	scanf("%d", &num);
	printf("\n");

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 5; j++) { // 5를 num으로
			for (int k = 0; k <= i; k++) {
				for (int star = 0; star <= j; star++) {
					printf("*");
				}
				for (int blank = 0; blank < 5 - (j+1); blank++) { // 5를 num으로
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}