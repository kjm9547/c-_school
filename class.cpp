#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	bool isSquare();
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int c);

};
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}
Rectangle::Rectangle() {
	width = 2;
	height = 2;
}
Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}
Rectangle::Rectangle(int c) {
	width = c;
	height = c;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "yes" << endl;
	if (rect2.isSquare()) cout << "yes" << endl;
	if (rect3.isSquare()) cout << "yes" << endl;

}