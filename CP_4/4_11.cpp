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
				cout << "Ŀ�� "<< tong[i].getSize();
				break;
			case 1:
				cout << "�� " << tong[i].getSize();
				break;
			case 2:
				cout << "���� " << tong[i].getSize();
				break;
			}
			
		}
		
	};

public:
	void run() {
		int input_num;
		
		
		while (true)
		{
			cout << "�޴��� �����ּ���(1:����������, 2 : �Ƹ޸�ī��, 3 : ����Ŀ��, 4 : �ܷ�����, 5 : ä���)";
			cin >> input_num;
			switch (input_num)
			{
				case(1):
					selectEspresso();
					cout << "���������� �弼��";
					cout << endl;
					break;
				case(2):
					selectAmericano();
					cout << "�Ƹ޸�ī�� �弼��";
					cout << endl;
					break;
				case(3):
					selectSugarCoffee();
					cout << "����Ŀ�� �弼��";
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