#include <stdio.h>
#define SIZE 4

void addArray(int A[][SIZE], int B[][SIZE], int result[][SIZE], int);
void subArray(int A[][SIZE], int B[][SIZE], int result[][SIZE], int);
void printArray(int result[][SIZE], int);

int main() {
    int A[SIZE][SIZE] = {
        {1,3,5,6},
        {1,1,0,1},
        {2,4,1,3},
        {5,1,2,0}
    };
    int B[SIZE][SIZE] = {
        {1,1,1,1},
        {1,1,1,1},
        {0,0,0,0},
        {1,1,1,1}
    };
    int result[SIZE][SIZE] = { 0 };
    
    printf("A + B의 결과는\n");
    addArray(A, B, result, SIZE);
    printArray(result, SIZE);

    printf("A - B의 결과는\n");
    subArray(A, B, result, SIZE);
    printArray(result, SIZE);
}

void addArray(int A[][SIZE], int B[][SIZE], int result[][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subArray(int A[][SIZE], int B[][SIZE], int result[][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void printArray(int result[][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%3d", result[i][j]);
        }
        puts("");
    }
    puts("");
}