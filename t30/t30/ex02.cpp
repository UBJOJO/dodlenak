#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d", &arr[0][0]);	//100
	printf("%d", arr[0]+1);		//104
	printf("%d", &arr[0]+1);	//112
	printf("%d", arr+1);		//112
	printf("%d", &arr+1);		//136
}