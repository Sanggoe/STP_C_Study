#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 3

typedef struct profile {
	char name[20];
	double grade;
	int english;
}profile;

void input_data(profile* ps, int size);
void good_find(profile* ps, int size);

void main() {
	profile person[SIZE];
	puts("우수 사원 기준 : 학점 3.8 이상, 영어 점수 800 이상\n");

	input_data(person, SIZE);
	good_find(person, SIZE);
}
void input_data(profile* ps, int size) {
	int i = 0;

	while (i < size) {
		printf("이름: ");
		scanf("%s", ps->name);
		getchar();

		printf("학점: ");
		scanf("%lf", &ps->grade);
		getchar();
		
		printf("영어점수: ");
		scanf("%d", &ps->english);
		getchar();
		puts("");
		i++, ps++;
	}
}
void good_find(profile* ps, int size) {
	int i = 0;

	puts("우수사원은");
	while (i < size) {
		if (ps->grade >= 3.8 && ps->english >= 800)
			printf("이름: %s, 학점: %.1lf, 영어점수: %d\n", ps->name, ps->grade, ps->english);
		i++, ps++;
	}
}