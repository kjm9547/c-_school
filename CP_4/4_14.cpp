#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
class Player {
	string name;
	int ran[3];
public:#include <iostream>

using namespace std;
int main() {
	int a[5];
	int num;
	int max =0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		a[i] = num;
		if (max < a[i]) {
			max = a[i];
		}
		
	}

	for (int i = 0; i < 5; i++) {
		cout << a[i] << "  ";
	}
	cout << max;

}
	string setName(string name) { return this->name = name; }
	string getName() { return name; };
	bool ran_num() {

		for (int i = 0; i < 3; i++) {
			ran[i] = rand() %3;
			
			cout << ran[i] << '\t';
			
		}

		if (ran[0] == ran[1] && ran[1] == ran[2]) {
			return true;
		}
		else
		{
			return false;
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
				cout << '\t' << p[i % 2].getName() << "님 승리";
				break;
			}
			else
			{
				cout << "\t 아쉽군요";
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
