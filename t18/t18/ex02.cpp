// continue
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	// 1+2+4+5+7+8+....
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			continue; 
		}
		if (i % 3 != 0) {
			sum += i;
		}
	}
	printf("%d", sum);
}