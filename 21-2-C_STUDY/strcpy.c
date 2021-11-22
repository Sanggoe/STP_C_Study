#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char result[20] = "Hello";
	char source[10] = "my friend";

	printf("%s\n", result);
	strcpy(result, source);
	printf("%s\n", result);
}