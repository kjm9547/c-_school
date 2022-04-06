#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	//복사 생성자
	Book(const Book& b) {
		this->price = b.price;
		int size = strlen(b.title) + 1;
		this->title = new char[size];
		strcpy(this->title, b.title);
	}
	//const char포인터?? -> 상수형 문자에 대한 포인터
	Book(const char* title, int price) {
		this->price = price;
		int size = strlen(title) + 1;

		this->title = new char[size];
		strcpy(this->title, title);
	};
	~Book() {
		delete[]title;
	};
	void set(const char* title, int price) {
		if (this->title) delete[] this->title;
		this->price = price;
		int size = strlen(title) + 1;
		this->title = new char[size];
		strcpy(this->title, title);
	};
	void show() {
		cout << title << ' ' << price << "원" << endl;
	}
};
int main() {
	Book cpp("명품 C++", 10000);
	Book java = cpp;//복사 생성(객체 치환)
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

}