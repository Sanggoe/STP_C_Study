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

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("������ ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x); // ���� ���ϴ� �Լ�
	h = abs(r.p2.y - r.p1.y);

	area = w * h;
	round = (w + h) * 2;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, round);
}