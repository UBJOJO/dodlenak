/*
10 * 10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.

입력 예
3 4
4 2 6 3
7 9 3 4 
5 1 2 1

출력 예
15
23
9
*/
#include <stdio.h>

int main() {
	int a, b;		//a: 행 b: 열
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