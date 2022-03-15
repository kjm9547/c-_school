/*#include <iostream>

using namespace std;
class Oval {
private:
	int width, height;

public:
	Oval(int a, int b);
	Oval();
	int getWidth();
	int getHeight();
	int set(int w, int h);
	void show();
};

Oval::Oval(int a, int b) {
	width = a;
	height = b;
}
Oval::Oval() {
	width = 1;
	height = 1;
}

int Oval::getWidth() {
	//타원의 너비
	return width;
}
int Oval::getHeight() {
	//타원의 높이
	return height;

}
int Oval::set(int w, int h) {
	width = w;
	height = h;
	int temp =0;
	temp = width;
	width = height;
	height = temp;
	return width, height;
}

void Oval::show() {
		cout << width << height;
}
int main() {

	Oval a,b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getHeight() << b.getWidth() << endl;
}*/