#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

double TF(double cm);

int main(void) {
	double cm, inch;

	printf("cm를 입력하세요 : ");
	scanf("%lf", &cm);

	system("cls");
	inch = TF(cm);
	printf("%.3lfcm = %.3lfinch", cm, inch);

	return 0;
}

double TF(double cm) {
	double inch = cm * 0.393701;
	return inch;
}