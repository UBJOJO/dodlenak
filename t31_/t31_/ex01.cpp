#include <stdio.h>

int itemCnt = 0;
int money = 100;
/*������ �ۿ��� ����*/
/*��������*/

void buyitem(int cost) { // �̷��� ���ش�
	itemCnt++;
	money -= cost;
	printf("  �������� �����߽��ϴ�.\n");
	printf("  ������ ����: %d\n", itemCnt);
	printf("  �ܾ�: %d\n", money);
}

int main() {

	buyitem(30);

	buyitem(40);
}

// main �� �Լ��� �����Ѱ�
// printf() �� �Լ��� ȣ�� �Ѱ�