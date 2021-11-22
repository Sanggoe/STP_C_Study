#include <stdio.h>

void main() {
	int num = 10;
	int* ptr = &num;
	int** ptr2 = &ptr;

	printf("%d == %d == %d \n", num, *ptr, **ptr2);
	printf("%p == %p == %p \n", &num, ptr, *ptr2);
	printf("%p == %p \n", &ptr, ptr2);

	*ptr = 20;
	printf("%d\n", num);

	**ptr2 = 30;
	printf("%d\n", num);
}