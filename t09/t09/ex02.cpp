/*체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요. */
#include <stdio.h>

int main() {
	float weight, height;
	printf("몸무게와 키를 입력하세요.: ");
	scanf("%f,%f", &weight, &height);
	printf("%f,%f", weight, height);
	//체질량:몸무게 / (신장*신장)
	float bmi = weight / (height*height);
	
	printf("당신의 체질량 지수는 %f 입니다.", bmi);
	
}