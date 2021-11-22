#include <stdio.h>
#define SIZE 4

void calArray(int[][SIZE], int);
void printArray(int[][SIZE], int);

int main() {
	int arr[SIZE][SIZE] = {
		{1,2,3},
		{2,3,4},
		{1,0,1}
	};

	calArray(arr, SIZE);
	printArray(arr, SIZE);
}

void calArray(int arr[][SIZE], int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-1; j++) {
			arr[i][size - 1] += arr[i][j];
		}
	}

	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size - 1; i++) {
			arr[size-1][j] += arr[i][j];
		}
	}

	for (int j = 0; j < size - 1; j++) {
		arr[size - 1][size - 1] += arr[size - 1][j];
	}

	
}
void printArray(int arr[][SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%3d", arr[i][j]);
		}
		puts("");
	}
}
