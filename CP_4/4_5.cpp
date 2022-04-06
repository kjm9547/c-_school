#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	string text;
	
	int ran_alpha;
	getline(cin, text);
	int len = text.length();
	srand((unsigned)time(0));
	while (true) {
		int ran = rand() % (len - 1 - 0 + 1) + 0;
		if (text[ran] != ' ') {
			ran_alpha = rand() % (26 - 0 + 1) + 0;
			text[ran] = ran_alpha + 'a';
			
			break;
		}
	}

	cout << text;
	
}
