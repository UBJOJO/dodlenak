#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;
	
	int **ptr_ptr; //포인터를 가리키는 포인터
	ptr_ptr = &ptr;

	/*ptr_ptr 은 ptr을 가리키고 ptr 은 a 를 가리킨다.*/

	printf("a = %d\n", a);	//10
	printf("&a = %d\n", &a);		//123412주소값
	printf("ptr = %d\n", ptr);		//123412주소값
	printf("&ptr = %d\n", &ptr);		//ptr 의 주소값
	printf("ptr_ptr = %d\n", ptr_ptr);  //ptr 의 주소값
}