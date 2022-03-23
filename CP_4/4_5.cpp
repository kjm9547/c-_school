#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	string s;
	string change = "";
	string space = "";
	//rand() % (b - a + 1) + a //a~b±îÁö
	getline(cin, s, '\n');
	while (true)
	{
		srand((unsigned)time(0));
		int len = s.length();
		int n = rand() % len;
		space = s.substr(n,1);
		
		if (space != " ") {

		srand((unsigned)time(0));
		char b = 'a' + (rand() % 26);
		
		change += b;
		s.replace(n, 1, change);
		break;
		}
	}
	cout << s <<endl;

	cout << space;


}