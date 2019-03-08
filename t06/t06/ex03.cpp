#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = (double)sum / 3;

	printf("%f\n", avg);  // 예상 93.666667 이 나와야함 But 93.0000000 이나온다.
						  // sum(정수) / 3(정수) 이므로 정수가 된다.

	/* 정수 / 정수 = 정수
	   실수 / 정수 = 실수
	   실수 / 실수 = 실수*/

}