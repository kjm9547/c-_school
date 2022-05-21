#include <iostream>
using namespace std;
class Matrix {
	int a, b, c, d;
public:
	Matrix(int a = 0, int b =0 , int c =0 , int d = 0) { this->a = a; this->b = b; this->c = c; this->d = d; }
	Matrix operator+(Matrix& m){
		Matrix r;

		r.a =a +m.a;
		r.b=b + m.b;
		r.c= c + m.c;
		r.d= d + m.d;
		return r;
	}
	Matrix operator+=(Matrix& m) {
		a += m.a;
		b += m.b;
		c += m.c;
		d += m.d;
		return *this;
	}
	bool operator ==(Matrix& m) {
		if (a == m.a && b == m.b && c == m.c && d == m.d) {
			return true;
		}
		else
			return false;
	}
	void show() {
		cout << "Matrix = {" << a << b << c << d << "}"<<endl;
	}
};
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}