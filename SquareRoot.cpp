#include<bits/stdc++.h>
using namespace std;
int squareRoot(int x)
{
	if (x == 0 || x == 1)
		return x;
	int start = 1, end = x, ans = -1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (mid * mid == x)
			return mid;
		else if (mid * mid < x)
		{
			start = mid + 1;
			ans = mid;
		}
		else
			end = mid - 1;
	}
	return int(floor(ans));
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x;
	cin >> x;
	cout << squareRoot(x);
	return 0;
}