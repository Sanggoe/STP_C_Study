#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	char str[] = "Today's_Menu\n Rice,Soup,Kimchi,Frieggs+Tomatosource";
	char* ptr = strtok(str, " ,+"); // ����, ��ǥ, +��ȣ �� �и��� ��ū���� �Ѵ�

	while (ptr != NULL) {
		puts(ptr);
		ptr = strtok(NULL, " ,+");
	}
}