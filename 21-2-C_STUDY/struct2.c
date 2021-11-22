#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct position {
	int x;
	int y;
};

void main() {
	struct position p1, p2;
	int xdiffer, ydiffer;
	double distance;
	
	printf("점의 좌표 입력 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표 입력 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiffer = p1.x - p2.x;
	ydiffer = p1.y - p2.y;

	distance = sqrt(xdiffer * xdiffer + ydiffer * ydiffer);

	printf("두 점 사이의 거리는 %lf입니다.\n", distance);
}