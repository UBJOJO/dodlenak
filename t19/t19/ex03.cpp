/*일의 자리수가 3, 6 ,9 *
   1 2 * 4 5 * 7 8 * 10 */

#include <stdio.h>

int main() {
	int n;
	printf("숫자를 입력하세요.");
	scanf("%d", &n);

	for (int i = 1;i <= n;i++) {
		if (i % 3 == 0) {
			printf("* ");
		}
		else {
			printf("%d ", i);
		}
	}
}