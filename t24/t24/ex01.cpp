// 포인터 (pointer): 변수의 주소를 저장하는 변수

#include <stdio.h>

int main() {
	int a = 20;

	int *ptr_a;			//포인터 선언 *는 포인터라는 사실을 알림
	ptr_a = &a;  //&는 주소값이다.

	printf("a의 값: %d\n", a);
	printf("a의 주소값: %d\n", &a);
	printf("ptr_a에 저장된 값: %d\n", ptr_a);
	printf("ptr_a가 가리키는 변수의 값: %d\n", *ptr_a);// *은 선언이아님 변수자체값

}