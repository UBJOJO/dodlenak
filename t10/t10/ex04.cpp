// ��ġ�� ��ġ
#include <stdio.h>
 
int main() {
	int a = 10;
	int b;
	
	printf("====��ġ ���� ����====\n");
	b = ++a;
	printf("a : %d\n", a);
	printf("b : %d\n", b);

	int c = 10;
	int d;

	printf("====��ġ ���� ����====\n");
	d = c++;
	printf("c : %d\n", c);
	printf("d : %d\n", d);

}