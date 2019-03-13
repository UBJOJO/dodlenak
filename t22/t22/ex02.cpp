// 파스칼의 삼각형
/*
1
11
121
1331
14641
j == 0 || i == j --> 1
i행 j열
4행2열 6
3행 1열+ 3행 2열
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