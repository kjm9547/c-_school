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


	};//���� ������
	~MyIntStack() {
		delete[] p;
	};
	//���� n�� ���ÿ� Ǫ��
	//������ �� �� ������ false �ƴϸ� true ����
	bool push(int n) {
		if (tos >= 9) return false;
		p[++tos] = n;
		return true;
	};

	//������ ž�� �ִ� ���� n�� ���Ѵ�.
	//������ ��� ������ false �ƴϸ� true ��ȯ
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
	MyIntStack b = a;//���� ������
	b.push(30);

	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� ��" << n << endl;

}