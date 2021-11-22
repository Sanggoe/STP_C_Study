#include <stdio.h>
#define ROW 3
#define COL 3
void mult_arr(int A[ROW][COL], int B[ROW][COL], int result[ROW][COL]);
void prt_arr(int result[ROW][COL]);

void main() {
	int A[ROW][COL] = { {3,5,2},{4,2,7},{5,7,2} };
	int B[ROW][COL] = { {1,0,0},{0,1,0},{0,0,1} };
	int result[ROW][COL] = { 0 };

	prt_arr(A);
	puts("");
	prt_arr(B);
	puts("");
	mult_arr(A, B, result);
	prt_arr(result);
}

void mult_arr(int A[ROW][COL], int B[ROW][COL], int result[ROW][COL]) {
	int i, j, k;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			for (int k = 0; k < COL; k++) {
				result[i][k] += A[i][j] * B[j][k];
			}
		}
	}
}

void prt_arr(int result[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%3d", result[i][j]);
		}
		puts("");
	}
}