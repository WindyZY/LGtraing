/*#include<iostream>
using namespace std;
int main()
{
	int L, M;
	cin >> L >> M;
	int counter;
	int start[110], end[110], tree[10010];
	for (int i = 0; i < M; i++)
	{
		cin >> start[i] >> end[i];
	}
	for (int i = 0; i <= L; i++)
		tree[i] = 1;
	for (int i = 0; i < M; i++)
	{
		for (int j = start[i]; j <= end[i]; j++)
		{
			if (tree[j])
				tree[j] = 0;
		}
	}
	for (int i = 0; i <= L; i++)
	{
		if (tree[i])
			counter++;
	}
	cout << counter;
	return 0;
}*/