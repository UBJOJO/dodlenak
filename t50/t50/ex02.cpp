// ������� for ��
#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 3,2,4,5,3,6,2,4,1,2 };

	// arr �� ������ ���ڴ�.
	for (int &n: arr) {
		cout << n << ' ';
		n++;	// n�� ���� �ƹ��� �÷��൵ arr���� ������ �ʴ´�.
				// n[0] 1
	}
	cout << endl;

	for (int n: arr) {
		cout << n << ' ';
	}
	cout << endl;
}