#include <stdio.h>

// ���丮��
// n! = n*(n-1)!

// n�� �Ű����� -> n! return
int  factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	printf("%d\n", factorial(4));
}