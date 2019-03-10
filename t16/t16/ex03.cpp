#include <stdio.h>

int main() {
	// 1~n 까지의 합을 구하는 공식
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}