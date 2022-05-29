#include<iostream>
using namespace std;
template<class T>
bool search(int s, T& t, int size) {
	int stack = 0;
	for (int i = 0; i < size; i++) {
		if (t[i] == s)
		{
			stack++;
			return true;
		}
	}
	if (stack == 0)return false;
}
int main() {
	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5)) cout << "ok";
	else cout << "no";
}