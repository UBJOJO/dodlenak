// 문자열: 문자들의 열거
// 
#include <stdio.h>

int main() {
	char s[] = "Hello, World!";// [] 해도 되고 [100]도 가능

	scanf("%s", s); // 문자열은 s 앞에 &붙이지 않는다. 에러가 난다.
	//printf("%s\n", arr); // sizeof(arr) / sizeof(char)

	printf("%s", s);

}