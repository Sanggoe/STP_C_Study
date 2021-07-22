#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int randNums[10]; // 크기 10 int형 배열 randNums[] 선언
    int sum = 0; // 임시로 모두 더할 변수 선언
    double avg = 0;    // 추가적으로 필요한 변수 선언

    srand((unsigned)time(NULL));

    // randNums[] 0 ~ 9까지 random 숫자 대입, 더해서 평균 구하기
    for (int i = 0; i < 10; i++) {
        randNums[i] = rand() % 20 + 1; // 1 ~ 20
        sum += randNums[i];
        printf("%d ", randNums[i]);
    }
    avg = sum / 10; // 평균 구하기
    printf("\n평균은 : %lf \n", avg);

    return 0;
}