#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> m;
	string name;
	int num;
	int n;
	cout << "��ȣ���� ���α׷��� �����մϴ�." <<endl;
	while (true) {
		cout << "����:1 �˻�:2 ����:3 >>";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "�̸��� ����>>";
			cin >> name >> num;
			m[name] = num;
			break;
		case 2:
			cout << "�̸�";
			cin >> name;
			cout << name << "�� ������" << m[name] <<endl;
			break;
		case 3:
			return 0;
		default:
			break;
		}
	}
}