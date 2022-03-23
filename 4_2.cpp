#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	
	int startindex = 0;
	int cnt = 0;
	getline(cin, s, '\n');

	while (true)
	{
		int index_new = s.find('a',startindex);
		if (index_new == -1) {
			break;
		}
		startindex = index_new + 1;
		cnt++;
	}

	cout << "°³¼ö´Â" << cnt;
}