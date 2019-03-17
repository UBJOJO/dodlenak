// 범위기반 for 문
#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 3,2,4,5,3,6,2,4,1,2 };

	// arr 의 모든것을 보겠다.
	for (int &n: arr) {
		cout << n << ' ';
		n++;	// n의 값을 아무리 늘려줘도 arr값은 변하지 않는다.
				// n[0] 1
	}
	cout << endl;

	for (int n: arr) {
		cout << n << ' ';
	}
	cout << endl;
}