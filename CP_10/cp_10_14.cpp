#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, string> m;
	cout << "암호 관리 프로그래 WHO를 시작합니다." << endl;
	string name, password;
	int n;
	while (true) {
		cout << "삽입:1 검사:2 종료:3 >>";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "이름 암호 >>";
			cin >> name >> password;
			m[name] = password;
			break;
		case 2:

			cout << "이름? ";
			cin >> name;
			while (true) {
				cout << "암호? ";
				cin >> password;
				if (m[name] == password) {
					cout << "통과!" <<endl;
					break;
				}
				else {
					cout << "실패!" << endl;

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