#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b) {
		big = a;
		return true;
	}
	else {
		big = b;
		return false;
	}

}
int main() {
	int num1,num2;
	int big;

	cin >> num1 >> num2;
	bigger(num1, num2, big);

	cout << big;
}