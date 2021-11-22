#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

void main() {
	struct rect r;
	int w, h, area, round;

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x); // 절댓값 구하는 함수
	h = abs(r.p2.y - r.p1.y);

	area = w * h;
	round = (w + h) * 2;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, round);
}