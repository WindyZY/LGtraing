#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string word, str, sw;
int p, p1, ans, ansp;
bool flag = false;
int main() {
	getline(cin, word);  //使用getline用键盘输入字符串末会有空格，但使用测试数据不会出现空格 	
	getline(cin, str);
	str = str + ' ';
	for (int i = 0; i<word.size(); i++)
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] = word[i] + 32;
	for (int i = 0; i<str.size(); i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	while (p != -1) {   //如果搜索不到空格返回值为-1 		
		p = str.find(' ', p1);
		sw = str.substr(p1, p - p1);
		if (sw == word) {
			ans++;
			if (!flag) {
				flag = true;
				ansp = p1;
			}
		}
		p1 = p + 1;  //指针的移动，因为p指向的是空格，所以需要+1使p1指向字符 	
	}
	if (!ans) printf("-1");
	else printf("%d %d", ans, ansp);
	return 0;
}
