#include<iostream>
using namespace std;
class Print {
private:
	string model;
	string manufacturer;
	int p_cnt;//인쇄 매수
	int p_available;//인쇄 종이 잔량
public:
	Print(string name, string company, int p_c = 0, int p_v = 0) {
		model = name;
		manufacturer = company;
		p_cnt = p_c;
		p_available = p_v;
	}
	void print(int pages) {
		p_available -= pages;
	 }//pages만큼 용지 사용
	string getModel() {	return model; }
	string getManufacturer() { return manufacturer; }
	int getP_cnt() { return p_cnt; }
	int getP_available() { return p_available; }
};

class Ingc_p : public Print {
	int availableInk;
public:
	Ingc_p(string name, string company, int p_c, int p_v) :Print(name, company, p_c, p_v) {
		availableInk = 10;
	}
	void printInkJet(int pages) {
		availableInk -= pages;
	}
	int getAvailableink() { return availableInk; }
};

class Razer : public Print {
	int availableToner;
public:
	Razer(string name, string company, int p_c, int p_v) :Print(name, company, p_c, p_v) {
		availableToner= 20;
	}
	void printLazer(int pages) {
		availableToner -= pages;
		
	}
	int getAvailableToner() { return availableToner; }
};
int main() {
	cout << "현재 작동중인 2대의 프린터는 다음과 같다." << endl;
	Ingc_p i_p("Officejet", "HP", 0, 5);
	Razer r_p("SCX-6x45", "삼성전자", 0, 3);

	cout << "잉크젯 :" << i_p.getModel() << ' ' << i_p.getManufacturer() << ' ' << i_p.getP_available() << ' ' << i_p.getAvailableink() << endl;
	cout << "레이저 :" << r_p.getModel() << ' ' << r_p.getManufacturer() << ' ' << r_p.getP_available() << ' ' << r_p.getAvailableToner() << endl;
	int print, user_paper;
	char answer;
	while (true) {
		cout <<endl<< "프린터(1:잉크젯, 2:레이저)와 매수 입력 >> ";
		cin >> print >> user_paper;
		switch (print)
		{
		case 1:
			if(i_p.getAvailableink() > user_paper&& i_p.getP_available() > user_paper)
			{ 
				cout << "프린트하였습니다." << endl;
				i_p.print(user_paper);
				i_p.printInkJet(user_paper);
			}
			else {
				cout << "용지가 부족합니다." << endl;
			}
			cout << i_p.getModel() << ' ' << i_p.getManufacturer() << ' ' << i_p.getP_available() << ' ' << i_p.getAvailableink() << endl;
			cout << r_p.getModel() << ' ' << r_p.getManufacturer() << ' ' << r_p.getP_available() << ' ' << r_p.getAvailableToner() << endl;
			break;


		case 2:
			if (r_p.getAvailableToner() > user_paper && r_p.getP_available() > user_paper) {
				cout << "프린트하였습니다." << endl;
				r_p.print(user_paper);
				r_p.printLazer(user_paper);
			}
			else {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			}
			cout << i_p.getModel() << ' ' << i_p.getManufacturer() << ' ' << i_p.getP_available() << ' ' << i_p.getAvailableink() << endl;
			cout << r_p.getModel() << ' ' << r_p.getManufacturer() << ' ' << r_p.getP_available() << ' ' << r_p.getAvailableToner() << endl;
			break;
		}
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> answer;
		if (answer == 'n') {
			break;
		}
		if (answer == 'y') {
			continue;
		}
	}


}