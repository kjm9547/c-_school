#include <iostream>
using namespace std;
class Stack {
	//	<< push >> pop ! ����ִ��� Ȯ��
	int stack;
	int *arrays;
public:
	Stack() {
		stack = 0;
		arrays = new int[10];
	}
	Stack &operator << (int b) {
		arrays[stack] = b;
		stack++;
		return *this;
	}
	void  operator >>(int &b) {
		b = arrays[stack-1];
		stack--;
	}
	bool operator !() {
		if (stack == 0) return true;
		else return false;
	}
};


int main() {
	Stack stack;
	stack << 3 <<5 << 10 ;
	
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}