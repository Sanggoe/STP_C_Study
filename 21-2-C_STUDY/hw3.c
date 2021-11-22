#include <stdio.h>
#define SIZE 4

void printArray(int*);
int  compareArray(int[], int[], int, int);
int  compareArray2(int[][SIZE], int[][SIZE], int, int);

void main() {
    int aryA1[] = { 1,3,5,7,9};
    int aryA2[] = { 1,3,5,7,9,10 };
    int aryB1[][SIZE] = { {10,30,20,40}, {1,3,2,4}};
    int aryB2[][SIZE] = { {10,30,20,40}, {1,3,2,4},{0} };

    int a1Size = sizeof(aryA1) / sizeof(aryA1[0]);
    int a2Size = sizeof(aryA2) / sizeof(aryA2[0]);
    int b1Size = sizeof(aryB1) / sizeof(aryB1[0][0]);
    int b2Size = sizeof(aryB2) / sizeof(aryB2[0][0]);

    if (compareArray(aryA1, aryA2, a1Size, a2Size))
        printf("같은 배열입니다.\n");
    else
        printf("다른 배열입니다.\n");
    
    printf("같은 배열입니다.\n");

    if (compareArray2(aryB1, aryB2, b1Size, b2Size))
        printf("같은 배열입니다.\n");
    else
        printf("다른 배열입니다.\n");
}

void printArray(int *arr) {
    while (*arr != NULL) {
        printf("%d ", *(arr++));
    }
    puts("");
}

int compareArray(int arr1[], int arr2[], int size1, int size2) {
    if (size1 != size2)
        return 0;

    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i])
            return 0;
    }

    return 1;
}
int compareArray2(int arr1[][SIZE], int arr2[][SIZE], int size1, int size2) {
    if (size1 != size2)
        return 0;

    for (int i = 0; i < size1/SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
			if (arr1[i][j] != arr2[i][j])
				return 0;
        }
    }

    return 1;
}
