#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char result[20] = "Hello";
	char initialized[20] = "";
	char notInitialized[20];
	char source[10] = "my friend";

	strcat(result, source);
	printf("%s\n", result);
	
	strcat(initialized, source);
	printf("%s\n", initialized);

	strcat(notInitialized, source);
	printf("%s\n", notInitialized);

//	printf("%p", notInitialized);
}