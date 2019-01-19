#include<iostream>
#include<string>
using namespace std;

int main()
{
	string hui;
	string str;
	cin >> hui >> str;
	int len1 = hui.length();
	int len2 = str.length();
	int ans1=1, ans2 = 1;
	for (int i = 0; i < len1; i++)
	{
			ans1 *= (hui[i] - 'A' + 1);
	}
	ans1 %= 47;
	for (int j = 0; j < len2; j++)
	{
			ans2 *= (str[j] - 'A' + 1);
	}
	ans2 %= 47;
	if (ans1 == ans2)
		cout << "GO" << endl;
	else
		cout << "STAY" << endl;
	system("pause");
	return 0;
}