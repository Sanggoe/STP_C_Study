#include <stdio.h>
#define SIZE 6

// 배열을 이용하지 않고 역순 출력
int main(void) {
	int a[SIZE] = { 11, 22, 33, 44, 55, 66 };
	int* p = &a[0];
	int* q = &a[5];

	// p : 16진수 주소 형식을 담는 변수

	/*
	//for (int i = 0; i < SIZE; i++) {
	for (int i = SIZE-1; i >= 0; i--) {
		printf("*p+i : %d\t*(p+i) : %d\n", *p+i, *(p+i)); // 주소 접근
	} // p가 &a[0]를 for문이 끝날때까지 계속 가리키고 있음.
	//printf("p : %p\n", p);

	p = &a[5];
	for (int i = 0; i < SIZE; i++) {
//		printf("p : %p\n", p);
		printf("%d\n", *(p--)); // 주소 접근 2  다만 차이점은...
	} // p가 &a[0]에서 하나씩 증가하면서 가리키고 있음.
	printf("p : %p\n", p);
	*/

	while (p != q) {
		printf("%d ", *(q--));
	}
	printf("%d ", *q);

	return 0;
}