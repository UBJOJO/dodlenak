//break*
// 숫자입력 ->

//continue
//중첩 for문**
#include <stdio.h>

int main() {
	for (int i = 1; ;i++) {
		int k;
		scanf("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d번째: %d\n", i,k);
	}
}