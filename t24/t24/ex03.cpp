#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	printf("a의 값: %d\n", a);

	*ptr = 20; // 이렇게 하면 ptr 자체의 값은 안 바뀐다. a에 20을저장!

	printf("a의 값: %d\n", a);
}