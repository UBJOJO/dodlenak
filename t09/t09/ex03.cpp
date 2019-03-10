/*알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요.*/
#include <stdio.h>

int main() {
	char Alpha;
	scanf("%c", &Alpha);
	

	char nextAlpha = Alpha + 1;
	printf("%c", nextAlpha);
	
	//scanf("%d", &alpha);
	//printf("다음 알파벳은 %c 입니다.", alpha + 1);
}