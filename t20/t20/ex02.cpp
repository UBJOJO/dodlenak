#include <stdio.h>

int main() {
	// array
	int arr[] = { 3, 1, 4, 1, 5 , 3 , 2 , 6 , 7 , 4 };

	//sizeof(int) 는 4바이트니까 4

	for (int i = 0;i < sizeof(arr)/sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}
}