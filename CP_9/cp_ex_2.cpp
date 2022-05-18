#include <iostream>
using namespace std;
class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derved : public Base {
public:
	void f() { cout << "Dervied::f() called" << endl; }
};


int main() {
	Derved d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
}