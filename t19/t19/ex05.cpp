/*
	n = 4
	1
	1 2 3
	1 2 3 4 5
	1 2 3 4 5 6 7
*/
#include <stdio.h>

int main() {
	int n;
	printf("�����Է�:");
	scanf("%d", &n);
	
	for (int i = 1;i <=  2*n;i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			printf("\n");
		}
	}
}