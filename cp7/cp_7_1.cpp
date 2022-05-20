#include <iostream>
using namespace std;
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { this->title = title; this->price = price; this->pages = pages; }
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	Book operator += (int b) { price += b; return *this; }
	Book operator -=(int b) { price -= b; return* this; }
};
int main() {
	Book a("청춘", 20000, 300);
	a += 500;
	a.show();
	a -= 200;
	a.show();
}