#include<iostream>
using namespace std;
class Seat {
	string  name;

public:
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};
class Schedule {
	Seat* seat;
	string time;
public:
	Schedule() {
		seat = new Seat[8];
		for (int i = 0; i < 8; i++) {
			seat[i].setName("---");
		}
	}
	void show_seat() {
		for (int i = 0; i < 8; i++) {
			cout << seat[i].getName() << '\t';
		}
		cout << endl;
	}
	string getTime() { return time; }
	void setTime(string time) { this->time = time; }
	void reserve(int a, string b) {
		seat[a].setName(b);
	}
	void cancel_seat(int a, string b) {
		if (seat[a].getName() == b) {
			seat[a].setName("---");
		}
	}
};

class Console {
	int select_menu;
	int input_num;
	int select_time;
	string reserv_name;
public:
	int menu() {
		cout << "예약:1 취소:2 보기3: 끝내기:4>>";
		cin >> select_menu;
		return select_menu;
	}
	int reserve_num() {
		cout << "좌석번호>>";
		cin >> input_num;
		return input_num;
	}
	string reserve_name() {
		cout << "이름입력>>";
		cin >> reserv_name;
		return reserv_name;
	}

	int time() { cin >> select_time; return select_time; }
};
class Airlinebook {
	Schedule* s;
	Console c;
	int menu;
	int time;
	
public:
	Airlinebook() {
		menu = 0;
		time = 0;
		s = new Schedule[3];
		s[0].setTime("0시");
		s[1].setTime("7시");
		s[2].setTime("12시");
	}
	void run() {
		int r_num;
		string r_name;
		cout << "*********** 항공예약 ***********" << endl;
		while (true) {
			menu = c.menu();
			if (menu == 1) {
				cout << s[0].getTime() << ":1 " << s[1].getTime() << ":2 " << s[2].getTime() << ":3 ";
				time = c.time();
				if (time == 1) {
					s[0].show_seat();
					r_num = c.reserve_num();
					r_name = c.reserve_name();
					s[0].reserve(r_num-1,r_name);
				}
				else if (time == 2) {
					s[1].show_seat();
					r_num = c.reserve_num();
					r_name = c.reserve_name();
					s[1].reserve(r_num - 1, r_name);
				}
				else if (time == 3) {
					s[2].show_seat();
					r_num = c.reserve_num();
					r_name = c.reserve_name();
					s[2].reserve(r_num - 1, r_name);
				}

			}
			else if (menu == 2) {
				cout << s[0].getTime() << ":1 " << s[1].getTime() << ":2 " << s[2].getTime() << ":3 ";
				time = c.time();
				if (time == 1) {
					s[0].show_seat();
					r_num = c.reserve_num();
					r_name = c.reserve_name();
					s[0].cancel_seat(r_num - 1, r_name);
				}
				else if (time == 2) {
					s[1].show_seat();
					r_num = c.reserve_num();
					r_name = c.reserve_name();
					s[1].cancel_seat(r_num - 1, r_name);
				}
				else if (time == 3) {
					s[2].show_seat();
					r_num = c.reserve_num();
					r_name = c.reserve_name();
					s[2].cancel_seat(r_num - 1, r_name);
				}

			}
			else if (menu == 3) {
					s[0].show_seat();
					s[1].show_seat();
					s[2].show_seat();
			}
			else if (menu == 4) {
				cout << "시스템을 종료합니다.";
				break;
			}
		}
	}
};

int main() {
	Airlinebook a;
	a.run();
}