#include<iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point() { x = 1; y = 1; }
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int a, int b, string color){
		move(a, b);
		this->color = color;
	}
	void setColor(string color) { this->color = color; }
	void setPoint(int a, int b) { move(a, b); }
	void show() {
		cout << color << getX() << getY();
	}
};
int main() {
	ColorPoint cp(5, 5, "red");
	cp.show();
	cout << endl;
	cp.setPoint(10, 20);
	cp.setColor("blue");
	cp.show();
}