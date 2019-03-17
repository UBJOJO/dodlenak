#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;
	
	int **ptr_ptr; //포인터를 가리키는 포인터
	ptr_ptr = &ptr;

	/*ptr_ptr 은 ptr을 가리키고 ptr 은 a 를 가리킨다.*/

	printf("a = %d\n", a);							//a 의 값
	printf("ptr = %d\n", ptr);						//a 의 포인터
	printf("*ptr = %d\n", *ptr);					//a 의 값
	printf("&a = %d\n", &a);						//a 의 포인터
	printf("ptr = %d\n", ptr);						//a 의 포인터
	printf("&ptr = %d\n", &ptr);					//a의 포인터 의 포인터
	printf("ptr_ptr = %d\n", ptr_ptr);				//a의 포인터 의 포인터
	printf("*ptr_ptr = %d\n", *ptr_ptr);			//a의 포인터 값
	printf("&ptr_ptr = %d\n", &ptr_ptr);			//a의 포인터의 포인터 의 포인터
}