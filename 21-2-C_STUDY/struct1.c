#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct student {
	int number;
	char name[10];
	double grade;
} STD; // ����

void main() {
	// int �����̸�
	// double �����̸�
	// struct student �����̸�
	// STD �����̸�
	struct student s; // ����
	// STD s;

	s.number = 20210100;
	strcpy(s.name, "my name");
	s.grade = 4.5;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %lf\n", s.grade);
}