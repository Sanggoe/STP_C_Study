#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
} STD;

// 반환형 STD
// struct student
STD higher(STD* s);

void main() {
	STD s[3] = { {30,"KIM",4.3}, {31,"KIM",4.5}, {32,"MIN",3.7} };
	STD highst;

	// 출력
	for (int i = 0; i < 3; i++) {
		printf("학생의 번호=%d, 이름=%s, 성적=%.1f\n", s[i].number, s[i].name, s[i].grade);
	}

	puts("");
	highst = higher(s);

	printf("점수가 더 높은 학생은\n학생의 번호=%d, 이름=%s, 성적=%.1f\n", highst.number, highst.name, highst.grade);
}

STD higher(STD* s) {
	double max = s[0].grade;
	int max_index = 0;

	for (int i = 1; i < 3; i++) {
		if (max < s[i].grade) {
			max = s[i].grade;
			max_index = i;
		}
	}

	return s[max_index];
}