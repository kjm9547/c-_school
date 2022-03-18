#include <iostream>
#include <string>
using namespace std;

int main() {

	char word = ' ';

	cin >> word;

	for (int i = 0; i <= word-97; i++) {
		for (char space ='a'; space <= word -i; space++) {
			cout << space;
		}
		
		cout << endl;
	}
}