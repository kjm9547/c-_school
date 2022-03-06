/*#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char user_name[100];
	string top;
	int max =0;
	
	cout << "5 명의 이름을 ;로 구분하여 입력";
	
	
	for (int i = 0; i < 5; i++) {

		
		cin.getline(user_name, 100, ';');
		cout << user_name << '\n';
		
		if (max < strlen(user_name)) {
			top = user_name;
			max = strlen(user_name);
		}
		
	}

	cout << top << max;
	return 0;
}
*/