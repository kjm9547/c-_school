/*#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	int num,num2;
	int stack =0;
	int stack_rg = 0;
	int ran_num();
	int range(int a, int b);
};
//홀수는 ==대신 !=입력
int EvenRandom::ran_num() {
	
	while (stack<10) {
		num = rand();
		if (num % 2 == 0) {
			stack++;
			return num;
		}
	}

}
int EvenRandom::range(int a, int b) {
	while (stack_rg < 10) {
		num2 = rand()%(b-a+1)+a;
		if (num2 % 2 == 0) {
			stack_rg++;
			return num2;
		}
	}
}
int main() {
	EvenRandom r;

	for (int i = 0; i < 10; i++) {
		cout << r.ran_num() << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << r.range(2,10) << endl;
	}
}*/