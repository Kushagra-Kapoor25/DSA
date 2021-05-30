#include<bits/stdc++.h>
using namespace std;
bool isEven(int x)
{
	if (x % 2 == 0)
		return true;
	else
		return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		int rounds = 0;
		int a, b;
		int diff = x - y;
		if (diff == 0)
			rounds = 0;
		else if (diff > 0)
		{
			if (isEven(diff))
				rounds = 1;
			else
				rounds = 2;
		}
		else
		{
			if (isEven(diff) && diff % 4 != 0)
				rounds = 2;
			else if (isEven(diff) && diff % 4 == 0)
				rounds = 3;
			else
				rounds = 1;
		}
		cout << rounds << endl;
	}
	return 0;
}
