// ��ø if ��
// �߰�ȣ �ڵ� ��Ÿ��

#include <stdio.h>

int main() {
	int a, b, c; 
	scanf("%d%d%d", &a,&b,&c);

	if (a > b) {
		if (a > c) {
			printf("%d\n", a);
		}
		else {
			if (b > c) {
				printf("%d", b);
			}
			else {
				printf("%d", c);
			}
		}	
	}
}