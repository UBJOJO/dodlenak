#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;
	
	int **ptr_ptr; //�����͸� ����Ű�� ������
	ptr_ptr = &ptr;

	/*ptr_ptr �� ptr�� ����Ű�� ptr �� a �� ����Ų��.*/

	printf("a = %d\n", a);	//10
	printf("&a = %d\n", &a);		//123412�ּҰ�
	printf("ptr = %d\n", ptr);		//123412�ּҰ�
	printf("&ptr = %d\n", &ptr);		//ptr �� �ּҰ�
	printf("ptr_ptr = %d\n", ptr_ptr);  //ptr �� �ּҰ�
}