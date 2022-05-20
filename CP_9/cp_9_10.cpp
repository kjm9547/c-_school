#include<iostream>
using namespace std;
class Shape {
	string name;
	int amount;
public:
	Shape(string name = "") { this->name = name; amount = 0; }
	void setName(string name) { this->name = name; }
	void up_amount() { amount++; }
};
class Line :public Shape {
public:
	Line(string name) : Shape(name) {};
};
class Circle : public Shape {
public:
	Circle(string name) : Shape(name) {};
};
class Rect : public Shape {
public:
	Rect(string name) : Shape(name) {};
};

class UI {//ȭ�� ��� �� Ű �Է�
	static int num;
public:
	static int input() { cin >> num; return num; }
	static void show_menu(){
		cout << "����:1 ����:2 ��κ���:3 ����:4 >> " << endl;
	}
	static void show_detail() {
		cout << "��:1 ��:2 �簢��:3 >>";
	}
};
class GraphicEditor{
	UI u;
public:
	Line l;
	Circle c;
	Rect r;
	
	void run() {
		cout << "�׷��� �������Դϴ�.";
		while (true)
		{
			u.show_menu();
			int num = u.input();
			switch (num)
			{
			case 1:
				u.show_detail();
				int detail = u.input();
				switch (detail)
				{
				case 1:

				default:
					break;
				}
			case 2:
				
			case 3:

			case 4:
			default:
				break;
			}
		}
	}
};

int main() {

}