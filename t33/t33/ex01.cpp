// call-by-value
#include <stdio.h>

void swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	swap(a, b);
	printf("%d %d", a, b);
}

// 실행되지 않음