#include<iostream>
#include<iomanip>
using namespace std;
char a[13];
int b[9];
int main()
{
	//gets(a);
	long long s = 0;
	int len = 0;
	for (int i = 0; i<11; i++)
	{
		if (a[i] != '-')
		{
			b[len] = a[i] - 48;
			len++;
		}
	}
	for (int i = 0; i <= len; i++)s += (i + 1)*b[i];
	s = s % 11;
	if (s == 10)
	{
		if (a[12] == 'X')cout << "Right";
		else
		{
			for (int i = 0; i<12; i++)cout << a[i];
			cout << "X";
		}
	}
	else
	{
		if (s == a[12] - 48)cout << "Right";
		else
		{
			for (int i = 0; i<12; i++)cout << a[i];
			cout << s;
		}
	}
	return 0;
}