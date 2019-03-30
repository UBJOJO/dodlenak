//범위기반 for 문 
#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3,1,4,2,5,4,6,5,1,3 };

	for (int &n : arr) {
		cout << n << ' ';
		n++;
	}

	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
}