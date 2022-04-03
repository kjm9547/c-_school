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
		cout << "총 " << size << "명 있습니다.";
	}
};
int main() {
	int size;
	cout << "저희들의 팀은 몇 명 넣으시겠습까?";

	cin >> size;
	Team team(size);

	team.setNames();
	team.show();

}