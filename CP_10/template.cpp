#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template<class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a=" << a << " b=" << b << endl;

	double c = 0.3, d = 12.5;
	int f = 1;
	myswap(c, d);
	cout << "c=" << f << " d=" << d << endl;

	Circle donut(5), pizza(10);
	myswap(donut, pizza);
	cout << "donut=" << donut.getRadius() << " pizza=" << pizza.getRadius() << endl;
	
}