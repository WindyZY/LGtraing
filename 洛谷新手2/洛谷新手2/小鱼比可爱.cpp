/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num[100];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	int counter[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (num[j] < num[i])
				counter[i]++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i == (n - 1))
			cout << counter[i];
		else
			cout << counter[i] << " ";
	}
	return 0;
}*/