// 중첩 for 문
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	/*
		***
		***
		***
		중첩 for 문 이용해서 정사각형 만들기
	*/
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}