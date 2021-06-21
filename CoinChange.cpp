#include <bits/stdc++.h>
using namespace std;
int getCount(int coins[], int n, int num)
{
	if (sum == 0)
		return 1;
	if (n == 0)
		return 0;
	int res = getCount(coins, n - 1, sum);
	if (coins[n - 1] <= sum)
		res  = res + getCount(coins, n, sum - coins[n - 1]);
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	return 0;
}