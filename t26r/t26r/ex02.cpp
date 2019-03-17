/*
	1. arr == &arr[0](ptr == &ptr[0])
	2. *ptr == *ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
*/

#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3 };
	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n",arr +1);

	printf("&arr = %d\n", &arr);//&arr 는 배열 전체를 가리키는 포인터
	printf("&arr +1=%d\n", &arr+1);

	//&arr 과 arr 는 값은 같지만 &arr 는 arr 배열의 첫번째를 대표로 가리키는것 
}