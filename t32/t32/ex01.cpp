// return 돌려주다 반환
#include <stdio.h>
// 2개의 매개변수를 받아서 (정수)그것들의 합을 반환하는 함수
int plus(int a, int b) {
	return a + b;
}


int main() {
	int sum = plus(3, 5);
	printf("%d\n", sum);
}