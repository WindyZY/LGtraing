#include<iostream>

using namespace std;
int n, k;
int num[25];
int sum, cnt;
bool b[25];
int prime(int f)
{
	if (f == 0 || f == 1)
		return 1;
	for (int i = 2; i < f / 2; i++)
	{
		if (f%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	cin >> n >> k;
	if (n < 1 || n>20 || k >= n)
		cout << "Please follow the rule and enter the number again";
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		b[i] = true;
	}
	
}