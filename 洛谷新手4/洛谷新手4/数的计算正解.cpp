/*#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	int f[1005];
	memset(f, 0, sizeof(f));
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i / 2; j++)
			f[i] = f[i] + f[j];
		f[i] = f[i] + 1;
	}
	cout << f[n];
	return 0;
}*/