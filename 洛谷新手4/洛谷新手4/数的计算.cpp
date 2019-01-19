/*#include<iostream>
using namespace std;
//fun(m)=fun(m/2)+fun(m/2-1)+...+fun(1)

int fun(int m)
{
	int ans = 0;
	if (m == 0)
		ans = 1;
	else
	{
		
		for (int i = 0; i <= m / 2; i++)
		{
			ans += fun(i);
		}
	}
	return ans;
}


int main()
{
	int n;
	cin >> n;
	if (n > 1000)
	{
		cout << "Overflow";
		return 0;
	}
	else
		cout << fun(n);
	system("pause");
	return 0;
}*/

//貌似时间超限了