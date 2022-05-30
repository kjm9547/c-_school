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
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (true) {
		cout << "년도>>";
		cin >> year;
		if (year == -1) {
			break;
		}
		cout << "책이름>>";
		cin >> name;
		cout << "저자>>";
		cin >> user;
		Book b(year, name, user);
		v.push_back(b);
	}
	cout << "총 입고된 책은 " << v.size() << "입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	cin >> user;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getUser() == user) {
			cout << v[i].getYear() << ' ' << v[i].getName() << ' ' << v[i].getUser() << endl;
		}
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == year) {
			cout << v[i].getYear() << ' ' << v[i].getName() << ' ' << v[i].getUser() << endl;
		}
	}
}