/*�������� �Է� A 100~90
				B  89~80
				C  79~70
				D  69~60
				E  59~50 else F*/
#include <stdio.h>

int  main() {
	int score;
	printf("������ �Է��ϼ���.:");
	scanf("%d", &score);
	if (score > 100 || score < 0) {
		printf("�߸��Է��߾��.\n");
	}
	else {
		if (score >= 90 && score <= 100) {
			printf("A �Դϴ�.");
		}
		if (score >= 80 && score <= 89) {
			printf("B �Դϴ�.");
		}
		if (score >= 70 && score <= 79) {
			printf("C �Դϴ�.");
		}
		if (score >= 60 && score <= 69) {
			printf("D �Դϴ�.");
		}
		if (score >= 50 && score <= 59) {
			printf("E �Դϴ�.");
		}
		else {
			printf("F�Դϴ�.");

		}
	}
	
}