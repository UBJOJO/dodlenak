/*두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만드세요.*/
#include <stdio.h>

int main() {
	// try
	int a, b;
	printf("숫자를 두개 입력하세요.");
	scanf("%d %d", &a, &b);

	int hap = a + b;

	printf("두 숫자의 합: %d", hap);

}
