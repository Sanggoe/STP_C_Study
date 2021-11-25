#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	FILE* fpw = fopen("./testDir/test.txt", "r"); // 경로 개념 - 절대경로, 상대경로
	// C:/workspace/c/STP_C_Study/21-2-C_STUDY/testDir/test.txt

	if (fpw != NULL) {
		puts("fopen successful");
	} else {
		puts("fopen failed");
		return;
	}

//	fputs("Hello world!!~!!", fpw);
	
	char buffer[30];
	fgets(buffer, 20, fpw); // 파일로부터 입력 받아오기

	puts(buffer); // 표준 출력
	fputs(buffer, stdout); // 표준 출력
	
	fclose(fpw);
}