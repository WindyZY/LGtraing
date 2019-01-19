#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int ans = 0;
	for (int i = 0, j = 0; i < 12; i++)
	{
		if (str[i] != '-')
			ans += (str[i] - '0')*(++j);
	}
	ans %= 11;
	ans += '0';
	if (ans == '9' + 1)
		ans = 'X';
	if (ans == str[12])
		cout << "Right" << endl;
	else
	{
		str[12] = ans;
		cout << str << endl;
	}
	system("pause");
	return 0;
}