#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum, i;
	for (i = 1, sum = 0;i <= n;sum += i, i++);// for �ȿ� ���� ��� {} �� ������ �� �ִ�.
	
	printf("%d", sum);
}