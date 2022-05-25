#include<iostream>
using namespace std;
template <class A,class B>
bool equlaArrays(A a [], B b[],int n) {
	int stack = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			stack++;
			return false;
		}
	}
	if (stack == 0) {
		return true;
	}
}
int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	if (equlaArrays(x, y, 5)) cout << "같다." << endl;
	else cout << "다르다.";
}