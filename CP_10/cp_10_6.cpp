#include <iostream>
using namespace std;
template<class T>
void remove(T* A, int sizeA, T *minus, int sizeM, int& retSize) {
	for (int i = 0; i < sizeA; i++) {
		for (int y = 0; y < sizeM; y++) {
			if (A[i] == minus[y]) {
				for (int z = y; z < sizeM; z++) {
					minus[z] = minus[z + 1];
					
				}
				sizeM--;
			}
		}
	}
	cout << sizeM;
	T* n = new T[sizeA + sizeM];
	for (int i = 0; i < sizeA; i++) {
		n[i] = A[i];
	}
	retSize = sizeA + sizeM;
	cout << retSize<<endl;
	for (int i = sizeA; i < retSize; i++) {
		n[i] = minus[i - sizeA];
	}
	
	for (int i = 0; i < retSize; i++) {
		cout << n[i];
	}
}
int main() {
	int x[] = { 1,2,3,4 };
	int y[] = { 1,3,5,6 };
	int n = 0;
	remove(x, 4, y, 4, n);
}