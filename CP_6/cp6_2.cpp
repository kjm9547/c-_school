#include <iostream>
using namespace std;
int big(int a, int b) {
	if (a > b) return a;
	else return b;
}
int big(int a, int b, int c) {
	if (a > b) {
		if (a > c) {
			return b;
		}
		else
			return c;
	}
	else if (a < b) {
		if (b > c) {
			return b;
		}
		else
			return c;
	}
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}