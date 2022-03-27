#include <iostream>
#include <string>

using namespace std;

class Histogram {
	string text;
	int histo[26];
public:
	Histogram(string text) {
		this->text = text;
	};
	string put(string text) {
		return this->text.append(text);
	};
	void putc(char word) {
		text +=word;
	};
	void print() {
		cout << text << endl;
		int cnt = 0;
		int alp_cnt = 0;
		string stack_star = "";
		for (int i = 0; i < 26; i++) {
			histo[i] = 0;
		}
		for (int i = 0; i < text.length(); i++) {
			if (isalpha(text[i])) {
				char c = tolower(text[i]);
				histo[c - 'a']++;
				
			}
			
		}
	
		for (int i = 0; i < 26; i++) {
			cnt += histo[i];
			}
		cout << "소문자의 수" << cnt << endl;

		for (int i = 0; i < 26; i++) {

			cout << char('a' + i) << "(" << histo[i] << ")    :";
			for (int j = 0; j < histo[i]; j++) {
				cout << '*';
			};
			cout << endl;
		}
	};
};
int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");//생성자
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}