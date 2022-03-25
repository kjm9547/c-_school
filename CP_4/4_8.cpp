#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {

		this->radius = radius;
	};
	double getArea() { return radius * radius * 3.14; };

};


int main() {
	int num;
	int input_n;
	int cnt = 0;
	cin >> num;

	
	
	Circle *circle = new Circle[num];

	for (int i = 0; i < num; i++) {
		cin >> input_n;
		circle[i].setRadius(input_n);
	}

	for (int i = 0; i < num; i++) {
		if (circle[i].getArea() > 100) {
			cnt++;
		}
	}
	delete [] circle;
	cout << "원의 면적이 100이상은 " << cnt << "개 입니다";
}