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
	
	printf("���� ��ǥ �Է� (x y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ �Է� (x y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiffer = p1.x - p2.x;
	ydiffer = p1.y - p2.y;

	distance = sqrt(xdiffer * xdiffer + ydiffer * ydiffer);

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", distance);
}