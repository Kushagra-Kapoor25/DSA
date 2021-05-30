#include<bits/stdc++.h>
using namespace std;
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
		long a, b;
		cin >> a >> b;
		long even_noA, odd_noA;
		long even_noB, odd_noB;
		if (a % 2 == 0)
		{
			even_noA = a / 2;
			odd_noA = a / 2;
		}
		else
		{
			even_noA = a / 2;
			odd_noA = even_noA + 1;
		}

		if (b % 2 == 0)
		{
			even_noB = b / 2;
			odd_noB = b / 2;
		}
		else
		{
			even_noB = b / 2;
			odd_noB = even_noB + 1;
		}
		long total_evenNumber = even_noA * even_noB + odd_noA * odd_noB;
		cout << total_evenNumber << endl;
	}
	return 0;
}