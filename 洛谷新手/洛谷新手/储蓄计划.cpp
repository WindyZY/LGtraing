/*#include<iostream>
using namespace std;
int main()
{
	int budget[12];
	int surplus[12];
	for (int i = 0; i < 12; i++)
	{
		cin >> budget[i];
		surplus[i] = 300 - budget[i];
	}
	int counter = 0;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (surplus[i] >= 100)
			{
				surplus[i] -= 100;
				counter++;
			}
		}
		surplus[i + 1] += surplus[i];
	}
	for (int i = 0; i < 12; i++)
	{
		if (surplus[i] < 0)
		{
			cout << "-" << i + 1;
			break;
		}
	}
	if (surplus[0] >= 0 && surplus[1] >= 0 && surplus[2] >= 0 && surplus[3] >= 0 &&
		surplus[4] >= 0 && surplus[5] >= 0 && surplus[6] >= 0 && surplus[7] >= 0 &&
		surplus[8] >= 0 && surplus[9] >= 0 && surplus[10] >= 0 && surplus[11] >= 0)
		cout << counter*1.2;
	return 0;
}*/