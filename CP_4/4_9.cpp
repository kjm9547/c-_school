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

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << user[i].getName() << " ";
	}

	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>> ";
	cin >> search_user;
	cout << "\n��ȭ ��ȣ��";

	for (int i = 0; i < 3; i++) {
		if (search_user.compare(user[i].getName()) == 0) {
			cout << user[i].getTel();
			break;
		}
		

	}
}