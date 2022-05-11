#include <iostream>

using namespace std;
class Point {
	int y;
public :
	int x;
	Point() { x = 1, y = 1; }
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << x << y << endl;
	}
};

class ColorPoint :public Point {
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint() {
		cout << color << endl;
		showPoint();
	}
};
int main() {
	ColorPoint p;
	p.setColor("red");
	p.showPoint();
	p.set(4, 5);
	p.x = 6;
	p.showColorPoint();
	
	//업 캐스팅

	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pbase = pDer;

	pDer = (ColorPoint*)pbase;
	
}