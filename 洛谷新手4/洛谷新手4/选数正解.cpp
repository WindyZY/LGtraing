#include<iostream>
#include<cmath>
using namespace std;
int a[21], n, k, total, sum;
bool b[21];
bool prime(int x)
{
	if (x == 0 || x == 1)return false;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)return false;
	}
	return true;
}
void search(int i, int m)
{
	for (int j = m; j <= n; j++)
	{
		if (b[j])
		{
			sum += a[j];
			b[j] = false;
			if (i == k&&prime(sum))total++;
			else search(i + 1, j + 1);
			sum -= a[j];
			b[j] = true;
		}
	}
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++) { cin >> a[i]; b[i] = true; }
	search(1, 1);
	cout << total;
	return 0;
}