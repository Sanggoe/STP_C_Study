#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char name[10];
	char subject[20];
}PRO;

typedef struct {
	char name[10];
	int std_num;
	PRO professor;
} student;

int main(void)
{
	student course[3];
	student* p = &course;

	for (int i = 0; i < 3; i++, p++)
	{
		printf("�л��̸� : ");
		scanf("%s", p->name);
		printf("\n�й� : ");
		scanf("%d", &p->std_num);
		printf("\n�����̸� : ");
		scanf("%s", p->professor.name);
		printf("\n������� : ");
		scanf("%s", p->professor.subject);
	}

	return 0;
}