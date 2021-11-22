// 이차원 배열의 값들을 포인터 접근 방식을 이용해 순차적으로 출력하는 코드
// 함수 응용
#include <stdio.h>
#define ROW 4
#define COL 4

void printArrayWay(int [][COL]);
void printPointerWay(int**);

void main() {
	int arr[ROW][COL] = {
		{0,1,2,3},
		{10,11,12,13},
		{20,21,22,23},
		{30,31,32,33}
	};

	printArrayWay(arr); // arr 대신 쓸 수 있는 것은?
	printArrayWay(arr); // ____, ____, ____, ____
}

void printArrayWay(int arr[][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("arr[%d][%d] = %02d | ", i, j, arr[i][j]);
			if (j == 3)
				printf("\n");
		}
	}
	printf("\n");
}

void printPointerWay(int **arr) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			//printf("**(arr+ROW*%d+%d) = %02d | ", i, j, **(arr + ROW * i + j));
			printf("*(*(arr+%d))+%d) = %02d | ", i, j, *(*(arr + j) + i));
			if (j == 3)
				printf("\n");
		}
	}
}