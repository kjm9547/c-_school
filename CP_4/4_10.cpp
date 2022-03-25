#include <iostream>
#include <string>

using namespace std;
class Person {
	string name;
public:
	Person(){};
	Person(string naem) { this->name = name; }
	string getName() { return name; }

};

class Family {
	Person* p;
	int size;
public:
	Family(string name, int size) {
		
		this->size = size;
	}
	void setName(int a, string word) {
		Person *p = new Person[3];
		
		p[a].getName() = word;
	}
	void show() {
		cout << size << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName();
		}
	};
	
};

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "M");
	simpson->setName(1, "2");
	simpson->setName(2, "3");
	simpson->show();
	delete simpson;


}