#include<stdio.h>

struct point {
	int x;
	int y;
};

struct point p1 = { 10,20 }; // ���� ���� ����
struct point p2 = { 30,40 };

void fun();

void main() {

	p2 = p1;	// ���� ����. �ϳ��� �ڷ����̴ϱ�!

/*	if(p1==p2)	// But ��ü�� ���ϴ°� �Ұ�. ������ ����! */
	if ((p1.x == p2.x) && (p1.y == p2.y)) // ��� ���� �ϳ��ϳ� ���ؾ� ��
		puts("p1�� p2�� �����ϴ�.");
}

void fun() {
	p1.x;
}