#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[] = "Today's_Menu\n Rice,Soup,Kimchi,Frieggs+Tomatosource";
	char* ptr = strtok(str, " ,+"); // 공백, 쉼표, +기호 를 분리할 토큰으로 한다

	while (ptr != NULL) {
		puts(ptr);
		ptr = strtok(NULL, " ,+");
	}
}