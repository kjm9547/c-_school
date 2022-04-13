#include<iostream>
using namespace std;

class Member {
private:
	int number;
	int age;
	string name;
public:
	void setMember(int number, int age, string name) {
		this->number = number;
		this->age = age;
		this->name = name;
	}
	void show() {
		cout << number << ' ' << age << ' ' << name << endl;
	}
	int getMem_id() {
		return number;
	}
	void changeNameAndAge(int age , string name) {
		this->age = age;
		this->name = name;
	}
};
class Team {
private:
	int size;
	int object_s;
	Member* m;
public:
	Team(int size) {
		cout << "최대 " << size <<" 명의 팀입니다." << endl;
		object_s = size;
		m = new Member[object_s];
	}
	void run() {
		int enter_num;
		while (true)
		{
			cout << "0:종료 1:선수입영 2:선수퇴영 3:모든 팀원 보기 4:선수 정보 수정" << endl;
			cin >> enter_num;
			int m_number,m_age;
			string m_name;
			
			if (enter_num == 0) {
				break;
			}
			switch (enter_num)
			{
			case 1:
			{
				cout << "선수 정보 입력" << endl;
				cin >> m_number >> m_age >> m_name;
				m[size].setMember(m_number, m_age, m_name);
				size++;
				break;
			}
			case 2:
			{
				cout << "퇴출할려는 선수의 번호를 입력해주세요" << endl;
				int out_member;
				cin >> out_member;
				int index;
				for (int i = 0; i < size; i++) {
					if (out_member == m[i].getMem_id()) {
						index = i;
						for (int y = index; y < size; y++) {
							m[y] = m[y + 1];
							
						}
						size--;
					}
				}
				break;
			}
			case 3:
			{
				for (int i = 0; i < size; i++) {
					 m[i].show();
				}
				break;
			}
			case 4:
			{
				cout << "수정 할 번호를 정하고 나이, 이름을 입력해주세요" << endl;
				int change_num;
				cin >> change_num;
				int n_age;
				string n_name;
				for (int i = 0; i < size; i++) {
					if (change_num == m[i].getMem_id()) {
						cin >> n_age >> n_name;
						m[i].changeNameAndAge(n_age, n_name);
					}
				}
				break;
			}
			}
		}
	}
};
int main() {
	cout << "몇 명의 팀입니까?";
	int size;
	cin >> size;
	Team pnn(size);
	pnn.run();
}