#include <iostream>

using namespace std;
int main() {
	int input_num;
	
	cin >> input_num;
	for (int i = 0; i < input_num; i++) {
		for (int j = input_num - 1; j - i > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	
}