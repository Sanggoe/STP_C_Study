#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double studentsScores[2][2];
    double avg[2] = { 0.0, 0.0 };

    scanf("%lf %lf %lf %lf", &studentsScores[0][0], &studentsScores[0][1], &studentsScores[1][0], &studentsScores[1][1]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d��° �л��� %d��° ���� : %lf\n", i+1, j+1, studentsScores[i][j]);
            avg[i] += studentsScores[i][j];
        }
    }

    printf("ù ��° �л��� ����� %.2lf �Դϴ�.\n", avg[0] / 2);
    printf("�� ��° �л��� ����� %.2lf �Դϴ�.\n", avg[1] / 2);
}