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
	puts("��� ��� ���� : ���� 3.8 �̻�, ���� ���� 800 �̻�\n");

	input_data(person, SIZE);
	good_find(person, SIZE);
}
void input_data(profile* ps, int size) {
	int i = 0;

	while (i < size) {
		printf("�̸�: ");
		scanf("%s", ps->name);
		getchar();

		printf("����: ");
		scanf("%lf", &ps->grade);
		getchar();
		
		printf("��������: ");
		scanf("%d", &ps->english);
		getchar();
		puts("");
		i++, ps++;
	}
}
void good_find(profile* ps, int size) {
	int i = 0;

	puts("��������");
	while (i < size) {
		if (ps->grade >= 3.8 && ps->english >= 800)
			printf("�̸�: %s, ����: %.1lf, ��������: %d\n", ps->name, ps->grade, ps->english);
		i++, ps++;
	}
}