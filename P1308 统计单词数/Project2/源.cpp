#include<iostream>
#include<string>
using namespace std;

string word, sen;
int lenw, lens;
int cnt, pos, p;

string lower(string s) {
	int l = s.size();
	for (int i = 0; i<l; i++) {
		s[i] = (s[i] >= 'A'&&s[i] <= 'Z') ? s[i] + 32 : s[i];
	}
	return s;
}

int main() {
	getline(cin, word);
	getline(cin, sen);
	word = ' ' + lower(word) + ' ';
	sen = ' ' + lower(sen) + ' ';
	lenw = word.size();
	lens = sen.size();
	p = sen.find(word);
	if (p == string::npos) {
		cout << "-1";
		return 0;
	}
	else {
		pos = p;
		cnt++;
		p += lenw - 1;
	}
	while (p<lens) {
		p = sen.find(word, p);
		if (p == string::npos) {
			break;
		}
		else {
			cnt++;
			p += lenw - 1;
		}
	}
	cout << cnt << " " << pos;
	return 0;
}