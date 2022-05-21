#include <iostream>
using namespace std;
class Color {
	int x, y, z;
public:
	Color() { x = 0; y = 0; z = 0; };
	Color(int a, int b, int c) { x = a; y = b; z = c; }
	void show() {
		cout << x << y << z;
	}
	Color operator+(Color& b) {
		x += b.x;
		y += b.y;
		z += b.z;
		return *this;
	}
	friend bool operator==(Color& b, Color& a);
};
bool operator==(Color& b,Color& a) {
	if (a.x == b.x && a.y == b.y && a.z == b.z)
		return true;
	else
		return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";

}