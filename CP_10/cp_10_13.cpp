#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> m;
	string name;
	int num;
	int n;
	cout << "암호관리 프로그램을 시작합니다." <<endl;
	while (true) {
		cout << "삽입:1 검사:2 종료:3 >>";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "이름과 점수>>";
			cin >> name >> num;
			m[name] = num;
			break;
		case 2:
			cout << "이름";
			cin >> name;
			cout << name << "의 점수는" << m[name] <<endl;
			break;
		case 3:
			return 0;
		default:
			break;
		}
	}
}