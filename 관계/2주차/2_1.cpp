#include <iostream>
using namespace std;

class Team {
	int size;
	string *name;
public:
	Team(int num) {
		size = num;
	}
	void setNames(){
		name = new string[size];
		for (int i = 0; i < size; i++) {
			cin >> name[i];
		}
	};
	void show() {
		for (int i = 0; i < size; i++) {
			cout << name[i]<<'\t';
		}
		cout << "�� " << size << "�� �ֽ��ϴ�.";
	}
};
int main() {
	int size;
	cout << "������� ���� �� �� �����ðڽ���?";

	cin >> size;
	Team team(size);

	team.setNames();
	team.show();

}