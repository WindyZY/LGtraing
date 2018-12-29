/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = n - 150;
	int b = n - 400;
	if (a <= 0)
		cout << setiosflags(ios::fixed) << setprecision(1) << n*0.4463;
	if (a > 0 && b <= 0)
		cout << setiosflags(ios::fixed) << setprecision(1) << 150 * 0.4463 + a*0.4663;
	if (a > 0 && b > 0)
		cout << setiosflags(ios::fixed) << setprecision(1) << 150 * 0.4463 + 250 * 0.4663 + b*0.5663;
	system("pause");
	return 0;
}*/