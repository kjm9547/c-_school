#include<iostream>
using namespace std;
template <class B>
B bigger(B *a, B b) {
	int big =0;
	for (int i = 0; i < b; i++) {
		if (a[i] > big) {
			big = a[i];
		}
	}
	return big;
}
int main() {
	int x[] = { 1, 10 , 100 , 5 , 4 };
	cout << bigger(x, 5);
}