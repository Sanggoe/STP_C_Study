```c
#include <stdio.h>
#include <stdlib.h>

int countCall();
void addNumber(int);
void printValue_1();

int value_1 = 0;  // 1)전역변수

int main() {
    int value_2 = 0;  // 2)지역변수

	printf("%d\n", value_1);  // 출력결과 3) 0
	
    countCall();
    value_2 = countCall();
    printf("%d\n", value_2);  // 출력결과 4) 2

    addNumber(countCall()+2);
    
    printf("%d\n", value_1);  // 출력결과 5) 5
	printValue_1();
}

int countCall() {
    static int value_3;  // 6)정적변수, 지역변수
    value_3++;
    return value_3;
}

void addNumber(int value_4) {  // 7)매개변수, (지역변수)
    value_1 += value_4;
}

void printValue_1() { // 이 프로그램에선 한 번만 호출함
    printf("%d\n", value_1);  // 결과 8) 5
}
```









1) 전역 변수

2) 지역 변수

3) 0

4) 2

5) 5

6) 정적 지역 변수

7) 매개변수 (, 지역변수)

8) 5