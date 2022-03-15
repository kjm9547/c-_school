/*#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	int full();
	
	void show();

	CoffeeMachine(int a, int b, int c);
};

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	coffee = a;
	water = b;
	sugar = c;
}
int CoffeeMachine::drinkEspresso() {
	return
	coffee -= 1,
	water -= 1;

}
int CoffeeMachine::drinkAmericano() {
	return
	coffee -= 1,
	water -= 2;

}
int CoffeeMachine::drinkSugarCoffee() {
	return
		coffee -= 1,
		water -= 2,
		sugar -= 1;
	
	
}
int CoffeeMachine::full() {
	return
	coffee = 10,
	water = 10,
	sugar = 10;
}
void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << "물:" << water << "설탕:" << sugar << endl;
}
int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.full();
	java.show();
}*/