#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n % 2) {
		printf("n은 홀수\n"); // if 가 0 이 아니니까.
	}
	else {
		printf("n은 짝수\n");
	}
}