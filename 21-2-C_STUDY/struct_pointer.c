#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct bookInfo {
	int bookNum;
	char* title;
	char author[10];
} Book;

Book* bp; // 선언 포인터 size도 역시 4byte

int main() {
	Book bArr[2] = { {1, "first", "Park"}, {2, "second", "Kim"} };
	bp = bArr; // == &bArr[0] 구조체 배열의 이름이 주소

	// 구조체 배열 접근
	printf("%d, %s, %s\n", bArr[0].bookNum, bArr[0].title, bArr[0].author);
	printf("%d, %s, %s\n", bArr[1].bookNum, bArr[1].title, bArr[1].author);

	// 포인터 형식 접근
	printf("%d, %s, %s\n", bp->bookNum, bp->title, bp->author); // ->로 접근
	printf("%d, %s, %s\n", (bp + 1)->bookNum, (bp + 1)->title, (bp + 1)->author);
	// 인덱스를 더해서 해당 포인터 값에 ->로 접근
	
}