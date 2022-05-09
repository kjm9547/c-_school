#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextint(int min = 0, int max = 32767) {
		return rand() % (max - min + 1) + min;
	}
	static char nextAlphabet() {
		while (true) {
			int num = rand() % (122 - 65 + 1) + 65;
			if ((65 <= num && num <= 90 )|| (97 <= num && num<= 122)) {
				char word = num;
				return word;
			}
		}
	}
	static double nextDouble() {
		return rand() / 32767.;
	}
};
int main() {
	Random r;
	r.seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << r.nextint(1,100) << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << r.nextAlphabet() << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << r.nextDouble() << ' ';
	}
}