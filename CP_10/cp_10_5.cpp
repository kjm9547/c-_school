#include <iostream>
using namespace std;
template<class T>
void concat(T* t, int sizea, T* s, int sizeb) {
	T *c = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		c[i] = t[i];
	}
	for (int i = sizea; i < sizeb+sizea; i++) {
		c[i] = s[i - sizea];
	}
	for (int i = 0; i < sizea + sizeb; i++) {
		cout << c[i];
	}
	
}
int main() {
	int x[] = { 1,2,3 };
	int y[] = { 4,5,6 };
	concat(x, 3, y, 3);
	
}