#include <iostream>
using namespace std;
class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) { this->capacity = capacity; mem = new int[capacity]; }
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
	int index;
public:
	MyQueue(int a) :BaseArray(a) {
		index = 0;
	}
	void enqueue(int a) {
		put(index, a);
		index++;
	}
	int capacity() { return getCapacity(); }
	int length() { return index; }
	int dequeue() {
		int result = get(index-1);
		index--;
		return result;
	}
};
int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ��" << mQ.length() << endl;
}