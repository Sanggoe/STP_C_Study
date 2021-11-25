#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct professor {
	char name[10];
	char subject[20];
} PRO;

typedef struct student {
	char name[10];
	int std_num;
	PRO professor;
} STD;

void show_info(STD*, int);
void oldStu_info(STD*, int);

void main() {
	STD students[3];

	for (int i = 0; i < 3; i++) {
		scanf("%s %d %s %s", students[i].name, &students[i].std_num, students[i].professor.name, students[i].professor.subject);
	}
	puts("\n");

	show_info(students, 3);
	oldStu_info(students, 3);
}

void show_info(STD* students, int size) {
	puts("show_info ȣ��");

	for (int i = 0; i < size; i++) {
		printf("�л� �̸� : %s\n", (students + i)->name);
		printf("�й� : %d\n", (students + i)->std_num);
		printf("�����̸� : %s\n", (students + i)->professor.name);
		printf("������� : %s\n", (students + i)->professor.subject);
		puts("");
	}
	puts("\n");
}

void oldStu_info(STD* students, int size) {
	puts("oldStu_info ȣ��");
	for (int i = 0; i < size; i++) {
		if ((students + i)->std_num <= 2010) {
			printf("�л� �̸� : %s\n", (students + i)->name);
			printf("�й� : %d\n", (students + i)->std_num);
			printf("�����̸� : %s\n", (students + i)->professor.name);
			printf("������� : %s\n", (students + i)->professor.subject);
			puts("");
		}
	}
}