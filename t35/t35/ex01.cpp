//재귀 함수 정의 안에 다시 자기 자신이 등장
//recursion

#include <stdio.h>

void rec(int n) {
	if (n > 5) return;
	printf("n = %d\n",n);
	rec(n+1);
}

int main() {
	rec(1);
}