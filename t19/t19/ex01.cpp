/*시험점수 입력 A 100~90
				B  89~80
				C  79~70
				D  69~60
				E  59~50 else F*/
#include <stdio.h>

int  main() {
	int score;
	printf("점수를 입력하세요.:");
	scanf("%d", &score);
	if (score > 100 || score < 0) {
		printf("잘못입력했어요.\n");
	}
	else {
		if (score >= 90 && score <= 100) {
			printf("A 입니다.");
		}
		if (score >= 80 && score <= 89) {
			printf("B 입니다.");
		}
		if (score >= 70 && score <= 79) {
			printf("C 입니다.");
		}
		if (score >= 60 && score <= 69) {
			printf("D 입니다.");
		}
		if (score >= 50 && score <= 59) {
			printf("E 입니다.");
		}
		else {
			printf("F입니다.");

		}
	}
	
}