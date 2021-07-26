#include <stdio.h>

void swap(int*, int*);

void main() {
    int a = 10;
    int b = 20;
    
	printf("a:%d, b:%d\n",a,b);    
    swap(&a, &b);
	printf("a:%d, b:%d\n",a,b);
}

void swap(int* n1, int* n2) { // call by reference
    int temp;
    
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}