#include <stdio.h>

int main() {
	int a = 10;
	int *ptr_a = &a;
	//이렇게도 표현한다.
	printf("ptr_a의 값: %d", ptr_a);
	printf("ptr_a + 1의 값: %d", ptr_a + 1);
	//4가 더해졌다. int (4바이트)를 더한다.


}