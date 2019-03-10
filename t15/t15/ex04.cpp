#include <stdio.h>

int main() {
	int n;

	do {
		printf("제발 0을 입력해 주세요.");
		scanf("%d", &n);
	} while (n != 0);

	printf("드디어 0을 입력해 주셨네요!");
}