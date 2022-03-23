#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3] = {Circle(10),Circle(20),Circle(30)};




	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "ŔÇ ¸éŔűŔş" << circleArray[i].getArea() << endl;
	}

	Circle* p;
	p = circleArray;

	for (int i = 0; i < 3; i++) {
		cout << "circle" << i << "ŔÇ ¸éŔűŔş" << p->getArea() << endl;
		p++;
	}

}
