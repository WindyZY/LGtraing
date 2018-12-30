#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	double tem[10010];
	for (int i = 0; i < N; i++)
	{
		cin >> tem[i];
	}
	int counter[10010];
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (tem[j] < tem[i])
			{
				counter[i] = j - i;
				i = j;
			}
		}
	}
	int t = counter[0];
	for (int i = 0; i < N; i++)
	{
		if (counter[i] > t)
			t = counter[i];
	}
	cout << t;
	return 0;
}