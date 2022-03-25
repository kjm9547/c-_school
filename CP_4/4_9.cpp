#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() { name = ""; tel = ""; };
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tell);
};

void Person::set(string name, string tell) {
	this->name = name;
	this->tel = tell;
}
int main() {
	Person user[3];
	string input_name;
	string input_tel;
	string search_user;
	for (int i = 0; i < 3; i++) {
		cin >> input_name >> input_tel;
		user[i].set(input_name, input_tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << user[i].getName() << " ";
	}

	cout << "\n전화번호 검색합니다. 이름을 입력하세요>> ";
	cin >> search_user;
	cout << "\n전화 번호는";

	for (int i = 0; i < 3; i++) {
		if (search_user.compare(user[i].getName()) == 0) {
			cout << user[i].getTel();
			break;
		}
		

	}
}