// �Ľ�Į�� �ﰢ��
/*
1
11
121
1331
14641
j == 0 || i == j --> 1
i�� j��
4��2�� 6
3�� 1��+ 3�� 2��
*/
#include <stdio.h>

int main() {
	int p[10][10];

	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (j == 0 || j == i) {
				p[i][j] = 1;
			}
			else {
				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
			}	
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}