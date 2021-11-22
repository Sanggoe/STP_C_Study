#include <stdio.h>
#define ROW 2
#define COL 3
void printArr(int(*arr)[COL]);
void printArrJustPointer(int* arr);

void main() {
	int twoArr[ROW][COL] = { {10,20,30}, {40,50,60} };
	int** doublePtr = twoArr; // 이중 포인터로 이차원 배열의 주소를 가리키는 것은 올바른 방법이 아니다.
	int(*ptrPtr)[COL] = twoArr; // 배열 포인터를 이용해 이차원 배열의 주소를 가리키는 것이 올바른 방법!
	// == &twoArr == twoArr[0] == &twoArr[0] == &twoArr[0][0]

	printf("twoArr \t\t= %p\n", twoArr);
	printf("&twoArr \t= %p\n", &twoArr);
	printf("twoArr[0] \t= %p\n", twoArr[0]);
	printf("&twoArr[0] \t= %p\n", &twoArr[0]);
	printf("&twoArr[0][0] \t= %p\n\n", &twoArr[0][0]);

	printf("&ptrPtr \t= %p\n", &ptrPtr);
	printf("ptrPtr\t\t= %p\n", ptrPtr);
	printf("ptrPtr[0] \t= %p\n", ptrPtr[0]);
	printf("&ptrPtr[0] \t= %p\n", &ptrPtr[0]);
	printf("*ptrPtr \t= %p\n", *ptrPtr);
	printf("ptrPtr[0][0] \t= %d\n", ptrPtr[0][0]);
	printf("**ptrPtr \t= %d\n", **ptrPtr);
	printf("&ptrPtr[0][0] \t= %p\n\n", &ptrPtr[0][0]);

	printf("&doublePtr \t= %p\n", &doublePtr);
	printf("doublePtr\t= %p\n", doublePtr);
	printf("doublePtr[0] \t= %d\n", doublePtr[0]);	// 잘못된 접근 (에러는 아님. 경고...)
	printf("&doublePtr[0] \t= %p\n", &doublePtr[0]);
	printf("*doublePtr \t= %d\n", *doublePtr);		// 잘못된 접근 (에러는 아님. 경고...)
	//printf("doublePtr[0][0] \t= %d\n", doublePtr[0][0]);	// 잘못된 접근 (프로그램 멈춤)
	//printf("*doublePtr \t= %d\n", **doublePtr);			// 잘못된 접근 (프로그램 멈춤)
	printf("&doublePtr[0][0]= %p\n\n", &doublePtr[0][0]);

	printArr(ptrPtr);
}

void printArr(int(*arr)[COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", arr[i][j]); // 일반적인 배열 접근 방식
		}
	}
	puts("");

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", *(*(arr + i) + j)); // 포인터 접근 방식
		}
	}
	puts("");

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", (*(arr + i))[j]); // 포인터 배열 접근 방식
		}
	}
	puts("");
}

void printArrJustPointer(int* arr) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", *(arr + i * ROW + j)); // 일차원 포인터 접근 방식
		} // 어쨌거나 메모리는 일차원 연속적인 '선형'메모리 이므로.. 이 방식도 잘 이해하자
	}
	puts("");
}