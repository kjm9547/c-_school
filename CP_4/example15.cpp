#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요" << endl;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace";
	getline(cin, r, '\n');

	int startindex = 0;
	while (true) {
		int fIndex = s.find(f, startindex);
		if (fIndex == -1)
			break;
		s.replace(fIndex, f.length(), r);
		startindex = fIndex + r.length();
	}
	cout << s << endl;
}
