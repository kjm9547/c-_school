#include<iostream>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; };
	double getArea() { return 3.14 * radius * radius; };
	string getName() { return name; };
};
class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		string name;
		int radius;
		this->size = size;
		p = new Circle[size];
		
		for (int i = 0; i < size; i++) {
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	};
	~CircleManager() { delete[] p; cout << "소멸자 진행" << endl; };
	void searchByName() { 
		cout << "검색하고자 하는 이름";
		string s_name;
		cin >> s_name;
		for (int i = 0; i < size; i++) {
			if (p[i].getName().compare(s_name)==0) {
				cout << p[i].getArea();
				break;
			}
		}
	};
	void searchByArea() {
		int min_area;
		cout << "최소 면적을 정수로 입력하세요.";
		cin >> min_area;
		for (int i = 0; i < size; i++) {
			if (min_area < p[i].getArea()) {
				cout << p[i].getName();
			}
		}
	};
};
int main() {
	int size;
	cin >> size;
	CircleManager Cm(size);
	Cm.searchByName();
	Cm.searchByArea();
}
