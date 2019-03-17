// 어떤 값이 출력 될까?
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int *ptr;

	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf("%d\n", a);		// a값을 바꾼다	
	printf("%d\n", b);		// b값을 바꾼다
	printf("%d\n", *ptr);   // *PTR 값
}