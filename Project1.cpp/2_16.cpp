#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char histogram[10000] = {};
	int length;
	
	int count =0;
	int alpha_count;
	string stack;
	cout << "ют╥б";
	
	cin.getline(histogram, 10000, ';');
	length = strlen(histogram);

	

	
	for (int i = 0; i < length; i++) {
		
		if (isalpha(tolower(histogram[i])) == 2) {
			count++;
		}
		

	}
	cout << count<<"\n";
	for (char alpha = 'a'; alpha < 'z'; alpha++) {
		alpha_count = 0;
		stack = "";
		for (int x = 0; x < length; x++) {
			if (alpha == tolower(histogram[x])) {
				alpha_count++;
				stack += '*';
				
			}
		}
		cout << alpha << " " << alpha_count << "    :" << stack << "\n";
	}
	



}