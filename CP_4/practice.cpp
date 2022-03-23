#include <iostream>
using namespace std;

class Circle {
private:
	int x, y;
public:
	int result();
	Circle(int x_input, int y_input);
};

Circle::Circle(int x_input, int y_input) {
	x = x_input;
	y = y_input;
}

int Circle::result(){
	return x * y * 3;
}
int main() {

	int num1, num2;
	cin >> num1 >> num2;
	Circle dounut(num1,num2);

	Circle* p;
	p = &dounut;

	cout << p->result();
}
