#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("ют╥б : ");
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}
}