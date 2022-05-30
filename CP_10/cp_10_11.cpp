#include<iostream>
#include<vector>
using namespace std;

class Book {
	int year;
	string name;
	string user;
public:
	Book(int year, string name = "", string user = "") { this->year = year; this->name = name; this->user = user; }
	int getYear() { return year; }
	string getName() { return name; }
	string getUser() { return user; }
};
int main() {
	vector <Book> v;
	int year;
	string name, user;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while (true) {
		cout << "�⵵>>";
		cin >> year;
		if (year == -1) {
			break;
		}
		cout << "å�̸�>>";
		cin >> name;
		cout << "����>>";
		cin >> user;
		Book b(year, name, user);
		v.push_back(b);
	}
	cout << "�� �԰�� å�� " << v.size() << "�Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	cin >> user;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getUser() == user) {
			cout << v[i].getYear() << ' ' << v[i].getName() << ' ' << v[i].getUser() << endl;
		}
	}
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == year) {
			cout << v[i].getYear() << ' ' << v[i].getName() << ' ' << v[i].getUser() << endl;
		}
	}
}