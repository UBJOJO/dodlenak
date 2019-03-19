//prototype 원형 시제품
#include <stdio.h>

//이름만 쓰고 나중에 함수를 작성한다.

// 걷기
void walk(int distance);
// 돌기
void lotate(int angle);

void drawSquare();

int main() {
	drawSquare();
}

// 걷기
void walk(int distance) {
	printf("%d cm 를 걸었습니다.\n", distance);
}
// 돌기
void lotate(int angle) {
	printf("%d 도 회전 했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 1;i <= 4;i++) {
		walk(10);
		lotate(90);
	}
}