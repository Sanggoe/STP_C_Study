#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct bookInfo {
	int bookNum;
	char* title;
	char author[10];
} Book;

Book* bp; // ���� ������ size�� ���� 4byte

int main() {
	Book bArr[2] = { {1, "first", "Park"}, {2, "second", "Kim"} };
	bp = bArr; // == &bArr[0] ����ü �迭�� �̸��� �ּ�

	// ����ü �迭 ����
	printf("%d, %s, %s\n", bArr[0].bookNum, bArr[0].title, bArr[0].author);
	printf("%d, %s, %s\n", bArr[1].bookNum, bArr[1].title, bArr[1].author);

	// ������ ���� ����
	printf("%d, %s, %s\n", bp->bookNum, bp->title, bp->author); // ->�� ����
	printf("%d, %s, %s\n", (bp + 1)->bookNum, (bp + 1)->title, (bp + 1)->author);
	// �ε����� ���ؼ� �ش� ������ ���� ->�� ����
	
}