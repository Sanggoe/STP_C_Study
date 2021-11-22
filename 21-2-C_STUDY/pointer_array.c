#include <stdio.h>

void main() {
	int arr[3] = { 10,20,30 };
	int* ptr = arr;
	int anyVal;

	printf("arr\t: %p\n", arr);
	printf("&arr\t: %p\n\n", &arr);

	printf("arr[0]\t: %d\n", arr[0]);
	printf("arr[1]\t: %d\n", arr[1]);
	printf("arr[2]\t: %d\n\n", arr[2]);

	printf("&arr[0]\t: %p\n", &arr[0]);
	printf("&arr[1]\t: %p\n", &arr[1]);
	printf("&arr[2]\t: %p\n\n", &arr[2]);

	printf("ptr\t: %p\n", ptr);
	printf("&ptr\t: %p\n", &ptr);
	printf("&anyVal\t: %p\n\n", &anyVal);

	printf("*ptr\t: %d\n", *ptr);
	printf("*ptr+1\t: %d\n", *ptr + 1);
	printf("*ptr+2\t: %d\n\n", *ptr + 2);

	printf("*ptr\t: %d\n", *ptr);
	printf("*(ptr+1): %d\n", *(ptr + 1));
	printf("*(ptr+2): %d\n\n", *(ptr + 2));

	printf("ptr[0]\t: %d\n", ptr[0]);
	printf("ptr[1]\t: %d\n", ptr[1]);
	printf("ptr[2]\t: %d\n\n", ptr[2]);

	printf("&ptr[0]\t: %p\n", &ptr[0]);
	printf("&ptr[1]\t: %p\n", &ptr[1]);
	printf("&ptr[2]\t: %p\n\n\n", &ptr[2]);


	for (int i = 0; i < 3; i++) {
		printf("&arr[%d]\t: %p\tarr[%d] : %d\n", i, &arr[i], i, arr[i]);
	} puts("");

	for (int i = 0; i < 3; i++) {
		printf("&ptr[%d]\t: %p\tptr[%d] : %d\n", i, &ptr[i], i, ptr[i]);
	} puts("");

	for (int i = 0; i < 3; i++) {
		printf("arr+%d\t: %p\t*(arr+%d) : %d\n", i, arr + i, i, *(arr + i));
	} puts("");

	for (int i = 0; i < 3; i++) {
		printf("ptr+%d\t: %p\t*(ptr+%d) : %d\n", i, ptr + i, i, *(ptr + i));
	}
}