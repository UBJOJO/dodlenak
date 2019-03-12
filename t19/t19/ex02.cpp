/*자연수 입력:12
1, 2, 3, 4, 6, 12*/
#include <stdio.h>

int main() {
	int n;
	printf("자연수를 입력하세요.");
	scanf("%d", &n);

	for (int i = 1;i <= n;i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
}