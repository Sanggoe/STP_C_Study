#include <stdio.h>
#define SIZE 6

// �迭�� �̿����� �ʰ� ���� ���
int main(void) {
	int a[SIZE] = { 11, 22, 33, 44, 55, 66 };
	int* p = &a[0];
	int* q = &a[5];

	// p : 16���� �ּ� ������ ��� ����

	/*
	//for (int i = 0; i < SIZE; i++) {
	for (int i = SIZE-1; i >= 0; i--) {
		printf("*p+i : %d\t*(p+i) : %d\n", *p+i, *(p+i)); // �ּ� ����
	} // p�� &a[0]�� for���� ���������� ��� ����Ű�� ����.
	//printf("p : %p\n", p);

	p = &a[5];
	for (int i = 0; i < SIZE; i++) {
//		printf("p : %p\n", p);
		printf("%d\n", *(p--)); // �ּ� ���� 2  �ٸ� ��������...
	} // p�� &a[0]���� �ϳ��� �����ϸ鼭 ����Ű�� ����.
	printf("p : %p\n", p);
	*/

	while (p != q) {
		printf("%d ", *(q--));
	}
	printf("%d ", *q);

	return 0;
}