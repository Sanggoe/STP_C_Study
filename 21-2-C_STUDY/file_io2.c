#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// score.txt �о�ͼ� ���� ���ؼ� result.txt �� �����ϴ� �Լ�

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

	while (!feof(fpr)) { // NULL�� �ƴ� �� ����
		fscanf(fpr, "%s %d %d %d", str, &arr[0], &arr[1], &arr[2]);
		sum = arr[0] + arr[1] + arr[2];
		fprintf(fpw, "%s %d %d %d %d\n", str, arr[0], arr[1], arr[2], sum);
	}
}