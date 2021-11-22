#include <stdio.h>

void main() {
	int nums[3];

	printf("%p\n", nums);
	printf("%p\n", &nums[0]);
	printf("%p\n", &nums[1]);
	printf("%p\n", &nums[2]);
}