#include <iostream>
using namespace std;
class LoopAdder {//추상 클래스
	string name; //루프의 이름
	int x, y, sum;
	void read() {
		cout << name << ":" << endl;
		cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요.";
		cin >> x >> y;
	};
	void write() {
		cout << x << "에서" << y << "까지의 합 = " << sum << " 입니다." << endl;
	};
protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // 순수 가상 함수 루프를 돌며 합을 구하는 함수
public:
	void run() {
		read();
		sum = calculate();
		write();
	}
};
class WhileLoopAdder : public LoopAdder{
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
	virtual int calculate() {
		int i = getX();
		int sum = 0;
		while (i<=getY()) {
			sum += i;
			i++;
		}
		return sum;
	}
};
class DoWhileLoopAdder : public LoopAdder {
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
	virtual int calculate() {
		int sum = 0;
		int i = getX();
		do
		{
			sum += i;
			i++;
		} while (i<=getY());
		return sum;
	}
};
int main() {
	WhileLoopAdder whileLoop("while Loop");
	DoWhileLoopAdder dowhileLoop("doWhileLoop");

	whileLoop.run();
	dowhileLoop.run();
}