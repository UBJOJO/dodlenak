/*
10 * 10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������.

�Է� ��
3 4
4 2 6 3
7 9 3 4 
5 1 2 1

��� ��
15
23
9
*/
#include <stdio.h>

int main() {
	int a, b;		//a: �� b: ��
	scanf("%d, %d", &a, &b);
	int arr[10][10];
	
	for (int i = 0; i < a;i++) {
		int sum[10];
		for (int j = 0;j < b;j++) {
			scanf("%d", &arr[i][j]);
			sum[i] += arr[i][j];
		}
		if (i == a - 1) {
			for (int k = 0;k < a;k++) {
				printf("%d\n", sum[k]);
			}
		}
	}
}