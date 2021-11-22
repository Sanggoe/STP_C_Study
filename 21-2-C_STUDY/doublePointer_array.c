#include <stdio.h>

void main(void) {
	int array[2][4] = { {10, 20, 30, 40}, {50, 60, 70, 80} };
	printf("%#p\n", array);			/*1*/
	printf("%#p\n", *array);			/*2*/
	printf("%#p\n", array + 1);			/*3*/
	printf("%#p\n", array[1]);			/*4*/

	printf("%d\n", array[0][0] + 3);		/*5*/
	printf("%d\n", *(array[0] + 2));		/*6*/
	printf("%d\n", *(*(array + 1) + 3));	/*7*/
	printf("%d\n", **array + 1);			/*8*/

}