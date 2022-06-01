#include<iostream>
#include<vector>
using namespace std;
class Circle {
	string name;
	int radius;
public:
	Circle(int radius =0, string name = "") {
		this->radius = radius; this->name = name;
	}
	
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};
int main() {
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
	vector<Circle*>v;
	vector<Circle*>::iterator it;
	int n,radius;
	string name;
	while (true) {
		cout << "����:1 ����:2 ��κ���:3 ����:4 ";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "�ļ��ϰ��� �ϴ� ���� �������� �̸��� >>";
			cin >> radius >> name;
			
			v.push_back(new Circle(radius,name));
			break;
		case 2:
			cout << "�����ϰ��� �ϴ� ���� �̸���?";
			cin >> name;
			
			it = v.begin();
			for (int i = 0; i<v.size();i++) {
				if (v[i]->getName() == name) {
					it = v.erase(it);
				}
				else {
					++it;
				}
			}
			break;
		case 3:
			for (int i = 0; i < v.size(); i++) {
				cout << v[i]->getName() << endl;
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