#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius; //반지름의 값
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	};
	double getArea() { return radius * radius * 3.14; };
	string getName() { return name; };
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		p = new Circle[size];
		this->size = size;
	};
	void run() {
		string circle_name;
		int circle_radius;
		for (int i = 0; i < size; i++) {
			cin >> circle_name >> circle_radius;
			p[i].setCircle(circle_name, circle_radius);
		}
	}
	~CircleManager() {
		delete[]p;
	};

	void searchByName() {
		string s_name;
		cout << "검색하고자 하는 이름은?" << endl;
		cin >> s_name;
		for (int i = 0; i < size; i++) {
			if (s_name.compare(p[i].getName()) == 0) {
				cout << p[i].getName() << "의 면적은" << p[i].getArea();
			}
		}
	};


	void searchByArea() {
		int min_area = 0;
		cout << endl << "최소 면적을 정수로 입력하세요"<< endl;
		cin >> min_area;
		cout << min_area << "보다 큰 원을 검색합니다." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > min_area) {
				
				cout << p[i].getName() << " 의 면적은 " << p[i].getArea() << ", ";
			}
		}
	}//사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};
int main() {
	int input_num=0;
	cout << "원의 개수는?";
	cin >> input_num;
	CircleManager circle(input_num);
	circle.run();
	circle.searchByName();
	circle.searchByArea();
	



}