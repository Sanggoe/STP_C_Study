#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv)
{
	char name1[100] = "text1.txt";
	char name2[100] = "text2.txt";

	FILE* fp1 = fopen(name1, "w");
	FILE* fp2 = fopen(name2, "w");

	fprintf(fp1, "�ȳ��ϼ��� ���� �������̿���.");
	fprintf(fp2, "�ȳ��ϼ��� ���� �������̿���.");

	fclose(fp1);
	fclose(fp2);

	fp1 = fopen(name1, "r");
	fp2 = fopen(name2, "r");

	int ch, a;
	char buf1[50];
	char buf2[50];

	while (1) {
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);

		if (c1 == EOF || c2 == EOF)
			break;

		if (c1 != c2)
		{
			printf("�� ������ ���� �ٸ��ϴ�.\n");
			return 0;
		}
	}
	printf("�� ������ ���� �����ϴ�.\n");

	fclose(fp1);
	fclose(fp2);

	return 0;
}