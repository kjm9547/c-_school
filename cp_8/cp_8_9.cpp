#include<iostream>
using namespace std;
//예약 시스템 작동
class AirlineBook:public Console {
	Schedule* s;
	
public:
	AirlineBook() {
		s = new Schedule[3];
		s[0].setTime("07시");
		s[1].setTime("12시");
		s[2].setTime("17시");
	}
	void run() {
		cout << "************ 한성항공에 오신것을 환영합니다 ************" << endl;
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
//메뉴출력 함수 메뉴선택 비행 시간 사용자 이름 좌석 번호등을 입력받는 함수 
class Console{
protected:
	static int select_menu;
	static int choice_time;
	static int s_num;
	static string name;
	
public:
	static void menu() {
		cout << "예약:1 취소:2 보기:3 끝내기:4>>" << endl;
		cin >> select_menu;	
	}
	static void reservation() {
		cout << "07시:1 12시:2 17시:3>>" << endl;
		cin >> choice_time;
		
		selectSeat();
		selectUser();
		
	}
	static void selectSeat() {
		cout << "좌석 번호>>" << endl;
		cin >> s_num;
	}
	static void selectUser() {
		cout << "이름 입력>>"<<endl;
		cin >> name;
	}
};
//하나의 스케줄 구현 이름 저장 좌석에 대한 예약 취소 보기등 관리
class Schedule{
	Seat* seat;
	string time;
public:
	Schedule() {
		seat = new Seat[8];
	}
	//에약
	void check_in() {

	}
	//취소
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
//좌석을 구현 이름 저장 좌석에 대한 예약 및 취소 보기
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