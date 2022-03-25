#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	void setRadius(int radius) {
		
		this->radius = radius;
	};
	double getArea() { return radius * radius * 3.14;};

};



int main() {
	Circle circle[3];
	
	int input_num=0;
	
	for (int i= 0; i < 3; i++) {
		cin >> input_num;
		circle[i].setRadius(input_num);
	}

	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		if (circle[i].getArea() > 100) {
			cnt++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";

}