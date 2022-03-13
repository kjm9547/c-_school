#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	Date(int a,int b,int c);
	int getYear();
	int getMonth();
	int getDay();
	Date(string s);
	void show();
	string word;
};

Date::Date(string s) {
	word = s;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
Date::Date(int a,int b, int c) {
	year = a;
	month = b;
	day = c;
}

void Date::show() {
	
	int year = stoi(word.substr(0,4));
	int month = stoi(word.substr(5,6));

	int day = stoi(word.substr(7,8));

	cout << year << month << day;
}
int main() {
		
		Date birth(2014, 3, 20);
		Date independenceday("1945/8/15");
		independenceday.show();
		cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	
}