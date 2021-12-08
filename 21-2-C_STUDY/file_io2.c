#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// score.txt 읽어와서 합을 구해서 result.txt 에 저장하는 함수

void main() {
	FILE* fpr = fopen("./score.txt", "r");
	FILE* fpw = fopen("./result.txt", "a");
	int arr[3];
	int sum = 0;
	char str[10];

	if (fpr == NULL || fpw == NULL) {
		puts("fopen failed!");
		exit(0);
	}
	else {
		puts("fopen successful!");
	}

	while (!feof(fpr)) { // NULL이 아닐 때 까지
		fscanf(fpr, "%s %d %d %d", str, &arr[0], &arr[1], &arr[2]);
		sum = arr[0] + arr[1] + arr[2];
		fprintf(fpw, "%s %d %d %d %d\n", str, arr[0], arr[1], arr[2], sum);
	}
}