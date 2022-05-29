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
		Nation("�ѱ�","����"),Nation("�߱�","����¡"),Nation("��Ż����","�θ�"),Nation("������","�ĸ�"),
		Nation("�Ϻ�","����"),Nation("����","������"),Nation("���þ�","��ũ��"),Nation("����Ʈ","ī�̷�")
		,Nation("�ʸ���","���Ҷ�")
	};
	string name, capital;
	Nation tmp;
	bool s = true;
	for (int i = 0; i < 9; i++) {
		v.push_back(nation[i]);
	}
	cout << " ������ ���� ���߱� ������ �����մϴ�." << endl;
	while (true) {
		cout << "���� �Է�: 1 ����: 2 ����: 3" << endl;
		cin >> n;

		switch (n)
		{
		case 1:
			cout << "����" << v.size() << "�� ���� �ԷµǾ� �ֽ��ϴ�."<<endl;
			cout << "����� ������ �Է��ϼ���" << endl;
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
				cout << it->getNation() << "�� ������?";
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