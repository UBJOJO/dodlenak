// 2^0 = 1 ...
#include <stdio.h>

int main() {
	/*
	int n;
	scanf("%d", &n);

	int i=0, t=1;
	while (i <= n) {
		printf("2^%d = %d\n", i, t);
		i++;
		t *= 2;
	}
	*/
	int n;
	scanf("%d", &n);

	
	for (int i = 0, t = 1 ;i <= n;i++, t *= 2) {
		printf("2^%d = %d\n", i, t);
		
	}
}