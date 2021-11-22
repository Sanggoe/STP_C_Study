#include <stdio.h>
#define SIZE 4

void addArray(int A[][SIZE], int B[][SIZE], int result[][SIZE]);
void subArray(int A[][SIZE], int B[][SIZE], int result[][SIZE]);
void printArray(int result[][SIZE]);

int main() {
    int A[][SIZE] = {
        {1,3,5,6},
        {1,1,0,1},
        {2,4,1,3},
        {5,1,2,0}
    };
    int B[][SIZE] = {
        {1,1,1,1},
        {1,1,1,1},
        {0,0,0,0},
        {1,1,1,1}
    };
    int result[][SIZE] = {0};

    printArray(A);
    puts("A였습니다\n");
    printArray(B);
    puts("B였습니다\n");
    printArray(result);
    puts("result였습니다\n");

//    addArray(A, B, result);
//    subArray(A, B, result);
}

void addArray(int A[][SIZE], int B[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];

        }
    }
    printf("A + B = \n");
    printArray(result);
}


void subArray(int A[][SIZE], int B[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] - B[i][j];
            //printf("%d", B[i][j]);
        }
    }
    printf("A - B = \n");
    printArray(result);
}

void printArray(int result[][SIZE]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (result[i][j] >= 0) {
                printf(" %d ", result[i][j]);
            }
            else
                printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}