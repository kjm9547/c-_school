#include<iostream>
using namespace std;
//���� �ý��� �۵�
class AirlineBook:public Console {
	Schedule* s;
	
public:
	AirlineBook() {
		s = new Schedule[3];
		s[0].setTime("07��");
		s[1].setTime("12��");
		s[2].setTime("17��");
	}
	void run() {
		cout << "************ �Ѽ��װ��� ���Ű��� ȯ���մϴ� ************" << endl;
		while (true)
		{
			menu();
			switch (select_menu)
			{
			case 1: {
				reservation();
			}
			case 2: {

			}
			case 3: {

			}
			case 4: {

			}

			default:
				break;
			}
		}
	}
};
//�޴���� �Լ� �޴����� ���� �ð� ����� �̸� �¼� ��ȣ���� �Է¹޴� �Լ� 
class Console{
protected:
	static int select_menu;
	static int choice_time;
	static int s_num;
	static string name;
	
public:
	static void menu() {
		cout << "����:1 ���:2 ����:3 ������:4>>" << endl;
		cin >> select_menu;	
	}
	static void reservation() {
		cout << "07��:1 12��:2 17��:3>>" << endl;
		cin >> choice_time;
		
		selectSeat();
		selectUser();
		
	}
	static void selectSeat() {
		cout << "�¼� ��ȣ>>" << endl;
		cin >> s_num;
	}
	static void selectUser() {
		cout << "�̸� �Է�>>"<<endl;
		cin >> name;
	}
};
//�ϳ��� ������ ���� �̸� ���� �¼��� ���� ���� ��� ����� ����
class Schedule{
	Seat* seat;
	string time;
public:
	Schedule() {
		seat = new Seat[8];
	}
	//����
	void check_in() {

	}
	//���
	void cancel_reserve() {

	
	}
	void setTime(string time) {
		this->time = time;
	}
	void show() {
		for (int i = 0; i < 8; i++) {
			cout << seat[i].getSeat() << '   ';
		}
		cout << endl;
	}
};
//�¼��� ���� �̸� ���� �¼��� ���� ���� �� ��� ����
class Seat{
	string available_seat;
	string name;
public:

	Seat() {
		available_seat = "---";
		name = "";
	}
	
	string getSeat() {
		return available_seat;
	}
};
int main() {
	AirlineBook a;
	a.run();
}