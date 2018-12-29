/*#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int h[7];
	int d = 1;
	for (int i = 0; i < 7; i++)
	{
		cin >> a >> b;
		h[i] = a + b;
	}
	for (int i = 0; i < 7; i++)
	{
		if (h[i] > h[0])
		{
			int t = h[0];
			h[0] = h[i];
			h[i] = t;
			d = i + 1;
		}
	}
	if (h[0] <= 8)
		cout << "0";
	else
		cout << d;
	return 0;
}*/