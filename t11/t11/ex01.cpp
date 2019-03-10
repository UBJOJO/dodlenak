// 비교연산자 논리연산자
#include <stdio.h>

int main() {
	int a, b;
	scanf("%a%b", &a, &b); 

	//bool: 진리값을 저장용 변수(1바이트)
	bool p = a > b; // 참 : 1 거짓 ; 0;
	bool q = a < b; 
	bool r = a == b;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

}
