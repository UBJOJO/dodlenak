#include <stdio.h>

int main() {
	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1: %d", *ptr1);
	printf("ptr2: %d", *ptr2);

}