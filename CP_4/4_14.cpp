#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
class Player {
	string name;
	int ran[3];
public:
	string setName(string name) { return this->name = name; }
	string getName() { return name; };
	bool ran_num() {
		int sum =0;
		for (int i = 0; i < 3; i++) {
			ran[i] = rand() % (2 - 0 + 1) + 0;
			sum += ran[i];
			cout << ran[i] << '\t';
			if (sum % 3 == 0) {
				return true;
			}
			else
			{
				return false;
			}
		}
	}

};

class GamblingGame {
	string name;

public:
	Player p[2];
	GamblingGame() {
		name = "";
	};
	void setUser() {
		cout << "첫번째 선수 이름";
		cin >> name;
		p[0].setName(name);
		cout << "두번째 선수 이름";
		cin >> name;
		p[1].setName(name);
	}


	void run() {
		string start;
		int i = 0;
		while (true)
		{
			
			getline(cin, start, '\n');
			cout << p[i % 2].getName() << ":<Enter>" << endl; 
			
			if (p[i % 2].ran_num() == true)
			{
				cout << p[i % 2].ran_num() <<'\t' << p[i % 2].getName() << "님 승리";
				break;
			}
			else
			{
				cout << p[i % 2].ran_num() << "\t 아쉽군요";
			}
			i++;
		}
		//홀짝

	};
};
	

int main() {
	GamblingGame g;
	g.setUser();
	g.run();

}
