#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double studentsScores[2][2];
    double avg[2] = { 0.0, 0.0 };

    scanf("%lf %lf %lf %lf", &studentsScores[0][0], &studentsScores[0][1], &studentsScores[1][0], &studentsScores[1][1]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d번째 학생의 %d번째 점수 : %lf\n", i+1, j+1, studentsScores[i][j]);
            avg[i] += studentsScores[i][j];
        }
    }

    printf("첫 번째 학생의 평균은 %.2lf 입니다.\n", avg[0] / 2);
    printf("두 번째 학생의 평균은 %.2lf 입니다.\n", avg[1] / 2);
}