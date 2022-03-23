#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cin >> n;
	cout << endl;

	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
		
		sum += p[i];
		
	}

	for (int i = 0; i < n; i++) {
		cout << p[i] << endl;
	}
	cout << sum / n;

	delete[]p;
}
