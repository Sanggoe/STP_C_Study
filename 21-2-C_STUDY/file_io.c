#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	FILE* fpw = fopen("./testDir/test.txt", "r"); // ��� ���� - ������, �����
	// C:/workspace/c/STP_C_Study/21-2-C_STUDY/testDir/test.txt

	if (fpw != NULL) {
		puts("fopen successful");
	} else {
		puts("fopen failed");
		return;
	}

//	fputs("Hello world!!~!!", fpw);
	
	char buffer[30];
	fgets(buffer, 20, fpw); // ���Ϸκ��� �Է� �޾ƿ���

	puts(buffer); // ǥ�� ���
	fputs(buffer, stdout); // ǥ�� ���
	
	fclose(fpw);
}