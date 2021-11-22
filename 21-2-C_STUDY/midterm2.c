#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void max_frequency(int[], int);
int main(void)
{
	srand((unsigned)time(NULL));

	int number[30];
	int count = 0;
	int size = sizeof(number) / sizeof(number[0]);

	for (int i = 0; i < 30; i++)
	{
		number[i] = rand() % 10;
	}

	for (int i = 0; i < 30; i++)
	{
		printf("%d  ", number[i]);
		count += 1;
		if (count % 10 == 0)
			puts("");
	}

	max_frequency(number, size);

	return 0;
}

void max_frequency(int number[], int size)
{
	int n = 0;
	int count = 0;
	int freq[10] = { 0 };
	int max = 0;

	for (int i = 0; i < size; i++) {
		freq[number[i]]++; // 짧은 코딩!
	}

//	freq 에서 max값을 찾으면!! (이건 생략)

	puts("");
	printf("값 %d가 %d번으로 가장 많이 존재합니다.", n, max);
}