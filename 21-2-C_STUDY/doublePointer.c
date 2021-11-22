#include <stdio.h>

void main() {
	int num = 10;
	int** ptr2 = &num;

	printf("  num %d\n", num);
	printf("  num %p\n", &num);
	printf("  ptr2 %p\n", ptr2);
	printf(" *ptr2 %p\n", *ptr2);
	printf("**ptr2 %p\n", **ptr2);
	
	printf("Program is stoped\n");
}