#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int* arr;

	arr = (int*)malloc(sizeof(int) * 3);

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	arr = (int*)realloc(arr, sizeof(int) * 5);

	arr[3] = 4;
	arr[4] = 5;

	for (int i = 0; i < 5; i++) {
		printf("%p", arr);
		printf("\t%d\n", *(arr++));
	}
	/*
//	scanf("%s", str1);
	//scanf("%s", str2);
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	fprintf(stdout, "%s\n", str1);
	for(int i=0; i<20; i++)
		printf("%c\n", str2[i]);

//	fprintf(stdout, "%d %d %d", arr[0], arr[1], arr[2]);
*/
}