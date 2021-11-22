#include <stdio.h>
#include <string.h>

void main() {
	char str1[10] = "Hello"; // Hello
	char* str2 = "Hello";
	int result;

	result = strcmp(str1, str2);
	if (result == 0) {
		printf("%s와 %s는 같다.\n", str1, str2);
	}
	else {
		printf("%s와 %s는 다르다.\n", str1, str2);
	}
}