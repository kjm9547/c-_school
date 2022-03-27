#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius; //�������� ��
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	};
	double getArea() { return radius * radius * 3.14; };
	string getName() { return name; };
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		p = new Circle[size];
		this->size = size;
	};
	void run() {
		string circle_name;
		int circle_radius;
		for (int i = 0; i < size; i++) {
			cin >> circle_name >> circle_radius;
			p[i].setCircle(circle_name, circle_radius);
		}
	}
	~CircleManager() {
		delete[]p;
	};

	void searchByName() {
		string s_name;
		cout << "�˻��ϰ��� �ϴ� �̸���?" << endl;
		cin >> s_name;
		for (int i = 0; i < size; i++) {
			if (s_name.compare(p[i].getName()) == 0) {
				cout << p[i].getName() << "�� ������" << p[i].getArea();
			}
		}
	};


	void searchByArea() {
		int min_area = 0;
		cout << endl << "�ּ� ������ ������ �Է��ϼ���"<< endl;
		cin >> min_area;
		cout << min_area << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > min_area) {
				
				cout << p[i].getName() << " �� ������ " << p[i].getArea() << ", ";
			}
		}
	}//����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
};
int main() {
	int input_num=0;
	cout << "���� ������?";
	cin >> input_num;
	CircleManager circle(input_num);
	circle.run();
	circle.searchByName();
	circle.searchByArea();
	



}