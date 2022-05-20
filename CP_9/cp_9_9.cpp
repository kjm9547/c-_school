#include<iostream>
using namespace std;
class Print {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Print(string model = " ", string manufacturer = " ", int printedCount = 0, int availableCount = 0) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = printedCount;
		this->availableCount = availableCount;
	}
	virtual void print(int pages) =0;
	virtual void show() =0;
};
class Ink : public Print {
	int availableInk;
public:
	Ink(string model, string manufacturer, int printedCount, int availableCount) :Print(model, manufacturer, printedCount, availableCount) { availableInk = 10; }
	void print(int pages) { 
		printedCount = pages; 
		if (availableInk >= pages && availableCount >= pages) {
			availableCount -= pages;
			availableInk -= pages;
		}
	};
	void show(){ cout << model << ' ' << manufacturer << " ���� ���� " << availableCount << " ���� ��ũ " << availableInk << endl; }
};
class Laser :public Print {
	int availableToner;
public:
	Laser(string model, string manufacturer, int printedCount, int availableCount) : Print(model, manufacturer, printedCount, availableCount) { availableToner = 20; }
	void print(int pages) {
		printedCount = pages;
		if (availableCount >= pages && availableToner >= pages) {
			availableCount -= pages;
			availableToner -= pages;
		}
	}
	void show() {
		cout << model << ' ' << manufacturer << " ���� ���� " << availableCount << " ���� ��� " << availableToner << endl;
	}
};

int main() {
	Ink i("Officejet V40","HP",0 ,5);
	Laser l("SCX-4x45","�Ｚ����",0,3);
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����." <<endl;
	cout << "��ũ��  ";
	i.show();
	cout << "������  ";
	l.show();
	char c;
	int selec_p;
	int amount_p;
	while (true) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> selec_p >> amount_p;
		switch (selec_p)
		{
		case 1:
			i.print(amount_p);
			i.show();
			l.show();
			break;
		case 2:
			l.print(amount_p);
			i.show();
			l.show();
			break;
		default:
			cout << "retry" << endl;
			break;
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�?(y/n)";
		cin >> c;
		if (c == 'y') {
			continue;
		}
		else if (c == 'n') {
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		else {
			cout << "fail";
		}
	}
}