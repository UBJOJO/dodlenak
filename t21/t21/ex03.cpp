// 입력값 중 짝수의 갯수 구하기
#include <stdio.h>

int main() {
	int n;
	int arr[1000];

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n;i++) {
		if (arr[i] % 2 == 0) {
			cnt += 1;
		}
	}
	printf("%d", cnt);
}