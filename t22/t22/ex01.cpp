#include <stdio.h>
/*
12345
678910
1112131415
i 가 더 빨리 돌기에 i 가 행 j가 열
*/
int main() {
	int arr[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 5;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	

}