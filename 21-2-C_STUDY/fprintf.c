#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num;

	FILE* fp = fopen("./test.txt", "w+");

	fscanf(fp, "%d", &num); // ���Ͽ��� �о����
	fprintf(fp, "%d", num); // ���Ͽ� ���(����)

	fscanf(stdin, "%d", &num); // ǥ���Է¿��� �о���� (Ű����)
	fprintf(stdout, "%d", num); // ǥ����� ���� (�ܼ�)

}