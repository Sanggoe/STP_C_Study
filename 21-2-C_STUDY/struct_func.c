#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct bookInfo {
	int bookNum;
	char* title;
	char author[10];
} Book;

Book books[10];

void func1(struct bookInfo b1, struct bookInfo b2);
void func2(Book b1, Book b2);

void func3(struct bookInfo books[10]);
void func4(struct bookInfo* books);

void func5(Book books[10]);
void func6(Book* books);


// 구조체
struct bookInfo func7();
Book func8();

// 구조체 배열
struct bookInfo* func9();
Book* func10();