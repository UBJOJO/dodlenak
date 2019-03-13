#include <stdio.h>

int main() {
	//배열의 선언
	int a[5];
	/*
	a[0] = 2;
	a[1] = 3;
	a[2] = 7;
	a[3] = 6;
	a[4] = 8;
	*/
	for (int i = 0; i < 5;i++) {
		a[i] = i*5;
	}
	for (int i = 0; i < 5;i++) {
		printf("%d\n", a[i]);
	}
/*
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
*/
}