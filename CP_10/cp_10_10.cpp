#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Nation {
	string nation;
	string capital;
public:
	Nation(string nation=" ", string capital=" ") { this->nation = nation; this->capital = capital; }
	void set(string nation, string capital) { this->nation = nation; this->capital = capital; }
	string getNation() { return nation; }
	string getCapital() { return capital; }
};
int main() {
	int n;
	vector<Nation> v;
	Nation nation[9]{
		Nation("한국","서울"),Nation("중국","베이징"),Nation("이탈리아","로마"),Nation("프랑스","파리"),
		Nation("일본","도쿄"),Nation("독일","베를린"),Nation("러시아","모스크바"),Nation("이집트","카이로")
		,Nation("필리핀","마닐라")
	};
	string name, capital;
	Nation tmp;
	bool s = true;
	for (int i = 0; i < 9; i++) {
		v.push_back(nation[i]);
	}
	cout << " 나라의 수도 맞추기 게임을 시작합니다." << endl;
	while (true) {
		cout << "정보 입력: 1 퀴즈: 2 종료: 3" << endl;
		cin >> n;

		switch (n)
		{
		case 1:
			cout << "현재" << v.size() << "의 나라가 입력되어 있습니다."<<endl;
			cout << "나라와 수도를 입력하세요" << endl;
			cin >> name>> capital;
			if (name == "no" && capital == "no") {
				break;
			}
			for (int i = 0; i < v.size(); i++) {
				if (nation->getNation() == name) {
					cout << "already exists";
					s = false;
					break;
				}
			}
			if (s) {
				tmp.set(name, capital);
				v.push_back(tmp);
				break;
			}
			break;
		case 2:
			for (auto it = v.begin(); it != v.end(); it++) {
				cout << it->getNation() << "의 수도는?";
				cin >> capital;
				if (capital == "exit") break;
				else if (it->getCapital() == capital)
					cout << "Correct" << endl;
				else if (it->getCapital() != capital)
					cout << "No!!" << endl;
				
			}
			break;
		case 3:
			return 0;
		default:
			break;
		}
	}
}