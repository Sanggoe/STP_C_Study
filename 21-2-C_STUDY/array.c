#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double score[3];
	double avg = 0.0;

	for (int i = 0; i < 3; i++) {
		scanf("%lf", &score[i]);
	}

	for (int i = 0; i < 3; i++) {
		avg += score[i];
	}

	avg /= 3;
	printf("�� ������ ����� %.2lf �Դϴ�.\n", avg);
}