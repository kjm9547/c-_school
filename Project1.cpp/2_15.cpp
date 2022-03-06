/*#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char input_num[100];
	int first_num,second_num;
	char *word ,*context;
	int result = 0;

	cin.getline(input_num, 100);
	first_num = atoi(strtok_s(input_num, " ",&context));
	word = strtok_s(NULL, " ", &context);
	second_num = atoi(strtok_s(NULL, " ", &context));

	if (*word == '+'  ) {
		result = first_num + second_num;
	}
	else if(*word == '*')
	{
		result = first_num * second_num;
	}
	else if (*word == '/')
	{
		result = first_num / second_num;
	}
	else if (*word == '-')
	{
		result = first_num - second_num;
	}

	cout << input_num << word << second_num << " = " << result;
	 
}
*/