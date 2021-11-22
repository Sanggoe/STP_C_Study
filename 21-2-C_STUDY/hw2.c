#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calFrequncy(int[], int[], int);
int getFrequency(int, int[]);
int getMaxFrequency(int[], int);
void printEachFrequency(int[]);
void printMostFrequent(int[], int);

void main() {
	int arr[] = { 1,3,4,5,6,7,8,9,2,8,2,5,9,1,5,9,1,9,6,3,4,1,5,4,6,7,9,8,5,1,3,4,6 };
	int frequency[9] = {0};
	int num, max;
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int frequency_size = sizeof(frequency) / sizeof(frequency[0]);

	printf("1~9 사이의 임의의 숫자 입력 : ");
	scanf("%d", &num);

	calFrequncy(arr, frequency, arr_size);

	// getFrequency(num, frequency);
	printf("%d는 %d번 나왔습니다.\n\n", num, frequency[num - 1]);
	
	printEachFrequency(frequency);

	printMostFrequent(frequency, frequency_size);
}

int calFrequncy(int arr[], int frequency[], int size) {

	for (int i = 0; i < size; i++) {
		frequency[arr[i] - 1]++;
	}
}

int getFrequency(int num, int frequency[]) {
	
	// . . .

	return frequency[num - 1];
}

void printEachFrequency(int frequency[]) {
	for (int i = 0; i < 9; i++) {
		printf("%d : %d번   |  ", i + 1, frequency[i]);
		if ((i + 1) % 3 == 0)
			printf("\n");
	}
}

int getMaxFrequency(int frequency[], int size) {
	int max = frequency[0];

	for (int i = 0; i < 9; i++) {
		if (max < frequency[i]) {
			max = frequency[i];
		}
	}

	return max;
}

void printMostFrequent(int frequency[], int size) {
	int max = getMaxFrequency(frequency, size);

	printf("\n가장 많이 나온 숫자는 ");
	for (int i = 0; i < size; i++) {
		if (max == frequency[i])
			printf("%d, ", i + 1);
	}
	printf("\b\b가 %d번씩 나왔습니다.\n", max);
}