#include<iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b)
	{
		return a + b;
	}
};
class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};
class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b) {
		int res = 0;
		switch (op)
		{
		case '+':res = add(a, b); break;
		case '-':res = minus(a, b); break;
		}
		return res;
	}
};
int main() {
	Calculator handCalculator;
	cout << handCalculator.calc('+', 5, 5);
	cout << handCalculator.calc('-', 5, 5);

}