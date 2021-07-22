#include <stdio.h>

void main() {
	int ary[] = { 1,3,4,5,6,7,8,9,2,0,0,5,0,1,5,9,1,9,6,3,4,1,5,4,6,7,9,8,5,1,3,4,6};
	int howMany[10] = { 0 };

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		howMany[ary[i]]++;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d : %d번 나왔습니다.\n", i, howMany[i]);
	}
}