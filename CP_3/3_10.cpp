#include <iostream>

using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}//�Ű����� xy�� ��� ab�� ����
	int calculate() {
		return a + b;
	}//���� ��� ���� �Լ�

};


class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}//�Ű����� xy�� ��� ab�� ����
	int calculate() {
		return a - b;
	}//���� ��� ���� �Լ�

};
class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}//�Ű����� xy�� ��� ab�� ����
	int calculate() {
		return a * b;
	}//���� ��� ���� �Լ�

};
class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a / b;
	}

};

int main() {
	Add a;
	Sub b;
	Mul c;
	Div d;

	int f, s;
	char v;
	


	while (true) {
		cout << "�� �������� �����ڸ� �Է��ϼ���";
		cin >> f >> s >> v;
		if (v == 'y'){
			break;
		}
		switch (v)
		{
		case '+':
			a.setValue(f, s);
			cout << a.calculate() << endl;
			break;
		case '-':
			b.setValue(f, s);
			cout << b.calculate() << endl;
			break;
		case '*':
			c.setValue(f, s);
			cout << c.calculate() << endl;
			break;
		case '/':
			d.setValue(f, s);
			cout << d.calculate() << endl;
			break;

		default:
			break;
		}
			
	}
	
}