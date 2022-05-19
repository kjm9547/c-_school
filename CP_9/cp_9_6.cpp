#include <iostream>
using namespace std;
class AbstractStack {
	public:
		virtual bool push(int n) = 0;
		virtual bool pop(int& n) = 0;

		virtual int size() = 0;
};

class IntStack:public AbstractStack {
	int* p;
	int top;
public:
	IntStack() { 
		top = 0;
		p = new int[5];
	}
	bool push(int n) {
		if (top == 5) {
			return false;
		}
		p[top] = n;
		top++;
		return true;
	}
	bool pop(int& n) {
		if (top == 0) {
			return false;
		}
		n = p[top];
		top--;
		return true;

	}
	int size() {
		return top;
	}
	void show() {
		for (int i = 0; i < top; i++) {
			cout << p[i] << '\t';
		}
	}
};
int main() {
	IntStack s;
	int n;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(1);
	s.push(2);
	if (s.push(2)) { cout << "성공"; }
	else { cout << "실패"; }
	s.pop(n);
	s.show();
}