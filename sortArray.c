#include <stdio.h>

void sortArray(int arr[]) {
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

void main() {
	int arr[2] = { 0, 1 };
		
	printf("%d, %d", arr[0], arr[1]);
	sortArray(arr);
	printf("%d, %d", arr[0], arr[1]);
}