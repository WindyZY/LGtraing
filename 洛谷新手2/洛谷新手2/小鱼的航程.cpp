/*#include<iostream>
using namespace std;
int main()
{
	long int n;
	int x;
	cin >> x >> n;
	if (x < 1 || x>7)
		cout << "Wrong!";
	long int s = 0;
	int d = 5 - x + 1;
	if (d > 0)
	{
		s = 250 * d;
		n -= (d + 2);
	}
	else
		n -= (d + 2);
	
	for (int i = 1;; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (n > 0)
			{
				s += 250;
				n--;
			}
		}
		n -= 2;
		if (n <= 0)
			break;
	}
	cout << s;
	return 0;
}*/