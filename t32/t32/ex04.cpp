#include <stdio.h>

int itemCnt = 0;
int money = 100;
/*변수를 밖에서 선언*/
/*전역변수*/
int result;

int buyitem(int cost) { // 이렇게 해준다
	if (money >= cost) {
		itemCnt++;
		money -= cost;
		printf("  아이템을 구매했습니다.\n");
		printf("  아이템 갯수: %d\n", itemCnt);
		printf("  잔액: %d\n", money);
		result = 0;
	}
	else {
		printf("잔액이 부족합니다.\n");
		result = -1;
	}
}

int main() {
	int result;

	buyitem(3000);

	buyitem(40);
}

// main 은 함수를 정의한것
// printf() 는 함수를 호출 한것