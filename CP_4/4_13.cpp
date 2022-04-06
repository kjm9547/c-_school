#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
public:
	Histogram(string word) {
		text = word;
	}
	string put(string input) {
		return text.append(input);
	}
	string putc(char word) {
		return text += word;
	}
	
	void print() {
		cout << text << endl;
		int len = text.length();
		int cnt = 0;
		for (int i = 0; i < len; i++) {
			if (isalpha(tolower(text[i]))==2) {
				cnt++;
				
			}
		}
		cout << cnt << endl;
		int starstack[26];

		for (char i = 'a'; i <= 'z'; i++) {
			int num_cnt = 0;
			string star_cnt = "";
			for(int j=0;j<=len; j++){
				
				if (tolower(text[j]) == i) {
					num_cnt++;
					star_cnt+= "*";
				}
			}
			starstack[i - 97] = num_cnt;
			cout << i << starstack[i - 97] <<"   :" <<star_cnt<< endl;
		}
	}
};
int main() {
	Histogram elvishisto("Wise men say, only fools rush in But I can't help, ");
	elvishisto.put("falling in love with you");
	elvishisto.putc('-');
	elvishisto.put("Elvis Presley");
	elvishisto.print();
}
