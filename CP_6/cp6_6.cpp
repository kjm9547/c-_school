#include <iostream>
using namespace std;
class ArrayUtility {
public:
	static int* concat(int s1[], int s2[], int size) {
		int *array = new int[size];
		for (int i = 0; i <size; i++) {
			if (i < 5) {
				array[i] = s1[i];
			}
			else {
				array[i] = s2[i - 5];
			}
		}
		
		for (int i = 0; i < size; i++) {
			cout << array[i];
		}
		return array;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int* array;
		for (int i = 0; i < size; i++) {
			for (int z = 0; z < size; z++) {
				if (s1[i] == s2[z]) {
					for (int y = i; y < size; y++) {
						s1[y] = s1[y + 1];
					}
					size--;
				}
			}
		}
		array = new int[size];
		for (int i = 0; i < size; i++) {
			array[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			cout << array[i];
		}
		retSize = size;
		return &retSize;
	}
	
};
int main() {
	int x[5];
	int y[5];
	int retSize;
	cout << "정수를 5개 입력하라. 배열 x에 삽입한다.";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다.";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	ArrayUtility a;
	a.concat(x, y, 10);
	cout << endl;
	a.remove(x, y, 5, retSize);
}