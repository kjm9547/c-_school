#include <iostream>
using namespace std;
class Seat {
	string seat;
public:
	void setSeat(string seat) {
		this->seat = seat;
	}
	string getSeat() {
		return seat;
	}
};
class Schedule {
	string time;
	Seat* st;
public:
	Schedule() {
		st = new Seat[8];
		for (int i = 0; i < 8; i++) {
			st[i].setSeat("---");
		}
	}
	void setTime(string time) {
		this->time = time;
	}
	void show_seat() {
		cout << time << " : ";
		for (int i = 0; i < 8; i++) {
			cout << st[i].getSeat() << '\t';
		}
		cout << endl;
	}
	void reserve(int n, string name) {
		
		st[n-1].setSeat(name);
	}
	void cancel_reserv(int n, string name) {
		if (st[n-1].getSeat() == name) {
			st[n-1].setSeat("---");
		}
	}
};
class Console {
public:
	static int show_menu() {
		int n;
		cout << "예약:1 취소:2 보기:3 끝내기:4 >>";
		cin >> n;
		return n;
	}
	static int show_time() {
		int n;
		cout << "07시:1 12시:2 17시:3 >>";
		cin >> n;
		return n;
	}
	static string input_userName() {
		string name;
		cout << "이름 입력";
		cin >> name;
		return name;
	}
	static int input_seatNum() {
		int n;
		cout << "좌석 번호>>";
		cin >> n;
		return n;
	}
};
class AirlineBook {
	Schedule* s;
	Console c;
public:
	AirlineBook() {
		s = new Schedule[3];
		s[0].setTime("1시");
		s[1].setTime("12시");
		s[2].setTime("17시");

	}
	void run() {
		cout << "*****한성항공에 오신 것을 환영합니다.*****" << endl;
		int n;
		string name;
		while (true) {
			n=c.show_menu();
			if (n == 1) {
				n=c.show_time();
				if (n == 1) {
					s[0].show_seat();
					n=c.input_seatNum();
					name =c.input_userName();
					s[0].reserve(n, name);
				}
				else if (n == 2) {
					s[1].show_seat();
					n = c.input_seatNum();
					name = c.input_userName();
					s[1].reserve(n, name);
				}
				else if (n == 3) {
					s[2].show_seat();
					n = c.input_seatNum();
					name = c.input_userName();
					s[2].reserve(n, name);
				}
			}
			else if (n == 2) {
				n = c.show_time();
				if (n == 1) {
					s[0].show_seat();
					n = c.input_seatNum();
					name = c.input_userName();
					s[0].cancel_reserv(n, name);
				}
				else if (n == 2) {
					s[1].show_seat();
					n = c.input_seatNum();
					name = c.input_userName();
					s[1].cancel_reserv(n, name);
				}
				else if (n == 3) {
					s[2].show_seat();
					n = c.input_seatNum();
					name = c.input_userName();
					s[2].cancel_reserv(n, name);
				}
			}
			else if (n == 3) {
				s[0].show_seat(); cout << endl;
				s[1].show_seat(); cout << endl;
				s[2].show_seat(); 
			}
			else if (n == 4) {
				exit(0);
			}
		}
	}
};
int main() {
	AirlineBook ab;
	ab.run();
}
