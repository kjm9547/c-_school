#include <iostream>
#include<string>
using namespace std;
class Board {
public:
	static int index;
	static string* text;

	
	static void add(string text_input) {
		text[index]= text_input;
		index++;
	}
	
	static void print() {
		cout << "===========�Խ����Դϴ�===========" << endl;
		for (int i = 0; i < index; i++) {
			cout << i<<text[i] << endl;
		}
	}
};
int Board::index = 0;
string *Board::text = new string[100];
int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���.");
	Board::print();
}