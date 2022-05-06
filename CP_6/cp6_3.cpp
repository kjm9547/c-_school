#include <iostream>
using namespace std;
int big(int a, int b) {
	if (a > b) return a;
	else return b;
}
int big(int a, int b, int c) {
	if (a > b) {
		if (a > c) {
			return b;
		}
		else
			return c;
	}
	else if (a < b) {
		if (b > c) {
			return b;
		}
		else
			return c;
	}
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}
//////////////////////(2)
#include <iostream>
using namespace std;
int big(int a, int b, int max =100) {
	if (a > b) {
		if (max > a) {
			return a;
		}
		else
			return max;
	}
	else {
		if (max > b)
			return b;
		else
			return max;
	}
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;

}
