#include <stdio.h> // stdio.h 안에 printf 나 scanf 같은 함수들이 들어 있다
#include <string.h> // 문자열 관련 함수 쓸때도 추가해준다.

int main() {
	/* strlen
	char str[100] = "hello";
	int len;
	len = strlen(str); //string.h 의 내장 함수
	printf("문자열의 길이는 :%d", len);
	//sizeof(str) / sizeof(char) - 1;
	*/

	/* strcopy
	char str1[] = "Hello";
	char str2[100];

	strcpy(str2, str1); // str1 을 str2 에 넣어준다.
	printf("str2의 값: %s\n", str2);
	*/
	/*
	strcat 이어준다
	char str[100] = "Hello! ";
	strcat(str, "World!");
	printf("%s\n", str);
	*/

	char str1[] = "Sample";
	char str2[] = "Simple";

	int cmp = strcmp(str1, str2); // str1 - str2 -1반환 (사전)
								  // str2 - str1  1반환
								  // str1 == str2 0반환
	printf("%d\n", cmp);
}
