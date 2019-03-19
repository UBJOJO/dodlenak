#include <stdio.h>

int itemCnt = 0;
int money = 100;
/*변수를 밖에서 선언*/
/*전역변수*/

void buyitem(int cost) { // 이렇게 해준다
	itemCnt++;
	money -= cost;
	printf("  아이템을 구매했습니다.\n");
	printf("  아이템 갯수: %d\n", itemCnt);
	printf("  잔액: %d\n", money);
}

int main() {

	buyitem(30);

	buyitem(40);
}

// main 은 함수를 정의한것
// printf() 는 함수를 호출 한것