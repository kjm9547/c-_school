#include <iostream>

using namespace std;
class MyIntStack {
	int p[10];
	int tos;// 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {
		tos = -1;
	};
	bool push(int n) {
		if(tos <9){
		tos++;
		p[tos] = n;
		return true;
		}
		return false;
	}
	bool pop(int& n) {
		if (tos > -1) {
		
		n = p[tos];
		--tos; // 
		return true;
	}
		return false;
	}
};
int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << "번쨰 stack full" << endl;
	}
	cout << endl;
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n))  cout << n << ' ';
		else cout << endl << i + 1 << "번째 stack empty";
	}
}
