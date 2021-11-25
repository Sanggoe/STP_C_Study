#include <stdio.h>
#include <stdarg.h>

void printvar(char* types, ...);

int main(void)
{
	printvar("scdiii", "Hello, World", '!', 4.5, 100, 200, 300); // 가변 인자 전달
	return 0;
}

// 가변 매개변수
void printvar(char* types, ...) {
	va_list argp; // 각 가변 인자를 저장하는데 쓰일 타입
	
	va_start(argp, types); // va_list를 초기화하는 매크로. types의 크기
	while (*types != '\0') {

		switch (*(types++)) {
		case 's':
			printf("%s ", va_arg(argp, char*)); // argp가 가지고 있는 값 or 가리키는 주소를 참조한 값을 가져오는 매크로
			break;
		case 'c':
			printf("%c ", va_arg(argp, char));
			break;
		case 'd':
			printf("%.1lf ", va_arg(argp, double));
			break;
		case 'i':
			printf("%d ", va_arg(argp, int));
			break;
		default:
			break;
		}
	}
	va_end(argp); // 사용이 끝나고 인수 리스트를 정리하는 매크로
}