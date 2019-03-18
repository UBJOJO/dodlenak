#include <stdio.h>

int main() {
	int arr[12][12];
	int n, m;
	scanf("%d%d", &n, &m);
	
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < m;j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0;i < n;i++) {
		int sum = 0;
		for (int j = 0;j < m;j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}