#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct student {
	int number;
	char name[10];
	double grade;
} STD; // 정의

void main() {
	// int 변수이름
	// double 변수이름
	// struct student 변수이름
	// STD 변수이름
	struct student s; // 선언
	// STD s;

	s.number = 20210100;
	strcpy(s.name, "my name");
	s.grade = 4.5;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %lf\n", s.grade);
}