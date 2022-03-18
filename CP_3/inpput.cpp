
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
/*int nums[5] = {1,8,3,10,5};


	

	int highnum = 0;
	for (int x = 0; x < 5; x++) {
		cout << nums[x];


		if (nums[x] > highnum) {

			highnum = nums[x];
		}
		else if(nums[x] < highnum)
		{
			highnum = highnum;
		}
		\

	
	}
	
	cout << highnum;
*/

	char address[100];
	cout << "주소입력";

	cin >> address;
	
	

	

	int string_length = strlen(address);

	
	int count = 0;

	for (int i = 0; i < 5; i++) {
		if (strcmp(address[i],"x") == 0) {
			count++;
		}

	}
	cout << count;


	char x[100];
	int count = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;

	cin.getline(x, 100);
	int max = strlen(x);
	for (int i = 0; i <= max; i++)
	{
		if (x[i] == 'x')
			count++;
	}
	cout << "x의 개수는 " << count << endl;

	
}