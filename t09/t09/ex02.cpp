/*ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������. */
#include <stdio.h>

int main() {
	float weight, height;
	printf("�����Ը� �Է��ϼ���.: ");
	scanf("%f", &weight);
	printf("Ű�� �Է��ϼ���.:");
	scanf("%f", &height);
	
	//ü����:������ / (����*����)
	float bmi = weight / (height*height);
	
	printf("BMI: %f.", bmi); 
	
}