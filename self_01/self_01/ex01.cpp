#include <stdio.h>

int main() {
	int arr[3] = { 15,25,35 };
	int *ptr = &arr[0];		// int *ptr = arr �� ����.

	printf("%d", ptr[]);
}