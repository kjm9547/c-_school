#include <iostream>
using namespace std;
class SortedArray {
	int size;
	int* p;
	void sort() {
		int tmp;
		
		for (int i = 0; i < size; i++) {
			for (int y = 0; y < size; y++) {
				if (p[i] < p[y]) {
					tmp = p[i];
					p[i] = p[y];
					p[y] = tmp;

				}
			}
		}
	}
public:
	SortedArray() { p = NULL; size = 0; }
	
	SortedArray(int p[], int size) {
		this->p = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
		
	}
	SortedArray(SortedArray& src) {
		this->size = src.size;

		p = new int[size];
		for (int i = 0; i < src.size; i++) {
			this->p[i] = src.p[i];
		}
	}
	~SortedArray() { delete[]p; }
	SortedArray operator +(SortedArray& op2) {
		//a + b;
		SortedArray s;
		s.size = op2.size + this->size;
		s.p = new int[s.size];
		for (int i = 0; i <this->size; i++) {
			s.p[i] = this->p[i];
		}
		for (int i = this->size; i < s.size; i++) {
			s.p[i] = op2.p[i-this->size];
		}
		return s;
	}
	SortedArray& operator = (const SortedArray& op2) {
		delete[]this->p;
		this->size = op2.size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = op2.p[i];
		}
		return *this;
	}
	void show() {
		sort();
		for (int i = 0; i < size; i++) {
			cout << p[i] << "  ";
		}
		cout << endl;
	}
};
int main() {
	
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}