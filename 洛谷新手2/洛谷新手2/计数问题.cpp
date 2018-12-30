/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int x;
	cin >> n >> x;
	int counter = 0;
	for (int i = 1; i <= n; i++)
	{
		int t = i;
		while (t)
		{
			if (t % 10 == x)
				counter++;
			t /= 10;
		}
	}
	cout << counter;
	return 0;
}*/