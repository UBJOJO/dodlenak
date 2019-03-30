#include <iostream>

using namespace std;

int main() {
	int a(10); // 이렇게 초기화 가능하다. int a = 10; 과 같다.
	int b(a);

	cout << "a는 " << a << endl << "b는 " << b;
}