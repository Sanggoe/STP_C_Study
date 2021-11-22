#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double scores[3];
    double avg = 0.0;

    scanf("%lf %lf %lf", &scores[0], &scores[1], &scores[2]);

    for (int i = 0; i < 3; i++) {
        printf("%d번째 점수 : %lf\n", i, scores[i]);
        avg += scores[i];
    }

    printf("평균은 %.2lf 입니다.\n", avg / 3);
}