/*ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������. */
#include <stdio.h>

int main() {
	float weight, height;
	printf("�����Կ� Ű�� �Է��ϼ���.: ");
	scanf("%f,%f", &weight, &height);
	printf("%f,%f", weight, height);
	//ü����:������ / (����*����)
	float bmi = weight / (height*height);
	
	printf("����� ü���� ������ %f �Դϴ�.", bmi);
	
}