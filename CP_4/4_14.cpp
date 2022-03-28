#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
class Player {
	string name;
	
public:
	string setName(string name) { return this->name = name; }
	string getName() { return name; };
	

	
};

class GamblingGame {
	string name;
	int ran[3];
public:
	Player p[2];
	GamblingGame() {
		name = "";
	};
	void setUser() {
		cout << "첫번째 유저";
		cin >> name;
		p[0].setName(name);
		cout << "두번째 유저";
		cin >> name;
		p[1].setName(name);
	}
	void ran_num() {

		for (int i = 0; i < 3; i++) {
			ran[i] = rand() % (2 - 0 + 1) + 0;
			cout << ran[i];
		}

	}
	void run() {
		cout << p[0].getName();

	}
};
int main() {
	GamblingGame g;
	g.setUser();
	g.run();
	
}