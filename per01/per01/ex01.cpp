#include <stdio.h>

int main() {
	int num = 10;
	int * ptr1 = &num;	//num ÀÇ pointer
	int * ptr2 = ptr1;	//num ÀÇ pointer ÀÇ pointer

	(*ptr1)++;	// num == 11
	(*ptr2)++;	// num == 12
	printf("%d \n", num);
}