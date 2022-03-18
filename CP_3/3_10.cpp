#include <iostream>

using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}//매개변수 xy를 멤버 ab에 복사
	int calculate() {
		return a + b;
	}//연산 결과 리턴 함수

};


class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}//매개변수 xy를 멤버 ab에 복사
	int calculate() {
		return a - b;
	}//연산 결과 리턴 함수

};
class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}//매개변수 xy를 멤버 ab에 복사
	int calculate() {
		return a * b;
	}//연산 결과 리턴 함수

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
		cout << "두 수정수와 연산자를 입력하세요";
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