#include <stdio.h>

int main() {
	int n;
	int arr[105];

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < n;i += 2) {
		printf("%d", arr[i]);
	}
	printf("\n");
	for (int i = 2; i < n;i += 2) {
		printf("%d", arr[i]);
	}

}