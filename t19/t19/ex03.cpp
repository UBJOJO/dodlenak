/*���� �ڸ����� 3, 6 ,9 *
   1 2 * 4 5 * 7 8 * 10 */

#include <stdio.h>

int main() {
	int n;
	printf("���ڸ� �Է��ϼ���.");
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