#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() { p = 0; size = 0; tos = 0; };
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = -1;
	}
	MyIntStack(const MyIntStack& s) {
		int len = s.size;

		this->p = new int[len];
		this->size = len;
		this->tos = s.tos;

		for (int i = 0; i <= tos; i++) {
			this->p[i] = s.p[i];
		}


	};//복사 생성자
	~MyIntStack() {
		delete[] p;
	};
	//정수 n을 스택에 푸시
	//스택이 꽉 차 있으면 false 아니면 true 리턴
	bool push(int n) {
		if (tos >= 9) return false;
		p[++tos] = n;
		return true;
	};

	//스택의 탑에 있는 값을 n에 팝한다.
	//스택이 비어 있으면 false 아니면 true 반환
	bool pop(int& n) {
		if (tos < 0) return false;
		n = p[tos--];
		return true;
	};
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;//복사 생성자
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값" << n << endl;

}