#include <stdio.h>
/*
7
3 1 4 1 5 9 2

1 1 9
3 4 5 2
*/
int main() {
	int n;
	int arr[1000];
	printf("입력할 숫자의 수를 입력하세요. ");
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
		if (i % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	for (int i = 0;i < n;i++) {
		if (i % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
}
