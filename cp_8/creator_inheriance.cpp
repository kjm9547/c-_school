#include<iostream>
using namespace std;
class A {
public:
	A() { cout << "������ A" << endl; }
	A(int x) {
		cout << "�Ű�����������A" << x << endl;
	}
	A(int x, int y) {
		cout << x + y;
	}
	
};

class B :public A {
public:
	B() {
		cout << "������ B" << endl;
	}
	B(int x,int y) : A(x,y) {
		cout << "�Ű�����������B" << x << endl;
	}
};
int main() {
	B b(5,7);
}