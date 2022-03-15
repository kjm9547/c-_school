#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	int a, b;
	int ran;
	int next();
	int nextInRange(int a, int b);

};
int Random::nextInRange(int a, int b) {
	return  ran = rand() %  b;	
}
int Random::next() {
	return ran = rand();
}

int main() {
	Random r;
	
	for (int i = 0; i < 10; i++) {
		cout << r.next() << endl;
	}
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(0, 10);
		if (n % 2 == 0) {
			cout << n << endl;
		}
	}
	
}