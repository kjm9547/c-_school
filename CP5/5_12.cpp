#include <iostream>
using namespace std;

class Dept {
	int size;//scores배열의 크기
	int* scores;//동적할당 받을 정수 배열의 주소
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept) {
		this->size = dept.size;
		this->scores = new int[dept.size];
		for (int i = 0; i < size; i++) {
			this->scores[i] = dept.scores[i];
		}
	};
	~Dept() {
		delete[] scores;
	};
	int getSize() { return size; };
	void read()//size만큼 키보드에서 정수를 읽어 scores 배열에 저장
	{
		int num;
		for (int i = 0; i < size; i++) {
			cin >> num;
			scores[i] = num;
		}

	}
	bool isOver60(int index) {
		
		if (60 < scores[index]) { return true; }

		else
			return false;
	}
};

int countPass(Dept dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;

	}
	return count;
}
int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은" << n << "명";
}