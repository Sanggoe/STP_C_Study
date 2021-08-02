#include <stdio.h>

void main() {
	int twoArr[2][2] = { {1,2},	{3,4} };
	int** ptrptr = twoArr; // == &twoArr == twoArr[0] == &twoArr[0] == &twoArr[0][0]

	printf("twoArr \t\t= %p\n", twoArr);
	printf("&twoArr \t= %p\n", &twoArr);
	printf("twoArr[0] \t= %p\n", twoArr[0]);
	printf("&twoArr[0] \t= %p\n", &twoArr[0]);
	printf("&twoArr[0][0] \t= %p\n", &twoArr[0][0]);
}