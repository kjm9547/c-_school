#include<iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int n) { radius = n; }
	void show() { cout << "radius = " << radius << endl; }
	friend Circle operator+(int b, Circle a);

};
Circle operator+(int b, Circle a) {
	a.radius += b;
	return a;
}
int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}