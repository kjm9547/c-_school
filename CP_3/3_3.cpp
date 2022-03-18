/*#include<iostream>

using namespace std;

class Account {
private:
	int id, balance;
	string name;

public:
	int deposit(int input);
	int withdraw(int output);
	int inquiry();
	string getOwner();
	Account(string a, int b, int c);
};

Account::Account(string a, int b, int c){
	name = a;
	id = b;
	balance = c;
}

int Account::deposit(int input) {
	return balance += input;
}


string Account::getOwner() {
	return name;
}

int Account::withdraw(int output) {
	return balance -= output;
}

int Account::inquiry() {
	return balance;
}
int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);

	cout << a.getOwner() << "ÀÜ¾×Àº" << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry();
}
*/