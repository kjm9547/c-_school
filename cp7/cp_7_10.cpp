#include<iostream>
using namespace std;
class Statistics {
	//! >> << ~ ������
	int top;
	int *array;
public:
	Statistics() { 
		top = 0;
		array = new int[10];
	};
	friend bool operator !(Statistics s);
	Statistics operator <<(int a) {
		array[top] = a;
		top++;
		return *this;
	}
	friend Statistics operator ~(Statistics a);

	int operator >>(int &a) {
		for (int i = 0; i < top+1; i++) {
			a += array[i];
		}
		a = a / (top + 1);
		return a;
	}
};

bool operator !(Statistics s) {
	if (s.top == 0)
		return true;
	else
		return false;
}
Statistics operator ~(Statistics a) {
	for (int i = 0; i < a.top+1; i++) {
		cout << a.array[i] << ' ';
	}
	return a;
}

int main() {
	Statistics stat;
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�." << endl;
	int x[5];
	cout << "5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++)cin >> x[i];
	
	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg =0;
	stat >> avg;
	cout << "avg=" << avg << endl;

}