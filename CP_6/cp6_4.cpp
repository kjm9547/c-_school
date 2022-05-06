#include <iostream>
using namespace std;
class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 10, int val = 0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++) {
			mem[i] = val;
		}
	}
	void show() {
		for (int i = 0; i < size; i++) {
			cout << mem[i];
		}
	}
};
int main() {
	MyVector m, v(8,1);
	m.show();
	v.show();
}