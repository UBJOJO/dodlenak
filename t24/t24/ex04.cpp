#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;
	
	int **ptr_ptr; //�����͸� ����Ű�� ������
	ptr_ptr = &ptr;

	/*ptr_ptr �� ptr�� ����Ű�� ptr �� a �� ����Ų��.*/

	printf("a = %d\n", a);							//a �� ��
	printf("ptr = %d\n", ptr);						//a �� ������
	printf("*ptr = %d\n", *ptr);					//a �� ��
	printf("&a = %d\n", &a);						//a �� ������
	printf("ptr = %d\n", ptr);						//a �� ������
	printf("&ptr = %d\n", &ptr);					//a�� ������ �� ������
	printf("ptr_ptr = %d\n", ptr_ptr);				//a�� ������ �� ������
	printf("*ptr_ptr = %d\n", *ptr_ptr);			//a�� ������ ��
	printf("&ptr_ptr = %d\n", &ptr_ptr);			//a�� �������� ������ �� ������
}