#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
class English {
	string word_e;
	string word_k;
public:
	English(string a = "", string b = "") { word_e = a; word_k = b; }
	void setWord(string word_e, string word_k) { this->word_e = word_e;  this->word_k = word_k; }
	string getWord_e() { return word_e; }
	string getWord_k() { return word_k; }

};
int main() {
	cout << "���� ���� �׽�Ʈ�� �����մϴ�." <<endl;
	vector <English>v;
	English e[4] = { English("honey","����"),English("dall","����"),English("painting","�׸�"),English("stock","�ֽ�") };
	for (int i = 0; i < 4; i++) {
		v.push_back(e[i]);
	}
	int n;
	int ran;
	int random[4];
	string eng, kor;
	while (true)
	{
		cout << "���� ����:1 ���� �׽�Ʈ:2 ���α׷� ����:�׿�Ű >>";
		cin >> n;
		if (n == 1) {
			cout << "���� �ܾ exit�� �Է� ��" << endl;
			while (true) {
				cout << "����";
				cin >> eng;
				if (eng == "exit") break;
				cout << "�ѱ�";
				cin >> kor;
				English tmp;
				tmp.setWord(eng, kor);
				v.push_back(tmp);
			}
		}
		else if (n == 2) {
			while (true) {
				for (int i = 0; i <v.size(); i++) {
					random[i] = rand() % v.size();
					for (int y = 0; y < i; y++) {
						if (random[i] == random[y]) {
							i--;
							break;
						}
					}
				}
				ran = rand() %4;
				cout << v[random[ran]].getWord_e() << '?' << endl;
				for (int i = 0; i <4; i++) {
					cout << "(" << i + 1 << ") " << v[random[i]].getWord_k();

				}
				cout << " :> ";
				cin >> n;
				if (n == -1)break;
				if (n== ran+1) {
					cout << "Excellent!" << endl;
				}
				else if (n>=1&&n<=4) {
					cout << "No!" << endl;
				}
				
			}

		}
		else {
			break;
		}
	}
}