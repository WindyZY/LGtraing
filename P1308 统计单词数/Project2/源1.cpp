#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string word, str, sw;
int p, p1, ans, ansp;
bool flag = false;
int main() {
	getline(cin, word);  //ʹ��getline�ü��������ַ���ĩ���пո񣬵�ʹ�ò������ݲ�����ֿո� 	
	getline(cin, str);
	str = str + ' ';
	for (int i = 0; i<word.size(); i++)
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] = word[i] + 32;
	for (int i = 0; i<str.size(); i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	while (p != -1) {   //������������ո񷵻�ֵΪ-1 		
		p = str.find(' ', p1);
		sw = str.substr(p1, p - p1);
		if (sw == word) {
			ans++;
			if (!flag) {
				flag = true;
				ansp = p1;
			}
		}
		p1 = p + 1;  //ָ����ƶ�����Ϊpָ����ǿո�������Ҫ+1ʹp1ָ���ַ� 	
	}
	if (!ans) printf("-1");
	else printf("%d %d", ans, ansp);
	return 0;
}
