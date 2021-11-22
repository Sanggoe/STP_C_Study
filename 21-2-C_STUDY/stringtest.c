#include <stdio.h>
#include <string.h>
void main() {
	char str[] = "12345";

	printf("%d\n", sizeof(str) / sizeof(str[0]));
}