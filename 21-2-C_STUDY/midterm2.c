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
		freq[number[i]]++; // ª�� �ڵ�!
	}

//	freq ���� max���� ã����!! (�̰� ����)

	puts("");
	printf("�� %d�� %d������ ���� ���� �����մϴ�.", n, max);
}