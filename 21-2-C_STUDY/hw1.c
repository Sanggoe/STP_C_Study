#include <stdio.h>

void printAllElements(int[]);
int findMax(int[]);
int findMin(int[]);
void sortByAscending(int[]);
void sortByDescending(int[]);

void main() {
	int arr[10] = { 9,1,2,4,6,8,5,3,7,10 };

	printAllElements(arr);

	printf("ÃÖ´ñ°ª : %d\n", findMax(arr));
	printf("ÃÖ¼Ú°ª : %d\n", findMin(arr));

	sortByAscending(arr);
	printAllElements(arr);

	sortByDescending(arr);
	printAllElements(arr);

}

void printAllElements(int arr[]) {
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		if (i != 9)
			printf(", ");
	}
	puts("");
}

int findMax(int arr[]) {
	int max = arr[0];

	for (int i = 1; i < 10; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int findMin(int arr[]) {
	int min = arr[0];

	for (int i = 1; i < 10; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

void sortByAscending(int arr[]) {
	int temp;
	
	for (int i = 0; i < 10; i++) {
		int min_index = i;
		for (int j = i; j < 10; j++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

void sortByDescending(int arr[]) {
	int temp;

	for (int i = 0; i < 10; i++) {
		int max_index = i;
		for (int j = i; j < 10; j++) {
			if (arr[max_index] < arr[j]) {
				max_index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[max_index];
		arr[max_index] = temp;
	}
}
