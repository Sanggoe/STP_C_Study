#include <stdio.h>
void callByValue(int n);
void callByReference(int* n);

void main() {
	int num = 10;

	printf("%d\n", num);
	callByReference(&num);
	printf("%d\n", num);
}

void callByValue(int n) {
	n = 20;
}

void callByReference(int* n) {
	*n = 20;
}