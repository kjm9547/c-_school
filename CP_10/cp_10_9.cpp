#include<iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int sum = 0, n;
	while (true)
	{
		cout << "������ �Է��ϼ���.";
		cin >> n;
		if (n == 0)break;
		v.push_back(n);
		for (int i = 0; i < v.size(); i++)cout << v[i] << ' ';
		sum += n;
		cout << "���= " << (double)sum / v.size() << endl;
	}
}