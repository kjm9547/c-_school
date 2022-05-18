#include <iostream>
using namespace std;
class LoopAdder {//�߻� Ŭ����
	string name; //������ �̸�
	int x, y, sum;
	void read() {
		cout << name << ":" << endl;
		cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ���.";
		cin >> x >> y;
	};
	void write() {
		cout << x << "����" << y << "������ �� = " << sum << " �Դϴ�." << endl;
	};
protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ� ������ ���� ���� ���ϴ� �Լ�
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