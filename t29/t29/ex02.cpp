// � ���� ��� �ɱ�?
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int *ptr;

	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf("%d\n", a);		// a���� �ٲ۴�	
	printf("%d\n", b);		// b���� �ٲ۴�
	printf("%d\n", *ptr);   // *PTR ��
}