#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum, i;
	for (i = 1, sum = 0;i <= n;sum += i, i++);// for 안에 없을 경우 {} 를 생략할 수 있다.
	
	printf("%d", sum);
}