#include <stdio.h>

void myStrcat(char* to, char* from);

void main() {
	char to[21] = "I'm ";
	char* from = "kyeong jong!";

	myStrcat(to, from);
	printf("%s\n", to);
}

void myStrcat(char* to, char* from) {

	while (*(to++) != '\0');
	to--;

	while (*(from) != '\0') {
		*(to++) = *(from++);

		// to[i] = from[i];
		// i++;
	}
	*to = '\0';
}