#include<iostream>
using namespace std;
class A {
public:
	A() { cout << "생성자 A" << endl; }
	A(int x) {
		cout << "매개변수생성자A" << x << endl;
	}
	A(int x, int y) {
		cout << x + y;
	}
	
};

class B :public A {
public:
	B() {
		cout << "생성자 B" << endl;
	}
	B(int x,int y) : A(x,y) {
		cout << "매개변수생성자B" << x << endl;
	}
};
int main() {
	B b(5,7);
}