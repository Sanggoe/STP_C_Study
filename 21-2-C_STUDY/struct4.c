#include<stdio.h>

struct point {
	int x;
	int y;
};

struct point p1 = { 10,20 }; // 전역 변수 선언
struct point p2 = { 30,40 };

void fun();

void main() {

	p2 = p1;	// 대입 가능. 하나의 자료형이니까!

/*	if(p1==p2)	// But 전체를 비교하는건 불가. 컴파일 오류! */
	if ((p1.x == p2.x) && (p1.y == p2.y)) // 멤버 변수 하나하나 비교해야 함
		puts("p1과 p2가 같습니다.");
}

void fun() {
	p1.x;
}