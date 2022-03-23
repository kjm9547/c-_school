#include <iostream>

using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << "  ";
	}
}

int Sample::big() {
	int maxnum = 0;
	for(int i=0;i<size;i++){
		if (maxnum < p[i])
		{
			maxnum = p[i];
		}
	}
	return maxnum;
}
Sample::~Sample() {
	delete [] p;
}
int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ����" << s.big() << endl;

}