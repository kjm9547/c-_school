#include<iostream>
#include<vector>
using namespace std;
class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint() {
		draw();
	};
};
class Cirlce :public Shape {
	void draw() {
		cout << "Circle"<<endl;
	}
};
class Rect :public Shape {
	void draw() {
		cout << "Rect" << endl;
	}
};
class Line :public Shape {
	void draw() {
		cout << "Line" << endl;
	}
};
int main() {
	vector<Shape*>v;
	vector<Shape*>::iterator it;
	cout << "�׷��� ������ �Դϴ�."<<endl;
	int n;
	while (true) {
		cout << "����:1 ����:2 ��κ���:3 ����:4";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "��:1 �簢��:2 ��:3";
			cin >> n;
			if (n == 1) {
				v.push_back(new Cirlce());
			}
			else if (n == 2) {
				v.push_back(new Rect());
			}
			else if (n == 3) {
				v.push_back(new Line());
			}
			break;
		case 2:
			cout << "�����ϰ��� �ϴ� ������ �ε�����?";
			cin >> n;
			it = v.begin();
			Shape* del;
			for (int i = 0; i < n; i++) {
				++it;
			}
			del = *it;
			it = v.erase(it);
			break;
		case 3:
			for (int i = 0; i < v.size(); i++) {
				v[i]->paint();
			}
			break;
		case 4:
			return 0;
			break;
		default:
			break;
		}
	}
}