#include <iostream>

using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram() {
		size = 100 * 1024;
		mem[100*1024] = 0;
	}
	~Ram() {
		cout << "�޸� ���ŵ�";
	}
	char read(int address) {
		return mem[address];
	};
	void write(int address, char value){
		mem[address] = value;
	};

};
int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 ������ �� =" << (int)ram.read(102) << endl;
}