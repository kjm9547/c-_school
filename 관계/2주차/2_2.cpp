#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num;
	cin >> num;
	
	for (int i = 0; i <round(num / 2); i++) {
		for (int j = 0; j <num; j++) {
			if(0+i<j&&j <num-i-1)
			{ 
				cout << ' ';
			}
			else {
				cout << '*';
			}
			
		}
		cout << '\n';
		
	}

	
}