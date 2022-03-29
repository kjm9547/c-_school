#include <iostream>

using namespace std;

int main() {
	int t;
	int r;
	string s;
	string n_s;
	
	while (true)
	{
		cin >> t;
		if (t >= 1 || t <= 1000) break;
		else
		{
			cout << "다시입력";
		}
	}
	for (int i = 0; i < t; i++) {
		cout << endl;
		cin >> r >> s;
		int len = s.length();
		if (r < 1 || r>8 || len<1 || len>20) {
			cout << "범위 오류";
			break;
		}
		

		for (int j = 0; j < len; j++) {

			for (int z = 1; z <= r; z++) {
				n_s += s.substr(j, 1);
			}
			cout << n_s;
			n_s = "";
		}
	}
	

}
