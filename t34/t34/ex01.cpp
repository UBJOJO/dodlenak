//prototype ���� ����ǰ
#include <stdio.h>

//�̸��� ���� ���߿� �Լ��� �ۼ��Ѵ�.

// �ȱ�
void walk(int distance);
// ����
void lotate(int angle);

void drawSquare();

int main() {
	drawSquare();
}

// �ȱ�
void walk(int distance) {
	printf("%d cm �� �ɾ����ϴ�.\n", distance);
}
// ����
void lotate(int angle) {
	printf("%d �� ȸ�� �߽��ϴ�.\n", angle);
}

void drawSquare() {
	for (int i = 1;i <= 4;i++) {
		walk(10);
		lotate(90);
	}
}