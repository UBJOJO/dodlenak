#include <stdio.h>

int noMeaning() {
	printf("first\n");
	return 1; //return 을 만나면 함수가 바로 종료된다.
	printf("second\n");
	return 2;
}

int main() {
	int a;
	a = noMeaning();
	printf("반환된 값: %d\n", a);
}