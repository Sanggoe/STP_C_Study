#include <stdio.h>

void sortArray(int arr[]) {
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

void main() {
	int arr[2] = { 0, 1 };

	printf("%d, %d\n", arr[0], arr[1]);
	sortArray(arr);
	printf("%d, %d\n", arr[0], arr[1]);

	printf("%d\n", arr[2]);
	arr[0] = 20;
	arr[2] = 10;
}