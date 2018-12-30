/*#include<iostream>

#include<algorithm>

using namespace std;

int main()
{
	int a[105], n, b[105] = { 0 };
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i<n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			for (int k = j + 1; k<n; k++)
			{
				if (a[i] + a[j] == a[k])
				{
					b[k] = 1;
				}
			}
		}
	}
	for (int i = 0; i<n; i++)
		b[0] += b[i];
	cout << b[0];
	return 0;
}*/