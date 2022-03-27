#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Container {
	int size;

public:
	Container() { size = 10; }
	void fill() { size = 10; };
	void consume() { size -= 1; };
	int getSize() { return size; };

};

class CoffeeVendinMachine {
	
	Container tong[3]; // 0:coffee 1:water 2:sugar
	
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
	};
	void selectEspresso();
	void selectAmericano() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	};
	void selectSugarCoffee() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	};
	void show() {
		for (int i = 0; i < 3; i++) {
			switch (i)
			{
			case 0:
				cout << "커피 "<< tong[i].getSize();
				break;
			case 1:
				cout << "물 " << tong[i].getSize();
				break;
			case 2:
				cout << "설탕 " << tong[i].getSize();
				break;
			}
			
		}
		
	};

public:
	void run() {
		int input_num;
		
		
		while (true)
		{
			cout << "메뉴를 눌러주세요(1:에스프레소, 2 : 아메리카노, 3 : 설탕커피, 4 : 잔량보기, 5 : 채우기)";
			cin >> input_num;
			switch (input_num)
			{
				case(1):
					selectEspresso();
					cout << "에스프레소 드세요";
					cout << endl;
					break;
				case(2):
					selectAmericano();
					cout << "아메리카노 드세요";
					cout << endl;
					break;
				case(3):
					selectSugarCoffee();
					cout << "설탕커피 드세요";
					cout << endl;
					break;
				case(4):
					show();
					cout << endl;
					break;
				case(5):
					fill();
					show();
					cout << endl;
					break;

			}
		}
	};
};

void CoffeeVendinMachine::selectEspresso() {
	
		//c w -1
		tong[0].consume();
		tong[1].consume();
	
}

int main() {

	CoffeeVendinMachine machin;
	machin.run();
}