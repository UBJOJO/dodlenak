// ��ø for ��
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	/*
		***
		***
		***
		��ø for �� �̿��ؼ� ���簢�� �����
	*/
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}