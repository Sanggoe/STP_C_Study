#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double temp[5][2] = {
        {21, 15},
        {28, 17},
        {27, 16},
        {26, 17},
        {28, 19}
    };
    char date[5][3] = { "w", "t", "f", "s", "S" };

    for (int i = 0; i < 5; i++) {
        double avg = 0.0;
        for (int j = 0; j < 2; j++) {
            avg += temp[i][j];
        }
        printf("%s요일 평균 온도는 %lf\n", date[i], avg / 2);
    }
}