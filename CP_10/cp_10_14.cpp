#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, string> m;
	cout << "��ȣ ���� ���α׷� WHO�� �����մϴ�." << endl;
	string name, password;
	int n;
	while (true) {
		cout << "����:1 �˻�:2 ����:3 >>";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "�̸� ��ȣ >>";
			cin >> name >> password;
			m[name] = password;
			break;
		case 2:

			cout << "�̸�? ";
			cin >> name;
			while (true) {
				cout << "��ȣ? ";
				cin >> password;
				if (m[name] == password) {
					cout << "���!" <<endl;
					break;
				}
				else {
					cout << "����!" << endl;

				}
			}
			break;
		case 3:
			return 0;
			break;
		default:
			break;
		}
	}
}