#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num;

	FILE* fp = fopen("./test.txt", "w+");

	fscanf(fp, "%d", &num); // 파일에서 읽어오기
	fprintf(fp, "%d", num); // 파일에 출력(저장)

	fscanf(stdin, "%d", &num); // 표준입력에서 읽어오기 (키보드)
	fprintf(stdout, "%d", num); // 표준출력 저장 (콘솔)

}