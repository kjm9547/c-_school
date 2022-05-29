#include<iostream>
using namespace std;
template<class A>
void reverseArray(A* x, int n) {
	A temp;
	for (int i = 0; i < n / 2; i++) {
		temp = x[i];
		x[i] = x[n - i - 1];
		x[n - i - 1] = temp;
	}
}
int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}