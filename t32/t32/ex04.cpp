#include <stdio.h>

int itemCnt = 0;
int money = 100;
/*������ �ۿ��� ����*/
/*��������*/
int result;

int buyitem(int cost) { // �̷��� ���ش�
	if (money >= cost) {
		itemCnt++;
		money -= cost;
		printf("  �������� �����߽��ϴ�.\n");
		printf("  ������ ����: %d\n", itemCnt);
		printf("  �ܾ�: %d\n", money);
		result = 0;
	}
	else {
		printf("�ܾ��� �����մϴ�.\n");
		result = -1;
	}
}

int main() {
	int result;

	buyitem(3000);

	buyitem(40);
}

// main �� �Լ��� �����Ѱ�
// printf() �� �Լ��� ȣ�� �Ѱ�