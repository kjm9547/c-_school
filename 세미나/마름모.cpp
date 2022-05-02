#include <iostream>
#include <string>
using namespace std;
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int y = 5; y > i; y--) {
			cout << " ";
		}
		for (int y = 0; y < (i + i)-1; y++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 4; i >= 1; i--) {
		for (int y = 0; y <= 4 - i; y++) {
			cout << ' ';
		}
		for (int y = (i + i) - 1; y > 0; y--) {
			cout << '*';
		}
		cout << endl;
	}
}