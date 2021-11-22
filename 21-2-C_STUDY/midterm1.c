#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2;
	int select = 0;

	while (1)
	{
		printf("1. Add\n");
		printf("2. Subtract\n");
		printf("3. Multiply\n");
		printf("4. Divide\n");
		printf("5. End\n");
		printf("Select? ");
		scanf("%d", &select);

		if (select == 5)
			break;

		puts("");
		printf("두 정수를 입력하세요 : ");
		scanf("%d %d", &n1, &n2);

		switch (select)
		{
		case 1:
			printf("%d + %d = %d\n", n1, n2, n1 + n2);
			break;
		case 2:
			printf("%d - %d = %d\n", n1, n2, n1 - n2);
			break;
		case 3:
			printf("%d * %d = %d\n", n1, n2, n1 * n2);
			break;
		case 4:
			printf("%d / %d = %d\n", n1, n2, n1 / n2);
			break;
		default:
			break;
		}
		puts("");
	}

	return 0;
}