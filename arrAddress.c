#include <stdio.h>

int main() {
	int nums[3] = { 10, 20, 30 };

	printf("%p\n", &nums);
	printf("%p\n", &nums[0]);
	printf("%p\n", &nums[1]);
	printf("%p\n", &nums[2]);
	printf("%p\n", &nums[3]);
	printf("%d\n", nums[3]);
}