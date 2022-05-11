#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int a = 0, string name = "") {
		setRadius(a); this->name = name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void show() {
		cout << "반지름이" << getRadius() << "인" << name;
	}
	
};
int main() {
	NamedCircle pizza[5];
	int radius;
	string name;
	for (int i = 0; i < 5; i++) {
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}
	int max = 0;
	int index;
	for (int i = 0; i < 5; i++) {
		if (max < pizza[i].getRadius()) {
			max = pizza[i].getRadius();
			index = i;
		}
	}
	cout << "가장 면적이 큰 피자는" << pizza[index].getName() << "입니다.";
}