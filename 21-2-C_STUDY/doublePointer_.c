#include <stdio.h>
#define ROW 2
#define COL 3
void printArr(int(*arr)[COL]);
void printArrJustPointer(int* arr);

void main() {
	int twoArr[ROW][COL] = { {10,20,30}, {40,50,60} };
	int** doublePtr = twoArr; // ���� �����ͷ� ������ �迭�� �ּҸ� ����Ű�� ���� �ùٸ� ����� �ƴϴ�.
	int(*ptrPtr)[COL] = twoArr; // �迭 �����͸� �̿��� ������ �迭�� �ּҸ� ����Ű�� ���� �ùٸ� ���!
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
	printf("doublePtr[0] \t= %d\n", doublePtr[0]);	// �߸��� ���� (������ �ƴ�. ���...)
	printf("&doublePtr[0] \t= %p\n", &doublePtr[0]);
	printf("*doublePtr \t= %d\n", *doublePtr);		// �߸��� ���� (������ �ƴ�. ���...)
	//printf("doublePtr[0][0] \t= %d\n", doublePtr[0][0]);	// �߸��� ���� (���α׷� ����)
	//printf("*doublePtr \t= %d\n", **doublePtr);			// �߸��� ���� (���α׷� ����)
	printf("&doublePtr[0][0]= %p\n\n", &doublePtr[0][0]);

	printArr(ptrPtr);
}

void printArr(int(*arr)[COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", arr[i][j]); // �Ϲ����� �迭 ���� ���
		}
	}
	puts("");

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", *(*(arr + i) + j)); // ������ ���� ���
		}
	}
	puts("");

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", (*(arr + i))[j]); // ������ �迭 ���� ���
		}
	}
	puts("");
}

void printArrJustPointer(int* arr) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d ", *(arr + i * ROW + j)); // ������ ������ ���� ���
		} // ��·�ų� �޸𸮴� ������ �������� '����'�޸� �̹Ƿ�.. �� ��ĵ� �� ��������
	}
	puts("");
}