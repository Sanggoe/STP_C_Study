#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 3

typedef struct word {
	char eng[20];
	char kor[20];
} WORD;

void main() {
	WORD dict[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("영어 단어 입력 >> ");
		scanf("%s", dict[i].eng);
		printf("한글 단어 입력 >> ");
		scanf("%s", dict[i].kor);
	}

	for (int i = 0; i < SIZE; i++) {
		printf("영어 단어 : %s\n한글 단어 : %s\n", dict[i].eng, dict[i].kor);
	}
}