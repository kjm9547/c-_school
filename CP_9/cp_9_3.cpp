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

class ForLoopAdder : public LoopAdder {
public:
	ForLoopAdder(string name) : LoopAdder(name){}
	virtual int calculate() {
		int sum =0;
		for (int i = getX(); i <= getY(); i++) {
			sum += i;
		}
		return sum;
	}
};
int main() {
	ForLoopAdder forLoop("For Loop");
	forLoop.run();
}