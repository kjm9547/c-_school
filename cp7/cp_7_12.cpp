#include<iostream>
using namespace std;
class SortedArray {
	int size; //���� �迭�� ũ��
	int* p;	//���� �迭�� ���� ������
	void sort() {
		int tmp;
		for (int i = 0; i < size; i++) {
			for (int y = i; y < size; y++) {
				if (p[i] < p[y]);
				else{
					tmp = p[i];
					p[i] = p[y];
					p[y] = tmp;
				}
			}
		}
	} //���� �迭�� ������������ ����
public:
	SortedArray() { p = NULL; size = 0; };
	SortedArray(int p[], int size) {
		this->size = size;
		this->p = new int[size];
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
	} //���� ������

	
	SortedArray operator + (SortedArray& op2) {
		SortedArray tmp;
		tmp.size= this->size + op2.size;
		tmp.p = new int[size];
		for (int i = 0; i < tmp.size-op2.size; i++) {
			tmp.p[i] = this->p[i];
		}
		for (int i = this->size; i < tmp.size; i++) {
			tmp.p[i] = op2.p[i-this->size];
		}
		return tmp;
	} //����迭�� op2 �迭 �߰�
	SortedArray& operator = (const SortedArray& op2) {
		delete []this->p;
		this->size = op2.size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = op2.p[i];
		}
		return *this;
	}	//���� �迭�� op2 �迭 ����
	void show() {
		sort();
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}	//�迭�� ���� ���
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