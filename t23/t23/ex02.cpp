#include <stdio.h> // stdio.h �ȿ� printf �� scanf ���� �Լ����� ��� �ִ�
#include <string.h> // ���ڿ� ���� �Լ� ������ �߰����ش�.

int main() {
	/* strlen
	char str[100] = "hello";
	int len;
	len = strlen(str); //string.h �� ���� �Լ�
	printf("���ڿ��� ���̴� :%d", len);
	//sizeof(str) / sizeof(char) - 1;
	*/

	/* strcopy
	char str1[] = "Hello";
	char str2[100];

	strcpy(str2, str1); // str1 �� str2 �� �־��ش�.
	printf("str2�� ��: %s\n", str2);
	*/
	/*
	strcat �̾��ش�
	char str[100] = "Hello! ";
	strcat(str, "World!");
	printf("%s\n", str);
	*/

	char str1[] = "Sample";
	char str2[] = "Simple";

	int cmp = strcmp(str1, str2); // str1 - str2 -1��ȯ (����)
								  // str2 - str1  1��ȯ
								  // str1 == str2 0��ȯ
	printf("%d\n", cmp);
}
