/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int pencil[3];
	int price[3];
	int money[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> pencil[i] >> price[i];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j*pencil[i] >= n)
			{
				money[i] = j*price[i];
				break;
			}
		}
	}
	int t = money[0];
	for (int i = 1; i < 3; i++)
	{
		if (money[i] < t)
			t = money[i];
	}
	cout << t;
	system("pause");
	return 0;
}*/