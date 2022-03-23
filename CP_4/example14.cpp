#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요" << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	
	while (true) {

	 
	int index = s.find('+',startIndex);
	if (index == -1) {
		string part = s.substr(startIndex);
		sum += stoi(part);
		cout << part << endl;
		break;
	}
	int count = index - startIndex;
	string part = s.substr(startIndex, count);
	sum += stoi(part);
	startIndex = index + 1;



	cout << part << endl;
	}

	cout << sum;
}
