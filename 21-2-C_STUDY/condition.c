#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printPrime(int arr[]);

void main(void) {
	int nums[100];

	for (int i = 0; i < 100; i++) {
		nums[i] = i + 1;
	}

	printPrime(nums);
}

void printPrime(int arr[]) {
	int count = 0;

	for(int i=0; i<100; i++)
		if (arr[i] % 5 == 0) {
			printf("%d ", arr[i]);
			if(++count% 5 == 0)
				puts("");
		}
}